/// @defgroup CaptureCommands Capture Commands
/// @{

/// @param pDesignName char const *
void SetDesignDumpFile(char const * pDesignName);

/// @param x double
/// @param y double
void Paste(double x, double y);

/// @param x double
/// @param y double
/// @param boolvalue3 char const *
void SelectObject(double x, double y, char const * boolvalue3);

/// @param x double
/// @param y double
void UnSelectObject(double x, double y);

void UnSelectAll();

/// @param x1 double
/// @param x2 double
/// @param y1 double
/// @param y2 double
/// @param boolvalue5 char const *
void SelectBlock(double x1, double x2, double y1, double y2, char const * boolvalue5);

void SelectAll();

/// @param value char const *
/// @param boolvalue2 char const *
void FindParts(char const * value, char const * boolvalue2);

/// @param value char const *
/// @param boolvalue2 char const *
void FindNets(char const * value, char const * boolvalue2);

/// @param value char const *
/// @param boolvalue2 char const *
void FindOffPageConnectors(char const * value, char const * boolvalue2);

/// @param value char const *
/// @param boolvalue2 char const *
void FindHierarchicalPorts(char const * value, char const * boolvalue2);

/// @param value char const *
/// @param boolvalue2 char const *
void FindBookMarks(char const * value, char const * boolvalue2);

/// @param value char const *
/// @param boolvalue2 char const *
void FindDRCMarks(char const * value, char const * boolvalue2);

/// @param value char const *
/// @param boolvalue2 char const *
void FindText(char const * value, char const * boolvalue2);

void Cut();

void Copy();

void Delete();

/// @param x double
/// @param y double
/// @param boolvalue3 char const *
void Move(double x, double y, char const * boolvalue3);

/// @param x double
/// @param y double
void Duplicate(double x, double y);

/// @param x double
/// @param y double
/// @param boolvalue3 char const *
void Drag(double x, double y, char const * boolvalue3);

void Rotate();

void MirrorVertical();

void MirrorHorizontal();

/// @param nColorId int
void SetColor(int nColorId);

/// @param nLineStyleId int
void SetLineStyle(int nLineStyleId);

/// @param nLineWidthId int
void SetLineWidth(int nLineWidthId);

/// @param nFillStyleId int
void SetFillStyle(int nFillStyleId);

/// @param nFillStyleId int
void SetHatchStyle(int nFillStyleId);

/// @param Facename char const *
/// @param nHeight double
/// @param boolvalue3 char const *
/// @param boolvalue4 char const *
void SetFont(char const * Facename, double nHeight, char const * boolvalue3, char const * boolvalue4);

/// @param Facename char const *
/// @param nHeight double
/// @param nWidth double
/// @param nEscapement double
/// @param nOrientation double
/// @param boolvalue6 char const *
/// @param boolvalue7 char const *
/// @param boolvalue8 char const *
/// @param boolvalue9 char const *
/// @param nCharSet int
/// @param nOutPrecision int
/// @param nClipPrecision int
/// @param nQuality int
/// @param nPitchAndFamily int
void SetFontEx(char const * Facename, double nHeight, double nWidth, double nEscapement, double nOrientation, char const * boolvalue6, char const * boolvalue7, char const * boolvalue8, char const * boolvalue9, int nCharSet, int nOutPrecision, int nClipPrecision, int nQuality, int nPitchAndFamily);

void Group();

void Ungroup();

/// @param x double
/// @param y double
/// @param libName char const *
/// @param pkgName char const *
/// @param device char const *
/// @param boolvalue6 char const *
void PlacePart(double x, double y, char const * libName, char const * pkgName, char const * device, char const * boolvalue6);

/// @param x double
/// @param y double
void PlacePartWithDialog(double x, double y);

/// @param libName char const *
/// @param pkgName char const *
/// @param partName char const *
/// @param device char const *
void ReplacePart(char const * libName, char const * pkgName, char const * partName, char const * device);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceWire(double x1, double y1, double x2, double y2);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceBus(double x1, double y1, double x2, double y2);

