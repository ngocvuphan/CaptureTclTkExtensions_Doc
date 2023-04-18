/// @defgroup CISCommands CIS Commands
/// @{

class QUIntArray
{
public:
/// @param element UINT const &
/// @param NoRepeats int
void Add(UINT const & element, int NoRepeats=0);

/// @param element UINT const &
void Add(UINT const & element);

/// @param Order int
void Sort(int Order=1);

void Sort();

/// @param fElm UINT
/// @return int
int Find(UINT fElm);

/// @return INT_PTR
INT_PTR GetSize();

/// @return INT_PTR
INT_PTR GetCount();

/// @return int
int IsEmpty();

/// @return INT_PTR
INT_PTR GetUpperBound();

/// @param nIndex INT_PTR
/// @return UINT
UINT GetAt(INT_PTR nIndex);

/// @param nIndex INT_PTR
/// @return UINT
UINT ElementAt(INT_PTR nIndex);

};

class QPropertyArray
{
public:
/// @param Name CString const &
/// @param Value CString const &
/// @return int
int Set(CString const & Name, CString const & Value="");

/// @param Name CString const &
/// @return int
int Set(CString const & Name);

/// @param Index int
/// @param Value CString const &
/// @return int
int Set(int Index, CString const & Value);

/// @param Name CString const &
void Remove(CString const & Name);

void RemoveAll();

void ClearAll();

/// @param Name CString const &
/// @return int
int NameExists(CString const & Name);

/// @param Name CString const &
/// @return CString
CString GetValue(CString const & Name);

/// @param Index int const
/// @return CString
CString GetValue(int const Index);

/// @param Index int const
/// @return CString
CString GetName(int const Index);

/// @param PropNames CStringArray &
void GetNames(CStringArray & PropNames);

/// @param PropValues CStringArray &
void GetValues(CStringArray & PropValues);

/// @return int
int GetSize();

/// @param pFile CFile *
void Save(CFile * pFile);

/// @param pFile CFile *
void Read(CFile * pFile);

/// @param PropNames CStringArray &
/// @param ValueIndices CStringArray &
void GetNamesToValueIndicesMap(CStringArray & PropNames, CStringArray & ValueIndices);

};

class CPartProp
	: public QPropertyArray
{
public:
void Clear();

void RemoveAll();

/// @param PropName CString const &
/// @param PropValue CString const &
/// @param PropType int
void AddProp(CString const & PropName, CString const & PropValue, int PropType=NO_TYPE);

/// @param PropName CString const &
/// @param PropValue CString const &
void AddProp(CString const & PropName, CString const & PropValue);

/// @param DfltProps enum CPartProp::PropTypeT
/// @param CaseSensitive int
void Set(enum CPartProp::PropTypeT DfltProps=NO_PROPS, int CaseSensitive=0);

/// @param DfltProps enum CPartProp::PropTypeT
void Set(enum CPartProp::PropTypeT DfltProps=NO_PROPS);

void Set();

/// @param PropArray QPropertyArray const &
/// @param pTypes CWordArray const *
void Set(QPropertyArray const & PropArray, CWordArray const * pTypes=None);

/// @param PropArray QPropertyArray const &
void Set(QPropertyArray const & PropArray);

/// @param PropName CString const &
/// @param PropValue CString const &
/// @param PropType int
void Set(CString const & PropName, CString const & PropValue, int PropType=NO_TYPE);

/// @param PropName CString const &
/// @param PropValue CString const &
void Set(CString const & PropName, CString const & PropValue);

/// @param Index int
/// @return int
int GetPropType(int Index);

/// @param Name CString const &
/// @return int
int GetPropType(CString const & Name);

/// @return CStringArray
CStringArray GetPropNames();

/// @return CStringArray
CStringArray GetPropContents();

/// @param PropName CString const &
/// @return CString
CString GetPropContents(CString const & PropName);

/// @param pProp char const *
/// @return int
int IsMember(char const * pProp);

/// @param Prop char const *
/// @param pPropArray CStringArray const *
/// @return int
int IsMember(char const * Prop, CStringArray const * pPropArray);

/// @param PartNumber CString const &
void SetPartNumberFieldName(CString const & PartNumber);

/// @return CString
CString GetPartNumberFieldName();

};

class CVariant
{
public:
/// @param GrpName CString
/// @param SubGrpName CString
/// @param Part UINT
/// @return int
int IsPartPresent(CString GrpName, CString SubGrpName, UINT Part);

/// @return CAmbiguousParts
CAmbiguousParts GetAmbiguousPartsContainer();

/// @param GroupName CString &
/// @return int
int IsGroupHasSubGroups(CString & GroupName);

/// @return int
int GetGroupCount();

/// @param arg0 CStringArray &
void GetAllGroups(CStringArray & arg0);

/// @param GroupName CString &
/// @return int
int IsGroupPressent(CString & GroupName);

/// @param GroupName CString &
/// @return int
int AddGroup(CString & GroupName);

/// @param GroupName CString &
/// @return int
int RemoveGroup(CString & GroupName);

/// @param OldGroupName CString
/// @param NewGroupName CString
/// @return int
int ReNameGroup(CString OldGroupName, CString NewGroupName);

/// @param GroupName CString &
/// @param arg1 CGroup *
/// @return int
int GetGroup(CString & GroupName, CGroup * arg1);

/// @param GroupName CString &
/// @param Array CStringArray &
/// @return int
int AddSubGroup(CString & GroupName, CStringArray & Array);

/// @param GroupName CString &
/// @param OutArray CStringArray &
/// @return int
int GetAllSubGroup(CString & GroupName, CStringArray & OutArray);

/// @param GroupName CString &
/// @param delsubgrp CString
/// @return int
int DeleteSubGroup(CString & GroupName, CString delsubgrp);

/// @param GroupName CString
/// @param OldSubGroupName CString
/// @param NewSubGroupName CString
/// @return int
int ReNameSubGroup(CString GroupName, CString OldSubGroupName, CString NewSubGroupName);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param Parts CUIntArray &
/// @return int
int AddPartsToSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & Parts);

/// @param GroupName CString &
/// @param arg1 CUIntArray &
/// @return int
int AddPartsToGroup(CString & GroupName, CUIntArray & arg1);

/// @param GroupName CString
/// @param mapParts IntegerMapT &
void GetPartsFromGroup(CString GroupName, IntegerMapT & mapParts);

/// @param GroupName CString &
/// @param Parts CUIntArray &
/// @return int
int GetPartsFromGroup(CString & GroupName, CUIntArray & Parts);

/// @param GroupName CString
/// @param SubGroupName CString
/// @param mapParts IntegerMapT &
void GetPartsFromSubGroup(CString GroupName, CString SubGroupName, IntegerMapT & mapParts);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param arg2 CUIntArray &
/// @return int
int GetPartsFromSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & arg2);

/// @param Inex int
/// @return CString
CString GetGroupByIndex(int Inex);

/// @param GroupName CString &
/// @param Index int
/// @return CString
CString GetSubGroupByIndex(CString & GroupName, int Index);

/// @param GroupName CString &
/// @return int
int GetSubGroupCount(CString & GroupName);

/// @return CString
CString GetGroupStream();

/// @param GroupName CString &
/// @param Data CString &
/// @return int
int GetPartStream_Group(CString & GroupName, CString & Data);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param Data CString &
/// @return int
int GetPartStream_SubGroup(CString & GroupName, CString & SubGroupName, CString & Data);

/// @param GroupName CString &
/// @param UpdatedPatrs CString &
/// @return int
int GetUpdatedPartsInfo_Grp(CString & GroupName, CString & UpdatedPatrs);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param UpdatedPatrs CString &
/// @return int
int GetUpdatedPartsInfo_SGrp(CString & GroupName, CString & SubGroupName, CString & UpdatedPatrs);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param OldPartId CString &
/// @param UpdatedPatrs CStringArray &
/// @return int
int LoadUpdatedPartInfo_SubGroup(CString & GroupName, CString & SubGroupName, CString & OldPartId, CStringArray & UpdatedPatrs);

/// @param GroupName CString &
/// @param OldPartId CString &
/// @param UpdatedPatrs CStringArray &
/// @return int
int LoadUpdatedPartInfo_Group(CString & GroupName, CString & OldPartId, CStringArray & UpdatedPatrs);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param OldPartId CString &
/// @param UpdatedPatrs CStringArray &
/// @return int
int GetUpdatedPartsInfo_SubGroup(CString & GroupName, CString & SubGroupName, CString & OldPartId, CStringArray & UpdatedPatrs);

/// @param GroupName CString &
/// @param OldPartId CString &
/// @param UpdatedPatrs CStringArray &
/// @return int
int GetUpdatedPartsInfo_Group(CString & GroupName, CString & OldPartId, CStringArray & UpdatedPatrs);

/// @param GroupStream CString &
/// @return int
int SetGroupsHeader(CString & GroupStream);

/// @param GroupName CString &
/// @param Data CString &
/// @return int
int SetGroupDataStream(CString & GroupName, CString & Data);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param GroupPartStream CString &
/// @return int
int SetSubGroupDataStream(CString & GroupName, CString & SubGroupName, CString & GroupPartStream);

/// @param GroupName CString &
/// @param Data CString &
/// @return int
int SetUpdatedGroupData(CString & GroupName, CString & Data);

/// @param GroupName CString &
/// @param SubGpName CString &
/// @param Data CString &
/// @return int
int SetUpdatedSubGpData(CString & GroupName, CString & SubGpName, CString & Data);

/// @param GroupName CString
/// @param SubGroupName CString
/// @return int
int SubGroupHasUpdatedParts(CString GroupName, CString SubGroupName);

/// @param GroupName CString
/// @return int
int GroupHasUpdatedParts(CString GroupName);

