import argparse
import os
import re


def txt_to_func_def(ofile, defs, params):
    _defs = re.search(r"^(\w+)\s*\(([^\(\)]*|[^=]*=?.*)\)\s*:?\s*(.*)", " ".join(defs))
    _funcName = _defs.group(1)
    _params = _defs.group(2)
    _ret = _defs.group(3)
    # ofile.write(f"/// @brief {_funcName}\n")
    if (params):
        _params = _params.replace(" ", "").split(",")
        for param in params:
            param = re.search(r"^(\w+)\s*:\s*(.*)", param)
            p = param.group(1)
            t = param.group(2)
            ofile.write(f"/// @param {p} {t}\n")
            _params = [x.replace(p, f"{t} {p}") if x.split("=")[0].strip() == p else x for x in _params]
        _params = ", ".join(_params)
    if (_ret):
        _ret = _ret.replace("returns", "").strip()
        ofile.write(f"/// @return {_ret}\n")
    else:
        _ret = "void"
    ofile.write(f"{_ret} {_funcName}({_params});\n\n")
    pass


def txt_to_class_start(ofile, name):
    _defs = re.search(r"(\w+)\(?(\w*)\)?", name)
    _cname = _defs.group(1)
    _cbase = _defs.group(2)
    ofile.write(f"class {_cname}\n")
    if (_cbase):
        ofile.write(f"\t: public {_cbase}\n")
    ofile.write("{\npublic:\n")
    pass


def txt_to_class_end(ofile, name):
    ofile.write("};\n\n")
    pass


def txt_to_c_header_file(input, output):
    funcDefs = []
    funcParams = []
    className = ""
    with open(output, "w") as ofile:
        modDesc = os.path.splitext(os.path.basename(input))[0]
        modName = modDesc.replace(" ", "")
        ofile.write(f"/// @defgroup {modName} {modDesc}\n")
        ofile.write("/// @{\n\n")
        with open(input, "r") as ifile:
            for line in ifile:
                line = line.strip()
                if (not line):
                    continue
                if (line.startswith("START class")):
                    if (funcDefs):
                        txt_to_func_def(ofile, funcDefs, funcParams)
                    funcDefs = []
                    funcParams = []
                    className = line.replace("START class", "").strip()
                    txt_to_class_start(ofile, className)
                elif (line.startswith("END class")):  # check class name is matched ... TBD
                    if (funcDefs):
                        txt_to_func_def(ofile, funcDefs, funcParams)
                    funcDefs = []
                    funcParams = []
                    txt_to_class_end(ofile, className)
                    className = ""
                elif (line.startswith("Parameters:") or line.startswith("Class :")):
                    funcParams = []
                elif (re.match(r"^\w+\s*:\s*\S+", line)):
                    funcParams.append(line)
                else:
                    if (re.match(r"^\w+\s*\(\s*\S+", line)):
                        if (funcDefs):
                            txt_to_func_def(ofile, funcDefs, funcParams)
                        funcDefs = [line]
                        funcParams = []
                    else:
                        funcDefs.append(line)
            if (funcDefs):
                txt_to_func_def(ofile, funcDefs, funcParams)
        ofile.write("\n/// @}\n")
    pass


if (__name__ == "__main__"):
    argParser = argparse.ArgumentParser()
    argParser.add_argument("-i", "--input", help="Input text file")
    argParser.add_argument("-o", "--output", help="Output C header file")
    args = argParser.parse_args()
    if (args.input is None or args.output is None):
        # txt_to_c_header_file(r'D:\PersonalData\WORKING\CaptureTclScriptsDoc\src\doxygen\test.txt',
        #                      r'D:\PersonalData\WORKING\CaptureTclScriptsDoc\src\doxygen\test.h')
        txt_to_c_header_file(r'..\..\doc\Capture Commands.txt', r'include\capture_commands.h')
        txt_to_c_header_file(r'..\..\doc\CIS Commands.txt', r'include\cis_commands.h')
        txt_to_c_header_file(r'..\..\doc\Database Commands.txt', r'include\database_commands.h')
    else:
        txt_to_c_header_file(args.input, args.output)