/// @param x double
/// @param y double
/// @param boolvalue3 char const *
void PlaceBusEntry(double x, double y, char const * boolvalue3);

/// @param x double
/// @param y double
void PlaceJunction(double x, double y);

/// @param x double
/// @param y double
/// @param netAlias char const *
void PlaceNetAlias(double x, double y, char const * netAlias);

/// @param x double
/// @param y double
void PlaceNetAliasWithDialog(double x, double y);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param PowerName char const *
void PlacePower(double x, double y, char const * libName, char const * symbolName, char const * PowerName);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param OffPageName char const *
/// @param NetgroupOwnerName char const *
void PlaceNetgroupPower(double x, double y, char const * libName, char const * symbolName, char const * OffPageName, char const * NetgroupOwnerName);

/// @param x double
/// @param y double
void PlacePowerWithDialog(double x, double y);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param GroundName char const *
void PlaceGround(double x, double y, char const * libName, char const * symbolName, char const * GroundName);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param OffPageName char const *
/// @param NetgroupOwnerName char const *
void PlaceNetgroupGround(double x, double y, char const * libName, char const * symbolName, char const * OffPageName, char const * NetgroupOwnerName);

/// @param x double
/// @param y double
void PlaceGroundWithDialog(double x, double y);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param PortName char const *
void PlacePort(double x, double y, char const * libName, char const * symbolName, char const * PortName);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param OffPageName char const *
/// @param NetgroupOwnerName char const *
void PlaceNetgroupPort(double x, double y, char const * libName, char const * symbolName, char const * OffPageName, char const * NetgroupOwnerName);

/// @param x double
/// @param y double
void PlacePortWithDialog(double x, double y);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param OffPageName char const *
void PlaceOffPage(double x, double y, char const * libName, char const * symbolName, char const * OffPageName);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param OffPageName char const *
/// @param NetgroupOwnerName char const *
void PlaceNetgroupOffPage(double x, double y, char const * libName, char const * symbolName, char const * OffPageName, char const * NetgroupOwnerName);

/// @param x double
/// @param y double
void PlaceOffPageWithDialog(double x, double y);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
/// @param libName char const *
/// @param viewName char const *
/// @param instName char const *
/// @param primitiveType char const *
void PlaceBlock(double x1, double y1, double x2, double y2, char const * libName, char const * viewName, char const * instName, char const * primitiveType);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceBlockWithDialog(double x1, double y1, double x2, double y2);

/// @param x double
/// @param y double
/// @param pinName char const *
/// @param pinType char const *
/// @param boolvalue5 char const *
void PlacePin(double x, double y, char const * pinName, char const * pinType, char const * boolvalue5);

/// @param x double
/// @param y double
void PlacePinWithDialog(double x, double y);

/// @param x double
/// @param y double
void PlaceNoConnect(double x, double y);

/// @param x double
/// @param y double
/// @param libName char const *
/// @param symbolName char const *
/// @param titleblockName char const *
void PlaceTitleBlock(double x, double y, char const * libName, char const * symbolName, char const * titleblockName);

/// @param x double
/// @param y double
void PlaceTitleBlockWithDialog(double x, double y);

/// @param x double
/// @param y double
/// @param markName char const *
void PlaceBookMark(double x, double y, char const * markName);