/// @param GroupName CString &
/// @param SubGpName CString &
/// @param Data CString &
/// @return int
int GetUpdatedSubGpData(CString & GroupName, CString & SubGpName, CString & Data);

/// @param GroupName CString &
/// @param Data CString &
/// @return int
int GetUpdatedGpData(CString & GroupName, CString & Data);

/// @param GroupName CString &
/// @param Parts CUIntArray &
/// @param Flag int
/// @return int
int SetGroupPartsAsStuffed(CString & GroupName, CUIntArray & Parts, int Flag);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param Parts CUIntArray &
/// @param Flag int
/// @return int
int SetSubGroupPartsAsStuffed(CString & GroupName, CString & SubGroupName, CUIntArray & Parts, int Flag);

/// @param GroupName CString &
/// @param Parts CUIntArray &
/// @param Stuffed int
/// @return int
int GetStuffedPartsGroup(CString & GroupName, CUIntArray & Parts, int Stuffed);

/// @param Groupname CString &
/// @param SubGroupName CString &
/// @param Parts CUIntArray &
/// @param Stuffed int
/// @return int
int GetStuffedPartsSubGroup(CString & Groupname, CString & SubGroupName, CUIntArray & Parts, int Stuffed);

/// @return int
int Cleanup();

/// @param GroupName CString &
/// @param Part UINT &
/// @return int
int IsPartStuffedGroup(CString & GroupName, UINT & Part);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param Part UINT &
/// @return int
int IsPartStuffedSubGroup(CString & GroupName, CString & SubGroupName, UINT & Part);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param DelParts CUIntArray &
/// @return int
int DeletePartsFromSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & DelParts);

/// @param SubGroupName CString &
/// @param DelParts CUIntArray &
/// @return int
int DeletePartsFromGroup(CString & SubGroupName, CUIntArray & DelParts);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param PartArray CUIntArray &
/// @param Data CStringArray &
/// @param bflag int
/// @return int
int AddUpdatedPartSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & PartArray, CStringArray & Data, int bflag=1);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param PartArray CUIntArray &
/// @param Data CStringArray &
/// @return int
int AddUpdatedPartSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & PartArray, CStringArray & Data);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @return int
int IsSubGroupHasUpdatedPart(CString & GroupName, CString & SubGroupName);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param PartArray CUIntArray &
/// @param Data CStringArray &
/// @return int
int GetUpdatedPartSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & PartArray, CStringArray & Data);

/// @param l_strGroupName CString &
/// @param l_strSubGroupName CString &
/// @param l_strData CString &
/// @return int
int GetUpdatedPartSubGroup(CString & l_strGroupName, CString & l_strSubGroupName, CString & l_strData);

/// @param GroupName CString &
/// @param PartArray CUIntArray &
/// @param Data CStringArray &
/// @param bflag int
/// @return int
int AddUpdatedPartGroup(CString & GroupName, CUIntArray & PartArray, CStringArray & Data, int bflag=1);

/// @param GroupName CString &
/// @param PartArray CUIntArray &
/// @param Data CStringArray &
/// @return int
int AddUpdatedPartGroup(CString & GroupName, CUIntArray & PartArray, CStringArray & Data);

/// @param GroupName CString &
/// @return int
int IsGroupHasUpdatedPart(CString & GroupName);

/// @param GroupName CString &
/// @param PartArray CUIntArray &
/// @param Data CStringArray &
/// @return int
int GetUpdatedPartGroup(CString & GroupName, CUIntArray & PartArray, CStringArray & Data);

/// @param l_strGroupName CString &
/// @param l_strData CString &
/// @return int
int GetUpdatedPartGroup(CString & l_strGroupName, CString & l_strData);

/// @param l_strGroupName CString &
/// @return int
int GetCountOfUpdatedPartsGroup(CString & l_strGroupName);

/// @param l_strGroupName CString &
/// @param l_strSubGroupName CString &
/// @return int
int GetCountOfUpdatedPartsSubGroup(CString & l_strGroupName, CString & l_strSubGroupName);

/// @param GroupName CString &
/// @param PartStream CString &
/// @return int
int LoadUpdatedPatrsGroup(CString & GroupName, CString & PartStream);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param PartStream CString &
/// @return int
int LoadUpdatedPatrsSubGroup(CString & GroupName, CString & SubGroupName, CString & PartStream);

/// @param Stream CString &
/// @return int
int HasUpdatedParts(CString & Stream);

/// @param PartId CUIntArray &
/// @return int
int DeletePartFromAllVariants(CUIntArray & PartId);

/// @param mapParts IntegerMapT &
/// @return int
int GetPartsFromAllVariants(IntegerMapT & mapParts);

/// @param Parts QUIntArray &
/// @return int
int GetPartsFromAllVariants(QUIntArray & Parts);

/// @param GroupName CString &
/// @param Parts CUIntArray &
/// @return int
int DeletUpDatedPartsFromGroup(CString & GroupName, CUIntArray & Parts);

/// @param GroupName CString &
/// @param SubGroupName CString &
/// @param Parts CUIntArray &
/// @return int
int DeletUpDatedPartsFromSubGroup(CString & GroupName, CString & SubGroupName, CUIntArray & Parts);

/// @param OldGrpName CString &
/// @param NewGrpName CString &
/// @return int
int CreateNewGroupAs(CString & OldGrpName, CString & NewGrpName);

/// @param GrpName CString &
/// @param OldSubGrpName CString &
/// @param NewSubGrpName CString &
/// @param ReName int
/// @return int
int CreateNewSubGroupAs(CString & GrpName, CString & OldSubGrpName, CString & NewSubGrpName, int ReName);

/// @param GrpName CString &
/// @param Part UINT &
/// @return int
int IsPartPresentInGroup(CString & GrpName, UINT & Part);

/// @param GrpName CString &
/// @param SubGrpName CString &
/// @param Part UINT &
/// @return int
int IsPartPresentInSubGroup(CString & GrpName, CString & SubGrpName, UINT & Part);

/// @param Array CUIntArray &
/// @param Element UINT
/// @return int
int sFindInUIntArray2(CUIntArray & Array, UINT Element);

};

/// @param Array CUIntArray &
/// @param Element UINT
/// @return int
int CVariant_sFindInUIntArray2(CUIntArray & Array, UINT Element);

class CNewBOm
{
public:
/// @param BomGroupName CString &
/// @return int
int DeleteGroup(CString & BomGroupName);

/// @param OldBomGroupName CString &
/// @param NewBomGroupName CString &
/// @return int
int RenameGroup(CString & OldBomGroupName, CString & NewBomGroupName);

/// @param BomGroupName CString &
/// @return int
int AddGroup(CString & BomGroupName);

/// @param OutGroupName CSStringArray &
/// @return int
int GetBomVariants(CSStringArray & OutGroupName);

/// @param BomName CString &
/// @param OutSubGroupName CStringArray &
/// @return int
int GetBomGroups(CString & BomName, CStringArray & OutSubGroupName);

/// @param VariantName CString &
/// @param GroupName CString &
/// @return int
int AddGroupToBomVariant(CString & VariantName, CString & GroupName);

/// @param GroupName CString &
/// @return int
int IsGroupInBom(CString & GroupName);

/// @param Current CString &
/// @param Parent CString &
/// @param NewGroupName CString &
/// @return int
int RenameInBom(CString & Current, CString & Parent, CString & NewGroupName);

/// @param Current CString &
/// @param Parent CString &
/// @return int
int DeleteInBom(CString & Current, CString & Parent);

void Close();

/// @param BomName CString &
/// @param GroupName CString &
/// @return int
int DeleteGroupInBom(CString & BomName, CString & GroupName);

/// @param GroupName CString &
/// @param BomVariants CStringArray &
/// @return int
int GetAvailBomVariantForGroup(CString & GroupName, CStringArray & BomVariants);

/// @param BomName CString &
/// @param PartArray CUIntArray &
/// @return int
int AddPartsToBom(CString & BomName, CUIntArray & PartArray);

/// @param BomName CString &
/// @param PartArray CUIntArray &
/// @return int
int GetPartsFromBom(CString & BomName, CUIntArray & PartArray);

/// @param Array QUIntArray &
/// @return int
int GetAllParts(QUIntArray & Array);

/// @param Array QUIntArray &
/// @return int
int DeleteParts(QUIntArray & Array);

/// @param HeaderInfo CString &
/// @return int
int GetBomHeaderInfo(CString & HeaderInfo);

/// @return int
int GetBomCount();

/// @param index int
/// @param BomName CString &
/// @param BomData CString &
/// @return int
int GetBomData(int index, CString & BomName, CString & BomData);

/// @param Data CString &
/// @return int
int GetBomPartData(CString & Data);

/// @param HeaderInfo CString &
/// @return int
int SetBomHeaderInfo(CString & HeaderInfo);

/// @param Data CString &
/// @return int
int SetBomData(CString & Data);

/// @param Data CString &
/// @return int
int SetBomPartData(CString & Data);

/// @param BomName CString &
/// @param NewName CString
/// @return int
int CloneBomVariant(CString & BomName, CString NewName);

/// @param index int
/// @param GroupName CString &
/// @return int
int GetBomName(int index, CString & GroupName);

/// @param GroupName CString
/// @param BomNames CStringArray &
/// @return int
int GetBomName(CString GroupName, CStringArray & BomNames);

/// @param PartArray CUIntArray &
/// @return int
int SetArray(CUIntArray & PartArray);

/// @param PartArray CUIntArray &
/// @return int
int GetArray(CUIntArray & PartArray);

/// @param BomName CString &
/// @param Array CSStringArray &
/// @return int
int AddPtrForBom(CString & BomName, CSStringArray & Array);

/// @param BomName CString &
/// @param Array CSStringArray &
/// @return int
int GetPtrFromBom(CString & BomName, CSStringArray & Array);

/// @return int
int CleanBomPtr();

/// @param BomName CString &
/// @param Array CPtrArray &
/// @return int
int AddPtrForBom1(CString & BomName, CPtrArray & Array);

/// @param BomName CString &
/// @param Array CPtrArray &
/// @return int
int GetPtrFromBom1(CString & BomName, CPtrArray & Array);

/// @return int
int CleanBomPtr1();

/// @param BomName CString &
/// @param GroupName CString &
/// @param PartArray CUIntArray &
/// @param Ambig int
void SetPartAmbig(CString & BomName, CString & GroupName, CUIntArray & PartArray, int Ambig);

/// @param BomName CString &
void ClearAmbig(CString & BomName);

/// @param BomName CString &
/// @param GroupName CString &
/// @param id int
/// @return int
int IsPartAmbig(CString & BomName, CString & GroupName, int id);

/// @param BomName CString &
/// @return int
int IsAmbigResolved(CString & BomName);

/// @param BomName CString &
/// @param flag int
void SetAmbigResolved(CString & BomName, int flag=1);

/// @param BomName CString &
void SetAmbigResolved(CString & BomName);

};

class CISBase
{
public:
void Delete();

void UnDelete();

/// @return int
int IsDeleted();

/// @return int
int GetCaptureObjectId();

/// @param pOwner CISBase *
void SetOwner(CISBase * pOwner);

/// @return CISBase
CISBase GetOwner();

/// @param MarkDesign int
void MarkModified(int MarkDesign=1);

void MarkModified();

/// @param pParent CISBase *
void SetParent(CISBase * pParent);

/// @return CISBase
CISBase GetParent();

/// @param PartProps CPartProp &
/// @param CheckForActiveVariant int
/// @return int
int GetPartProps(CPartProp & PartProps, int CheckForActiveVariant=1);

/// @param PartProps CPartProp &
/// @return int
int GetPartProps(CPartProp & PartProps);

/// @param PropName CString const &
/// @return CString
CString GetCoreDesignProp(CString const & PropName);

/// @param PropName CString const
/// @return DboDisplayProp
DboDisplayProp GetDisplayProp(CString const PropName);

/// @param propName CString const &
/// @return int
int MakePropInvisible(CString const & propName);

/// @param pDisplayPropToClone DboDisplayProp *
/// @param NewPosition CPoint &
/// @return int
int CloneDisplayPropPosition(DboDisplayProp * pDisplayPropToClone, CPoint & NewPosition);

/// @param pDisplayPropToClone DboDisplayProp *
/// @param PropName CString const &
/// @param pNewDisplayProp DboDisplayProp *
/// @return int
int CloneDisplayProp(DboDisplayProp * pDisplayPropToClone, CString const & PropName, DboDisplayProp * pNewDisplayProp);

/// @param propName CString const &
/// @return int
int MakePropVisible(CString const & propName);

/// @param PropName CString const &
/// @return int
int DeleteUserProp(CString const & PropName);

/// @param OldPropName CString const &
/// @param NewPropName CString const &
/// @return int
int RenameUserProp(CString const & OldPropName, CString const & NewPropName);

/// @param PropName CString const &
/// @param PropContents CString const &
/// @param CreatePropIfNotPresent int
/// @param CheckForActiveVariant int
void SetProp(CString const & PropName, CString const & PropContents, int CreatePropIfNotPresent=1, int CheckForActiveVariant=1);

/// @param PropName CString const &
/// @param PropContents CString const &
/// @param CreatePropIfNotPresent int
void SetProp(CString const & PropName, CString const & PropContents, int CreatePropIfNotPresent=1);

/// @param PropName CString const &
/// @param PropContents CString const &
void SetProp(CString const & PropName, CString const & PropContents);

/// @param PropName CString const &
/// @param PropContents CString const &
void SetPropEx(CString const & PropName, CString const & PropContents);

/// @param PropName CString const &
/// @return int
int UserPropExists(CString const & PropName);

/// @param PropName CString const &
/// @return int
int IsDbProp(CString const & PropName);

/// @param propName CString const &
/// @return int
int PropEmpty(CString const & propName);

/// @return CString
CString GetPartValue();

/// @param PropName CString const &
/// @return int
int PropExists(CString const & PropName);

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @param PropName CString const &
/// @return int
int DbPropExists(CString const & PropName);

/// @param PropName CString const &
/// @return int
int PropExistsOnObject(CString const & PropName);

};

class CBOMODBCDataCacheItem
{
public:
};

class CISDesignDataCacheScope
{
public:
/// @param pDboInstOcc DboInstOccurrence *
/// @return CISInstOccurrence
CISInstOccurrence GetCISInstOccurrenceCopy(DboInstOccurrence * pDboInstOcc);

/// @param pDboInstOcc DboInstOccurrence *
/// @param pCISInstOcc CISInstOccurrence *
/// @return CISInstOccurrence
CISInstOccurrence SetCISInstOccurrenceCopy(DboInstOccurrence * pDboInstOcc, CISInstOccurrence * pCISInstOcc);

/// @param pDesignIds CUIntArray &
/// @return bool
bool GetDesignIds(CUIntArray & pDesignIds);

/// @param pDesignId unsigned long
void AddDesignId(unsigned long pDesignId);

void SetDesignIdsFilled();

/// @param aPf PFN_DeleteDBCacheItem
void SetDeleteDbCacheFun(PFN_DeleteDBCacheItem aPf);

/// @param key CString const &
/// @return CBOMODBCDataCacheItem
CBOMODBCDataCacheItem GetDbCacheItem(CString const & key);

/// @param key CString const &
/// @param aCacheItem CBOMODBCDataCacheItem *
void SetDbCacheItem(CString const & key, CBOMODBCDataCacheItem * aCacheItem);

/// @return int
int sGetEnableCache();

};

/// @return int
int CISDesignDataCacheScope_sGetEnableCache();