/// @param x double
/// @param y double
void PlaceBookMarkWithDialog(double x, double y);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
/// @param commentText char const *
void PlaceText(double x1, double y1, double x2, double y2, char const * commentText);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceTextWithDialog(double x1, double y1, double x2, double y2);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceLine(double x1, double y1, double x2, double y2);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceRectangle(double x1, double y1, double x2, double y2);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceEllipse(double x1, double y1, double x2, double y2);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
/// @param x3 double
/// @param y3 double
/// @param x4 double
/// @param y4 double
void PlaceArc(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlacePolyline(double x1, double y1, double x2, double y2);

/// @param x double
/// @param y double
void PlaceNextPolylinePoint(double x, double y);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlaceBezier(double x1, double y1, double x2, double y2);

/// @param x double
/// @param y double
void PlaceNextBezierPoint(double x, double y);

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void PlacePolygon(double x1, double y1, double x2, double y2);

/// @param x double
/// @param y double
void PlaceNextPolygonPoint(double x, double y);

/// @param x double
/// @param y double
/// @param fileName char const *
void PlacePicture(double x, double y, char const * fileName);

void EndPlace();

/// @param boolvalue1 char const *
void ViewPalette(char const * boolvalue1);

/// @param boolvalue1 char const *
void ViewToolbar(char const * boolvalue1);

/// @param boolvalue1 char const *
void ViewStatusBar(char const * boolvalue1);

/// @param boolvalue1 char const *
void ViewGrid(char const * boolvalue1);

/// @param boolvalue1 char const *
void ViewGridReference(char const * boolvalue1);

/// @param x double
/// @param y double
void GoToRelative(double x, double y);

/// @param x double
/// @param y double
void GoToAbsolute(double x, double y);

/// @param x char const *
/// @param y char const *
void GoToGridReference(char const * x, char const * y);

/// @param markName char const *
void GoToBookMark(char const * markName);

void ZoomIn();

void ZoomOut();

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
void ZoomArea(double x1, double y1, double x2, double y2);

void ZoomAll();

void ZoomSelection();

/// @param nscale int
void ZoomScale(int nscale);

/// @param propName char const *
/// @param propValue char const *
void SetProperty(char const * propName, char const * propValue);

/// @param propName char const *
/// @param propValue char const *
void SetOccProperty(char const * propName, char const * propValue);

/// @param propName char const *
void GetProperty(char const * propName);

/// @param propName char const *
void GetOccProperty(char const * propName);

void PrintGrid();

/// @param DisplayName char const *
/// @param DisplayValue int
void SetDisplayType(char const * DisplayName, int DisplayValue);

/// @param propName char const *
/// @param Facename char const *
/// @param nHeight int
/// @param boolvalue4 char const *
/// @param boolvalue5 char const *
/// @param ncolorId int
/// @param nrotation int
void DisplayProperty(char const * propName, char const * Facename, int nHeight, char const * boolvalue4, char const * boolvalue5, int ncolorId, int nrotation);

/// @param propName char const *
/// @param Facename char const *
/// @param nHeight int
/// @param nWidth int
/// @param nEscapement int
/// @param nOrientation int
/// @param boolvalue7 char const *
/// @param boolvalue8 char const *
/// @param boolvalue9 char const *
/// @param boolvalue10 char const *
/// @param nCharSet int
/// @param nOutPrecision int
/// @param nClipPrecision int
/// @param nQuality int
/// @param nPitchAndFamily int
/// @param ncolorId int
/// @param nrotation int
void DisplayPropertyEx(char const * propName, char const * Facename, int nHeight, int nWidth, int nEscapement, int nOrientation, char const * boolvalue7, char const * boolvalue8, char const * boolvalue9, char const * boolvalue10, int nCharSet, int nOutPrecision, int nClipPrecision, int nQuality, int nPitchAndFamily, int ncolorId, int nrotation);

/// @param propName char const *
void RemoveProperty(char const * propName);

/// @param propName char const *
void RemoveOccProperty(char const * propName);

/// @param propName char const *
void RemoveDisplayProperty(char const * propName);

/// @param tabName char const *
void SwitchTab(char const * tabName);

/// @param PathName char const *
/// @param PropName char const *
/// @param Propvalue char const *
void AddProperty(char const * PathName, char const * PropName, char const * Propvalue);

/// @param PropName char const *
/// @param PathName char const *
void DeleteProperty(char const * PropName, char const * PathName);

/// @param PathName char const *
/// @param Property char const *
/// @param Value char const *
/// @param occ int
void ModifyProperty(char const * PathName, char const * Property, char const * Value, int occ);

void ShowSpreadsheet();

/// @param value char const *
/// @param boolvalue2 char const *
void FindPins(char const * value, char const * boolvalue2);

/// @return Tcl_Obj
Tcl_Obj GetSelectedObjects();

void PlaceNetgroup();

/// @param NetgroupName char *
void ViewNetgroup(char * NetgroupName);

/// @param NetGroupName char const *
/// @param NetgroupMemberName char const *
/// @param memberType char const *
void AddMemberToNetgroup(char const * NetGroupName, char const * NetgroupMemberName, char const * memberType);

/// @param NetgroupName char *
void DeleteNetgroup(char * NetgroupName);

/// @param NetgroupName char *
/// @param NetgroupMemberToBeDeleted char *
void DeleteNetgroupMember(char * NetgroupName, char * NetgroupMemberToBeDeleted);

/// @param NetgroupName char *
/// @param NetgroupMemberToBeRenamed char *
/// @param NewMemberName char *
void RenameNetgroupMember(char * NetgroupName, char * NetgroupMemberToBeRenamed, char * NewMemberName);

void DumpStatusBar();

/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
/// @param sinstName char const *
/// @param NetgroupOwner char const *
void PlaceNetgroupBlock(double x1, double y1, double x2, double y2, char const * sinstName, char const * NetgroupOwner);

void ShowAllNetgroups();

/// @return char
char GetActiveOpjName();

/// @return char
char GetProductVersion();

/// @return char
char GetToolName();

/// @return char
char GetLicenseString();

/// @param objType enum COrFindFilterDlg::QueryModeT
void capFindActivateWindow(enum COrFindFilterDlg::QueryModeT objType);

/// @param objType enum COrFindFilterDlg::QueryModeT
/// @param pBaseObj DboBaseObject *
void capFindAddItem(enum COrFindFilterDlg::QueryModeT objType, DboBaseObject * pBaseObj);

/// @param objType enum COrFindFilterDlg::QueryModeT
void capFindSetHeader(enum COrFindFilterDlg::QueryModeT objType);

/// @param objType enum COrFindFilterDlg::QueryModeT
/// @param strFindWhat CString const &
/// @return Tcl_Obj
Tcl_Obj CapFindObjects(enum COrFindFilterDlg::QueryModeT objType, CString const & strFindWhat);

/// @param optionName char const *
/// @return bool
bool capFindGetFindOption(char const * optionName);

/// @param optionName char const *
/// @param bOptionValue bool
void capFindSetFindOption(char const * optionName, bool bOptionValue);

void capFindSaveInCSV();

/// @param x double
/// @param y double
void capMoveMouseAndClick(double x, double y);

/// @return int
int IsDocModified();

/// @param value int
void PlacePartToolTip(int value);

/// @param fileName char const *
void DumpSpreadsheet(char const * fileName);

void CloseProject();

/// @param pValue char const *
void SelectPMItem(char const * pValue);

/// @param pPath char const *
void Open(char const * pPath);

/// @return COrCapturePMDoc
COrCapturePMDoc GetActivePM();

/// @return Tcl_Obj
Tcl_Obj GetSelectedPMItems();

void NDesign();

/// @param pSchName char const *
void NSchematic(char const * pSchName);

void GetPMItemName();

void GetPMItemType();

/// @param pStartPtX int
/// @param pStartPtY int
/// @param pEndPtX int
/// @param pEndPtY int
/// @param pId CString
/// @param pAttributeMarkType int
void CapPdfAddMarkStart(int pStartPtX, int pStartPtY, int pEndPtX, int pEndPtY, CString pId, int pAttributeMarkType);

/// @param pName char const *
/// @param pValue char const *
void CapPdfAddMarkData(char const * pName, char const * pValue);

void CapPdfAddMarkEnd();

/// @param lOutDir char const *
/// @param lOutFileName char const *
void CapPdfPrint(char const * lOutDir, char const * lOutFileName);

/// @param lOptionName char const *
/// @param lOptionValue char const *
void CapPdfSetOption(char const * lOptionName, char const * lOptionValue);

/// @param lOptionName char const *
/// @return char
char CapPdfGetOption(char const * lOptionName);

/// @param schName char const *
/// @param pageName char const *
void NPage(char const * schName, char const * pageName);

/// @param location char const *
void DumpPage(char const * location);

void ClearTempPackage();

/// @param value int
void SetNetPropertySearch(int value);

/// @return DboDesign
DboDesign GetActivePMDesign();

void SyncNetgroupData();

/// @param filename char const *
void LoadNetgroupUserData(char const * filename);

/// @return DboInstOccurrence
DboInstOccurrence GetInstanceOccurrence();

/// @return DboPage
DboPage GetActivePage();

void BringToFront();

void BringForward();

void SendToBack();

void SendBackward();

/// @return char
char GetLastMouseClickPointOnPage();

/// @return CView
CView GetActiveView();

/// @param pOptionName char const *
/// @param pOptionValue long
void SetFPViewerOption(char const * pOptionName, long pOptionValue);

/// @param szPropName char const *
/// @return bool
bool GetOptionBool(char const * szPropName);

/// @param szPropName char const *
/// @return unsigned int
unsigned int GetOptionUInt(char const * szPropName);

/// @param szPropName char const *
/// @param dValue double
/// @return char
char SetOptionUInt(char const * szPropName, double dValue);

void ClearSessionLog();

/// @param location char const *
void DumpSessionLog(char const * location);

void Exit();

/// @param value int
void ShowDialog(int value);

/// @return bool
bool IsSchematicViewActive();

/// @param pTclObj Tcl_Obj *
void CapCommHandleRemoteRequest(Tcl_Obj * pTclObj);

/// @return char
char GetDesignDumpFile();

/// @param fileName char const *
void TclScript(char const * fileName);

/// @param pMenuStr char const *
void AddMenu(char const * pMenuStr);

/// @param pMenuStr1 char const *
/// @param pMenuStr2 char const *
/// @return char
char TclSendKeys(char const * pMenuStr1, char const * pMenuStr2);

/// @param lChildWindowHandle int
void SetAppWindowAsParent(int lChildWindowHandle);

/// @param lArg long
void GetParent(long lArg);

/// @param pTitle char const *
/// @param pDefVal char const *
/// @return char
char AskUserInput(char const * pTitle, char const * pDefVal);

/// @param pEnvKey char const *
/// @return char
char GetEnv(char const * pEnvKey);

/// @param pEnvKey char const *
/// @param pEnvVal char const *
void SetEnv(char const * pEnvKey, char const * pEnvVal);

/// @param pPropName char const *
/// @param pPropValue char const *
void SetOptionString(char const * pPropName, char const * pPropValue);

/// @param pPropName char const *
/// @return char
char GetOptionString(char const * pPropName);

/// @return char
char GetIniPath();

/// @return char
char GetMACAddresses();

/// @param pUrl char const *
/// @param pTitle char const *
/// @return bool
bool OpenURL(char const * pUrl, char const * pTitle);

void OpenStartPage();

void RefreshStartPage();

/// @param strDrcName char const *
/// @param bIsExecute bool
/// @param strOnOKProc char const *
/// @param vecOptionalProp std::vector< std::string > &
/// @return bool
bool CapCustomDRCElectricalAddItem(char const * strDrcName, bool bIsExecute, char const * strOnOKProc, std::vector< std::string > & vecOptionalProp);

/// @param strDrcName char const *
/// @param bIsExecute bool
/// @param strOnOKProc char const *
/// @param vecOptionalProp std::vector< std::string > &
/// @return bool
bool CapCustomDRCPhysicalAddItem(char const * strDrcName, bool bIsExecute, char const * strOnOKProc, std::vector< std::string > & vecOptionalProp);

/// @return Tcl_Obj
Tcl_Obj capOnCustomDRCElectrical();

/// @return Tcl_Obj
Tcl_Obj capOnCustomDRCPhysical();

/// @param btype OrTclAdvancedDrc::Type
/// @return Tcl_Obj
Tcl_Obj capGetDRCList(OrTclAdvancedDrc::Type btype);

/// @return DboERCSymbol
DboERCSymbol capGetDRCErrorSymbol();

/// @param bType bool
/// @return CString
CString GetDRCErrorMessage(bool bType);

/// @return bool
bool EnableAllButCurrentWindowCloseMenu();

/// @return bool
bool EnableAllWindowCloseMenu();

/// @return CDocument
CDocument capGetActiveDocument();

void capCloseChildViewsExceptCurrent();

class InstWithOcc
{
public:
};

/// @param lVendorName char const *
/// @param lMenuName char const *
/// @param proc char const *
/// @param key char const *
/// @return bool
bool AddAccessoryMenu(char const * lVendorName, char const * lMenuName, char const * proc, char const * key=None);

/// @param lVendorName char const *
/// @param lMenuName char const *
/// @param proc char const *
/// @return bool
bool AddAccessoryMenu(char const * lVendorName, char const * lMenuName, char const * proc);

/// @param pLibName char const *
/// @param pName char const *
/// @param pDeviceIndex int
/// @return int
int PlaceNew(char const * pLibName, char const * pName, int pDeviceIndex=0);

/// @param pLibName char const *
/// @param pName char const *
/// @return int
int PlaceNew(char const * pLibName, char const * pName);

/// @param dbid double
/// @param update char *
/// @param probe char *
void SelectObjectById(double dbid, char * update=None, char * probe=None);

/// @param dbid double
/// @param update char *
void SelectObjectById(double dbid, char * update=None);

/// @param dbid double
void SelectObjectById(double dbid);

/// @param strDestDir char const *
/// @param strDestProjectName char const *
/// @param bLibFiles int
/// @param bOutputFiles int
/// @param bRefProjects int
/// @param bIncludeTestBench int
void capSaveCompleteProject(char const * strDestDir, char const * strDestProjectName=None, int bLibFiles=0, int bOutputFiles=1, int bRefProjects=1, int bIncludeTestBench=1);

/// @param strDestDir char const *
/// @param strDestProjectName char const *
/// @param bLibFiles int
/// @param bOutputFiles int
/// @param bRefProjects int
void capSaveCompleteProject(char const * strDestDir, char const * strDestProjectName=None, int bLibFiles=0, int bOutputFiles=1, int bRefProjects=1);

/// @param strDestDir char const *
/// @param strDestProjectName char const *
/// @param bLibFiles int
/// @param bOutputFiles int
void capSaveCompleteProject(char const * strDestDir, char const * strDestProjectName=None, int bLibFiles=0, int bOutputFiles=1);

/// @param strDestDir char const *
/// @param strDestProjectName char const *
/// @param bLibFiles int
void capSaveCompleteProject(char const * strDestDir, char const * strDestProjectName=None, int bLibFiles=0);

/// @param strDestDir char const *
/// @param strDestProjectName char const *
void capSaveCompleteProject(char const * strDestDir, char const * strDestProjectName=None);

/// @param strDestDir char const *
void capSaveCompleteProject(char const * strDestDir);

void capBatchAnnotate();

/// @param nScope int
/// @param nUpdateType int
/// @param cstrCombinedProperty char const *
/// @param additionalCombinedProperty char const *
/// @param bStartAtOne int
/// @param bDoNotChangePageNumber int
/// @param bChangeInstances int
/// @param bIncludeNonPrimitive int
/// @param bPreserveDesignator int
/// @param bPreserveUserEdits int
/// @param bAnnInstExtDsgn int
void capBatchAnnotate(int nScope, int nUpdateType, char const * cstrCombinedProperty, char const * additionalCombinedProperty, int bStartAtOne, int bDoNotChangePageNumber, int bChangeInstances, int bIncludeNonPrimitive, int bPreserveDesignator, int bPreserveUserEdits, int bAnnInstExtDsgn);

/// @param pSchName char const *
/// @param pPageName char const *
/// @param pOccName char const *
void OPage(char const * pSchName, char const * pPageName, char const * pOccName="");

/// @param pSchName char const *
/// @param pPageName char const *
void OPage(char const * pSchName, char const * pPageName);

/// @param userInput char const *
void GetPageNumber(char const * userInput="");

void GetPageNumber();

/// @param lFilePath char const *
/// @param lFileType int
void AddFileToOutputFolder(char const * lFilePath, int lFileType=-1);

/// @param lFilePath char const *
void AddFileToOutputFolder(char const * lFilePath);

/// @param testBenchName char const *
void CreateTestBench(char const * testBenchName="");

void CreateTestBench();

/// @param SetUniqueBundleNaming int
void SetUniqeNetgroupNaming(int SetUniqueBundleNaming=0);

void SetUniqeNetgroupNaming();

/// @param szPropName char const *
/// @param szPropValue char const *
/// @return char
char SetOptionBool(char const * szPropName="", char const * szPropValue="");

/// @param szPropName char const *
/// @return char
char SetOptionBool(char const * szPropName="");

/// @return char
char SetOptionBool();

/// @param lParameters char const *
/// @return int
int help(char const * lParameters="");

/// @return int
int help();

/// @param strAppName char const *
/// @param strArgument char const *
/// @return char
char Shell(char const * strAppName, char const * strArgument="");

/// @param strAppName char const *
/// @return char
char Shell(char const * strAppName);

/// @param pSrcDesign char const *
/// @param pDstDesign char const *
/// @param lOccMode int
/// @param ECO_MODE int
void svsDiffDesigns(char const * pSrcDesign, char const * pDstDesign, int lOccMode=0, int ECO_MODE=0);

/// @param pSrcDesign char const *
/// @param pDstDesign char const *
/// @param lOccMode int
void svsDiffDesigns(char const * pSrcDesign, char const * pDstDesign, int lOccMode=0);

/// @param pSrcDesign char const *
/// @param pDstDesign char const *
void svsDiffDesigns(char const * pSrcDesign, char const * pDstDesign);

/// @param message char const *
/// @param caption char const *
/// @param type int
/// @return char
char capDisplayMessageBox(char const * message, char const * caption, int type=MB_OK);

/// @param message char const *
/// @param caption char const *
/// @return char
char capDisplayMessageBox(char const * message, char const * caption);

/// @param aLibraryName char const *
/// @param aPackageName char const *
/// @param aDeviceDesignator char const *
/// @param aIsConvert int
/// @param aProp Tcl_Obj *
/// @param aValue Tcl_Obj *
void PlacePartEx(char const * aLibraryName, char const * aPackageName, char const * aDeviceDesignator, int aIsConvert, Tcl_Obj * aProp=None, Tcl_Obj * aValue=None);

/// @param aLibraryName char const *
/// @param aPackageName char const *
/// @param aDeviceDesignator char const *
/// @param aIsConvert int
/// @param aProp Tcl_Obj *
void PlacePartEx(char const * aLibraryName, char const * aPackageName, char const * aDeviceDesignator, int aIsConvert, Tcl_Obj * aProp=None);

/// @param aLibraryName char const *
/// @param aPackageName char const *
/// @param aDeviceDesignator char const *
/// @param aIsConvert int
void PlacePartEx(char const * aLibraryName, char const * aPackageName, char const * aDeviceDesignator, int aIsConvert);

/// @param pExclude CDocument *
void capCloseChildViews(CDocument * pExclude=None);

void capCloseChildViews();

class COrFindFilterDlg
{
public:
};

class COrCapPMIter
{
public:
/// @return DboBaseObject
DboBaseObject Next();

/// @return int
int GetCount();

/// @return COrCapturePMDoc
COrCapturePMDoc GetDocument();

};

class COrPMSchematicIter
	: public COrCapPMIter
{
public:
/// @return DboBaseObject
DboBaseObject Next();

/// @param ppSchematicOcc DboInstOccurrencePtrProxy *
/// @return DboSchematic
DboSchematic NextSchematic(DboInstOccurrencePtrProxy * ppSchematicOcc=None);

/// @return DboSchematic
DboSchematic NextSchematic();

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @param bTreatPhysically int
/// @return COrPMSchematicIter
COrPMSchematicIter sNewPMSchematicIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType, int bTreatPhysically);

};

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @param bTreatPhysically int
/// @return COrPMSchematicIter
COrPMSchematicIter COrPMSchematicIter_sNewPMSchematicIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType, int bTreatPhysically);