class CISDesign
	: public CISBase
{
public:
/// @param pDboInstOccurrence DboInstOccurrence *
/// @param partinst DboPartInst *
/// @param pDesign DboDesign *
/// @return int
int IsDeletedOccurrence(DboInstOccurrence * pDboInstOccurrence, DboPartInst * partinst, DboDesign * pDesign);

/// @param pDesign DboDesign *
void SetDesign(DboDesign * pDesign);

/// @return int
int GetVariantCount();

/// @param variantName CString const &
void SetActiveVariant(CString const & variantName);

/// @param variantName CString &
void GetActiveVariant(CString & variantName);

/// @param arg0 CString const &
void SetParentName(CString const & arg0);

/// @param arg0 CString &
void GetParentName(CString & arg0);

/// @param arg0 CString const &
void SetActiveBomVariantName(CString const & arg0);

/// @param arg0 CString &
void GetActiveBomVariantName(CString & arg0);

/// @param variantNames CStringArray &
void NGetActiveVariants(CStringArray & variantNames);

/// @param variantNames CStringArray const &
void NSetActiveVariants(CStringArray const & variantNames);

/// @param DesignIds CUIntArray &
void GetDesignIds(CUIntArray & DesignIds);

/// @param ID UINT
/// @return CISInstOccurrence
CISInstOccurrence GetPartOccForID(UINT ID);

/// @param BomName CString
/// @param m_AmbiPartIds CMapStringToPtr &
void GetAmbiIds(CString BomName, CMapStringToPtr & m_AmbiPartIds);

/// @param szrgBomName CStringArray &
void LoadAmbiguousPartsMap(CStringArray & szrgBomName);

/// @param m_AmbiguousPartsMap CMapStringToPtr &
/// @param m_designpartsarray CUIntArray &
/// @param CurrentItem CString
/// @param bflag int
void LoadAmbiguousPartsMap(CMapStringToPtr & m_AmbiguousPartsMap, CUIntArray & m_designpartsarray, CString CurrentItem, int bflag=1);

/// @param m_AmbiguousPartsMap CMapStringToPtr &
/// @param m_designpartsarray CUIntArray &
/// @param CurrentItem CString
void LoadAmbiguousPartsMap(CMapStringToPtr & m_AmbiguousPartsMap, CUIntArray & m_designpartsarray, CString CurrentItem);

/// @param Array CUIntArray const &
/// @param ElementToFind UINT
/// @return int
int FindInt(CUIntArray const & Array, UINT ElementToFind);

/// @param FirstArray CUIntArray &
/// @param SecondArray CUIntArray &
/// @param l_OutputArray CUIntArray &
void CompareArray(CUIntArray & FirstArray, CUIntArray & SecondArray, CUIntArray & l_OutputArray);

/// @param keyToBeDeleted CString
void CleanAmbiIds(CString keyToBeDeleted="");

void CleanAmbiIds();

void DeleteRemovedParts();

/// @return DboDesign
DboDesign GetDesign();

/// @param DesignName CString &
void GetDesignName(CString & DesignName);

/// @return DboState
DboState Read();

/// @param pLibStorage IStorage *
/// @return DboState
DboState InitDesign(IStorage * pLibStorage);

/// @return DboState
DboState Save();

/// @param Mod int
void SetModified(int Mod);

/// @param Mod int
/// @return int
int IsModified(int Mod);

/// @param VariantNames CSStringArray &
/// @param bVariantMode int
void GetVariantNames(CSStringArray & VariantNames, int bVariantMode=0);

/// @param VariantNames CSStringArray &
void GetVariantNames(CSStringArray & VariantNames);

/// @param NewVariantNames CSStringArray const &
void AddVariant(CSStringArray const & NewVariantNames);

/// @param VariantNames CSStringArray const &
void DeleteVariant(CSStringArray const & VariantNames);

/// @param OldVariantNames CSStringArray const &
/// @param NewVariantNames CSStringArray const &
void RenameVariant(CSStringArray const & OldVariantNames, CSStringArray const & NewVariantNames);

/// @param MarkDesign int
void MarkModified(int MarkDesign=1);

void MarkModified();

/// @param pCISPartInst CISVariantPartOBJ *
/// @param PropertyName CString const &
/// @param PropertyValue CString const &
void SetProperty(CISVariantPartOBJ * pCISPartInst, CString const & PropertyName, CString const & PropertyValue);

/// @param pCISPartInst CISVariantPartOBJ *
/// @return CISSchematic
CISSchematic AddToDesignHeierarchy(CISVariantPartOBJ * pCISPartInst);

/// @param pDboSchematic DboSchematic *
void RemoveCISSchematic(DboSchematic * pDboSchematic);

/// @param pDboSchematic DboSchematic *
/// @return CISSchematic
CISSchematic AddCISSchematic(DboSchematic * pDboSchematic);

/// @param pDboSchematic DboSchematic *
/// @return CISSchematic
CISSchematic GetCISSchematic(DboSchematic * pDboSchematic);

void UpdateHeierarchy();

/// @param PageId UINT
/// @param bWysiwygVariant int
/// @return int
int ApplyActiveVariantPropsToCaptureParts(UINT PageId=0, int bWysiwygVariant=0);

/// @param PageId UINT
/// @return int
int ApplyActiveVariantPropsToCaptureParts(UINT PageId=0);

/// @return int
int ApplyActiveVariantPropsToCaptureParts();

/// @param PageId UINT
/// @param bWysiwygVariant int
void RestoreCaptureProps(UINT PageId=0, int bWysiwygVariant=0);

/// @param PageId UINT
void RestoreCaptureProps(UINT PageId=0);

void RestoreCaptureProps();

/// @param VariantNameString CString &
void GetTitleBlockPropertyVale(CString & VariantNameString);

void DesignEdit();

/// @param OldName CString const &
/// @param NewName CString const &
void RenameScheamtic(CString const & OldName, CString const & NewName);

/// @param OldName CString const &
/// @param NewName CString const &
void RenameScheamticPage(CString const & OldName, CString const & NewName);

/// @param pageinfo UINT
void PageEdit(UINT pageinfo);

void UpdateCache();

void EditAllPages();

/// @param index int &
/// @return CISSchematic
CISSchematic GetSchematic(int & index);

/// @param pOcc DboInstOccurrence *
/// @return CISInstOccurrence
CISInstOccurrence GetInstOccurrence(DboInstOccurrence * pOcc);

/// @param CoreDesign CString &
void GetCoreDesignString(CString & CoreDesign);

/// @param NotStuffedString CString const &
void SetNotStuffedString(CString const & NotStuffedString);

/// @param PartNumberName CString const &
void SetPartNumberPropertyName(CString const & PartNumberName);

/// @return UINT
UINT GetBOMFilesCount();

/// @param FilesCount UINT
void SetBOMFilesCount(UINT FilesCount);

/// @return UINT
UINT GetVRTFilesCount();

/// @param FilesCount UINT
void SetVRTFilesCount(UINT FilesCount);

/// @return int
int IsComplexDesign();

/// @param OCCCount int
void AddPart(int OCCCount);

/// @param OCCCount int
void DeletePart(int OCCCount);

/// @param OldCCCount int
/// @param NewOCCCount int
void UpdatePart(int OldCCCount, int NewOCCCount);

/// @return int
int HasOccurrenceCountChanged();

/// @param OCCCountChanged int
void SetOccurrenceCountChanged(int OCCCountChanged);

/// @return int
int HasHierarchicalBlcoks();

/// @param b int
void SetHierarchicalBlcoks(int b);

/// @return int
int HasHierarchicalBlocksChanged();

void HierarchicalBlocksChanged();

void HierarchicalBlocksEdits();

/// @return int
int HasPartRefChanged();

/// @param PartRefChanged int
void SetPartRefChanged(int PartRefChanged);

void ResetPartListFlags();

void ProcessDirtyDesign();

void ResetDirtyFlags();

/// @return int
int RebuildList();

/// @param Rebuild int
void SetRebuildFlag(int Rebuild);

void SetPartEdits();

/// @param bFlag int
void SetLinkDataBaseFlag(int bFlag);

/// @return int
int GetLinkDataBaseFlag();

/// @param bSchFlag int
void SetSchematicModified(int bSchFlag);

/// @return int
int IsSchematicModified();

/// @return int
int IsDesignOld();

/// @param l_bDesign int
void SetOldDesignUpdated(int l_bDesign);

/// @return int
int IsPartManagerActive();

/// @param l_bActive int
void SetPartManagerActive(int l_bActive);

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @return CVariant
CVariant GetGroupsContainer();

/// @return CNewBOm
CNewBOm GetBOMVariantContainer();

/// @param value int
/// @return int
int SetForceSkipProcessDirtyDesign(int value);

/// @param SrcArray CUIntArray &
void GetCommonParts(CUIntArray & SrcArray);

/// @return int
int IsDesignModified();

/// @return CISDesignDataCacheScope
CISDesignDataCacheScope GetDataCacheScope();

/// @param DateString CString &
void GetDatefromRegionalSettings(CString & DateString);

/// @return CString
CString GetSelectedVariant();

/// @param variantName CString &
void SetSelectedVariant(CString & variantName);

/// @param Prop CString &
/// @return CString
CString GetTitleBlockValue(CString & Prop);

void InitTitleBlockInfo();

/// @param TitleBlockArray CStringArray &
void GetDisplayedTitleBlockProp(CStringArray & TitleBlockArray);

/// @param ID long
/// @param CisPartIDArray CUIntArray &
void GetCisInstOccrIds(long ID, CUIntArray & CisPartIDArray);

void SetPageEdit();

/// @param pOcc DboInstOccurrence *
/// @return CISInstOccurrence
CISInstOccurrence GetCISOccurrence(DboInstOccurrence * pOcc);

/// @param ID long
/// @return CISPartInst
CISPartInst GetPartInstForID(long ID);

/// @return CString
CString GetPartNumberPropertyName();

void CheckForExternalDesignSchematic();

};

/// @param pDboInstOccurrence DboInstOccurrence *
/// @param partinst DboPartInst *
/// @param pDesign DboDesign *
/// @return int
int CISDesign_IsDeletedOccurrence(DboInstOccurrence * pDboInstOccurrence, DboPartInst * partinst, DboDesign * pDesign);

/// @param Array CUIntArray const &
/// @param ElementToFind UINT
/// @return int
int CISDesign_FindInt(CUIntArray const & Array, UINT ElementToFind);

/// @param NotStuffedString CString const &
void CISDesign_SetNotStuffedString(CString const & NotStuffedString);

/// @param PartNumberName CString const &
void CISDesign_SetPartNumberPropertyName(CString const & PartNumberName);

class CISSchematic
	: public CISBase
{
public:
/// @param pCISPartInst CISVariantPartOBJ *
/// @return CISPage
CISPage AddToDesignHeierarchy(CISVariantPartOBJ * pCISPartInst);

/// @param pLibStorage IStorage *
/// @return DboState
DboState Save(IStorage * pLibStorage);

/// @param pLibStorage IStorage *
/// @return DboState
DboState Read(IStorage * pLibStorage);

/// @param MarkDesign int
void MarkModified(int MarkDesign=1);

void MarkModified();

void UpdateHeierarchy();

/// @param pPartInst DboPartInst *
/// @return CISPartInst
CISPartInst GetVariantPart(DboPartInst * pPartInst);

/// @param PageId UINT
/// @return int
int ApplyActiveVariantPropsToCaptureParts(UINT PageId=0);

/// @return int
int ApplyActiveVariantPropsToCaptureParts();

/// @param PageId UINT
/// @return int
int ApplyCoreDesignPropsToCaptureParts(UINT PageId=0);

/// @return int
int ApplyCoreDesignPropsToCaptureParts();

/// @param VariantNameString CString const &
/// @param PageId UINT
/// @param bWysiwyg int
/// @return int
int ApplyTitleBlockValue(CString const & VariantNameString, UINT PageId=0, int bWysiwyg=1);

/// @param VariantNameString CString const &
/// @param PageId UINT
/// @return int
int ApplyTitleBlockValue(CString const & VariantNameString, UINT PageId=0);

/// @param VariantNameString CString const &
/// @return int
int ApplyTitleBlockValue(CString const & VariantNameString);

/// @param PageId UINT
/// @return int
int RestoreTitleBlockValue(UINT PageId=0);

/// @return int
int RestoreTitleBlockValue();

/// @param PageId UINT
/// @return int
int RestoreCaptureProps(UINT PageId=0);

/// @return int
int RestoreCaptureProps();

/// @param PageId UINT
/// @return int
int RestoreCoreDesignCaptureProps(UINT PageId=0);

/// @return int
int RestoreCoreDesignCaptureProps();

/// @param PageEditsArray CUIntArray &
void ProcessDesignEdit(CUIntArray & PageEditsArray);

/// @param pCISDesign CISDesign *
/// @param PageEditsArray CUIntArray const &
/// @param CheckAll int
void ProcessPageEdit(CISDesign * pCISDesign, CUIntArray const & PageEditsArray, int CheckAll);

/// @param PageEditsArray CUIntArray &
void RefreshPages(CUIntArray & PageEditsArray);

/// @param OldName CString const &
/// @param NewName CString const &
void RenameScheamticPage(CString const & OldName, CString const & NewName);

/// @param Name CString const &
void SetName(CString const & Name);

/// @param Name CString &
void GetName(CString & Name);

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @param index int &
/// @return CISPage
CISPage GetPage(int & index);

/// @param DboPageName CString const &
/// @return CISPage
CISPage GetPage(CString const & DboPageName);

/// @param pPartInst DboPartInst *
/// @return CISPartInst
CISPartInst GetCISPartInst(DboPartInst * pPartInst);

/// @param VariantNames CSStringArray const &
void DeleteVariant(CSStringArray const & VariantNames);

/// @param OldVariantNames CSStringArray const &
/// @param NewVariantNames CSStringArray const &
void RenameVariant(CSStringArray const & OldVariantNames, CSStringArray const & NewVariantNames);

void Delete();

/// @param TitleBlockMap CMapStringToString &
void GetDisplayedTitleBlockProps(CMapStringToString & TitleBlockMap);

/// @param nId unsigned long
/// @return CISInstOccurrence
CISInstOccurrence GetFromOccurrenceMap(unsigned long nId);

/// @param pInstOcc CISInstOccurrence *
void AddToOccurrenceMap(CISInstOccurrence * pInstOcc);

/// @param pCISInstOcc CISVariantPartOBJ *
void DetachPart(CISVariantPartOBJ * pCISInstOcc);

/// @param arg0 DboInstOccurrence *
void ReadFromExtension(DboInstOccurrence * arg0);

};

class CISPage
	: public CISBase
{
public:
/// @param MarkDesign int
void MarkModified(int MarkDesign=1);

void MarkModified();

/// @param pCISPartInst CISPartInst *
/// @return CISPartInst
CISPartInst AddPartInst(CISPartInst * pCISPartInst);

/// @param pPartInst DboPartInst *
/// @return CISPartInst
CISPartInst AddPartInst(DboPartInst * pPartInst);

/// @param pCISPartInst CISPartInst *
/// @return int
int AddToDesignHeierarchy(CISPartInst * pCISPartInst);

/// @param pFile CFile *
/// @return DboState
DboState SavePage(CFile * pFile);

/// @param pFile CFile *
/// @return DboState
DboState Read(CFile * pFile);

void UpdateHeierarchy();

/// @param pPartInst DboPartInst *
/// @return CISPartInst
CISPartInst GetVariantPart(DboPartInst * pPartInst);

/// @param pCISPart CISVariantPartOBJ *
void DetachPart(CISVariantPartOBJ * pCISPart);

/// @return int
int ApplyActiveVariantPropsToCaptureParts();

void ApplyCoreDesignPropsToCaptureParts();

/// @param VariantNameValue CString const &
/// @param bWysiwyg int
void ApplyTitleBlockValue(CString const & VariantNameValue, int bWysiwyg=1);

/// @param VariantNameValue CString const &
void ApplyTitleBlockValue(CString const & VariantNameValue);

void RestoreTitleBlockValue();

void RestoreCaptureProps();

void RestoreCoreDesignCaptureProps();

/// @param status DboState &
/// @return DboTitleBlock
DboTitleBlock GetTitleBlock(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetTitleBlockId(DboState & status);

/// @param pCISDesign CISDesign *
/// @param PageEditsArray CUIntArray const &
/// @param CheckAll int
void ProcessPageEdit(CISDesign * pCISDesign, CUIntArray const & PageEditsArray, int CheckAll);

/// @param pCISDesign CISDesign *
void ProcessPageEdits(CISDesign * pCISDesign);

/// @param index int &
/// @param LastReadInTime CTime const &
/// @return CISPartInst
CISPartInst GetPart(int & index, CTime const & LastReadInTime);

/// @param index int &
/// @return CISPartInst
CISPartInst GetPart(int & index);

/// @param pPartInst DboPartInst *
/// @return CISPartInst
CISPartInst GetCISPartInst(DboPartInst * pPartInst);

/// @param VariantNames CSStringArray const &
void DeleteVariant(CSStringArray const & VariantNames);

/// @param OldVariantNames CSStringArray const &
/// @param NewVariantNames CSStringArray const &
void RenameVariant(CSStringArray const & OldVariantNames, CSStringArray const & NewVariantNames);

/// @param Name CString const &
void SetName(CString const & Name);

/// @param Name CString &
void GetName(CString & Name);

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @param id UINT
/// @return int
int IsPageOfId(UINT id);

void Delete();

/// @param TitleBlockMap CMapStringToString &
/// @return int
int GetDisplayedTitleBlockProps(CMapStringToString & TitleBlockMap);

/// @param PageNum int &
/// @return int
int GetTitleBlockInfo(int & PageNum);

};

class CISVariantPartOBJ
	: public CISBase
{
public:
/// @param PartId UINT
/// @param strVariantName CString
void DeleteOccurStatus(UINT PartId, CString strVariantName);

void Delete();

void Old();

void New();

/// @param VariantName CString const &
void DeleteVariant(CString const & VariantName=CString(""));

void DeleteVariant();

/// @param OldVariantname CString const &
/// @param NewVariantName CString const &
void RenameVariant(CString const & OldVariantname, CString const & NewVariantName);

/// @param PropertyName CString const &
/// @param PropertyValue CString const &
/// @param VariantName CString const &
void SetVariantProperty(CString const & PropertyName, CString const & PropertyValue, CString const & VariantName=CString(""));

/// @param PropertyName CString const &
/// @param PropertyValue CString const &
void SetVariantProperty(CString const & PropertyName, CString const & PropertyValue);

/// @param pPropArray QPropertyArray *&
/// @param VariantName CString const &
void SetVariantProperty(QPropertyArray *& pPropArray, CString const & VariantName=CString(""));

/// @param pPropArray QPropertyArray *&
void SetVariantProperty(QPropertyArray *& pPropArray);

/// @param PropertyName CString const &
/// @param VariantName CString const &
void DeleteVariantProperty(CString const & PropertyName, CString const & VariantName);

/// @param pDesign CISDesign *
void SetOwningDesign(CISDesign * pDesign);

/// @return CISDesign
CISDesign GetOwningDesign();

/// @param PropName CString const &
/// @param PropContents CString const &
/// @param CreatePropIfNotPresent int
/// @param CheckForActiveVariant int
void SetProp(CString const & PropName, CString const & PropContents, int CreatePropIfNotPresent=1, int CheckForActiveVariant=1);

/// @param PropName CString const &
/// @param PropContents CString const &
/// @param CreatePropIfNotPresent int
void SetProp(CString const & PropName, CString const & PropContents, int CreatePropIfNotPresent=1);

/// @param PropName CString const &
/// @param PropContents CString const &
void SetProp(CString const & PropName, CString const & PropContents);

/// @param PropertyName CString const &
/// @param PropValue CString &
/// @param VariantName CString const &
/// @return int
int GetVariantProperty(CString const & PropertyName, CString & PropValue, CString const & VariantName=CString(""));

/// @param PropertyName CString const &
/// @param PropValue CString &
/// @return int
int GetVariantProperty(CString const & PropertyName, CString & PropValue);

/// @param VariantName CString const &
/// @return QPropertyArray
QPropertyArray GetVariantProperty(CString const & VariantName=CString(""));

/// @return QPropertyArray
QPropertyArray GetVariantProperty();

/// @param PartPropsGetPartProps CPartProp &
/// @param CheckForActiveVariant int
/// @return int
int GetPartProps(CPartProp & PartPropsGetPartProps, int CheckForActiveVariant=1);

/// @param PartPropsGetPartProps CPartProp &
/// @return int
int GetPartProps(CPartProp & PartPropsGetPartProps);

/// @param PropName CString const &
/// @return CString
CString GetPartProp(CString const & PropName);

/// @param ActiveVariant CString &
/// @return int
int HasActiveVariantproperty(CString & ActiveVariant=CString(""));

/// @return int
int HasActiveVariantproperty();

/// @return UINT
UINT GetStuffed();

/// @param b UINT
void SetStuffed(UINT b);

/// @return int
int ApplyActiveVariantPropsToCaptureParts();

/// @param pPropertyArray QPropertyArray *
/// @return int
int ApplyActiveVariantPropsToCaptureParts(QPropertyArray * pPropertyArray);

/// @return int
int ApplyActiveVariantPropsToCapturePartsEx();

void RestoreCapturePropsEx();

void ApplyCoreDesignPropsToCaptureParts();

void RestoreCoreDesignCaptureProps();

/// @return CTime
CTime GetLastUpdatedTime();

void SetUpdatedTime();

void TempStatus();

void UndoTempStatus();

/// @return int
int IsTempStatus();

/// @return int
int IsNew();

/// @return CRefDes
CRefDes GetPartRefDes();

/// @return CString
CString GetPartRef();

/// @return int
int HasPartRefChanged();

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @param RefDesStr CString &
void GetRefDesString(CString & RefDesStr);

/// @param FootprintFieldName CString const &
/// @param FootprintFieldValue CString const &
/// @param PartRef CString &
/// @param CoreFootprintValue CString &
/// @param rVariantName CString &
/// @return int
int CanTransferFootprintProperty(CString const & FootprintFieldName, CString const & FootprintFieldValue, CString & PartRef, CString & CoreFootprintValue, CString & rVariantName);

void SaveCaptureProperties();

/// @param pPropertyArray QPropertyArray *
void RestoreCaptureProps(QPropertyArray * pPropertyArray);

void RestoreCaptureProps();

/// @return int
int GetCaptureObjectId();

/// @param flag UINT
void SetStuff(UINT flag);

/// @return UINT
UINT GetStuff();

/// @param l_strStatus CString &
/// @param SetCore int
void SetPartStatus(CString & l_strStatus, int SetCore=0);

/// @param l_strStatus CString &
void SetPartStatus(CString & l_strStatus);

/// @return CString
CString GetPartStatus();

/// @param PartId UINT
/// @param Status CString &
/// @param VariantName CString
void GetOccStatus(UINT PartId, CString & Status, CString VariantName="");

/// @param PartId UINT
/// @param Status CString &
void GetOccStatus(UINT PartId, CString & Status);

/// @param PartId UINT
/// @param Status CString
void SetOccStatus(UINT PartId, CString Status);

/// @param PartId UINT
/// @param TableName CString
void SetDbName(UINT PartId, CString TableName);

/// @param PartId UINT
/// @param TableName CString &
/// @param VariantName CString
void GetDbName(UINT PartId, CString & TableName, CString VariantName);

/// @return int
int IsActiveVariant();

};

class CISPartInst
	: public CISVariantPartOBJ
{
public:
/// @param PropertyName CString const &
/// @param PropertyValue CString const &
/// @param VariantName CString const &
void SetVariantProperty(CString const & PropertyName, CString const & PropertyValue, CString const & VariantName);

/// @param pPropArray QPropertyArray *&
/// @param VariantName CString const &
void SetVariantProperty(QPropertyArray *& pPropArray, CString const & VariantName=CString(""));

/// @param pPropArray QPropertyArray *&
void SetVariantProperty(QPropertyArray *& pPropArray);

/// @return CString
CString GetPartRefPrefix();

/// @return CString
CString GetPartRef();

/// @return CRefDes
CRefDes GetPartRefDes();

/// @param EffectiveRefDes CString &
void GetEffectiveRefDes(CString & EffectiveRefDes);

/// @param pFile CFile *
/// @return DboState
DboState Save(CFile * pFile);

/// @param pFile CFile *
/// @return DboState
DboState Read(CFile * pFile);

/// @param PropName CString const &
/// @return int
int DeleteUserProp(CString const & PropName);

/// @param propName CString const &
/// @return int
int MakePropInvisible(CString const & propName);

/// @param propName CString const &
/// @return int
int MakePropVisible(CString const & propName);

/// @param PropName CString const &
/// @param PropContents CString const &
/// @param CreatePropIfNotPresent int
/// @param CheckForActiveVariant int
void SetProp(CString const & PropName, CString const & PropContents, int CreatePropIfNotPresent=1, int CheckForActiveVariant=1);

/// @param PropName CString const &
/// @param PropContents CString const &
/// @param CreatePropIfNotPresent int
void SetProp(CString const & PropName, CString const & PropContents, int CreatePropIfNotPresent=1);

/// @param PropName CString const &
/// @param PropContents CString const &
void SetProp(CString const & PropName, CString const & PropContents);

/// @param OldPropName CString const &
/// @param NewPropName CString const &
/// @return int
int RenameUserProp(CString const & OldPropName, CString const & NewPropName);

/// @param PtrArray CPtrArray &
void GetOccurrencesList(CPtrArray & PtrArray);

void GetOccurrencesList();

/// @return CPtrArray
CPtrArray GetOccurrences();

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @param PkgName CString &
/// @param pLibPart DboLibPart *
/// @param pDevice DboDevice *
/// @param LaunchedFromPartMgr int
/// @param bPreserveRef int
/// @return DboPlacedInst
DboPlacedInst ReplacePartInst(CString & PkgName, DboLibPart * pLibPart, DboDevice * pDevice, int LaunchedFromPartMgr, int bPreserveRef=0);

/// @param PkgName CString &
/// @param pLibPart DboLibPart *
/// @param pDevice DboDevice *
/// @param LaunchedFromPartMgr int
/// @return DboPlacedInst
DboPlacedInst ReplacePartInst(CString & PkgName, DboLibPart * pLibPart, DboDevice * pDevice, int LaunchedFromPartMgr);

/// @return DboState
DboState ShadowoutPartInst();

/// @param pDesign CISDesign *
void SetOwningDesign(CISDesign * pDesign);

void CleanUpDeletedOCCurrences();

void Delete();

/// @return int
int GetOCCCount();

/// @return int
int GetDeletedOCCCount();

/// @return UINT
UINT GetOwniningPageID();

/// @param PropName CString const &
/// @return CString
CString GetCoreDesignProp(CString const & PropName);

/// @param pPropertyArray QPropertyArray *
void RestoreCaptureProps(QPropertyArray * pPropertyArray);

void RestoreCaptureProps();

void MarkEdit();

/// @return bool
bool IsExternal();

/// @return bool
bool IsLinkable();

/// @param nId UINT
void AddOccIdToSelection(UINT nId);

void SetLinkAlways();

/// @return int
int GetLinkAlways();

/// @param nId UINT
/// @return int
int IsOccIdInSelection(UINT nId);

/// @param bVal int
void SetLinked(int bVal);

/// @return int
int GetLinked();

void ResetLinkSetting();

/// @param VariantName CString const &
void DeleteVariant(CString const & VariantName=CString(""));

void DeleteVariant();

/// @param flag UINT
void SetStuff(UINT flag);

/// @param pPropertyArray QPropertyArray *
/// @return int
int ApplyActiveVariantPropsToCaptureParts(QPropertyArray * pPropertyArray);

/// @param PropName CString const &
/// @param PropContents CString const &
void SetPropEx(CString const & PropName, CString const & PropContents);

/// @return int
int ApplyActiveVariantPropsToCapturePartsEx();

/// @param OccId UINT
/// @param bStuff int
void StuffOcc(UINT OccId, int bStuff=0);

/// @param OccId UINT
void StuffOcc(UINT OccId);

void ResetVariantSettings();

void RestoreCapturePropsEx();

void IncrOCount();

/// @return int
int GetOCount();

/// @param pCISInstOcc CISVariantPartOBJ *
void DetachPart(CISVariantPartOBJ * pCISInstOcc);

/// @param arg0 CISInstOccurrence *
/// @return int
int HasActiveVariantpropertyForOcc(CISInstOccurrence * arg0);

};

class CISInstOccurrence
	: public CISVariantPartOBJ
{
public:
/// @param pCISOcc1 CISInstOccurrence *
/// @param pCISOcc2 CISInstOccurrence *
/// @param FieldNames CStringArray const &
/// @return int
int PropsDiffer(CISInstOccurrence * pCISOcc1, CISInstOccurrence * pCISOcc2, CStringArray const & FieldNames);

/// @param PropName CString const &
/// @return CString
CString GetPartProp(CString const & PropName);

/// @param PartProps CPartProp &
/// @param CheckForActiveVariant int
/// @return int
int GetPartProps(CPartProp & PartProps, int CheckForActiveVariant=1);

/// @param PartProps CPartProp &
/// @return int
int GetPartProps(CPartProp & PartProps);

/// @return CRefDes
CRefDes GetPartRefDes();

/// @return CString
CString GetPartRefPrefix();

/// @return CString
CString GetPartRef();

/// @param pCISPartInst CISPartInst *
void SetOwningCISPartInst(CISPartInst * pCISPartInst);

/// @return CISPartInst
CISPartInst GetOwningCISPartInst();

/// @return UINT
UINT GetStuffed();

/// @param pDboObject DboBaseObject *
void SetCaptureDboObject(DboBaseObject * pDboObject);

/// @return DboBaseObject
DboBaseObject GetCaptureDboObject();

/// @param pFile CFile *
/// @return DboState
DboState SaveFile(CFile * pFile);

/// @param pFile CFile *
/// @return DboState
DboState ReadFile(CFile * pFile);

/// @return DboState
DboState Save();

/// @return DboState
DboState Read();

/// @param PropName CString const &
/// @param PropContents CString const &
void SetPropEx(CString const & PropName, CString const & PropContents);

/// @param ActiveVariant CString &
/// @return int
int HasActiveVariantproperty(CString & ActiveVariant=CString(""));

/// @return int
int HasActiveVariantproperty();

/// @param pVariantName CString const &
/// @param pPropName CString const &
/// @param pPropValue CString const &
void ReadFromExtension(CString const & pVariantName, CString const & pPropName, CString const & pPropValue);

/// @param pArray QPropertyArray *
/// @param pPropName CString const &
/// @param pPropValue CString const &
/// @param pInstOcc CISInstOccurrence *
void sAddPropToPropArray(QPropertyArray * pArray, CString const & pPropName, CString const & pPropValue, CISInstOccurrence * pInstOcc);

};

/// @param pCISOcc1 CISInstOccurrence *
/// @param pCISOcc2 CISInstOccurrence *
/// @param FieldNames CStringArray const &
/// @return int
int CISInstOccurrence_PropsDiffer(CISInstOccurrence * pCISOcc1, CISInstOccurrence * pCISOcc2, CStringArray const & FieldNames);

/// @param pArray QPropertyArray *
/// @param pPropName CString const &
/// @param pPropValue CString const &
/// @param pInstOcc CISInstOccurrence *
void CISInstOccurrence_sAddPropToPropArray(QPropertyArray * pArray, CString const & pPropName, CString const & pPropValue, CISInstOccurrence * pInstOcc);

class StatusInfo
{
public:
};

class CAmbiguousParts
{
public:
/// @param BOMName CString
/// @return int
int DeleteAmbiguousMapForBOM(CString BOMName);

/// @param BOMName CString
/// @param GrpSGrpName CString
/// @param Id UINT
/// @param RevertOthers int
/// @return int
int DeletePartFromGrpSGrp(CString BOMName, CString GrpSGrpName, UINT Id, int RevertOthers=0);

/// @param BOMName CString
/// @param GrpSGrpName CString
/// @param Id UINT
/// @return int
int DeletePartFromGrpSGrp(CString BOMName, CString GrpSGrpName, UINT Id);

/// @param GroupSGrpName CString
/// @param Flg int
/// @return int
int DelteGrpSGrpFromAllBOM(CString GroupSGrpName, int Flg=0);

/// @param GroupSGrpName CString
/// @return int
int DelteGrpSGrpFromAllBOM(CString GroupSGrpName);

/// @param BOMName CString
/// @param GrpSGrpName CString
/// @param Flg int
/// @return int
int DeleteAllPartsFromGrpSGrp(CString BOMName, CString GrpSGrpName, int Flg=0);

/// @param BOMName CString
/// @param GrpSGrpName CString
/// @return int
int DeleteAllPartsFromGrpSGrp(CString BOMName, CString GrpSGrpName);

/// @param BOMName CString
/// @param Id UINT
/// @return int
int DeletePartsFromBOM(CString BOMName, UINT Id);

/// @param BOMName CString
/// @param IdArray CUIntArray &
/// @return int
int RevertToAmbiguous(CString BOMName, CUIntArray & IdArray);

/// @param BOMName CString
/// @param GrpSGrpName CString
/// @return int
int RevertToAmbiguous(CString BOMName, CString GrpSGrpName);

/// @param BOMName CString
/// @param Id UINT
/// @param GrpSGrpName CString
/// @return CString
CString GetStatus(CString BOMName, UINT Id, CString GrpSGrpName);

/// @param BOMName CString
/// @param Id UINT
/// @param PartStatus CString
/// @param GrpSGrpName CString
/// @return int
int AddPartToMap(CString BOMName, UINT Id, CString PartStatus, CString GrpSGrpName);

/// @param BOMName CString
/// @param Id UINT
/// @return int
int GetPartsCount(CString BOMName, UINT Id);

/// @param GrpSGrpName CString
/// @param Id UINT
/// @return int
int RevertToAmbiguousInAllBOM(CString GrpSGrpName, UINT Id);

/// @param GrpSGrpName CString
/// @param Id UINT
/// @return int
int DeletePartFromAllBOM(CString GrpSGrpName, UINT Id);

/// @param Id UINT
/// @return int
int DeletePartFromAllBOM(UINT Id);

/// @param l_strBOMVar CString &
/// @param l_strBOMambData CString &
void GetAmbugityStoreforBOM(CString & l_strBOMVar, CString & l_strBOMambData);

/// @param l_strBOMName CString &
/// @param l_strbomPartAmbData CString &
void SetAmbiguousDataForBOM(CString & l_strBOMName, CString & l_strbomPartAmbData);

};

class CPartMgmt
{
public:
/// @param pDesign DboDesign *
/// @return CISDesign
CISDesign GetCisDesign(DboDesign * pDesign);

/// @return int
int UpdateAllPartStatus();

/// @param value int
/// @return int
int SetCisAutomation(int value);

};

/// @param pDesign DboDesign *
/// @return CISDesign
CISDesign CPartMgmt_GetCisDesign(DboDesign * pDesign);

/// @return int
int CPartMgmt_UpdateAllPartStatus();

/// @param value int
/// @return int
int CPartMgmt_SetCisAutomation(int value);

class CISTclHelper
{
public:
/// @return CSStringArray
CSStringArray sMakeCSStringArray();

/// @return QUIntArray
QUIntArray sMakeQUIntArray();

/// @return CStringArray
CStringArray sMakeCStringArray();

/// @param pArray CStringArray &
/// @param str CString &
void sAddToCStringArray(CStringArray & pArray, CString & str);

/// @param pArray CStringArray &
/// @param pIndex int
void sRemoveFromCStringArray(CStringArray & pArray, int pIndex);

/// @param pArray CStringArray &
/// @return int
int sGetCStringArraySize(CStringArray & pArray);

/// @param pArray CStringArray &
/// @param pIndex int
/// @return CString
CString sGetCString(CStringArray & pArray, int pIndex);

/// @return CUIntArray
CUIntArray sMakeCUIntArray();

/// @param pArray CUIntArray &
/// @param num int
void sAddToCUIntArray(CUIntArray & pArray, int num);

/// @param pArray CUIntArray &
/// @param pIndex int
void sRemoveFromCUIntArray(CUIntArray & pArray, int pIndex);

/// @param pArray CUIntArray &
/// @return int
int sGetCUIntArraySize(CUIntArray & pArray);

/// @param pArray CUIntArray &
/// @param pIndex int
/// @return int
int sGetUInt(CUIntArray & pArray, int pIndex);

/// @param p int &
/// @return UINT
UINT sGetUINTFromIntRef(int & p);

/// @param p int
/// @return UINT
UINT sGetUINTFromInt(int p);

/// @param p UINT &
/// @return int
int sGetIntFromUINTRef(UINT & p);

/// @param p UINT
/// @return int
int sGetIntFromUINT(UINT p);

/// @return CPartProp
CPartProp sMakeCPartProp();

void sReleaseAllCreatedPtrs();

};

/// @return CSStringArray
CSStringArray CISTclHelper_sMakeCSStringArray();

/// @return QUIntArray
QUIntArray CISTclHelper_sMakeQUIntArray();

/// @return CStringArray
CStringArray CISTclHelper_sMakeCStringArray();

/// @param pArray CStringArray &
/// @param str CString &
void CISTclHelper_sAddToCStringArray(CStringArray & pArray, CString & str);

/// @param pArray CStringArray &
/// @param pIndex int
void CISTclHelper_sRemoveFromCStringArray(CStringArray & pArray, int pIndex);

/// @param pArray CStringArray &
/// @return int
int CISTclHelper_sGetCStringArraySize(CStringArray & pArray);

/// @param pArray CStringArray &
/// @param pIndex int
/// @return CString
CString CISTclHelper_sGetCString(CStringArray & pArray, int pIndex);

/// @return CUIntArray
CUIntArray CISTclHelper_sMakeCUIntArray();

/// @param pArray CUIntArray &
/// @param num int
void CISTclHelper_sAddToCUIntArray(CUIntArray & pArray, int num);

/// @param pArray CUIntArray &
/// @param pIndex int
void CISTclHelper_sRemoveFromCUIntArray(CUIntArray & pArray, int pIndex);

/// @param pArray CUIntArray &
/// @return int
int CISTclHelper_sGetCUIntArraySize(CUIntArray & pArray);

/// @param pArray CUIntArray &
/// @param pIndex int
/// @return int
int CISTclHelper_sGetUInt(CUIntArray & pArray, int pIndex);

/// @param p int &
/// @return UINT
UINT CISTclHelper_sGetUINTFromIntRef(int & p);

/// @param p int
/// @return UINT
UINT CISTclHelper_sGetUINTFromInt(int p);

/// @param p UINT &
/// @return int
int CISTclHelper_sGetIntFromUINTRef(UINT & p);

/// @param p UINT
/// @return int
int CISTclHelper_sGetIntFromUINT(UINT p);

/// @return CPartProp
CPartProp CISTclHelper_sMakeCPartProp();

void CISTclHelper_sReleaseAllCreatedPtrs();

class CPMgtCfg
{
public:
/// @return long
long GetTotalRecords();

/// @param pFieldName char const *
void AddMultiValuedField(char const * pFieldName);

/// @param pFieldName char const *
void RemoveMultiValuedField(char const * pFieldName);

/// @return int
int GetMultiValuedCount();

/// @param index int
/// @return char
char GetMultiValuedAtPos(int index);

void RemoveAllMultiValuedField();

/// @param pFieldName char const *
/// @return int
int IsMultiValuedField(char const * pFieldName);

/// @param strTableName CString
/// @return int
int IsTableUsed(CString strTableName);

/// @param AutoPartTypeRefresh int
void SetAutoPartTypeRefreshFlag(int AutoPartTypeRefresh);

/// @return int
int GetAutoPartTypeRefreshFlag();

/// @return int
int GetUsedTablesCount();

/// @param PropertyType PropertyTypeT
/// @param TableName CString &
/// @return int
int PropTypeSettingOK(PropertyTypeT PropertyType, CString & TableName);

/// @param PropertyType PropertyTypeT
/// @param Name CString &
void GetPropertyFieldName(PropertyTypeT PropertyType, CString & Name);

/// @param PropName CString const &
/// @param Name CString &
void GetPropertyFieldName(CString const & PropName, CString & Name);

/// @param PropertyType PropertyTypeT
/// @param Name CString &
void GetPropertyDBFieldName(PropertyTypeT PropertyType, CString & Name);

/// @param PropName CString const &
/// @param Name CString &
void GetPropertyDBFieldName(CString const & PropName, CString & Name);

/// @param TableName CString const &
/// @param PropertyType PropertyTypeT
/// @param Name CString &
void GetPropertyDBFieldName(CString const & TableName, PropertyTypeT PropertyType, CString & Name);

/// @param TableName CString const &
/// @param PropertyType PropertyTypeT
/// @param Name CString &
void GetPropertyValidFieldName(CString const & TableName, PropertyTypeT PropertyType, CString & Name);

/// @return CString
CString GetDBCName();

/// @return CString
CString GetIniDBCName();

/// @return int
int GetNumDbs();

/// @param DbIndex int
/// @return CPMgtDbCfg
CPMgtDbCfg GetDbCfg(int DbIndex);

/// @param RefdesPrefix CString
/// @return int
int GetFirstTable(CString RefdesPrefix="");

/// @return int
int GetFirstTable();

/// @param AfterTableIndex int &
/// @param RefdesPrefix CString
void GetNextTable(int & AfterTableIndex, CString RefdesPrefix="");

/// @param AfterTableIndex int &
void GetNextTable(int & AfterTableIndex);

/// @param TableName CString const &
/// @param bChkUsed int
/// @return int
int GetTableIndex(CString const & TableName, int bChkUsed=1);

/// @param TableName CString const &
/// @return int
int GetTableIndex(CString const & TableName);

/// @param T CTime &
/// @param FName char const *
/// @return bool
bool GetLastModificationTime(CTime & T, char const * FName=None);

/// @param T CTime &
/// @return bool
bool GetLastModificationTime(CTime & T);

/// @param time CTime &
void GetModificationTime(CTime & time);

/// @return int
int GetAllowDuplicatePartNumbers();

/// @return int
int GetTransferBlankProperties();

/// @return char
char GetPartTypeDelimiter();

/// @return int
int GetAutomaticTempPartNumber();

/// @return CString
CString GetTempPartNumberPrefx();

/// @return CString
CString GetTempPartNumberTablename();

/// @return CString
CString GetDoNotStuffString();

/// @return CString
CString GetMultiValuesCellDelimiter();

/// @param Refresh int
/// @return CStringArray
CStringArray GetICAFieldList(int Refresh=1);

/// @return CStringArray
CStringArray GetICAFieldList();

/// @param ICATables CStringArray &
void GetICADefinedTables(CStringArray & ICATables);

void UpdateFieldList();

/// @param DistList CStringArray &
/// @return int
int GetCDSDistList(CStringArray & DistList);

/// @return CStringArray
CStringArray GetSelectedSupList();

/// @return int
int GetTopSupNumber();

/// @return CString
CString GetMechPartMappingTableName();

/// @return int
int IsKeyed();

/// @param Name CString const &
/// @return int
int IsValidFieldName(CString const & Name);

/// @param PropertyType PropertyTypeT
/// @return int
int HasProperty(PropertyTypeT PropertyType);

/// @param PropName CString const &
/// @return int
int HasProperty(CString const & PropName);

/// @return int
int IsModified();

/// @return int
int CheckRules();

/// @param FName char const *
/// @return int
int IsDBCVersionCurrent(char const * FName=None);

/// @return int
int IsDBCVersionCurrent();

/// @param PropertyType PropertyTypeT
/// @return int
int AtLeastOneTableHasProperty(PropertyTypeT PropertyType);

/// @param TableType TableT &
/// @param pPrecision long *
/// @return int
int DoesTempPartNumberTableExist(TableT & TableType, long * pPrecision=None);

/// @param TableType TableT &
/// @return int
int DoesTempPartNumberTableExist(TableT & TableType);

/// @return TableT
TableT DoesTempPartnumberTabeExist();

void Initialize();

/// @param ReadOnly int
/// @return int
int OpenPartDatabase(int ReadOnly=1);

/// @return int
int OpenPartDatabase();

/// @return int
int GetOpenPartDatabase();

void EmptyDbArray();

/// @param TableName CString const &
/// @param TableIndex int &
void FindTable(CString const & TableName, int & TableIndex);

/// @param Index int
void DelDb(int Index);

/// @param pDbFileName char const *
/// @return CPMgtDbCfg
CPMgtDbCfg AddDb(char const * pDbFileName);

/// @param ar CArchive &
void Serialize(CArchive & ar);

/// @param ConfigDBC int
/// @param FName char const *
/// @param SuppressWarnings int
/// @return int
int ReadDBC(int ConfigDBC=0, char const * FName=None, int SuppressWarnings=0);

/// @param ConfigDBC int
/// @param FName char const *
/// @return int
int ReadDBC(int ConfigDBC=0, char const * FName=None);

/// @param ConfigDBC int
/// @return int
int ReadDBC(int ConfigDBC=0);

/// @return int
int ReadDBC();

/// @param pNewDBCName char const *
/// @return int
int WriteDBC(char const * pNewDBCName=None);

/// @return int
int WriteDBC();

/// @param FileName CString const &
/// @return CString
CString FindDbFilePath(CString const & FileName);

/// @return int
int CheckDbFmt();

/// @return int
int UpdateTablesList();

/// @param DbIndex int
/// @return int
int GetFieldDetailsForTable(int DbIndex);

/// @param m_ViewTables set< string > &
/// @return int
int GetViewTables(set< string > & m_ViewTables);

/// @param DbIndex int
/// @param primaryKey string const &
/// @return bool
bool GetFieldDetailsForTableForRelational(int DbIndex, string const & primaryKey);

/// @param mod int
void SetModified(int mod);

void UpdateSQLStatement();

void BuildFieldMap();

void SetDBCOk();

/// @param time CTime const &
void SetLastModificationTime(CTime const & time);

/// @param StrField CString
void SetICAFieldList(CString StrField);

/// @param Dup int
void SetAllowDuplicatePartNumbers(int Dup);

/// @param Xfr int
void SetTransferBlankProperties(int Xfr);

/// @param delimiter char
void SetPartTypeDelimiter(char delimiter);

/// @param Allow int
void SetAutomaticTempPartNumber(int Allow);

/// @param Prefix CString const &
void SetTempPartNumberPrefx(CString const & Prefix);

/// @param TableName CString const &
void SetTempPartNumberTableName(CString const & TableName);

/// @param Arr CStringArray const &
void SetSelectedSupList(CStringArray const & Arr);

/// @param Top int const &
void SetTopSupNumber(int const & Top);

/// @param DoNotStuffString CString const &
void SetDoNotStuffString(CString const & DoNotStuffString);

/// @param Delimiter CString const &
void SetMultiValuesCellDelimiter(CString const & Delimiter);

/// @param strName CString const &
void SetMechPartMappingTableName(CString const & strName);

/// @param nVal int
void SetOldVersion(int nVal);

/// @param Partnum int
void SetAsPartNumber(int Partnum);

/// @param PartRef int
void SetAsPartReference(int PartRef);

/// @return int
int GetPartNumber();

/// @return int
int GetPartReference();

/// @param bVal int
void SetOccLevelLink(int bVal);

/// @return int
int GetOccLevelLink();

/// @param bVal int
void SetExtendedLinkMode(int bVal);

/// @return int
int GetExtendedLinkMode();

/// @return CString
CString GetSaveQueryFile();

/// @param pFile char const *
void SetSaveQueryFile(char const * pFile);

/// @param pSectionName LPCTSTR
/// @param pProfileFileName LPCTSTR
/// @return int
int CheckSectionExistDBC(LPCTSTR pSectionName, LPCTSTR pProfileFileName);

/// @param ProfileName CString
/// @param DBCString CString &
void GetDBCFromIni(CString ProfileName, CString & DBCString);

/// @param ProfileName CString
/// @param DBCString CString &
void GetDemoDBCFromIni(CString ProfileName, CString & DBCString);

/// @return CString
CString GetLocalProfileNameDBC();

/// @return CString
CString GetMasterProfileNameDBC();

/// @return int
int CreateTempPartNumberTable();

/// @return int
int IsOK();

/// @return int
int IsOldVersion();

};

/// @return CPMgtCfg
CPMgtCfg OrCISGetDbcConfig();

/// @param pProperty char const *
/// @param lCompare char const *
/// @param lValue char const *
/// @return char
char CISAddSearchQuery(char const * pProperty, char const * lCompare, char const * lValue);

void CISExecuteQuery();

/// @param pFile char const *
void CISDumpExplorerView(char const * pFile);

/// @param start int
/// @param end int
/// @param option int
void CISExplorerSelectOption(int start, int end, int option);

/// @param pFontName char const *
/// @return char
char SetCISExplorerFont(char const * pFontName);

/// @param size int
/// @return char
char SetCISExplorerFontSize(int size);

/// @param R int
/// @param G int
/// @param B int
/// @return unsigned long
unsigned long CISGetColor(int R, int G, int B);

/// @param color unsigned long
/// @return char
char SetCISRowColor(unsigned long color);

/// @param color unsigned long
/// @return char
char SetCISTextColor(unsigned long color);

/// @param pFieldName char const *
/// @param pValue char const *
/// @param TextColor unsigned long
/// @param RowColor unsigned long
/// @return char
char AddCISCriteria(char const * pFieldName, char const * pValue, unsigned long TextColor, unsigned long RowColor);

void ClearCISCriteria();

void ClearCISColor();

/// @param aFieldName char const *
/// @return char
char SetCISMultiValuedField(char const * aFieldName);

void ClearMultiValuedField();

/// @return CPmgrListView
CPmgrListView GetPartManagerView();

/// @param pGroupName char const *
/// @param pName char const *
/// @param aRefDes char const *
void SelectGroup(char const * pGroupName, char const * pName, char const * aRefDes);

void LinkDataBasePart();

/// @param aPartNumber char const *
void LinkPartNumber(char const * aPartNumber);

/// @param value int
void SetAutomationFlag(int value);

void SetPartPresent();

void SetPartNotPresent();

/// @param aLength int
void SetCisFieldLength(int aLength);

class CRefDes
{
public:
/// @return CRefDes
CRefDes Clone();

/// @return CString
CString GetPrefix();

/// @return int
int GetNumber();

/// @return CString
CString GetSuffix();

/// @return CString
CString GetRefDes();

/// @return CString
CString GetRef();

/// @return int
int IsDefined();

/// @return int
int IsMultiPkg();

/// @param rVal CRefDes const &
/// @param CompareExact int
/// @return int
int CompareNoCase(CRefDes const & rVal, int CompareExact=0);

/// @param rVal CRefDes const &
/// @return int
int CompareNoCase(CRefDes const & rVal);

void MakeUpper();

};

class CRefDesArray
{
public:
/// @param Str CRefDes const &
/// @param NoRepeats int
void Add(CRefDes const & Str, int NoRepeats=0);

/// @param Str CRefDes const &
void Add(CRefDes const & Str);

/// @param SortAscending int
/// @param FileNameSort int
void Sort(int SortAscending=1, int FileNameSort=0);

/// @param SortAscending int
void Sort(int SortAscending=1);

void Sort();

/// @param refdes CRefDes const &
/// @return int
int Find(CRefDes const & refdes);

};


/// @}