class COrPMPageIter
	: public COrCapPMIter
{
public:
/// @param bSort int
void SetSort(int bSort);

/// @return DboBaseObject
DboBaseObject Next();

/// @param ppSchematicOcc DboInstOccurrencePtrProxy *
/// @return DboPage
DboPage NextPage(DboInstOccurrencePtrProxy * ppSchematicOcc=None);

/// @return DboPage
DboPage NextPage();

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @param bTreatPhysically int
/// @return COrPMPageIter
COrPMPageIter sNewPMPageIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType, int bTreatPhysically);

};

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @param bTreatPhysically int
/// @return COrPMPageIter
COrPMPageIter COrPMPageIter_sNewPMPageIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType, int bTreatPhysically);

class COrPMInstanceIter
	: public COrCapPMIter
{
public:
/// @return DboBaseObject
DboBaseObject Next();

/// @return DboPartInst
DboPartInst NextInstance();

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @param bTreatPhysically int
/// @return COrPMInstanceIter
COrPMInstanceIter sNewPMInstanceIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType, int bTreatPhysically);

};

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @param bTreatPhysically int
/// @return COrPMInstanceIter
COrPMInstanceIter COrPMInstanceIter_sNewPMInstanceIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType, int bTreatPhysically);

class COrPMOccurrenceIter
	: public COrCapPMIter
{
public:
/// @return DboBaseObject
DboBaseObject Next();

/// @return DboInstOccurrence
DboInstOccurrence NextOccurrence();

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @return COrPMOccurrenceIter
COrPMOccurrenceIter sNewPMOccurenceIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType);

};

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @return COrPMOccurrenceIter
COrPMOccurrenceIter COrPMOccurrenceIter_sNewPMOccurenceIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType);

class COrPMLibPackageIter
	: public COrCapPMIter
{
public:
/// @return int
int GetCount();

/// @return DboBaseObject
DboBaseObject Next();

/// @return DboPackage
DboPackage NextPackage();

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @return COrPMLibPackageIter
COrPMLibPackageIter sNewPMLibPackageIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType);

};

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @return COrPMLibPackageIter
COrPMLibPackageIter COrPMLibPackageIter_sNewPMLibPackageIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType);

class COrPMLibSymbolIter
	: public COrCapPMIter
{
public:
/// @return int
int GetCount();

/// @return DboBaseObject
DboBaseObject Next();

/// @return DboSymbol
DboSymbol NextSymbol();

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @return COrPMLibSymbolIter
COrPMLibSymbolIter sNewPMLibSymbolIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType);

};

/// @param pDoc COrCapturePMDoc *
/// @param stType enum COrCapPMIter::SelectionTypeT
/// @return COrPMLibSymbolIter
COrPMLibSymbolIter COrPMLibSymbolIter_sNewPMLibSymbolIter(COrCapturePMDoc * pDoc, enum COrCapPMIter::SelectionTypeT stType);


/// @}
