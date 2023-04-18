/// @defgroup DatabaseCommands Database Commands
/// @{

class DboState
{
public:
/// @return int
int Succeeded();

/// @return int
int Failed();

/// @return int
int Severity();

/// @return int
int OK();

/// @return int
int Code();

/// @param msg CString &
void Message(CString & msg);

/// @return CString
CString GetExtendedText();

/// @param str CString const &
void WriteToSessionLog(CString const & str);

/// @param str CString const &
void WriteToStatusBar(CString const & str);

/// @param lOptionName CString const &
/// @param defaultValue CString const &
/// @return CString
CString GetOptionString(CString const & lOptionName, CString const & defaultValue);

};

/// @param str CString const &
void DboState_WriteToSessionLog(CString const & str);

/// @param str CString const &
void DboState_WriteToStatusBar(CString const & str);

/// @param lOptionName CString const &
/// @param defaultValue CString const &
/// @return CString
CString DboState_GetOptionString(CString const & lOptionName, CString const & defaultValue);

class DboValue
{
public:
/// @param Value CString &
/// @return DboState
DboState GetString(CString & Value);

/// @param status DboState &
/// @return int
int GetInt(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetLong(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetTime(DboState & status);

/// @param status DboState &
/// @return int
int GetBool(DboState & status);

/// @param status DboState &
/// @return COLORREF
COLORREF GetColor(DboState & status);

/// @param logfont LOGFONT &
/// @return DboState
DboState GetFont(LOGFONT & logfont);

/// @param status DboState &
/// @return int
int GetEnumeration(DboState & status);

/// @param vType enum DboValue::ValueType
/// @param strVal CString const &
/// @param status DboState &
/// @return int
int sGetEnumeration(enum DboValue::ValueType vType, CString const & strVal, DboState & status);

/// @param vType enum DboValue::ValueType
/// @param enumValue int
/// @param status DboState &
/// @return CString
CString sGetValue(enum DboValue::ValueType vType, int enumValue, DboState & status);

/// @param status DboState &
/// @return ValueType
ValueType GetType(DboState & status);

/// @param status DboState &
/// @return ValueType
ValueType GetLogicalType(DboState & status);

/// @param type enum DboValue::ValueType
/// @param status DboState &
/// @return PhysicalType
PhysicalType GetPhysicalType(enum DboValue::ValueType type, DboState & status);

/// @param type enum DboValue::ValueType
/// @param Type CString &
/// @return DboState
DboState GetLogicalTypeName(enum DboValue::ValueType type, CString & Type);

/// @param type enum DboValue::ValueType
/// @param status DboState &
/// @return int
int GetCountValidValues(enum DboValue::ValueType type, DboState & status);

/// @param type enum DboValue::ValueType
/// @param status DboState &
/// @return DboValidValuesIter
DboValidValuesIter NewValidValuesIter(enum DboValue::ValueType type, DboState & status);

/// @param val char *
/// @return DboState
DboState SetString(char * val);

/// @param val char *
/// @return DboState
DboState SetFilePath(char * val);

/// @param val int
/// @return DboState
DboState SetBOOL(int val);

/// @param val int
/// @return DboState
DboState SetInt(int val);

/// @param val unsigned long
/// @return DboState
DboState SetLong(unsigned long val);

/// @param val time_t
/// @return DboState
DboState SetTime(time_t val);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param pinType enum DboValue::PinTypeT
/// @return DboState
DboState SetPinType(enum DboValue::PinTypeT pinType);

/// @param primitiveType enum DboValue::PrimitiveTypeT
/// @return DboState
DboState SetPrimitiveType(enum DboValue::PrimitiveTypeT primitiveType);

/// @param viewType enum DboValue::ViewTypeT
/// @return DboState
DboState SetViewType(enum DboValue::ViewTypeT viewType);

/// @param lineStyle enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT lineStyle);

/// @param lineWidth enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT lineWidth);

/// @param fillStyle enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT fillStyle);

/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT hatchStyle);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param displayType enum DboValue::DisplayTypeT
/// @return DboState
DboState SetDisplayType(enum DboValue::DisplayTypeT displayType);

/// @param val DboValue &
/// @return DboState
DboState SetValue(DboValue & val);

};

/// @param vType enum DboValue::ValueType
/// @param strVal CString const &
/// @param status DboState &
/// @return int
int DboValue_sGetEnumeration(enum DboValue::ValueType vType, CString const & strVal, DboState & status);

/// @param vType enum DboValue::ValueType
/// @param enumValue int
/// @param status DboState &
/// @return CString
CString DboValue_sGetValue(enum DboValue::ValueType vType, int enumValue, DboState & status);

/// @param type enum DboValue::ValueType
/// @param status DboState &
/// @return PhysicalType
PhysicalType DboValue_GetPhysicalType(enum DboValue::ValueType type, DboState & status);

/// @param type enum DboValue::ValueType
/// @param Type CString &
/// @return DboState
DboState DboValue_GetLogicalTypeName(enum DboValue::ValueType type, CString & Type);

/// @param type enum DboValue::ValueType
/// @param status DboState &
/// @return int
int DboValue_GetCountValidValues(enum DboValue::ValueType type, DboState & status);

/// @param type enum DboValue::ValueType
/// @param status DboState &
/// @return DboValidValuesIter
DboValidValuesIter DboValue_NewValidValuesIter(enum DboValue::ValueType type, DboState & status);

class DboValidValuesIter
{
public:
/// @param name CString &
/// @param status DboState &
/// @param NeedBundle int
/// @return int
int NextValue(CString & name, DboState & status, int NeedBundle=False);

/// @param name CString &
/// @param status DboState &
/// @return int
int NextValue(CString & name, DboState & status);

};

class DboDefinition
{
public:
};

class DboPointerException
{
public:
/// @return char
char what();

};

class DboNullPointerException
	: public DboPointerException
{
public:
/// @return char
char what();

};

class DboInvalidPointerAccessException
	: public DboPointerException
{
public:
/// @return char
char what();

};

class DboInvalidDeleteException
	: public DboPointerException
{
public:
/// @return char
char what();

};

class DboBaseObject
{
public:
/// @param pPtr void *
/// @return bool
bool IsPtrDeleted(void * pPtr);

/// @param pBitmask enum DboBaseObject::BitmaskT
/// @return int
int IsBitmaskAllowed(enum DboBaseObject::BitmaskT pBitmask);

/// @return MaskT
MaskT GetMask();

/// @param pBitmask enum DboBaseObject::BitmaskT
/// @return int
int GetBitmask(enum DboBaseObject::BitmaskT pBitmask);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param strType CString &
/// @return DboState
DboState GetTypeString(CString & strType);

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @return CRect
CRect GetBoundingBox();

/// @param name CString const &
/// @param status DboState &
/// @return DBProp
DBProp GetDBProp(CString const & name, DboState & status);

/// @param nNameID UINT
/// @param status DboState &
/// @return DBProp
DBProp GetDBProp(UINT nNameID, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DBProp
DBProp GetDBPropNC(CString const & name, DboState & status);

/// @param name CString const &
/// @param value DboValue &
/// @return DboState
DboState GetDBPropValue(CString const & name, DboValue & value);

/// @param nNameID UINT
/// @param value DboValue &
/// @return DboState
DboState GetDBPropValue(UINT nNameID, DboValue & value);

/// @param status DboState &
/// @return int
int GetUserPropsPermitted(DboState & status);

/// @param status DboState &
/// @return int
int GetUserPropsCount(DboState & status);

/// @param nNameID UINT
/// @param status DboState &
/// @return DboUserProp
DboUserProp GetUserProp(UINT nNameID, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp GetUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp GetUserPropNC(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetUserPropStringValue(CString const & name, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetUserPropStringValueNC(CString const & name, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValueNC(CString const & name, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param status DboState &
/// @return DboSession
DboSession GetSession(DboState & status);

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString const &
/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp GetDisplayProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp GetDisplayPropEx(CString const & name, DboState & status);

/// @param status DboState &
/// @return int
int GetDisplayPropsPermitted(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @param PatternMatcher TPatternMatch
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase, TPatternMatch PatternMatcher=DboPatternMatch);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase);

/// @param strFindPropName CString const &
/// @param strFindPropValue CString const &
/// @param bMatchCase int
/// @param PatternMatcher TPatternMatch
/// @return int
int EffectivePropNameMatch(CString const & strFindPropName, CString const & strFindPropValue, int bMatchCase, TPatternMatch PatternMatcher=DboPatternMatch);

/// @param strFindPropName CString const &
/// @param strFindPropValue CString const &
/// @param bMatchCase int
/// @return int
int EffectivePropNameMatch(CString const & strFindPropName, CString const & strFindPropValue, int bMatchCase);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param nObjType enum DboBaseObject::ObjectTypeT
/// @param nNameID UINT
/// @param status DboState &
/// @return DBProp
DBProp sGetDBProp(enum DboBaseObject::ObjectTypeT nObjType, UINT nNameID, DboState & status);

/// @param nObjType enum DboBaseObject::ObjectTypeT
/// @param csName CString const &
/// @param status DboState &
/// @return DBProp
DBProp sGetDBProp(enum DboBaseObject::ObjectTypeT nObjType, CString const & csName, DboState & status);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param DWID DboDesignOccurrenceId const &
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboDesignOccurrenceId const & DWID);

/// @param designs DboDesignList &
/// @param status DboState &
void GetOpenDesigns(DboDesignList & designs, DboState & status);

/// @param status DboState &
/// @return int
int HasPropertyThatExists(DboState & status);

/// @param name CString const &
/// @param choices CStringList &
/// @return DboState
DboState GetEffectivePropValueChoices(CString const & name, CStringList & choices);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param nNameID UINT
/// @param status DboState &
/// @return DbBaseProp
DbBaseProp GetBaseProp(UINT nNameID, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DbBaseProp
DbBaseProp GetBaseProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DbBaseProp
DbBaseProp GetBasePropNC(CString const & name, DboState & status);

/// @param str CString &
void GetSemanticString(CString & str);

/// @return int
int GetSemanticID();

/// @return int
int GetPaint();

/// @param strName CString const &
/// @param status DboState &
/// @return DBProp
DBProp GetDBPropFromObject(CString const & strName, DboState & status);

/// @return int
int GetRefCount();

/// @return int
int IsCurrent();

/// @return int
int GetTransactionCount();

/// @return DboBaseObject
DboBaseObject GetPrevState();

/// @return DboBaseObject
DboBaseObject GetNextState();

/// @param nTransCount int
/// @return DboBaseObject
DboBaseObject GetCurrentObject(int nTransCount);

/// @return int
int IsOccModified();

/// @param strName CString const &
/// @param strVal CString &
/// @return int
int GetVariantProp(CString const & strName, CString & strVal);

/// @param strName CString &
/// @param strVal CString &
/// @param bNewFound int &
/// @return int
int GetNextNewVariantProp(CString & strName, CString & strVal, int & bNewFound);

/// @return int
int IsVariantPropMapEmpty();

/// @return DboBundleTemplateMap
DboBundleTemplateMap GetBundleTemplateMap();

/// @return bool
bool isBundleTemplateExists();

/// @return bool
bool IsBundleObject();

/// @param BundleOwnerName CString
/// @param srcLib CString
void UpdateBundleOwner(CString BundleOwnerName, CString srcLib="");

/// @param BundleOwnerName CString
void UpdateBundleOwner(CString BundleOwnerName);

/// @param sOwner CString
/// @param sSourceLib CString
/// @param flag int
void MakeBundle(CString sOwner, CString sSourceLib, int flag);

/// @param bOwnerName CString
/// @param srcLib CString
/// @return DboState
DboState SetBundleOwner(CString bOwnerName, CString srcLib="");

/// @param bOwnerName CString
/// @return DboState
DboState SetBundleOwner(CString bOwnerName);

/// @return DboBundle
DboBundle GetBundleOwner();

/// @param propName CString &
/// @param sourceLibName CString &
/// @return DboState
DboState GetBundleOwnerPropName(CString & propName, CString & sourceLibName);

/// @param propName CString &
/// @param sourceLibName CString &
/// @return DboState
DboState GetBundleOwnerPropValue(CString & propName, CString & sourceLibName);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @return DboState
DboState MarkModified();

/// @param status DboState &
/// @return DboDBPropsIter
DboDBPropsIter NewDBPropsIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param status DboState &
/// @return DboDisplayPropsIter
DboDisplayPropsIter NewDisplayPropsIter(DboState & status);

/// @param status DboState &
/// @return DboUserPropsIter
DboUserPropsIter NewUserPropsIter(DboState & status);

/// @param pMask MaskT
void SetMask(MaskT pMask);

/// @param pBitmask enum DboBaseObject::BitmaskT
void SetBitmask(enum DboBaseObject::BitmaskT pBitmask);

/// @param pBitmask enum DboBaseObject::BitmaskT
void UnsetBitmask(enum DboBaseObject::BitmaskT pBitmask);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param arg0 enum DboBaseObject::ObjectTypeT
/// @return DboState
DboState SetObjectType(enum DboBaseObject::ObjectTypeT arg0);

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @return DboState
DboState DeleteUserProps();

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param name CString const &
/// @return DboState
DboState DeleteDBProp(CString const & name);

/// @param bPaint int
void SetPaint(int bPaint=1);

void SetPaint();

void RemovePropsFromObject();

void Increment();

void Decrement();

/// @param bVal int
void SetCurrent(int bVal);

void ResetObject();

/// @param count int
void SetTransactionCount(int count);

/// @param bMod int
void SetOccsModified(int bMod);

/// @param strName CString const &
/// @param strVal CString const &
void AddVariantProp(CString const & strName, CString const & strVal);

/// @param bFlag int
void ClearVariantMap(int bFlag=1);

void ClearVariantMap();

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetUserPropStringValue(CString const & name, CString const & value);

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState SetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param status DboState &
/// @param arg1 CString &
/// @param arg2 CPoint
/// @param arg3 enum DboValue::RotationT
/// @param arg4 LOGFONT &
/// @param arg5 enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & arg1, CPoint arg2, enum DboValue::RotationT arg3, LOGFONT & arg4, enum DboValue::ColorT arg5);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

/// @param name CString const &
/// @param value DboValue &
/// @return DboState
DboState SetDBPropValue(CString const & name, DboValue & value);

/// @param nNameID UINT
/// @param value DboValue &
/// @return DboState
DboState SetDBPropValue(UINT nNameID, DboValue & value);

/// @param arg0 DboDisplayProp *
/// @return DboState
DboState DeleteDisplayProp(DboDisplayProp * arg0);

/// @return int
int IsObjLocked();

/// @param propName CString
/// @param lLock MaskT
/// @param preTriggerName CString
/// @param postTrigerName CString
void AddLockingInfo(CString propName, MaskT lLock, CString preTriggerName, CString postTrigerName);

/// @param propName CString
/// @return bool
bool IsPropertyLockable(CString propName);

/// @param srcExtn DboExtensionTableHandle
void CopyExtensions(DboExtensionTableHandle srcExtn);

/// @param propName CString
/// @param lLock MaskT &
/// @param preTrigger CString &
/// @param postTrigger CString &
/// @return bool
bool GetAttributeLockingInfo(CString propName, MaskT & lLock, CString & preTrigger, CString & postTrigger);

/// @param propName CString
/// @return bool
bool IsPropertyLockedForEditing(CString propName);

/// @param BagType enum DboBaseObject::eBagType
/// @param pBagName char const *
/// @param pName char const *
/// @param pValue char const *
void AddPropertyToPropertyBag(enum DboBaseObject::eBagType BagType, char const * pBagName, char const * pName, char const * pValue);

/// @param BagType enum DboBaseObject::eBagType
/// @return PropBagT
PropBagT GetPropertyBag(enum DboBaseObject::eBagType BagType);

void RemoveBundleProperties();

};

/// @param pPtr void *
/// @return bool
bool DboBaseObject_IsPtrDeleted(void * pPtr);

/// @param nObjType enum DboBaseObject::ObjectTypeT
/// @param nNameID UINT
/// @param status DboState &
/// @return DBProp
DBProp sGetDBProp(enum DboBaseObject::ObjectTypeT nObjType, UINT nNameID, DboState & status);

/// @param nObjType enum DboBaseObject::ObjectTypeT
/// @param csName CString const &
/// @param status DboState &
/// @return DBProp
DBProp DboBaseObject_sGetDBProp(enum DboBaseObject::ObjectTypeT nObjType, CString const & csName, DboState & status);

class DboDBPropsIter
{
public:
/// @param status DboState &
/// @return DBProp
DBProp NextDBProp(DboState & status);

/// @param status DboState &
/// @return DBProp
DBProp Next(DboState & status);

};

class DboUserPropsIter
{
public:
/// @param status DboState &
/// @return DboUserProp
DboUserProp NextUserProp(DboState & status);

/// @param status DboState &
/// @return DboUserProp
DboUserProp Next(DboState & status);

};

class DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param prop DbBaseProp *&
/// @return DboState
DboState NextEffectiveProp(DbBaseProp *& prop);

};

class TBaseDboDisplayPropsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboDisplayPropsIter
	: public TBaseDboDisplayPropsIter
{
public:
/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextProp(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboDisplayProp *&
/// @return unsigned long
unsigned long GetKey(DboDisplayProp *& pObject);

};

/// @param x DboBaseObject *
/// @return DboDeletedObject
DboDeletedObject DboBaseObjectToDboDeletedObject(DboBaseObject * x);

class DboDeletedObject
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboBaseObject
DboBaseObject GetParentObj();

};

class DboSession
{
public:
/// @param pObj DboBaseObject *
/// @param triggerName CString
/// @param propName char const *
/// @param propVal char const *
void CallTclAttributeTrigger(DboBaseObject * pObj, CString triggerName, char const * propName, char const * propVal);

/// @return short
short GetDataVersion();

/// @return short
short GetDesignDataVersion();

/// @return short
short GetDataRelease();

/// @return short
short GetInterfaceVersion();

/// @param Name CString &
/// @param status DboState &
/// @return DboDesign
DboDesign GetDesign(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboDesign
DboDesign GetDesignAndSchematics(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboDesign
DboDesign GetOpenDesign(CString & Name, DboState & status);

/// @param designs DboDesignList &
/// @param status DboState &
void GetOpenDesigns(DboDesignList & designs, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboLib
DboLib GetLib(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboLib
DboLib GetLibAndSchematics(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboLib
DboLib GetOpenLib(CString & Name, DboState & status);

/// @param lib DboLib *
/// @param status DboState &
/// @return int
int IsLibPersistent(DboLib * lib, DboState & status);

/// @param design DboDesign *
/// @param status DboState &
/// @return int
int IsDesignPersistent(DboDesign * design, DboState & status);

/// @param strName CString const &
/// @param nType int
/// @return DboOccurrence
DboOccurrence GetOccByCanonicalName(CString const & strName, int nType);

/// @param nIndex int
/// @param status DboState &
/// @return CString
CString GetStringPtrFromIndex(int nIndex, DboState & status);

/// @param str CString const &
/// @param status DboState &
/// @return int
int GetIndexForString(CString const & str, DboState & status);

/// @return DboDesign
DboDesign GetActiveDesign();

/// @return FlatNetNamingStrategyT
FlatNetNamingStrategyT GetFlatNetNamingStrategy();

/// @return bool
bool IsFlatNetModificationRegistrationActive();

/// @return int
int IsObjLocked();

/// @param status DboState &
/// @return DboSessionDesignsIter
DboSessionDesignsIter NewDesignsIter(DboState & status);

/// @param status DboState &
/// @return DboSessionLibsIter
DboSessionLibsIter NewLibsIter(DboState & status);

/// @param pStrategy enum FlatNetNamingStrategyT
void SetFlatNetNamingStrategy(enum FlatNetNamingStrategyT pStrategy);

/// @param Name CString &
/// @param status DboState &
/// @return DboLib
DboLib CreateLib(CString & Name, DboState & status);

/// @param lib DboLib *
/// @return DboState
DboState SaveLib(DboLib * lib);

/// @param lib DboLib *
/// @param name CString &
/// @param Replace int
/// @return DboState
DboState SaveLibAs(DboLib * lib, CString & name, int Replace=0);

/// @param lib DboLib *
/// @param name CString &
/// @return DboState
DboState SaveLibAs(DboLib * lib, CString & name);

/// @param lib DboLib *
/// @param nRelease short
/// @param nVersion short
/// @param name CString &
/// @param Replace int
/// @return DboState
DboState SaveLibAs(DboLib * lib, short nRelease, short nVersion, CString & name, int Replace=0);

/// @param lib DboLib *
/// @param nRelease short
/// @param nVersion short
/// @param name CString &
/// @return DboState
DboState SaveLibAs(DboLib * lib, short nRelease, short nVersion, CString & name);

/// @param status DboState &
/// @param Name CString &
/// @param RootName CString &
/// @param RootType enum DboBaseObject::ObjectTypeT
/// @return DboDesign
DboDesign CreateDesign(DboState & status, CString & Name, CString & RootName, enum DboBaseObject::ObjectTypeT RootType=SCHEMATIC);

/// @param status DboState &
/// @param Name CString &
/// @param RootName CString &
/// @return DboDesign
DboDesign CreateDesign(DboState & status, CString & Name, CString & RootName);

/// @param Name CString &
/// @param status DboState &
/// @return DboDesign
DboDesign CreateDesign(CString & Name, DboState & status);

/// @param lib DboLib *
/// @return DboState
DboState MarkAllLibForSave(DboLib * lib);

/// @param lib DboLib *
/// @param name CString &
/// @return DboState
DboState CopyLibAll(DboLib * lib, CString & name);

/// @param design DboDesign *
/// @return DboState
DboState SaveDesign(DboDesign * design);

/// @param design DboDesign *
/// @param name CString &
/// @param Replace int
/// @return DboState
DboState SaveDesignAs(DboDesign * design, CString & name, int Replace=0);

/// @param design DboDesign *
/// @param name CString &
/// @return DboState
DboState SaveDesignAs(DboDesign * design, CString & name);

/// @param design DboDesign *
/// @param nRelease short
/// @param nVersion short
/// @param name CString &
/// @param Replace int
/// @return DboState
DboState SaveDesignAs(DboDesign * design, short nRelease, short nVersion, CString & name, int Replace=0);

/// @param design DboDesign *
/// @param nRelease short
/// @param nVersion short
/// @param name CString &
/// @return DboState
DboState SaveDesignAs(DboDesign * design, short nRelease, short nVersion, CString & name);

/// @param lib DboLib *
/// @return DboState
DboState RemoveLib(DboLib * lib);

/// @param design DboDesign *
/// @return DboState
DboState RemoveDesign(DboDesign * design);

/// @param pDsn DboDesign *
/// @param pDesList std::vector< DboDesign * > &
/// @return bool
bool FindExternalDesignsToBeRemoved(DboDesign * pDsn, std::vector< DboDesign * > & pDesList);

};

/// @param pObj DboBaseObject *
/// @param triggerName CString
/// @param propName char const *
/// @param propVal char const *
void DboSession_CallTclAttributeTrigger(DboBaseObject * pObj, CString triggerName, char const * propName, char const * propVal);

class TBaseDboSessionLibsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSessionLibsIter
	: public TBaseDboSessionLibsIter
{
public:
/// @param status DboState &
/// @return DboLib
DboLib NextLib(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboLib *&
/// @return unsigned long
unsigned long GetKey(DboLib *& pObject);

};

class TBaseDboSessionDesignsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSessionDesignsIter
	: public TBaseDboSessionDesignsIter
{
public:
/// @param status DboState &
/// @return DboDesign
DboDesign NextDesign(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboDesign *&
/// @return unsigned long
unsigned long GetKey(DboDesign *& pObject);

};

class DbBaseProp
{
public:
/// @param Name CString &
/// @return DboState
DboState GetName(CString & Name);

/// @param status DboState &
/// @return ValueType
ValueType GetType(DboState & status);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @param bFromProp int
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value, int bFromProp=0);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value);

/// @return int
int IsEditable();

/// @return int
int IsDeletable();

/// @return int
int IsCurrent();

/// @return int
int GetTransactionCount();

/// @return DbBaseProp
DbBaseProp GetPrevState();

/// @return DbBaseProp
DbBaseProp GetNextState();

/// @return DbBaseProp
DbBaseProp GetCurrentObject();

/// @param bVal int
void SetCurrent(int bVal);

void ResetObject();

/// @param count int
void SetTransactionCount(int count);

};

/// @param x DbBaseProp *
/// @return DbDelProp
DbDelProp DbBasePropToDbDelProp(DbBaseProp * x);

class DbDelProp
	: public DbBaseProp
{
public:
/// @param Name CString &
/// @return DboState
DboState GetName(CString & Name);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @param bFromProp int
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value, int bFromProp=0);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value);

/// @param status DboState &
/// @return ValueType
ValueType GetType(DboState & status);

/// @return int
int IsEditable();

/// @return int
int IsDeletable();

};

/// @param x DbBaseProp *
/// @return DboUserProp
DboUserProp DbBasePropToDboUserProp(DbBaseProp * x);

class DboUserProp
	: public DbBaseProp
{
public:
/// @return DboBaseObject
DboBaseObject GetOwner();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param value CString &
/// @param bFromProp int
/// @param bSetFlag int
/// @return DboState
DboState GetStringValue(CString & value, int bFromProp, int bSetFlag);

/// @param value CString &
/// @param bFromProp int
/// @return DboState
DboState GetStringValue(CString & value, int bFromProp=0);

/// @param value CString &
/// @return DboState
DboState GetStringValue(CString & value);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @param bFromProp int
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value, int bFromProp=0);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value);

/// @param status DboState &
/// @return ValueType
ValueType GetType(DboState & status);

/// @return int
int IsEditable();

/// @return DboUserProp
DboUserProp GetNext();

/// @return int
int IsDeletable();

/// @return int
int IsDeletable();

/// @param val DboValue &
/// @param bFromProp int
/// @return DboState
DboState SetValue(DboValue & val, int bFromProp=0);

/// @param val DboValue &
/// @return DboState
DboState SetValue(DboValue & val);

/// @param val CString const &
/// @param bFromProp int
/// @return DboState
DboState SetStringValue(CString const & val, int bFromProp=0);

/// @param val CString const &
/// @return DboState
DboState SetStringValue(CString const & val);

/// @param val CString const &
/// @return DboState
DboState ShadowSetStringValue(CString const & val);

/// @return DboState
DboState DeleteValue();

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

};

/// @param x DboBaseObject *
/// @return DboLib
DboLib DboBaseObjectToDboLib(DboBaseObject * x);

class DboLib
	: public DboBaseObject
{
public:
/// @param time time_t
/// @return CString
CString TimeToString(time_t time);

/// @return int
int IsAutoSaving();

/// @return int
int IsAutoBackupOn();

/// @return int
int IsCheckOn();

/// @return int
int IsCorrectOn();

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetOldName(CString & name);

/// @return DboSession
DboSession GetOwner();

/// @param status DboState &
/// @return time_t
time_t GetModifyTime(DboState & status);

/// @param pObj DboLibObject *
/// @param status DboState &
/// @return time_t
time_t GetModifyTime(DboLibObject * pObj, DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetCreateTime(DboState & status);

/// @param pObj DboLibObject *
/// @param status DboState &
/// @return time_t
time_t GetCreateTime(DboLibObject * pObj, DboState & status);

/// @param status DboState &
/// @return int
int IsModified(DboState & status);

/// @param status DboState &
/// @return int
int IsModifiedSinceAutoSave(DboState & status);

/// @param status DboState &
/// @return int
int IsModifiedSinceLastAutoBackup(DboState & status);

/// @param status DboState &
/// @return PageRec
PageRec GetDefaultPageRec(DboState & status);

/// @param status DboState &
/// @return int
int IsPersistent(DboState & status);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return int
int IsPersistent(DboBaseObject * pObj, DboState & status);

/// @param objName CString
/// @param nType enum DboBaseObject::ObjectTypeT
/// @param status DboState &
/// @return time_t
time_t GetModifiedTime(CString objName, enum DboBaseObject::ObjectTypeT nType, DboState & status);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return int
int CacheIsOutOfDate(DboBaseObject * pObj, DboState & status);

/// @param nType enum DboBaseObject::ObjectTypeT
/// @param SourceLibName CString &
/// @param SourceName CString &
/// @param status DboState &
/// @return int
int CacheIsOutOfDate(enum DboBaseObject::ObjectTypeT nType, CString & SourceLibName, CString & SourceName, DboState & status);

/// @param nType enum DboBaseObject::ObjectTypeT
/// @param SourceLibName CString &
/// @param objName CString
/// @param status DboState &
/// @return time_t
time_t GetCachedTime(enum DboBaseObject::ObjectTypeT nType, CString & SourceLibName, CString objName, DboState & status);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return int
int IsObjectModified(DboBaseObject * pObj, DboState & status);

/// @param name CString &
/// @param NormalizedName CString &
/// @param bMemorize bool
/// @return DboState
DboState sGetNormalizedName(CString & name, CString & NormalizedName, bool bMemorize=False);

/// @param name CString &
/// @param NormalizedName CString &
/// @return DboState
DboState sGetNormalizedName(CString & name, CString & NormalizedName);

/// @param name CString &
/// @param status DboState &
/// @return DboLibPart
DboLibPart GetPart(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboCell
DboCell GetCell(CString & name, DboState & status);

/// @param part DboLibPart *
/// @param status DboState &
/// @return time_t
time_t GetPartCreateTime(DboLibPart * part, DboState & status);

/// @param part DboLibPart *
/// @param status DboState &
/// @return time_t
time_t GetPartModifyTime(DboLibPart * part, DboState & status);

/// @param cell DboCell *
/// @param status DboState &
/// @return time_t
time_t GetCellCreateTime(DboCell * cell, DboState & status);

/// @param cell DboCell *
/// @param status DboState &
/// @return time_t
time_t GetCellModifyTime(DboCell * cell, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int SymbolExists(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int IsSymbolInMemory(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSymbol
DboSymbol GetSymbol(CString & name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboERCSymbol
DboERCSymbol GetERCSymbol(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboBookMarkSymbol
DboBookMarkSymbol GetBookMarkSymbol(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboGlobalSymbol
DboGlobalSymbol GetGlobalSymbol(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboPortSymbol
DboPortSymbol GetPortSymbol(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboOffPageSymbol
DboOffPageSymbol GetOffPageSymbol(CString & Name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboTitleBlockSymbol
DboTitleBlockSymbol GetTitleBlockSymbol(CString & name, DboState & status);

/// @param symbol DboSymbol *
/// @param status DboState &
/// @return time_t
time_t GetSymbolCreateTime(DboSymbol * symbol, DboState & status);

/// @param symbol DboSymbol *
/// @param status DboState &
/// @return time_t
time_t GetSymbolModifyTime(DboSymbol * symbol, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboView
DboView GetView(CString & name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboExternalView
DboExternalView GetExternalView(CString & Name, DboState & status);

/// @param view DboView *
/// @param status DboState &
/// @return time_t
time_t GetViewCreateTime(DboView * view, DboState & status);

/// @param view DboView *
/// @param status DboState &
/// @return time_t
time_t GetViewModifyTime(DboView * view, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboGraphicObject
DboGraphicObject GetGraphicObject(CString & name, DboState & status);

/// @param graphic DboGraphicObject *
/// @param status DboState &
/// @return time_t
time_t GetGraphicObjectCreateTime(DboGraphicObject * graphic, DboState & status);

/// @param graphic DboGraphicObject *
/// @param status DboState &
/// @return time_t
time_t GetGraphicObjectModifyTime(DboGraphicObject * graphic, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int PackageExists(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int IsPackageInMemory(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboPackage
DboPackage GetPackage(CString & name, DboState & status);

/// @param pPackage DboPackage *
/// @param status DboState &
/// @return time_t
time_t GetPackageCreateTime(DboPackage * pPackage, DboState & status);

/// @param pPackage DboPackage *
/// @param status DboState &
/// @return time_t
time_t GetPackageModifyTime(DboPackage * pPackage, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboExportBlock
DboExportBlock GetExportBlock(CString & name, DboState & status);

/// @param exportBlock DboExportBlock *
/// @param status DboState &
/// @return time_t
time_t GetExportBlockCreateTime(DboExportBlock * exportBlock, DboState & status);

/// @param exportBlock DboExportBlock *
/// @param status DboState &
/// @return time_t
time_t GetExportBlockModifyTime(DboExportBlock * exportBlock, DboState & status);

/// @param status DboState &
/// @return int
int GetDefaultPlacedInstIsPrimitive(DboState & status);

/// @param status DboState &
/// @return int
int GetDefaultDrawnInstIsPrimitive(DboState & status);

/// @return int
int ConvertRequired();

/// @param pszFormatString char const *
/// @param name CString &
void GetTempViewName(char const * pszFormatString, CString & name);

/// @param pszFormatString char const *
/// @param name CString &
void GetTempPackageName(char const * pszFormatString, CString & name);

/// @param objName CString &
/// @param pCachedObj DboLibObject *
/// @param libName CString &
/// @return DboState
DboState GetSourceLibName(CString & objName, DboLibObject * pCachedObj, CString & libName);

/// @param SourceLibName CString &
/// @param SourcePartName CString &
/// @return DboLibPart
DboLibPart GetCachedPart(CString & SourceLibName, CString & SourcePartName);

/// @param SourceLibName CString &
/// @param SourceCellName CString &
/// @return DboCell
DboCell GetCachedCell(CString & SourceLibName, CString & SourceCellName);

/// @param SourceLibName CString &
/// @param SourceSymbolName CString &
/// @param type enum DboBaseObject::ObjectTypeT
/// @return DboSymbol
DboSymbol GetCachedSymbol(CString & SourceLibName, CString & SourceSymbolName, enum DboBaseObject::ObjectTypeT type);

/// @param SourceLibName CString &
/// @param SourcePackageName CString &
/// @return DboPackage
DboPackage GetCachedPackage(CString & SourceLibName, CString & SourcePackageName);

/// @param SourceLibName CString &
/// @param SourceGraphicName CString &
/// @param type enum DboBaseObject::ObjectTypeT
/// @return DboGraphicObject
DboGraphicObject GetCachedGraphicObject(CString & SourceLibName, CString & SourceGraphicName, enum DboBaseObject::ObjectTypeT type);

/// @param nFontId int
/// @return LOGFONT
LOGFONT GetFont(int nFontId);

/// @param font LOGFONT &
/// @return int
int GetFontId(LOGFONT & font);

/// @return short
short GetDataRelease();

/// @return short
short GetDataVersion();

/// @return short
short GetSaveAsRelease();

/// @return short
short GetSaveAsVersion();

/// @param strVersion CString &
void GetDataFormatVersion(CString & strVersion);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @param pCorrect int
void SetCorrectFlag(int pCorrect);

/// @param pCheck int
void SetCheckFlag(int pCheck);

/// @return DboState
DboState MarkModified();

/// @param pObj DboLibObject *
void MarkModified(DboLibObject * pObj);

/// @param pPart DboLibPart *
void MarkModified(DboLibPart * pPart);

/// @param pCell DboCell *
void MarkModified(DboCell * pCell);

/// @param pPackage DboPackage *
void MarkModified(DboPackage * pPackage);

/// @param pSymbol DboSymbol *
void MarkModified(DboSymbol * pSymbol);

/// @param pGraphic DboGraphicObject *
void MarkModified(DboGraphicObject * pGraphic);

/// @param pView DboView *
void MarkModified(DboView * pView);

/// @param pBlock DboExportBlock *
void MarkModified(DboExportBlock * pBlock);

/// @param strName CString &
/// @param pDir DboDirectory *
void MarkModified(CString & strName, DboDirectory * pDir);

void ClearModified();

/// @param pObj DboLibObject *
void ClearModified(DboLibObject * pObj);

/// @param pDboPackage DboPackage *
void ClearModifiedAll(DboPackage * pDboPackage);

/// @param mode enum IterDefs::IterModeT
/// @return DboLibCachesIter
DboLibCachesIter NewCachesIter(enum IterDefs::IterModeT mode=ALL);

/// @return DboLibCachesIter
DboLibCachesIter NewCachesIter();

/// @param status DboState &
/// @return DboLibChangedObjectsIter
DboLibChangedObjectsIter NewChangedObjectsIter(DboState & status);

/// @param status DboState &
/// @return DboLibUnusedCacheEntriesIter
DboLibUnusedCacheEntriesIter NewUnusedCacheEntriesIter(DboState & status);

/// @param status DboState &
/// @return DboLibPartsIter
DboLibPartsIter NewPartsIter(DboState & status);

/// @param status DboState &
/// @return DboLibPartNamesIter
DboLibPartNamesIter NewPartNamesIter(DboState & status);

/// @param status DboState &
/// @return DboLibCellsIter
DboLibCellsIter NewCellsIter(DboState & status);

/// @param status DboState &
/// @return DboLibCellNamesIter
DboLibCellNamesIter NewCellNamesIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboLibSymbolsIter
DboLibSymbolsIter NewSymbolsIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboLibSymbolsIter
DboLibSymbolsIter NewSymbolsIter(DboState & status);

/// @param status DboState &
/// @return DboLibSymbolNamesIter
DboLibSymbolNamesIter NewSymbolNamesIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboLibViewsIter
DboLibViewsIter NewViewsIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboLibViewsIter
DboLibViewsIter NewViewsIter(DboState & status);

/// @param status DboState &
/// @return DboLibViewNamesIter
DboLibViewNamesIter NewViewNamesIter(DboState & status);

/// @param status DboState &
/// @return DboLibGraphicsIter
DboLibGraphicsIter NewGraphicObjectsIter(DboState & status);

/// @param status DboState &
/// @return DboLibGraphicNamesIter
DboLibGraphicNamesIter NewGraphicNamesIter(DboState & status);

/// @param status DboState &
/// @return DboLibPackagesIter
DboLibPackagesIter NewPackagesIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboLibPackageNamesIter
DboLibPackageNamesIter NewPackageNamesIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboLibPackageNamesIter
DboLibPackageNamesIter NewPackageNamesIter(DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboLibPackageAliasesIter
DboLibPackageAliasesIter NewPackageAliasesIter(CString & name, DboState & status);

/// @param status DboState &
/// @return DboLibExportBlocksIter
DboLibExportBlocksIter NewExportBlocksIter(DboState & status);

/// @param status DboState &
/// @return DboLibExportBlockNamesIter
DboLibExportBlockNamesIter NewExportBlockNamesIter(DboState & status);

/// @param font LOGFONT &
/// @return int
int SetFont(LOGFONT & font);

/// @return DboState
DboState FixupMismatchedLibPartLookupNames();

/// @param bAutoSaving int
void SetIsAutoSaving(int bAutoSaving=1);

void SetIsAutoSaving();

/// @param bFlag bool
void SetIsBundleSaveInProgress(bool bFlag=True);

void SetIsBundleSaveInProgress();

/// @param bAutoBackup int
void SetIsAutoBackupOn(int bAutoBackup=1);

void SetIsAutoBackupOn();

/// @param sourceLibName CString &
/// @param sourceObjName CString &
/// @param nObjType enum DboBaseObject::ObjectTypeT
/// @param bUpdate int
/// @return DboState
DboState UpdateCache(CString & sourceLibName, CString & sourceObjName, enum DboBaseObject::ObjectTypeT nObjType, int bUpdate=1);

/// @param sourceLibName CString &
/// @param sourceObjName CString &
/// @param nObjType enum DboBaseObject::ObjectTypeT
/// @return DboState
DboState UpdateCache(CString & sourceLibName, CString & sourceObjName, enum DboBaseObject::ObjectTypeT nObjType);

/// @param OldPackageOrSymbolName CString
/// @param OldLibName CString
/// @param NewName CString
/// @param NewLibName CString
/// @param bUpdateCache int
/// @param bPreserverefDes int
/// @return DboState
DboState ReplaceCache(CString OldPackageOrSymbolName, CString OldLibName, CString NewName, CString NewLibName, int bUpdateCache=0, int bPreserverefDes=0);

/// @param OldPackageOrSymbolName CString
/// @param OldLibName CString
/// @param NewName CString
/// @param NewLibName CString
/// @param bUpdateCache int
/// @return DboState
DboState ReplaceCache(CString OldPackageOrSymbolName, CString OldLibName, CString NewName, CString NewLibName, int bUpdateCache=0);

/// @param OldPackageOrSymbolName CString
/// @param OldLibName CString
/// @param NewName CString
/// @param NewLibName CString
/// @return DboState
DboState ReplaceCache(CString OldPackageOrSymbolName, CString OldLibName, CString NewName, CString NewLibName);

/// @param name CString &
void NewUntitledName(CString & name);

/// @return DboState
DboState AbortTransactions();

/// @param PackageNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemovePartDirName(CString PackageNameToBeRemoved);

/// @param part DboLibPart *
/// @return DboState
DboState SavePart(DboLibPart * part);

/// @param pPackage DboPackage *
/// @return DboState
DboState SavePackageAll(DboPackage * pPackage);

/// @param pLibFile CFile *
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject CopyCacheFromFile(CFile * pLibFile, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboPinShapeSymbol
DboPinShapeSymbol GetPinShapeSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return IStorage
IStorage GetUserStorage(CString & name, DboState & status);

/// @param nFontType enum DboLib::DefaultFontType
/// @param status DboState &
/// @return LOGFONT
LOGFONT GetDefaultFont(enum DboLib::DefaultFontType nFontType, DboState & status);

/// @param nNum int
/// @param field CString &
/// @return DboState
DboState GetPartFieldMapping(int nNum, CString & field);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t sGetModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t sGetCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetDefaultPlacedInstIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetDefaultDrawnInstIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPinNameFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPinNumberFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPartReferenceFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultNoConnectFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultERCFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultBookMarkFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPowerFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultOffPageConnectorFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPortFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPartValueFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPropertyFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultDrawnInstNameFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultAliasFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultCommentFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultTitleBlockFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultBorderFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultNetNameFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultStimulusSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPSpiceSourceSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPSpiceSimulationDirectiveSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultPSpiceABMSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultParameterFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultOptimizerFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetDefaultGraphicObjectFont(DboBaseObject * obj, DboState & status);

/// @param pszName char const *
/// @param pDir DboDirectory *
/// @return CString
CString sGetTempName(char const * pszName, DboDirectory * pDir);

/// @param pszName char const *
/// @param pDir DboDirectory *
/// @param nLength int
/// @return CString
CString sGetTempName(char const * pszName, DboDirectory * pDir, int nLength);

/// @return IStorage
IStorage GetLibStoragePtr();

/// @return int
int SizeOfLibTitle();

/// @return char
char LibTitle();

/// @param nIndex int
/// @param status DboState &
/// @return CString
CString GetStringPtrFromIndex(int nIndex, DboState & status);

/// @param str CString const &
/// @param status DboState &
/// @return int
int GetIndexForString(CString const & str, DboState & status);

/// @param name CString const &
/// @param choices CStringList &
/// @return DboState
DboState GetEffectivePropValueChoices(CString const & name, CStringList & choices);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetTimeFormat(DboBaseObject * obj, DboState & status);

void SetUpRevDialogBit();

void ClearUpRevDialogBit();

/// @return int
int IsUpRevDialogBitSet();

/// @param pszName char const *
/// @param BaseName CString &
/// @param Uniquifier CString &
/// @param Extension CString &
void sSplitName(char const * pszName, CString & BaseName, CString & Uniquifier, CString & Extension);

void DeleteLibStoragePtr();

/// @param name1 CString &
/// @param name2 CString &
/// @param status DboState &
/// @return int
int sEquivalentNames(CString & name1, CString & name2, DboState & status);

/// @param name CString &
/// @param NormalizedName CString &
/// @return DboState
DboState sGetNormalizedObjectName(CString & name, CString & NormalizedName);

/// @param normalizeName CString &
/// @param name CString &
/// @return DboState
DboState sGetUnNormalizedObjectName(CString & normalizeName, CString & name);

/// @param str CString const &
/// @param status DboState &
/// @return CString
CString AddStringToStringTable(CString const & str, DboState & status);

/// @param pDev DboDevice *
/// @param strLibName CString
/// @param cellName CString
/// @param status DboState &
/// @return DboCell
DboCell RegenerateMissingCell(DboDevice * pDev, CString strLibName, CString cellName, DboState & status);

/// @param obj DboBaseObject *
/// @param format CString &
/// @return DboState
DboState sSetTimeFormat(DboBaseObject * obj, CString & format);

/// @param name CString &
/// @param status DboState &
/// @return DboPackage
DboPackage NewPackage(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboCell
DboCell NewCell(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboLibPart
DboLibPart NewPart(CString & name, DboState & status);

/// @param pFile CFile *
/// @param status DboState &
/// @param otType enum DboBaseObject::ObjectTypeT
void SkipSymbolOnFile(CFile * pFile, DboState & status, enum DboBaseObject::ObjectTypeT otType=NULL_OBJECT);

/// @param pFile CFile *
/// @param status DboState &
void SkipSymbolOnFile(CFile * pFile, DboState & status);

/// @param pFile CFile *
/// @param status DboState &
/// @param otType enum DboBaseObject::ObjectTypeT
void SkipGraphicObjectOnFile(CFile * pFile, DboState & status, enum DboBaseObject::ObjectTypeT otType=NULL_OBJECT);

/// @param pFile CFile *
/// @param status DboState &
void SkipGraphicObjectOnFile(CFile * pFile, DboState & status);

/// @param pFile CFile *
/// @param status DboState &
void SkipObjectOnFile(CFile * pFile, DboState & status);

/// @param path CString &
/// @return DboState
DboState AutoSave(CString & path);

/// @param pathname CString &
/// @return DboState
DboState AutoBackup(CString & pathname);

/// @param nRelease short &
/// @param nVersion short &
/// @return int
int SaveAsRequired(short & nRelease, short & nVersion);

/// @param pShareStorage IStorage *
/// @return DboState
DboState SetLibStoragePtr(IStorage * pShareStorage);

/// @param pPackage DboPackage *
void ClearSaveFlag(DboPackage * pPackage);

/// @param pObj DboBaseObject *
/// @param newName CString &
/// @return DboState
DboState RenameObject(DboBaseObject * pObj, CString & newName);

void RemoveBundles();

/// @param bundleName CString
/// @param SourceLibName CString
/// @return int
int IsBundleUsed(CString bundleName, CString SourceLibName);

/// @return int
int OnChangeBundleDefinition();

/// @param pObj DboBaseObject *
/// @return DboState
DboState SaveObject(DboBaseObject * pObj);

/// @return DboState
DboState CleanupCache();

/// @param part DboLibPart *
/// @return DboState
DboState DeletePart(DboLibPart * part);

/// @param part DboLibPart *
/// @return DboState
DboState RemovePart(DboLibPart * part);

/// @param part DboLibPart *
/// @param newName CString &
/// @param status DboState &
/// @return DboLibPart
DboLibPart CopyPart(DboLibPart * part, CString & newName, DboState & status);

/// @param cell DboCell *
/// @return DboState
DboState SaveCell(DboCell * cell);

/// @param cell DboCell *
/// @return DboState
DboState DeleteCell(DboCell * cell);

/// @param cell DboCell *
/// @return DboState
DboState RemoveCell(DboCell * cell);

/// @param cell DboCell *
/// @param newName CString &
/// @param status DboState &
/// @return DboCell
DboCell CopyCell(DboCell * cell, CString & newName, DboState & status);

/// @param LibObje DboLibObject *
/// @param newName CString &
/// @param status DboState &
/// @return DboLibObject
DboLibObject CopyLibObject(DboLibObject * LibObje, CString & newName, DboState & status);

/// @param libObj DboLibObject *
/// @return DboState
DboState DeleteLibObject(DboLibObject * libObj);

/// @param pFile CFile *
/// @param status DboState &
/// @param otType enum DboBaseObject::ObjectTypeT
/// @param bDefaultName int
/// @return DboBaseObject
DboBaseObject CopySymbolFromFile(CFile * pFile, DboState & status, enum DboBaseObject::ObjectTypeT otType=NULL_OBJECT, int bDefaultName=0);

/// @param pFile CFile *
/// @param status DboState &
/// @param otType enum DboBaseObject::ObjectTypeT
/// @return DboBaseObject
DboBaseObject CopySymbolFromFile(CFile * pFile, DboState & status, enum DboBaseObject::ObjectTypeT otType=NULL_OBJECT);

/// @param pFile CFile *
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject CopySymbolFromFile(CFile * pFile, DboState & status);

/// @param pFile CFile *
/// @param status DboState &
/// @param otType enum DboBaseObject::ObjectTypeT
/// @param bDefaultName int
/// @return DboBaseObject
DboBaseObject CopyGraphicObjectFromFile(CFile * pFile, DboState & status, enum DboBaseObject::ObjectTypeT otType=NULL_OBJECT, int bDefaultName=0);

/// @param pFile CFile *
/// @param status DboState &
/// @param otType enum DboBaseObject::ObjectTypeT
/// @return DboBaseObject
DboBaseObject CopyGraphicObjectFromFile(CFile * pFile, DboState & status, enum DboBaseObject::ObjectTypeT otType=NULL_OBJECT);

/// @param pFile CFile *
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject CopyGraphicObjectFromFile(CFile * pFile, DboState & status);

/// @param pFile CFile *
/// @param status DboState &
/// @param bCopyName int
/// @return DboBaseObject
DboBaseObject CopyObjectFromFile(CFile * pFile, DboState & status, int bCopyName=1);

/// @param pFile CFile *
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject CopyObjectFromFile(CFile * pFile, DboState & status);

/// @param source DboBaseObject *
/// @param SourceLibName CString &
/// @param SourcePackageName CString &
/// @param status DboState &
/// @return DboPackage
DboPackage CopyPackageAllToCache(DboBaseObject * source, CString & SourceLibName, CString & SourcePackageName, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboERCSymbol
DboERCSymbol NewERCSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboBookMarkSymbol
DboBookMarkSymbol NewBookMarkSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboGlobalSymbol
DboGlobalSymbol NewGlobalSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboPortSymbol
DboPortSymbol NewPortSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboPinShapeSymbol
DboPinShapeSymbol NewPinShapeSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboOffPageSymbol
DboOffPageSymbol NewOffPageSymbol(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboTitleBlockSymbol
DboTitleBlockSymbol NewTitleBlockSymbol(CString & name, DboState & status);

/// @param symbol DboSymbol *
/// @return DboState
DboState SaveSymbol(DboSymbol * symbol);

/// @param pSymbol DboERCSymbol *
/// @return DboState
DboState SaveERCSymbol(DboERCSymbol * pSymbol);

/// @param pSymbol DboBookMarkSymbol *
/// @return DboState
DboState SaveBookMarkSymbol(DboBookMarkSymbol * pSymbol);

/// @param global DboGlobalSymbol *
/// @return DboState
DboState SaveGlobalSymbol(DboGlobalSymbol * global);

/// @param port DboPortSymbol *
/// @return DboState
DboState SavePortSymbol(DboPortSymbol * port);

/// @param pinShape DboPinShapeSymbol *
/// @return DboState
DboState SavePinShapeSymbol(DboPinShapeSymbol * pinShape);

/// @param offpage DboOffPageSymbol *
/// @return DboState
DboState SaveOffPageSymbol(DboOffPageSymbol * offpage);

/// @param titleblock DboTitleBlockSymbol *
/// @return DboState
DboState SaveTitleBlockSymbol(DboTitleBlockSymbol * titleblock);

/// @param symbol DboSymbol *
/// @return DboState
DboState DeleteSymbol(DboSymbol * symbol);

/// @param symbol DboSymbol *
/// @return DboState
DboState RemoveSymbol(DboSymbol * symbol);

/// @param symbol DboSymbol *
/// @param newName CString &
/// @param status DboState &
/// @return DboSymbol
DboSymbol CopySymbol(DboSymbol * symbol, CString & newName, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSchematic
DboSchematic NewSchematic(CString & name, DboState & status);

/// @param name CString &
/// @param type CString &
/// @param FileName CString &
/// @param status DboState &
/// @return DboExternalView
DboExternalView NewExternalView(CString & name, CString & type, CString & FileName, DboState & status);

/// @param view DboView *
/// @return DboState
DboState SaveView(DboView * view);

/// @param schematic DboSchematic *
/// @return DboState
DboState SaveSchematic(DboSchematic * schematic);

/// @param view DboExternalView *
/// @return DboState
DboState SaveExternalView(DboExternalView * view);

/// @param view DboView *
/// @return DboState
DboState DeleteView(DboView * view);

/// @param view DboView *
/// @return DboState
DboState RemoveView(DboView * view);

/// @param view DboView *
/// @param newName CString &
/// @param status DboState &
/// @return DboView
DboView CopyView(DboView * view, CString & newName, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboGraphicObject
DboGraphicObject NewGraphicObject(CString & name, DboState & status);

/// @param graphic DboGraphicObject *
/// @return DboState
DboState SaveGraphicObject(DboGraphicObject * graphic);

/// @param graphic DboGraphicObject *
/// @return DboState
DboState DeleteGraphicObject(DboGraphicObject * graphic);

/// @param graphic DboGraphicObject *
/// @return DboState
DboState RemoveGraphicObject(DboGraphicObject * graphic);

/// @param graphic DboGraphicObject *
/// @param newName CString &
/// @param status DboState &
/// @return DboGraphicObject
DboGraphicObject CopyGraphicObject(DboGraphicObject * graphic, CString & newName, DboState & status);

/// @param pPackage DboPackage *
/// @param alias CString &
/// @return DboState
DboState NewPackageAlias(DboPackage * pPackage, CString & alias);

/// @param pPackage DboPackage *
/// @param alias CString &
/// @return DboState
DboState DeletePackageAlias(DboPackage * pPackage, CString & alias);

/// @param strPackageName CString &
/// @param alias CString &
/// @return DboState
DboState DeletePackageAlias(CString & strPackageName, CString & alias);

/// @param pPackage DboPackage *
/// @return DboState
DboState SavePackage(DboPackage * pPackage);

/// @param pPackage DboPackage *
/// @return DboState
DboState DeletePackage(DboPackage * pPackage);

/// @param name CString &
/// @return DboState
DboState DeletePackage(CString & name);

/// @param pPackage DboPackage *
/// @return DboState
DboState RemovePackage(DboPackage * pPackage);

/// @param pPackage DboPackage *
/// @param newName CString &
/// @param status DboState &
/// @return DboPackage
DboPackage CopyPackage(DboPackage * pPackage, CString & newName, DboState & status);

/// @param pPackage DboPackage *
/// @param newName CString &
/// @param status DboState &
/// @return DboPackage
DboPackage CopyPackageAll(DboPackage * pPackage, CString & newName, DboState & status);

/// @param PackageNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemoveViewDirName(CString PackageNameToBeRemoved);

/// @param PartNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemovePartsDirName(CString PartNameToBeRemoved);

/// @param CellNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemoveCellDirName(CString CellNameToBeRemoved);

/// @param SymbolNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemoveSymbolDirName(CString SymbolNameToBeRemoved);

/// @param SymbolNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemoveGraphicDirName(CString SymbolNameToBeRemoved);

/// @param SymbolNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemoveExportBlockDirName(CString SymbolNameToBeRemoved);

/// @param AliasNameToBeRemoved CString
/// @return DboState
DboState ExplicitlyRemoveAliasName(CString AliasNameToBeRemoved);

/// @param packageName char const *
/// @return DboState
DboState ExplicitlyAddPackageDirName(char const * packageName);

/// @param partDir char const *
/// @return DboState
DboState ExplicitlyAddPartDirName(char const * partDir);

/// @param cellDir char const *
/// @return DboState
DboState ExplicitlyAddCellDirName(char const * cellDir);

/// @param designName char const *
/// @param storageName char const *
/// @param arg2 std::vector< std::string > &
/// @param arg3 std::vector< std::string > &
/// @return DboState
DboState GetOrStorageStream(char const * designName, char const * storageName, std::vector< std::string > & arg2, std::vector< std::string > & arg3);

/// @param designName char const *
/// @param storageName char const *
/// @param arg2 std::vector< std::string > &
/// @return DboState
DboState RemoveOrStorageStream(char const * designName, char const * storageName, std::vector< std::string > & arg2);

/// @param designName char const *
/// @param storageName char const *
/// @param streamName std::vector< std::string > &
/// @return DboState
DboState RenameOrStorageStream(char const * designName, char const * storageName, std::vector< std::string > & streamName);

/// @param pLib DboLib *
/// @param pDsnStorage IStorage *
/// @return DboState
DboState ReadForExistenceOfBundleMapData(DboLib * pLib, IStorage * pDsnStorage);

/// @param pDes DboDesign *
/// @param pDsnStorage IStorage *
/// @return DboState
DboState ReadForExistenceOfBundleMapData(DboDesign * pDes, IStorage * pDsnStorage);

/// @param bit int
/// @param bOn bool
/// @return bool
bool SetBit(int bit, bool bOn);

/// @param objName CString &
/// @param pCachedObj DboLibObject *
/// @param libName CString &
/// @param newLibName CString &
/// @return DboState
DboState ReplaceSourceLibName(CString & objName, DboLibObject * pCachedObj, CString & libName, CString & newLibName);

/// @return DboState
DboState CorrectCacheEntry();

/// @return bool
bool IsOccRetainAndRemapMode();

/// @param pRelease short
void SetDataRelease(short pRelease);

/// @param pVersion short
void SetDataVersion(short pVersion);

/// @param bit int
/// @return bool
bool IsBitSet(int bit);

/// @return int
int IsRemoveBundleSelected();

/// @return bool
bool isBundleTemplateExists();

/// @return DboBundleTemplateMap
DboBundleTemplateMap GetBundleTemplateMap();

/// @param bundleName CString
/// @param srcLibName CString
/// @param owner DboBaseObject *
/// @return DboBundle
DboBundle GetBundleDef(CString bundleName, CString srcLibName="", DboBaseObject * owner=None);

/// @param bundleName CString
/// @param srcLibName CString
/// @return DboBundle
DboBundle GetBundleDef(CString bundleName, CString srcLibName="");

/// @param bundleName CString
/// @return DboBundle
DboBundle GetBundleDef(CString bundleName);

/// @param bundleName CString
/// @param pObj DboBaseObject *
/// @param pScope CString
/// @return bool
bool IsUnnamedBundle(CString bundleName, DboBaseObject * pObj, CString pScope="");

/// @param bundleName CString
/// @param pObj DboBaseObject *
/// @return bool
bool IsUnnamedBundle(CString bundleName, DboBaseObject * pObj);

/// @param pObject DboBaseObject *
/// @return DboBundleTemplateMap
DboBundleTemplateMap GetBundleTemplateMapForObject(DboBaseObject * pObject);

/// @return int
int GetBitFlag();

/// @param nType enum DboBaseObject::ObjectTypeT
/// @param SourceLibName CString &
/// @param SourceName CString &
/// @param status DboState &
/// @return int
int IsCacheTimeSameAsSource(enum DboBaseObject::ObjectTypeT nType, CString & SourceLibName, CString & SourceName, DboState & status);

};

/// @param name CString &
/// @param NormalizedName CString &
/// @param bMemorize bool
/// @return DboState
DboState sGetNormalizedName(CString & name, CString & NormalizedName, bool bMemorize=False);

/// @param name CString &
/// @param NormalizedName CString &
/// @return DboState
DboState DboLib_sGetNormalizedName(CString & name, CString & NormalizedName);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLib_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t DboLib_sGetModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t DboLib_sGetCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLib_sGetDefaultPlacedInstIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLib_sGetDefaultDrawnInstIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPinNameFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPinNumberFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPartReferenceFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultNoConnectFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultERCFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultBookMarkFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPowerFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultOffPageConnectorFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPortFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPartValueFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPropertyFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultDrawnInstNameFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultAliasFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultCommentFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultTitleBlockFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultBorderFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultNetNameFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultStimulusSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPSpiceSourceSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPSpiceSimulationDirectiveSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultPSpiceABMSymbolFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultParameterFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultOptimizerFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboLib_sGetDefaultGraphicObjectFont(DboBaseObject * obj, DboState & status);

/// @param pszName char const *
/// @param pDir DboDirectory *
/// @return CString
CString sGetTempName(char const * pszName, DboDirectory * pDir);

/// @param pszName char const *
/// @param pDir DboDirectory *
/// @param nLength int
/// @return CString
CString DboLib_sGetTempName(char const * pszName, DboDirectory * pDir, int nLength);

/// @return int
int DboLib_SizeOfLibTitle();

/// @return char
char DboLib_LibTitle();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLib_sGetTimeFormat(DboBaseObject * obj, DboState & status);

/// @param pszName char const *
/// @param BaseName CString &
/// @param Uniquifier CString &
/// @param Extension CString &
void DboLib_sSplitName(char const * pszName, CString & BaseName, CString & Uniquifier, CString & Extension);

/// @param name1 CString &
/// @param name2 CString &
/// @param status DboState &
/// @return int
int DboLib_sEquivalentNames(CString & name1, CString & name2, DboState & status);

/// @param name CString &
/// @param NormalizedName CString &
/// @return DboState
DboState DboLib_sGetNormalizedObjectName(CString & name, CString & NormalizedName);

/// @param normalizeName CString &
/// @param name CString &
/// @return DboState
DboState DboLib_sGetUnNormalizedObjectName(CString & normalizeName, CString & name);

/// @param obj DboBaseObject *
/// @param format CString &
/// @return DboState
DboState DboLib_sSetTimeFormat(DboBaseObject * obj, CString & format);

/// @param designName char const *
/// @param storageName char const *
/// @param arg2 std::vector< std::string > &
/// @param arg3 std::vector< std::string > &
/// @return DboState
DboState DboLib_GetOrStorageStream(char const * designName, char const * storageName, std::vector< std::string > & arg2, std::vector< std::string > & arg3);

/// @param designName char const *
/// @param storageName char const *
/// @param arg2 std::vector< std::string > &
/// @return DboState
DboState DboLib_RemoveOrStorageStream(char const * designName, char const * storageName, std::vector< std::string > & arg2);

/// @param designName char const *
/// @param storageName char const *
/// @param streamName std::vector< std::string > &
/// @return DboState
DboState DboLib_RenameOrStorageStream(char const * designName, char const * storageName, std::vector< std::string > & streamName);

/// @param pLib DboLib *
/// @param pDsnStorage IStorage *
/// @return DboState
DboState ReadForExistenceOfBundleMapData(DboLib * pLib, IStorage * pDsnStorage);

/// @param pDes DboDesign *
/// @param pDsnStorage IStorage *
/// @return DboState
DboState DboLib_ReadForExistenceOfBundleMapData(DboDesign * pDes, IStorage * pDsnStorage);

class TBaseDboLibPartsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibPartsIter
	: public TBaseDboLibPartsIter
{
public:
/// @param status DboState &
/// @return DboLibPart
DboLibPart NextPart(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboLibPart *&
/// @return unsigned long
unsigned long GetKey(DboLibPart *& pObject);

};

class TBaseDboLibUnusedCacheEntriesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibUnusedCacheEntriesIter
	: public TBaseDboLibUnusedCacheEntriesIter
{
public:
/// @param status DboState &
/// @return DboLibObject
DboLibObject NextUnusedEntry(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboLibObject *&
/// @return unsigned long
unsigned long GetKey(DboLibObject *& pObject);

};

class DboLibPartNamesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class TBaseDboLibCellsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibCellsIter
	: public TBaseDboLibCellsIter
{
public:
/// @param status DboState &
/// @return DboCell
DboCell NextCell(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboCell *&
/// @return unsigned long
unsigned long GetKey(DboCell *& pObject);

};

class DboLibCellNamesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class TBaseDboLibViewsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibViewsIter
	: public TBaseDboLibViewsIter
{
public:
/// @param status DboState &
/// @return DboView
DboView NextView(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboView *&
/// @return unsigned long
unsigned long GetKey(DboView *& pObject);

};

class DboLibViewNamesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class TBaseDboLibPackagesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibPackagesIter
	: public TBaseDboLibPackagesIter
{
public:
/// @param status DboState &
/// @return DboPackage
DboPackage NextPackage(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPackage *&
/// @return unsigned long
unsigned long GetKey(DboPackage *& pObject);

};

class DboPackageNamesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class DboLibPackageNamesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class DboLibPackageAliasesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextAlias(CString & name);

};

class TBaseDboLibSymbolsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibSymbolsIter
	: public TBaseDboLibSymbolsIter
{
public:
/// @param status DboState &
/// @return DboSymbol
DboSymbol NextSymbol(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSymbol *&
/// @return unsigned long
unsigned long GetKey(DboSymbol *& pObject);

};

class DboLibSymbolNamesIter
{
public:
/// @param name CString &
/// @param pType DboBaseObject::ObjectTypeT *
/// @return DboState
DboState NextName(CString & name, DboBaseObject::ObjectTypeT * pType=None);

/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class TBaseDboLibGraphicsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibGraphicsIter
	: public TBaseDboLibGraphicsIter
{
public:
/// @param status DboState &
/// @return DboGraphicObject
DboGraphicObject NextGraphicObject(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboGraphicObject *&
/// @return unsigned long
unsigned long GetKey(DboGraphicObject *& pObject);

};

class DboLibGraphicNamesIter
{
public:
/// @param name CString &
/// @param pType DboBaseObject::ObjectTypeT *
/// @return DboState
DboState NextName(CString & name, DboBaseObject::ObjectTypeT * pType=None);

/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class TBaseDboLibExportBlocksIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibExportBlocksIter
	: public TBaseDboLibExportBlocksIter
{
public:
/// @param status DboState &
/// @return DboExportBlock
DboExportBlock NextExportBlock(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboExportBlock *&
/// @return unsigned long
unsigned long GetKey(DboExportBlock *& pObject);

};

class DboLibExportBlockNamesIter
{
public:
/// @param name CString &
/// @return DboState
DboState NextName(CString & name);

};

class TBaseDboLibChangedObjectsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibChangedObjectsIter
	: public TBaseDboLibChangedObjectsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject NextObject(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBaseObject *&
/// @return unsigned long
unsigned long GetKey(DboBaseObject *& pObject);

};

class TBaseDboLibCachesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboLibCachesIter
	: public TBaseDboLibChangedObjectsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject NextCachedObject(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBaseObject *&
/// @return unsigned long
unsigned long GetKey(DboBaseObject *& pObject);

};

/// @param x DboLib *
/// @return DboDesign
DboDesign DboLibToDboDesign(DboLib * x);

class DboDesign
	: public DboLib
{
public:
/// @return bool
bool IsRootOccurrenceExisting();

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return int
int IsModified(DboState & status);

/// @param status DboState &
/// @return DboView
DboView GetRoot(DboState & status);

/// @param rootName CString &
/// @return DboState
DboState GetRootName(CString & rootName);

/// @return bool
bool HasRootOccurrence();

/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetRootOccurrence(DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrenceByName(CString const & pathname, char chSeparator, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param bPhysical int
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrenceByRef(CString const & pathname, char chSeparator, int bPhysical, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboOffPageConnectorOccurrence
DboOffPageConnectorOccurrence GetOffPageOccurrence(unsigned long id, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param bPhysical int
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrenceByRef(CString const & pathname, char chSeparator, int bPhysical, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param bPhysical int
/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence GetNetOccurrenceByRef(CString const & pathname, char chSeparator, int bPhysical, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param bPhysical int
/// @param status DboState &
/// @return DboOffPageConnectorOccurrence
DboOffPageConnectorOccurrence GetOffPageOccurrenceByRef(CString const & pathname, char chSeparator, int bPhysical, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param bPhysical int
/// @param status DboState &
/// @return DboTitleBlockOccurrence
DboTitleBlockOccurrence GetTitleBlockOccurrenceByRef(CString const & pathname, char chSeparator, int bPhysical, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboOccurrence
DboOccurrence GetOccurrence(unsigned long id, DboState & status);

/// @param pathname CString
/// @param chSeparator char
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrence(CString pathname, char chSeparator, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrence(unsigned long id, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(CString const & pathname, char chSeparator, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(unsigned long id, DboState & status);

/// @param pathname CString const &
/// @param chSeparator char
/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence GetNetOccurrence(CString const & pathname, char chSeparator, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence GetNetOccurrence(unsigned long id, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboTitleBlockOccurrence
DboTitleBlockOccurrence GetTitleBlockOccurrence(unsigned long id, DboState & status);

/// @return DboLib
DboLib GetContainingLib();

/// @param arg0 DboState &
/// @return int
int GetPowerPinsVisible(DboState & arg0);

/// @param nPageID UINT
/// @return DboPage
DboPage GetPageFromID(UINT nPageID);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return int
int OccurrencesExist(DboBaseObject * pObj, DboState & status);

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetRootSchematic(DboState & status);

/// @return CString
CString GetCISNotStuffedString();

/// @return int
int isHSObjectsExist();

/// @return int
int AnnotateControlExists();

/// @return bool
bool isFlatNetsPresent();

/// @return int
int DesignHasReusedSchematics();

/// @param bCreate bool
/// @return int
int GetDesignId(bool bCreate=True);

/// @return int
int GetDesignId();

/// @return int
int HasBoardNetlistGenerated();

/// @return int
int IsRemovePNNMSelected();

/// @return int
int IsPNNMActive();

/// @param arg0 int
/// @return CString
CString GetFlatNetNamefrmId(int arg0);

/// @param arg0 int
/// @return DboFlatNet
DboFlatNet GetFlatNetfrmId(int arg0);

/// @param status DboState &
/// @return int
int DesignHasOccurrenceProperties(DboState & status);

/// @param status DboState
/// @return int
int IsDesignInOccurrenceMode(DboState status);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return std::map<(unsigned long,int)>
std::map<(unsigned long,int)> GetModifiedFlatNets();

/// @param pOccurrence DboOccurrence *
void MarkModified(DboOccurrence * pOccurrence);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboDesignCachesIter
DboDesignCachesIter NewCachesIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboDesignCachesIter
DboDesignCachesIter NewCachesIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboDesignFlatNetsIter
DboDesignFlatNetsIter NewFlatNetsIter(DboState & status, enum IterDefs::IterModeT mode=SCALARS);

/// @param status DboState &
/// @return DboDesignFlatNetsIter
DboDesignFlatNetsIter NewFlatNetsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboDesignGlobalsIter
DboDesignGlobalsIter NewGlobalsIter(DboState & status, enum IterDefs::IterModeT mode=SCALARS);

/// @param status DboState &
/// @return DboDesignGlobalsIter
DboDesignGlobalsIter NewGlobalsIter(DboState & status);

/// @param status DboState &
/// @param pSchematic DboSchematic *
/// @return DboDesignSchematicOccurrencesIter
DboDesignSchematicOccurrencesIter NewSchematicOccurrencesIter(DboState & status, DboSchematic * pSchematic=None);

/// @param status DboState &
/// @return DboDesignSchematicOccurrencesIter
DboDesignSchematicOccurrencesIter NewSchematicOccurrencesIter(DboState & status);

/// @param status DboState &
/// @return DboDesignOccurrencesIter
DboDesignOccurrencesIter NewOccurrencesIter(DboState & status);

/// @param flag short
void SetBoardNetListGenerated(short flag);

/// @param bPowerPinsVisible int
/// @return DboState
DboState SetPowerPinsVisible(int bPowerPinsVisible);

/// @param pm_RemovePNNM int
void SetRemovePNNMSelected(int pm_RemovePNNM);

/// @param pm_PNNMActive int
void SetIsPNNMActive(int pm_PNNMActive);

/// @param strNotStuff CString &
void SetCISNotStuffedString(CString & strNotStuff);

/// @param view DboView *
/// @return DboState
DboState SetRoot(DboView * view);

/// @return DboRefDesManager
DboRefDesManager GetRefDesMgr();

};

class DboDesignUpdateOccurrenceBlockerManager
{
public:
/// @param bDoMarkModified bool
void Release(bool bDoMarkModified=False);

void Release();

};

class TBaseDboDesignOccurrencesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboDesignOccurrencesIter
	: public TBaseDboDesignOccurrencesIter
{
public:
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence NextOccurrence(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboInstOccurrence *&
/// @return unsigned long
unsigned long GetKey(DboInstOccurrence *& pObject);

};

class TBaseDboDesignSchematicOccurrencesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboDesignSchematicOccurrencesIter
	: public TBaseDboDesignOccurrencesIter
{
public:
/// @return int
int HasOccurrences();

/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence NextSchematicOccurrence(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboInstOccurrence *&
/// @return unsigned long
unsigned long GetKey(DboInstOccurrence *& pObject);

};

class TBaseDboDesignFlatNetsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboDesignFlatNetsIter
	: public TBaseDboDesignFlatNetsIter
{
public:
/// @param status DboState &
/// @return DboFlatNet
DboFlatNet NextFlatNet(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboFlatNet *&
/// @return std::string
std::string GetKey(DboFlatNet *& pObject);

};

class TBaseDboDesignGlobalsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboDesignGlobalsIter
	: public TBaseDboDesignFlatNetsIter
{
public:
/// @param status DboState &
/// @return DboFlatNet
DboFlatNet NextGlobal(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboFlatNet *&
/// @return std::string
std::string GetKey(DboFlatNet *& pObject);

};

/// @param x DboLibCachesIter *
/// @return DboDesignCachesIter
DboDesignCachesIter DboLibCachesIterToDboDesignCachesIter(DboLibCachesIter * x);

class DboDesignCachesIter
	: public DboLibCachesIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject NextDesignCache(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBaseObject *&
/// @return unsigned long
unsigned long GetKey(DboBaseObject *& pObject);

};

class DboAnnotateRange
{
public:
/// @return CString
CString GetRefdesPrefix();

/// @return int
int GetStartIndex();

/// @return int
int GetLastIndex();

/// @param refdesprfx CString
void SetRefDesPrefix(CString refdesprfx);

/// @param sIndex int
void SetStartIndex(int sIndex);

/// @param lIndex int
void SetLastIndex(int lIndex);

};

class DboAnnotateControl
{
public:
/// @return CString
CString GetPagePath();

/// @return CString
CString GetSchName();

/// @return int
int GetNumRange();

/// @param pos int
/// @return DboAnnotateRange
DboAnnotateRange GetRangeAt(int pos);

};

class DboModifiedFlatNetsIter
{
public:
/// @param pFlatNetId unsigned long &
/// @param pFlatNetStatus int &
/// @return DboState
DboState NextId(unsigned long & pFlatNetId, int & pFlatNetStatus);

};

class DboInstOccMapper
{
public:
/// @return std::vector<(p.DboOccurrence)>
std::vector<(p.DboOccurrence)> GetOccurrences();

/// @return int
int GetOccurrencesCount();

/// @param pos int
/// @return DboOccurrence
DboOccurrence GetOccurrencesAtPos(int pos);

/// @param pParent DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetOccurrenceFromParent(DboInstOccurrence * pParent);

};

/// @param x DboBaseObject *
/// @return DboOccurrence
DboOccurrence DboBaseObjectToDboOccurrence(DboBaseObject * x);

class DboOccurrence
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValueNC(CString const & name, CString & value);

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(DboState & status);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetIdPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetIdPathName(CString & name);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @return DboBaseObject
DboBaseObject GetParent();

/// @return DboDesign
DboDesign GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return int
int GetDepth(DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp GetBackannotation(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetBackannotatedStringValue(CString const & name, CString & value);

/// @param status DboState &
/// @return int
int HasPropertyThatExists(DboState & status);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param name CString const &
/// @param status DboState &
/// @return DbBaseProp
DbBaseProp GetOccProp(CString const & name, DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetInstance(DboState & status);

/// @param bVHDL int
/// @return CString
CString GetCanonicalName(int bVHDL);

/// @return int
int GetDesignTransactionCount();

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return int
int NewOccurrenceEdit();

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetUserPropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteUserPropValue(CString const & name);

/// @param conName CString &
void MakeVHDL(CString & conName);

/// @param nCount int
void SetDesignTransactionCount(int nCount);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

};

class DboOccurrenceArray
{
public:
};

/// @param x DboOccurrence *
/// @return DboPortOccurrence
DboPortOccurrence DboOccurrenceToDboPortOccurrence(DboOccurrence * x);

class DboPortOccurrence
	: public DboOccurrence
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(DboState & status);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathNameNumber(CString & name, char chSeparator='.');

/// @param name CString &
/// @return DboState
DboState GetPathNameNumber(CString & name);

/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPortInst(DboState & status);

/// @param status DboState &
/// @return DboSchematicPort
DboSchematicPort GetPort(DboState & status);

/// @return unsigned short
unsigned short GetPortInstPinID();

/// @return CString
CString GetSchematicPortName();

/// @return int
int IsOrphanPort();

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetInstance(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject FindInstance(DboState & status);

/// @return DboFlatNet
DboFlatNet GetFlatNet();

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param nId unsigned long
/// @return DboState
DboState SetId(unsigned long nId);

/// @param pPartInst DboPortInst *
/// @return DboPortOccurrence
DboPortOccurrence MorphPortOccurrence(DboPortInst * pPartInst);

/// @param pPort DboSchematicPort *
/// @param pPortInst DboPortInst *
/// @return DboPortOccurrence
DboPortOccurrence MorphPortOccurrence(DboSchematicPort * pPort, DboPortInst * pPortInst);

/// @param pSchematicPortName char const *
/// @return DboState
DboState SetSchematicPortName(char const * pSchematicPortName);

/// @param nPinID unsigned short
/// @return DboState
DboState SetPortInstPinID(unsigned short nPinID);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param nNameID UINT
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(UINT nNameID, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValueForIref(CString const & name, CString const & value);

void ProcessFlatNetForPortOccurrence();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortOccurrence_sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortOccurrence_sGetId(DboBaseObject * obj, DboState & status);

class DboPortOccurrenceArray
{
public:
};

/// @param x DboPortOccurrence *
/// @return DboPortBusMemberOccurrence
DboPortBusMemberOccurrence DboPortOccurrenceToDboPortBusMemberOccurrence(DboPortOccurrence * x);

class DboPortBusMemberOccurrence
	: public DboPortOccurrence
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return DboSchematicPort
DboSchematicPort GetPort(DboState & status);

/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPortInst(DboState & status);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetMemberName(CString & name);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetMemberName(DboBaseObject * obj, DboState & status);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortBusMemberOccurrence_sGetMemberName(DboBaseObject * obj, DboState & status);

/// @param x DboEffectivePropsIter *
/// @return DboPortOccurrenceEffectivePropsIter
DboPortOccurrenceEffectivePropsIter DboEffectivePropsIterToDboPortOccurrenceEffectivePropsIter(DboEffectivePropsIter * x);

class DboPortOccurrenceEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

class DboDirectoryRec
{
public:
};

class DboDirectoryEntry
{
public:
};

class DboDirectory
{
public:
/// @return time_t
time_t GetSaveTime();

/// @param name char const *
/// @param status DboState &
/// @param bCaseInsensitive int
/// @return DboDirectoryEntry
DboDirectoryEntry GetEntry(char const * name, DboState & status, int bCaseInsensitive=0);

/// @param name char const *
/// @param status DboState &
/// @return DboDirectoryEntry
DboDirectoryEntry GetEntry(char const * name, DboState & status);

/// @param name char const *
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetObject(char const * name, DboState & status);

/// @param name char const *
/// @param status DboState &
/// @return FILETIME
FILETIME GetCreateTime(char const * name, DboState & status);

/// @param name char const *
/// @param status DboState &
/// @return FILETIME
FILETIME GetModifyTime(char const * name, DboState & status);

/// @param name char const *
/// @param status DboState &
/// @return int
int IsInMemory(char const * name, DboState & status);

/// @return int
int IsAnyEntryModified();

/// @param name char const *
/// @return int
int IsModified(char const * name);

/// @param name char const *
/// @return int
int IsSaved(char const * name);

/// @param status DboState &
/// @return DboDirectoryEntriesIter
DboDirectoryEntriesIter NewEntriesIter(DboState & status);

/// @param status DboState &
/// @return DboDirectoryObjectsIter
DboDirectoryObjectsIter NewObjectsIter(DboState & status);

/// @param name char const *
/// @return DboState
DboState MarkModified(char const * name);

/// @param name char const *
/// @return DboState
DboState MarkToBeSaved(char const * name);

/// @param name char const *
/// @return DboState
DboState MarkSaved(char const * name);

/// @param name char const *
/// @return DboState
DboState MarkToBeDeleted(char const * name);

/// @param name char const *
/// @return DboState
DboState ClearObject(char const * name);

/// @param name char const *
/// @return DboState
DboState ClearModified(char const * name);

};

class DboDirectoryEntriesIter
{
public:
/// @param status DboState &
/// @return DboDirectoryEntry
DboDirectoryEntry NextEntry(DboState & status);

};

class DboDirectoryObjectsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject NextObject(DboState & status);

};

/// @param x DboBaseObject *
/// @return DboLibObject
DboLibObject DboBaseObjectToDboLibObject(DboBaseObject * x);

class DboLibObject
	: public DboBaseObject
{
public:
/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return DboLib
DboLib GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return int
int IsModified(DboState & status);

/// @param status DboState &
/// @return int
int IsPersistent(DboState & status);

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @param status DboState &
/// @return time_t
time_t GetModifyTime(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetCreateTime(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetSourceLibName(CString & name);

/// @return int
int IsCachedCopy();

/// @param status DboState &
/// @return int
int IsOutOfDate(DboState & status);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param str CString &
void GetSemanticString(CString & str);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return DboState
DboState MarkModified();

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param nType enum DboBaseObject::ObjectTypeT
/// @return DboState
DboState SetObjectType(enum DboBaseObject::ObjectTypeT nType);

/// @param name CString &
/// @return DboState
DboState SetSourceLibName(CString & name);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLibObject_sGetName(DboBaseObject * obj, DboState & status);

/// @param x DboLibObject *
/// @return DboGraphicObject
DboGraphicObject DboLibObjectToDboGraphicObject(DboLibObject * x);

class DboGraphicObject
	: public DboLibObject
{
public:
/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return int
int PinsAllowed(DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @return DboPtrArray
DboPtrArray GetGraphicsArray();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboGraphicObjectVectorsIter
DboGraphicObjectVectorsIter NewVectorsIter(DboState & status, enum IterDefs::IterModeT mode);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param box CRect
/// @return DboState
DboState SetBoundingBox(CRect box);

/// @param pVector DboVector *
/// @return DboState
DboState DeleteVector(DboVector * pVector);

/// @return DboState
DboState Clear();

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboLine
DboLine NewLine(DboState & status, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboLine
DboLine NewLine(DboState & status, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @return DboLine
DboLine NewLine(DboState & status, CPoint start, CPoint end);

/// @param status DboState &
/// @param boundingBox CRect
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboArc
DboArc NewArc(DboState & status, CRect boundingBox, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param boundingBox CRect
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboArc
DboArc NewArc(DboState & status, CRect boundingBox, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param boundingBox CRect
/// @param start CPoint
/// @param end CPoint
/// @return DboArc
DboArc NewArc(DboState & status, CRect boundingBox, CPoint start, CPoint end);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param boundingBox CRect
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboPolyline
DboPolyline NewPolyline(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboPolyline
DboPolyline NewPolyline(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @return DboPolyline
DboPolyline NewPolyline(DboState & status);

/// @param status DboState &
/// @param text CString &
/// @param rectBound CRect &
/// @param location CPoint
/// @param font LOGFONT &
/// @return DboCommentText
DboCommentText NewCommentText(DboState & status, CString & text, CRect & rectBound, CPoint location, LOGFONT & font);

/// @param status DboState &
/// @param start CPoint
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboFill
DboFill NewFill(DboState & status, CPoint start, enum DboValue::FillStyleT fillStyle=SOLID_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param start CPoint
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboFill
DboFill NewFill(DboState & status, CPoint start, enum DboValue::FillStyleT fillStyle=SOLID_FILL);

/// @param status DboState &
/// @param start CPoint
/// @return DboFill
DboFill NewFill(DboState & status, CPoint start);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboBezier
DboBezier NewBezier(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboBezier
DboBezier NewBezier(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @return DboBezier
DboBezier NewBezier(DboState & status);

/// @param status DboState &
/// @param BoundingBox CRect
/// @param location CPoint
/// @param bmDimension CSize
/// @param dwSize unsigned long
/// @param lpDib unsigned char const *
/// @return DboBitMap
DboBitMap NewBitMap(DboState & status, CRect BoundingBox, CPoint location, CSize bmDimension, unsigned long dwSize, unsigned char const * lpDib);

/// @param status DboState &
/// @param BoundingBox CRect
/// @param location CPoint
/// @param bmDimension CSize
/// @param dwSize unsigned long
/// @param lpByte unsigned char *
/// @return DboOleEmbed
DboOleEmbed NewOleEmbed(DboState & status, CRect BoundingBox, CPoint location, CSize bmDimension, unsigned long dwSize, unsigned char * lpByte);

/// @param status DboState &
/// @param location CPoint
/// @return DboSymbolVector
DboSymbolVector NewSymbolVector(DboState & status, CPoint location);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param color enum DboValue::ColorT
/// @return DboState
DboState sSetColor(DboBaseObject * obj, enum DboValue::ColorT color);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboGraphicObject_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboGraphicObject_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param color enum DboValue::ColorT
/// @return DboState
DboState DboGraphicObject_sSetColor(DboBaseObject * obj, enum DboValue::ColorT color);

class DboGraphicObjectVectorsIter
{
public:
/// @param status DboState &
/// @return DboVector
DboVector NextVector(DboState & status);

};

/// @param x DboLibObject *
/// @return DboView
DboView DboLibObjectToDboView(DboLibObject * x);

class DboView
	: public DboLibObject
{
public:
/// @return int
int GetRefCount();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t sGetModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t sGetCreateTime(DboBaseObject * obj, DboState & status);

/// @param name CString
/// @return DboBaseObject
DboBaseObject FindUnnamedNetgroupByName(CString name);

/// @param name std::string
/// @param pNetgrp DboBaseObject *
/// @param oldName std::string
void UpdateUnnamedNetgroupRegistry(std::string name, DboBaseObject * pNetgrp, std::string oldName="");

/// @param name std::string
/// @param pNetgrp DboBaseObject *
void UpdateUnnamedNetgroupRegistry(std::string name, DboBaseObject * pNetgrp);

/// @param pinName CString
/// @return int
int CanThisPinBeAddedToUnnamedNetgroup(CString pinName);

void IncRefCount();

void DecrefCount();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboView_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t DboView_sGetModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t DboView_sGetCreateTime(DboBaseObject * obj, DboState & status);

class DboColorRotMirror
{
public:
/// @return ColorT
ColorT GetColor();

/// @return RotationT
RotationT GetRotation();

/// @return int
int GetMirror();

/// @param nColor enum DboValue::ColorT
void SetColor(enum DboValue::ColorT nColor);

/// @param nRotation enum DboValue::RotationT
void SetRotation(enum DboValue::RotationT nRotation);

/// @param bMirror int
void SetMirror(int bMirror);

};

/// @param x DboBaseObject *
/// @return DboGraphicInstance
DboGraphicInstance DboBaseObjectToDboGraphicInstance(DboBaseObject * x);

class DboGraphicInstance
	: public DboBaseObject
{
public:
/// @param gridValue CString &
/// @return DboState
DboState GetGridLocation(CString & gridValue);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboPage
DboPage GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param status DboState &
/// @return DboGraphicObject
DboGraphicObject GetDefiningGraphicObject(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param status DboState &
/// @return RotationT
RotationT GetRotation(DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param status DboState &
/// @return int
int GetMirror(DboState & status);

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return int
int GetDisplayPropsPermitted(DboState & status);

/// @param status DboState &
/// @return DboGraphicObject
DboGraphicObject GetSourceDefinition(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetSourceLibName(CString & name);

/// @param status DboState &
/// @return void *
void * GetUserData(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValueNC(CString const & name, CString & value);

/// @param status DboState &
/// @return CRect
CRect GetOffsetBoundingBox(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT sGetRotation(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetMirror(DboBaseObject * obj, DboState & status);

/// @param definingPoint CPoint
/// @return CPoint
CPoint GetOffsetGraphicPoint(CPoint definingPoint);

/// @return DboPtrArray
DboPtrArray GetDispPropArray();

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return DboState
DboState MarkModified();

/// @param status DboState &
/// @return DboDisplayPropsIter
DboDisplayPropsIter NewDisplayPropsIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

/// @param nType enum DboBaseObject::ObjectTypeT
/// @return DboState
DboState SetObjectType(enum DboBaseObject::ObjectTypeT nType);

/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param offset CPoint
/// @return DboState
DboState Drag(CPoint offset);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param boundingBox CRect
/// @return DboState
DboState SetBoundingBox(CRect boundingBox);

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetUserPropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteUserPropValue(CString const & name);

/// @param pPtr void *
/// @return DboState
DboState SetUserData(void * pPtr);

/// @param nId unsigned long
/// @param bNewVersion int
/// @return DboState
DboState SetId(unsigned long nId, int bNewVersion=0);

/// @param nId unsigned long
/// @return DboState
DboState SetId(unsigned long nId);

/// @param status DboState &
/// @param name CString &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param font LOGFONT &
/// @param color enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & name, CPoint location, enum DboValue::RotationT rotation, LOGFONT & font, enum DboValue::ColorT color);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @param bNewersion int
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp, int bNewersion=0);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboGraphicInstance_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicInstance_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicInstance_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT DboGraphicInstance_sGetRotation(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboGraphicInstance_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicInstance_sGetMirror(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicBoxInst
DboGraphicBoxInst DboGraphicInstanceToDboGraphicBoxInst(DboGraphicInstance * x);

class DboGraphicBoxInst
	: public DboGraphicInstance
{
public:
/// @return DboBox
DboBox GetDboBox();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param point CPoint
/// @return DboState
DboState SetUpperLeft(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetLowerRight(CPoint point);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBoxInst_sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBoxInst_sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBoxInst_sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBoxInst_sGetBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicBoxInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicBoxInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboGraphicBoxInst_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboGraphicBoxInst_sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicLineInst
DboGraphicLineInst DboGraphicInstanceToDboGraphicLineInst(DboGraphicInstance * x);

class DboGraphicLineInst
	: public DboGraphicInstance
{
public:
/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @return DboLine
DboLine GetDboLine();

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param point CPoint
/// @return DboState
DboState SetStart(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetEnd(CPoint point);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicLineInst_sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicLineInst_sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicLineInst_sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicLineInst_sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicLineInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicLineInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicArcInst
DboGraphicArcInst DboGraphicInstanceToDboGraphicArcInst(DboGraphicInstance * x);

class DboGraphicArcInst
	: public DboGraphicInstance
{
public:
/// @return DboArc
DboArc GetDboArc();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param rect CRect
/// @return DboState
DboState SetBoundingRect(CRect rect);

/// @param point CPoint
/// @return DboState
DboState SetStart(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetEnd(CPoint point);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicArcInst_sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicArcInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicArcInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicEllipseInst
DboGraphicEllipseInst DboGraphicInstanceToDboGraphicEllipseInst(DboGraphicInstance * x);

class DboGraphicEllipseInst
	: public DboGraphicInstance
{
public:
/// @return DboEllipse
DboEllipse GetDboEllipse();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param rect CRect
/// @return DboState
DboState SetBoundingRect(CRect rect);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicEllipseInst_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicEllipseInst_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicEllipseInst_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicEllipseInst_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicEllipseInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicEllipseInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboGraphicEllipseInst_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboGraphicEllipseInst_sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicPolygonInst
DboGraphicPolygonInst DboGraphicInstanceToDboGraphicPolygonInst(DboGraphicInstance * x);

class DboGraphicPolygonInst
	: public DboGraphicInstance
{
public:
/// @return DboPolygon
DboPolygon GetDboPolygon();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

/// @param point CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint point, int position=-1);

/// @param point CPoint
/// @return DboState
DboState NewPoint(CPoint point);

/// @param nPoint int
/// @param offset CPoint
/// @return DboState
DboState MovePoint(int nPoint, CPoint offset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicPolygonInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicPolygonInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboGraphicPolygonInst_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboGraphicPolygonInst_sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicPolylineInst
DboGraphicPolylineInst DboGraphicInstanceToDboGraphicPolylineInst(DboGraphicInstance * x);

class DboGraphicPolylineInst
	: public DboGraphicInstance
{
public:
/// @return DboPolyline
DboPolyline GetDboPolyline();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param point CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint point, int position=-1);

/// @param point CPoint
/// @return DboState
DboState NewPoint(CPoint point);

/// @param nPoint int
/// @param offset CPoint
/// @return DboState
DboState MovePoint(int nPoint, CPoint offset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicPolylineInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicPolylineInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicBezierInst
DboGraphicBezierInst DboGraphicInstanceToDboGraphicBezierInst(DboGraphicInstance * x);

class DboGraphicBezierInst
	: public DboGraphicInstance
{
public:
/// @return DboBezier
DboBezier GetDboBezier();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param point CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint point, int position=-1);

/// @param point CPoint
/// @return DboState
DboState NewPoint(CPoint point);

/// @param nPoint int
/// @param offset CPoint
/// @return DboState
DboState MovePoint(int nPoint, CPoint offset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboGraphicBezierInst_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboGraphicBezierInst_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicCommentTextInst
DboGraphicCommentTextInst DboGraphicInstanceToDboGraphicCommentTextInst(DboGraphicInstance * x);

class DboGraphicCommentTextInst
	: public DboGraphicInstance
{
public:
/// @return DboCommentText
DboCommentText GetDboCommentText();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetText(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetFont(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param rText CString &
/// @return DboState
DboState SetText(CString & rText);

/// @param pt CPoint
/// @return DboState
DboState SetLocation(CPoint pt);

/// @param rLF LOGFONT &
/// @return DboState
DboState SetFont(LOGFONT & rLF);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicCommentTextInst_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicCommentTextInst_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicCommentTextInst_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicCommentTextInst_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboGraphicCommentTextInst_sGetText(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicCommentTextInst_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicCommentTextInst_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboGraphicCommentTextInst_sGetFont(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicBitMapInst
DboGraphicBitMapInst DboGraphicInstanceToDboGraphicBitMapInst(DboGraphicInstance * x);

class DboGraphicBitMapInst
	: public DboGraphicInstance
{
public:
/// @return DboBitMap
DboBitMap GetDboBitMap();

/// @return CRect
CRect GetBoundingBox();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBottom(DboBaseObject * obj, DboState & status);

/// @param rect CRect
/// @return DboState
DboState SetBoundingBox(CRect rect);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBitMapInst_sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBitMapInst_sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBitMapInst_sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicBitMapInst_sGetBottom(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicOleEmbedInst
DboGraphicOleEmbedInst DboGraphicInstanceToDboGraphicOleEmbedInst(DboGraphicInstance * x);

class DboGraphicOleEmbedInst
	: public DboGraphicInstance
{
public:
/// @return DboOleEmbed
DboOleEmbed GetDboOleEmbed();

/// @return CRect
CRect GetBoundingBox();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBottom(DboBaseObject * obj, DboState & status);

/// @param rect CRect
/// @return DboState
DboState SetBoundingBox(CRect rect);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicOleEmbedInst_sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicOleEmbedInst_sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicOleEmbedInst_sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboGraphicOleEmbedInst_sGetBottom(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboGraphicSymbolVectorInst
DboGraphicSymbolVectorInst DboGraphicInstanceToDboGraphicSymbolVectorInst(DboGraphicInstance * x);

class DboGraphicSymbolVectorInst
	: public DboGraphicInstance
{
public:
/// @return DboSymbolVector
DboSymbolVector GetDboSymbolVector();

};

/// @param x DboEffectivePropsIter *
/// @return DboGraphicInstEffectivePropsIter
DboGraphicInstEffectivePropsIter DboEffectivePropsIterToDboGraphicInstEffectivePropsIter(DboEffectivePropsIter * x);

class DboGraphicInstEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

/// @param x DboDisplayPropsIter *
/// @return DboInstanceDisplayPropsIter
DboInstanceDisplayPropsIter DboDisplayPropsIterToDboInstanceDisplayPropsIter(DboDisplayPropsIter * x);

class DboInstanceDisplayPropsIter
	: public DboDisplayPropsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextProp(DboState & status);

/// @param pObject DboDisplayProp *&
/// @return unsigned long
unsigned long GetKey(DboDisplayProp *& pObject);

};

/// @param x DboGraphicObject *
/// @return DboSymbol
DboSymbol DboGraphicObjectToDboSymbol(DboGraphicObject * x);

class DboSymbol
	: public DboGraphicObject
{
public:
/// @param status DboState &
/// @return int
int PinsAllowed(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return int
int GetPinCount(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return int
int GetPinCount(DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin GetSymbolPin(CString & name, DboState & status);

/// @param position unsigned int
/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin GetSymbolPin(unsigned int position, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin GetSymbolPin(CPoint location, DboState & status);

/// @param status DboState &
/// @return int
int GetDisplayPropsPermitted(DboState & status);

/// @param status DboState &
/// @return int
int GetSize(DboState & status);

/// @param pPin DboSymbolPin *
/// @param status DboState &
/// @return int
int GetPinPosition(DboSymbolPin * pPin, DboState & status);

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @param str CString &
void GetSemanticString(CString & str);

/// @return DboPtrArray
DboPtrArray GetDispPropArray();

/// @return DboState
DboState MarkModified();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSymbolPinsIter
DboSymbolPinsIter NewPinsIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboSymbolPinsIter
DboSymbolPinsIter NewPinsIter(DboState & status);

/// @param status DboState &
/// @return DboDisplayPropsIter
DboDisplayPropsIter NewDisplayPropsIter(DboState & status);

/// @return DboState
DboState Clear();

/// @param nPos int
/// @return DboState
DboState DeleteSymbolPin(int nPos);

/// @param nPos int
/// @return DboState
DboState DeleteSymbolPinAtPosition(int nPos);

/// @param nPos int
/// @return DboState
DboState RemoveSymbolPinFromPosition(int nPos);

/// @return DboState
DboState RemoveSymbolPins();

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @param position int
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1, int position=-1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @param position int
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1, int position=-1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle);

/// @param status DboState &
/// @param name CString &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param font LOGFONT &
/// @param color enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & name, CPoint location, enum DboValue::RotationT rotation, LOGFONT & font, enum DboValue::ColorT color);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @param position int
/// @param strBOwner CString
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1, int position=-1, CString strBOwner="");

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @param position int
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1, int position=-1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @param position int
/// @param strBOwner CString
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1, int position=-1, CString strBOwner="");

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @param position int
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1, int position=-1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle);

/// @param pProp DboDisplayProp *
/// @return DboState
DboState DeleteDisplayProp(DboDisplayProp * pProp);

};

class TBaseDboSymbolPinsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSymbolPinsIter
	: public TBaseDboSymbolPinsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSymbolPin *&
/// @return std::string
std::string GetKey(DboSymbolPin *& pObject);

/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin NextPin(DboState & status);

};

/// @param x DboDisplayPropsIter *
/// @return DboSymbolDisplayPropsIter
DboSymbolDisplayPropsIter DboDisplayPropsIterToDboSymbolDisplayPropsIter(DboDisplayPropsIter * x);

class DboSymbolDisplayPropsIter
	: public DboDisplayPropsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboDisplayProp *&
/// @return unsigned long
unsigned long GetKey(DboDisplayProp *& pObject);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextProp(DboState & status);

};

/// @param x DboView *
/// @return DboSchematic
DboSchematic DboViewToDboSchematic(DboView * x);

/// @param x DboInstOccMapper *
/// @return DboSchematic
DboSchematic DboInstOccMapperToDboSchematic(DboInstOccMapper * x);

class DboSchematic
	: public DboView
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboPlacedInst
DboPlacedInst GetOptimizerTemplate();

/// @return int
int IsOptimizerUseCurrentValue();

/// @param status DboState &
/// @return int
int GetOpStartWithCurrenV(DboState & status);

/// @return int
int IsOptimizerTemplateExist();

/// @return CString
CString GetOptFileName();

/// @return DboState
DboState ReadAllPages();

/// @param status DboState &
/// @return int
int IsModified(DboState & status);

/// @return int
int IsOccsModified();

/// @param partName CString
/// @param sourcePkgName CString
/// @param strReferencePrefix CString &
/// @param suffixStr CString &
/// @param wPart int
/// @param bIncrementNext int
/// @return UINT
UINT GetNextReference(CString partName, CString sourcePkgName, CString & strReferencePrefix, CString & suffixStr, int wPart, int bIncrementNext=1);

/// @param partName CString
/// @param sourcePkgName CString
/// @param strReferencePrefix CString &
/// @param suffixStr CString &
/// @param wPart int
/// @return UINT
UINT GetNextReference(CString partName, CString sourcePkgName, CString & strReferencePrefix, CString & suffixStr, int wPart);

/// @param strReferencePrefix CString &
/// @param bIncrementNext int
/// @return UINT
UINT GetNextReference(CString & strReferencePrefix, int bIncrementNext=1);

/// @param strReferencePrefix CString &
/// @return UINT
UINT GetNextReference(CString & strReferencePrefix);

/// @param partName CString
/// @param sourcePkgName CString
/// @param strReferencePrefix CString &
/// @param suffixStr CString &
/// @param wPart int
/// @param bIncrementNext int
/// @return UINT
UINT GetNextReferenceEx(CString partName, CString sourcePkgName, CString & strReferencePrefix, CString & suffixStr, int wPart, int bIncrementNext=1);

/// @param partName CString
/// @param sourcePkgName CString
/// @param strReferencePrefix CString &
/// @param suffixStr CString &
/// @param wPart int
/// @return UINT
UINT GetNextReferenceEx(CString partName, CString sourcePkgName, CString & strReferencePrefix, CString & suffixStr, int wPart);

/// @param strReferencePrefix CString &
/// @param bIncrementNext int
/// @return UINT
UINT GetNextReferenceEx(CString & strReferencePrefix, int bIncrementNext=1);

/// @param strReferencePrefix CString &
/// @return UINT
UINT GetNextReferenceEx(CString & strReferencePrefix);

/// @param pPartInst DboPartInst *
/// @param pRef CString
/// @param pDes CString
/// @return int
int CanAssignRefDes(DboPartInst * pPartInst, CString pRef, CString pDes);

/// @param name CString &
/// @param status DboState &
/// @return DboPage
DboPage GetPage(CString & name, DboState & status);

/// @param position int
/// @param status DboState &
/// @return DboPage
DboPage GetPage(int position, DboState & status);

/// @param nPageID UINT
/// @param status DboState &
/// @return DboPage
DboPage GetPageFromID(UINT nPageID, DboState & status);

/// @param status DboState &
/// @return int
int GetPageCount(DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int GetPageNumber(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int PageExists(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int IsPageInMemory(CString & name, DboState & status);

/// @param pPage DboPage *
/// @param status DboState &
/// @return int
int IsPagePersistent(DboPage * pPage, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return int
int IsPagePersistent(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(CString & name, DboState & status);

/// @param pWire DboWire *
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(DboWire * pWire, DboState & status);

/// @param pNet DboNet *
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(DboNet * pNet, DboState & status);

/// @param pPortInst DboPortInst *
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(DboPortInst * pPortInst, DboState & status);

/// @param nId unsigned long
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(unsigned long nId, DboState & status);

/// @param nId unsigned long
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetDeletedNet(unsigned long nId, DboState & status);

/// @param nId unsigned long
/// @param status DboState &
/// @return DboTitleBlock
DboTitleBlock GetTitleBlock(unsigned long nId, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboSchematicPort
DboSchematicPort GetPortIgnoreWidth(CString & Name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSchematicPort
DboSchematicPort GetPort(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSchematicSymbolInst
DboSchematicSymbolInst GetGlobal(CString & name, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboSchematicSymbolInst
DboSchematicSymbolInst GetOffPageConnector(CString & name, DboState & status);

/// @param nID unsigned long
/// @return DboOffPageConnector
DboOffPageConnector GetOffPageConnectorForOcc(unsigned long nID);

/// @return CString
CString GetDefaultPageName();

/// @param pPage DboPage *
/// @return int
int IsPageModified(DboPage * pPage);

/// @param pDesign DboDesign *
/// @param pDboPage DboPage *
/// @param occId unsigned long
/// @param bAutoCreate int
/// @return DboOccurrenceUndoStack
DboOccurrenceUndoStack GetOccUndoStack(DboDesign * pDesign, DboPage * pDboPage, unsigned long occId, int bAutoCreate=1);

/// @param pDesign DboDesign *
/// @param pDboPage DboPage *
/// @param occId unsigned long
/// @return DboOccurrenceUndoStack
DboOccurrenceUndoStack GetOccUndoStack(DboDesign * pDesign, DboPage * pDboPage, unsigned long occId);

/// @param name CString &
/// @param st DboState &
/// @return DboOptimizerParameter
DboOptimizerParameter GetOptimizerParameter(CString & name, DboState & st);

/// @param name CString &
/// @param status DboState &
/// @return IStorage
IStorage GetUserStorage(CString & name, DboState & status);

/// @param designs DboDesignList &
/// @param status DboState &
void GetOpenReferringDesigns(DboDesignList & designs, DboState & status);

/// @param nID unsigned long
/// @return DboBaseObject
DboBaseObject GetRegisteredObject(unsigned long nID);

/// @param pUnnamedBundleOwner CString
/// @return DboDrawnInst
DboDrawnInst GetUnnamedNetGroupOwnerObject(CString pUnnamedBundleOwner);

/// @return int
int IsExpanded();

/// @return unsigned long
unsigned long GetId();

/// @param nId unsigned long
/// @param status DboState &
/// @return DboPartInst
DboPartInst GetPartInst(unsigned long nId, DboState & status);

/// @param id unsigned long
/// @return DboPartInst
DboPartInst GetPartInst(unsigned long id);

/// @return int
int GetSchematicID();

/// @param nSchematicID int
/// @return DboSchematic
DboSchematic GetSchematicAtID(int nSchematicID);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param aPackage DboPackage *
/// @param aPartValue CString const &
/// @param aPackageRef CString const &
/// @param aDeviceDesignator CString const
/// @param aIsNormal int
/// @param aDevice DboDevice *&
/// @param aLibPart DboLibPart *&
/// @return int
int GetNextDeviceAndPartToBePlaced(DboPackage * aPackage, CString const & aPartValue, CString const & aPackageRef, CString const aDeviceDesignator, int aIsNormal, DboDevice *& aDevice, DboLibPart *& aLibPart);

/// @param UnNamedBundleList CStringList &
/// @return DboState
DboState GetUnNamedBundleList(CStringList & UnNamedBundleList);

/// @param bOwnerName CString
/// @param bEntryPinName CString
/// @param newBOwner CString
/// @param pInitatingPage DboPage *
void UpdateUnnamedNetSymbols(CString bOwnerName, CString bEntryPinName, CString newBOwner, DboPage * pInitatingPage);

/// @return DboState
DboState MarkModified();

/// @param pPage DboPage *
/// @return DboState
DboState MarkModified(DboPage * pPage);

/// @param pPage DboPage *
/// @return DboState
DboState ClearModified(DboPage * pPage);

/// @param status DboState &
/// @return DboSchematicPagesIter
DboSchematicPagesIter NewPagesIter(DboState & status);

/// @param status DboState &
/// @return DboSchematicPageNamesIter
DboSchematicPageNamesIter NewPageNamesIter(DboState & status);

/// @param status DboState &
/// @return DboSchematicInstsIter
DboSchematicInstsIter NewInstsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicNetsIter
DboSchematicNetsIter NewNetsIter(DboState & status, enum IterDefs::IterModeT mode=SCALARS);

/// @param status DboState &
/// @return DboSchematicNetsIter
DboSchematicNetsIter NewNetsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicPortsIter
DboSchematicPortsIter NewPortsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboSchematicPortsIter
DboSchematicPortsIter NewPortsIter(DboState & status);

/// @param status DboState &
/// @return DboSchematicGlobalsIter
DboSchematicGlobalsIter NewGlobalsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicOffPageConnectorsIter
DboSchematicOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboSchematicOffPageConnectorsIter
DboSchematicOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status);

/// @param status DboState &
/// @return DboSchematicChangedPagesIter
DboSchematicChangedPagesIter NewChangedPagesIter(DboState & status);

/// @param pDesign DboDesign *
/// @param pDboPage DboPage *
/// @param occId unsigned long
/// @param mode DboOccurrenceUndoStack::StackEntryType
/// @return DboOccUndoStackEntryIter
DboOccUndoStackEntryIter NewOccUndoStackEntryIter(DboDesign * pDesign, DboPage * pDboPage, unsigned long occId, DboOccurrenceUndoStack::StackEntryType mode=DboOccurrenceUndoStack::ALL);

/// @param pDesign DboDesign *
/// @param pDboPage DboPage *
/// @param occId unsigned long
/// @return DboOccUndoStackEntryIter
DboOccUndoStackEntryIter NewOccUndoStackEntryIter(DboDesign * pDesign, DboPage * pDboPage, unsigned long occId);

/// @param st DboState &
/// @return DboSchematicOptimizerParametersIter
DboSchematicOptimizerParametersIter NewOptimizerParametersIter(DboState & st);

/// @return DboState
DboState BuildIDMap();

/// @param bVal int
/// @return DboState
DboState SetOpStartWithCurrenV(int bVal);

void DeleteAllOptimizerParameter();

void RestoreOptimizerParameter();

/// @param isModified int
void SetOccsModified(int isModified=1);

void SetOccsModified();

/// @param strReferencePrefix CString &
/// @param nNextReference UINT
void SetNextReference(CString & strReferencePrefix, UINT nNextReference);

void ClearNextReferences();

/// @param strReference CString &
void UpdateNextReference(CString & strReference);

/// @param name CString &
/// @return DboState
DboState DeleteOptimizerParameter(CString & name);

/// @param name CString &
/// @return DboState
DboState RemoveOptimizerParameter(CString & name);

/// @return DboState
DboState Expand();

void FilterSchematicNetsForPage(pPage, pReferredSchNetsMap, pProcessEditMapOnly = 0, pDboNetScalars = None, pDboNetBuses = None);

void FilterSchematicNetsForPage(pPage, pReferredSchNetsMap, pProcessEditMapOnly = 0, pDboNetScalars = None);

void FilterSchematicNetsForPage(pPage, pReferredSchNetsMap, pProcessEditMapOnly = 0);

void FilterSchematicNetsForPage(pPage, pReferredSchNetsMap);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0, pNewDboNetsMap = None, pDeletedSourcesMap = None, pNewScalarSourcesMap = None, pNewBusSourcesMap = None, pAvailableOccurrencesMap = None, pDeletedOccurrencesMap = None);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0, pNewDboNetsMap = None, pDeletedSourcesMap = None, pNewScalarSourcesMap = None, pNewBusSourcesMap = None, pAvailableOccurrencesMap = None);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0, pNewDboNetsMap = None, pDeletedSourcesMap = None, pNewScalarSourcesMap = None, pNewBusSourcesMap = None);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0, pNewDboNetsMap = None, pDeletedSourcesMap = None, pNewScalarSourcesMap = None);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0, pNewDboNetsMap = None, pDeletedSourcesMap = None);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0, pNewDboNetsMap = None);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True, pProcessEditMapOnly = 0);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap, pRecreatePage = True);

/// @return DboState
DboState ExpandMinimal(pPage, pReferredSchNetsMap);

/// @return DboState
DboState DoActualSchematicExpansion(pPage, pReferredSchNetsMap, pNewDboNetsMap, pDeletedSourcesMap, pAvailableSourcesMap, pAvailableOccurrencesMap, pDeletedOccurrencesMap, pRecreatePage);

/// @param pSchNet DboSchematicNet *
/// @return int
int GetLowestPageNumberFromDboNets(DboSchematicNet * pSchNet);

/// @param pSchNet1 DboSchematicNet *
/// @param pSchNet2 DboSchematicNet *
/// @return DboSchematicNet
DboSchematicNet ResolveBaseNameConflict(DboSchematicNet * pSchNet1, DboSchematicNet * pSchNet2);

/// @param pSchematicNet DboSchematicNet *
void MarkSchematicNetForDeletion(DboSchematicNet * pSchematicNet);

void CreateSchNetAndContainerMapping(pObject, pSchNetMapping, pSymInst = None, pOldName = None);

void CreateSchNetAndContainerMapping(pObject, pSchNetMapping, pSymInst = None);

void CreateSchNetAndContainerMapping(pObject, pSchNetMapping);

void CreateSchNetAndContainerMapping(pBusSource, pMemberName, pSchNetMapping);

/// @param pPage DboPage *
/// @param pNewDboNetsMap DboMapPtrToPtr *&
/// @param pDeletedSourcesMap DboMapPtrToPtr *
/// @param pAvailableSourcesMap DboMapPtrToPtr *
void CheckSchematicSymbolInstContainersAndUpdateConnectivity(DboPage * pPage, DboMapPtrToPtr *& pNewDboNetsMap, DboMapPtrToPtr * pDeletedSourcesMap, DboMapPtrToPtr * pAvailableSourcesMap);

/// @param lSchNet DboSchematicNet *
/// @param pNewDboNetsMap DboMapPtrToPtr *
void RemoveSchematicNetAndRebuildFromPageNets(DboSchematicNet * lSchNet, DboMapPtrToPtr * pNewDboNetsMap);

/// @param pObject DboBaseObject *
/// @return DboSchematicSymbolInst
DboSchematicSymbolInst GetObjectContainer(DboBaseObject * pObject);

/// @param pObj DboPage *
/// @param newName CString &
/// @return DboState
DboState Rename(DboPage * pObj, CString & newName);

/// @param status DboState &
/// @param name CString &
/// @param pageNumber int
/// @return DboPage
DboPage NewPage(DboState & status, CString & name, int pageNumber=-1);

/// @param status DboState &
/// @param name CString &
/// @return DboPage
DboPage NewPage(DboState & status, CString & name);

/// @param pPage DboPage *
/// @param bVal int
/// @return DboState
DboState SavePage(DboPage * pPage, int bVal=0);

/// @param pPage DboPage *
/// @return DboState
DboState SavePage(DboPage * pPage);

/// @param pPage DboPage *
/// @return DboState
DboState DeletePage(DboPage * pPage);

/// @param pPage DboShadowPage *
/// @return DboState
DboState sDeleteTempShadowPage(DboShadowPage * pPage);

void UpdateFlatNetsOfAllInstantiatingDesigns();

/// @param pPage DboPage *
/// @return DboState
DboState RemovePage(DboPage * pPage);

/// @param pPageIDList std::vector< unsigned long > &
void ReleaseCollectedPageIDs(std::vector< unsigned long > & pPageIDList);

/// @param pPage DboPage *
/// @param pageNumber int
/// @return DboState
DboState SetPageNumber(DboPage * pPage, int pageNumber);

};

/// @param nSchematicID int
/// @return DboSchematic
DboSchematic DboSchematic_GetSchematicAtID(int nSchematicID);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboSchematic_sGetName(DboBaseObject * obj, DboState & status);

/// @param pPage DboShadowPage *
/// @return DboState
DboState DboSchematic_sDeleteTempShadowPage(DboShadowPage * pPage);

class TBaseDboSchematicPagesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicPagesIter
	: public TBaseDboSchematicPagesIter
{
public:
/// @param status DboState &
/// @return DboPage
DboPage NextPage(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPage *&
/// @return std::string
std::string GetKey(DboPage *& pObject);

};

class DboSchematicPageNamesIter
{
public:
/// @param status DboState &
/// @return char
char NextName(DboState & status);

};

class TBaseDboSchematicNetsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetsIter
	: public TBaseDboSchematicNetsIter
{
public:
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet NextNet(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicNet *&
/// @return std::string
std::string GetKey(DboSchematicNet *& pObject);

};

class TBaseDboSchematicInstsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicInstsIter
	: public TBaseDboSchematicInstsIter
{
public:
/// @param status DboState &
/// @return DboPartInst
DboPartInst NextInst(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPartInst *&
/// @return std::string
std::string GetKey(DboPartInst *& pObject);

};

class TBaseDboSchematicPortsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicPortsIter
	: public TBaseDboSchematicPortsIter
{
public:
/// @param status DboState &
/// @return DboSchematicPort
DboSchematicPort NextPort(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicPort *&
/// @return std::string
std::string GetKey(DboSchematicPort *& pObject);

};

class TBaseDboSchematicGlobalsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicGlobalsIter
	: public TBaseDboSchematicGlobalsIter
{
public:
/// @param status DboState &
/// @return DboSchematicSymbolInst
DboSchematicSymbolInst NextGlobal(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicSymbolInst *&
/// @return std::string
std::string GetKey(DboSchematicSymbolInst *& pObject);

};

class TBaseDboSchematicOffPageConnectorsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicOffPageConnectorsIter
	: public TBaseDboSchematicGlobalsIter
{
public:
/// @param status DboState &
/// @return DboSchematicSymbolInst
DboSchematicSymbolInst NextOffPageConnector(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicSymbolInst *&
/// @return std::string
std::string GetKey(DboSchematicSymbolInst *& pObject);

};

class TBaseDboSchematicChangedPagesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicChangedPagesIter
	: public TBaseDboSchematicPagesIter
{
public:
/// @param status DboState &
/// @return DboPage
DboPage NextPage(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPage *&
/// @return std::string
std::string GetKey(DboPage *& pObject);

};

class TBaseDboSchematicOptimizerParametersIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicOptimizerParametersIter
	: public TBaseDboSchematicOptimizerParametersIter
{
public:
/// @param status DboState &
/// @return DboOptimizerParameter
DboOptimizerParameter NextOptimizerParameter(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboOptimizerParameter *&
/// @return unsigned long
unsigned long GetKey(DboOptimizerParameter *& pObject);

};

/// @param x DboBaseObject *
/// @return DboSchematicSymbolInst
DboSchematicSymbolInst DboBaseObjectToDboSchematicSymbolInst(DboBaseObject * x);

class DboSchematicSymbolInst
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return DboSchematic
DboSchematic GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetNetId(DboState & status);

/// @param status DboState &
/// @return int
int GetIsBus(DboState & status);

/// @return bool
bool IsBundleObject();

/// @param pos int
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetEntry(int pos, DboState & status);

/// @param status DboState &
/// @return int
int GetSize(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetNetId(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @param bVal int
/// @return DboState
DboState SetIsBus(int bVal);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboSchematicSymbolInst_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSchematicSymbolInst_sGetNetId(DboBaseObject * obj, DboState & status);

/// @param x DboSchematicSymbolInst *
/// @return DboSchematicPort
DboSchematicPort DboSchematicSymbolInstToDboSchematicPort(DboSchematicSymbolInst * x);

/// @param x DboInstOccMapper *
/// @return DboSchematicPort
DboSchematicPort DboInstOccMapperToDboSchematicPort(DboInstOccMapper * x);

class DboSchematicPort
	: public DboSchematicSymbolInst
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

};

/// @param x DboSchematicSymbolInst *
/// @return DboSchematicOffPageConnector
DboSchematicOffPageConnector DboSchematicSymbolInstToDboSchematicOffPageConnector(DboSchematicSymbolInst * x);

class DboSchematicOffPageConnector
	: public DboSchematicSymbolInst
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

};

/// @param x DboSchematicSymbolInst *
/// @return DboSchematicGlobal
DboSchematicGlobal DboSchematicSymbolInstToDboSchematicGlobal(DboSchematicSymbolInst * x);

class DboSchematicGlobal
	: public DboSchematicSymbolInst
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

/// @param status DboState &
/// @return int
int IsPower(DboState & status);

};

/// @param x DboBaseObject *
/// @return DboSchematicNet
DboSchematicNet DboBaseObjectToDboSchematicNet(DboBaseObject * x);

/// @param x DboInstOccMapper *
/// @return DboSchematicNet
DboSchematicNet DboInstOccMapperToDboSchematicNet(DboInstOccMapper * x);

class DboSchematicNet
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @return DboSchematic
DboSchematic GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param pEffectiveNetName CString &
/// @return DboState
DboState GetSchNetNameForOldPspiceConnectivity(CString & pEffectiveNetName);

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param status DboState &
/// @return int
int IsGlobal(DboState & status);

/// @param pBusNet DboSchematicNet *&
/// @param status DboState &
/// @return int
int IsBusMember(DboSchematicNet *& pBusNet, DboState & status);

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @param PatternMatcher TPatternMatch
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase, TPatternMatch PatternMatcher=DboPatternMatch);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase);

/// @param pName CString
/// @return CString
CString ResolveComputedNameConflict(CString pName);

/// @param name CString &
/// @return DboState
DboState GetLocalNetName(CString & name);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param name CString const &
/// @param choices CStringList &
/// @return DboState
DboState GetEffectivePropValueChoices(CString const & name, CStringList & choices);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return bool
bool HasBundleConnection();

/// @return bool
bool HasNonNGOverrider();

/// @return bool
bool IsBundleObject();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicNetWiresIter
DboSchematicNetWiresIter NewWiresIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboSchematicNetWiresIter
DboSchematicNetWiresIter NewWiresIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicNetPortInstsIter
DboSchematicNetPortInstsIter NewPortInstsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboSchematicNetPortInstsIter
DboSchematicNetPortInstsIter NewPortInstsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicNetPortsIter
DboSchematicNetPortsIter NewPortsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboSchematicNetPortsIter
DboSchematicNetPortsIter NewPortsIter(DboState & status);

/// @param status DboState &
/// @return DboSchematicNetGlobalsIter
DboSchematicNetGlobalsIter NewGlobalsIter(DboState & status);

/// @param status DboState &
/// @return DboSchematicNetOffPageConnectorsIter
DboSchematicNetOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicNetNetsIter
DboSchematicNetNetsIter NewNetsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboSchematicNetNetsIter
DboSchematicNetNetsIter NewNetsIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param linestyle enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT linestyle);

/// @param linewidth enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT linewidth);

/// @param name CString const &
/// @param value CString const &
/// @param bNewObj int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewObj=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param propName CString
/// @param lLock MaskT &
/// @param preTrigger CString &
/// @param postTrigger CString &
/// @return bool
bool GetAttributeLockingInfo(CString propName, MaskT & lLock, CString & preTrigger, CString & postTrigger);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param Name CString &
/// @return DboState
DboState SetName(CString & Name);

/// @param name CString &
/// @return DboState
DboState ComputeNetName(CString & name);

/// @return DboPtrArray
DboPtrArray GetBusNets();

/// @param pBusNet DboSchematicNetBus *
void AddBusNet(DboSchematicNetBus * pBusNet);

/// @param pBusNet DboSchematicNetBus *
void RemoveBusNet(DboSchematicNetBus * pBusNet);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboSchematicNet_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSchematicNet_sGetId(DboBaseObject * obj, DboState & status);

/// @param x DboSchematicNet *
/// @return DboSchematicNetScalar
DboSchematicNetScalar DboSchematicNetToDboSchematicNetScalar(DboSchematicNet * x);

class DboSchematicNetScalar
	: public DboSchematicNet
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

};

/// @param x DboSchematicNet *
/// @return DboSchematicNetBus
DboSchematicNetBus DboSchematicNetToDboSchematicNetBus(DboSchematicNet * x);

class DboSchematicNetBus
	: public DboSchematicNet
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return int
int GetWidth(DboState & status);

/// @param nPos int
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetMember(int nPos, DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSchematicNetBusMembersIter
DboSchematicNetBusMembersIter NewMembersIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboSchematicNetBusMembersIter
DboSchematicNetBusMembersIter NewMembersIter(DboState & status);

};

class TBaseDboSchematicNetWiresIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetWiresIter
	: public TBaseDboSchematicNetWiresIter
{
public:
/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboWire *&
/// @return unsigned long
unsigned long GetKey(DboWire *& pObject);

};

class TBaseDboSchematicNetPortInstsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetPortInstsIter
	: public TBaseDboSchematicNetPortInstsIter
{
public:
/// @param status DboState &
/// @return DboPortInst
DboPortInst NextPortInst(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPortInst *&
/// @return std::string
std::string GetKey(DboPortInst *& pObject);

};

class TBaseDboSchematicNetPortsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetPortsIter
	: public TBaseDboSchematicPortsIter
{
public:
/// @param status DboState &
/// @return DboSchematicPort
DboSchematicPort NextPort(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicPort *&
/// @return std::string
std::string GetKey(DboSchematicPort *& pObject);

};

class TBaseDboSchematicNetGlobalsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetGlobalsIter
	: public TBaseDboSchematicNetGlobalsIter
{
public:
/// @param status DboState &
/// @return DboSchematicGlobal
DboSchematicGlobal NextGlobal(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicGlobal *&
/// @return std::string
std::string GetKey(DboSchematicGlobal *& pObject);

};

class TBaseDboSchematicNetOffPageConnectorsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetOffPageConnectorsIter
	: public TBaseDboSchematicNetOffPageConnectorsIter
{
public:
/// @param status DboState &
/// @return DboSchematicOffPageConnector
DboSchematicOffPageConnector NextOffPageConnector(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicOffPageConnector *&
/// @return std::string
std::string GetKey(DboSchematicOffPageConnector *& pObject);

};

class TBaseDboSchematicNetNetsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetNetsIter
	: public TBaseDboSchematicNetNetsIter
{
public:
/// @param status DboState &
/// @return DboNet
DboNet NextNet(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboNet *&
/// @return std::string
std::string GetKey(DboNet *& pObject);

};

class TBaseDboSchematicNetBusMembersIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboSchematicNetBusMembersIter
	: public TBaseDboSchematicNetsIter
{
public:
/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet NextMember(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboSchematicNet *&
/// @return std::string
std::string GetKey(DboSchematicNet *& pObject);

};

/// @param x DboEffectivePropsIter *
/// @return DboSchematicNetEffectivePropsIter
DboSchematicNetEffectivePropsIter DboEffectivePropsIterToDboSchematicNetEffectivePropsIter(DboEffectivePropsIter * x);

class DboSchematicNetEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

class STATE_DATA
{
public:
};

class COrOccTransactions
{
public:
};

class ACTIVATE_DATA
{
public:
};

class connectivityGridCell
{
public:
};

class objectHotspot
{
public:
};

/// @param data ACTIVATE_DATA *
void GetActivateData(ACTIVATE_DATA * data);

/// @param x DboBaseObject *
/// @return DboPage
DboPage DboBaseObjectToDboPage(DboBaseObject * x);

class DboPage
	: public DboBaseObject
{
public:
/// @param location CPoint
/// @return int
int PointOnHotSpot(CPoint location);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return DboSchematic
DboSchematic GetOwner();

/// @param status DboState &
/// @return int
int GetPageNumber(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetModifyTime(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetCreateTime(DboState & status);

/// @param status DboState &
/// @return int
int GetPartInstCount(DboState & status);

/// @return int
int GetPartInstCount();

/// @param status DboState &
/// @return int
int GetWireCount(DboState & status);

/// @param status DboState &
/// @return int
int GetBusEntryCount(DboState & status);

/// @param status DboState &
/// @return int
int GetPortCount(DboState & status);

/// @param status DboState &
/// @return int
int GetGlobalCount(DboState & status);

/// @param status DboState &
/// @return int
int GetOffPageConnectorCount(DboState & status);

/// @param nID unsigned long
/// @return DboOffPageConnector
DboOffPageConnector GetOffPageConnectorFromID(unsigned long nID);

/// @param status DboState &
/// @return int
int GetCommentGraphicCount(DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboPartInst
DboPartInst GetPartInstFromSch(CString const & name, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboPartInst
DboPartInst GetPartInst(CString const & name, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboPartInst
DboPartInst GetPartInst(unsigned long id, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboWire
DboWire GetWire(unsigned long id, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboWire
DboWire GetWire(CPoint location, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboWire
DboWire GetFirstWireEndPoint(CPoint location, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboWire
DboWire GetWireAtJunction(CPoint location, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboBusEntry
DboBusEntry GetBusEntry(CPoint location, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPortInst(CPoint location, DboState & status);

/// @param status DboState &
/// @param id unsigned long
/// @param nType enum DboBaseObject::ObjectTypeT
/// @return DboGraphicInstance
DboGraphicInstance GetGraphicInst(DboState & status, unsigned long id, enum DboBaseObject::ObjectTypeT nType=NULL_OBJECT);

/// @param status DboState &
/// @param id unsigned long
/// @return DboGraphicInstance
DboGraphicInstance GetGraphicInst(DboState & status, unsigned long id);

/// @param id unsigned long
/// @param status DboState &
/// @return DboTitleBlock
DboTitleBlock GetTitleBlock(unsigned long id, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboPort
DboPort GetPort(CString & name, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return int
int IsConnectionPoint(CPoint location, DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return int
int GetConnectionCount(CPoint location, DboState & status);

/// @param bDrawableSize int
/// @return CSize
CSize GetDocUnits(int bDrawableSize=0);

/// @return CSize
CSize GetDocUnits();

/// @return double
double GetDocUnitsPerInch();

/// @return double
double GetPhysicalGranularity();

/// @return double
double GetPinToPinScaleFactor();

/// @return long
long GetPageWidth();

/// @return long
long GetPageHeight();

/// @return long
long GetPinToPin();

/// @return int
int GetIsMetric();

/// @param nPageWidth long &
/// @param nPageHeight long &
/// @param nPinToPin long &
/// @param bIsMetric int &
void GetPageSizeInfo(long & nPageWidth, long & nPageHeight, long & nPinToPin, int & bIsMetric);

/// @param status DboState &
/// @return int
int GetBorderDisplayed(DboState & status);

/// @param status DboState &
/// @return int
int GetBorderPrinted(DboState & status);

/// @param status DboState &
/// @return int
int GetGridRefDisplayed(DboState & status);

/// @param status DboState &
/// @return int
int GetGridRefPrinted(DboState & status);

/// @param status DboState &
/// @return int
int GetTitleBlockDisplayed(DboState & status);

/// @param status DboState &
/// @return int
int GetTitleBlockPrinted(DboState & status);

/// @param status DboState &
/// @return int
int GetANSIGridRefs(DboState & status);

/// @param size CString &
/// @return DboState
DboState GetSizeName(CString & size);

/// @param status DboState &
/// @return CSize
CSize GetSize(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetOuterBorderMargin(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetOuterBorderLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetOuterBorderLineWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetOuterBorderIsVisible(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetInnerBorderMargin(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetInnerBorderLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetInnerBorderLineWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetInnerBorderIsVisible(DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param font LOGFONT &
/// @return DboState
DboState GetLabelFont(LOGFONT & font);

/// @param status DboState &
/// @return ColorT
ColorT GetLabelColor(DboState & status);

/// @param status DboState &
/// @return int
int GetHorizontalLabelCount(DboState & status);

/// @param status DboState &
/// @return int
int GetHorizontalLabelWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetHorizontalLabelIsChar(DboState & status);

/// @param status DboState &
/// @return int
int GetHorizontalLabelIsVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetHorizontalLabelIsAscending(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetHorizontalSeparatorLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetHorizontalSeparatorLineWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetVerticalLabelCount(DboState & status);

/// @param status DboState &
/// @return int
int GetVerticalLabelWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetVerticalLabelIsChar(DboState & status);

/// @param status DboState &
/// @return int
int GetVerticalLabelIsVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetVerticalLabelIsAscending(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetVerticalSeparatorLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetVerticalSeparatorLineWidth(DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return IStorage
IStorage GetUserStorage(CString & name, DboState & status);

/// @param status DboState &
/// @return int
int IsPersistent(DboState & status);

/// @param status DboState &
/// @return int
int IsModified(DboState & status);

/// @param status DboState &
/// @return int
int IsLocked(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPageNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t sGetModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t sGetCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSizeName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetSizeX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetSizeY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetOuterBorderMarginX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetOuterBorderMarginY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetOuterBorderLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetOuterBorderLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetOuterBorderIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetInnerBorderMarginX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetInnerBorderMarginY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetInnerBorderLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetInnerBorderLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetInnerBorderIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetLabelColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHorizontalLabelCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHorizontalLabelIsChar(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHorizontalLabelIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHorizontalLabelIsAscending(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetHorizontalSeparatorLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetHorizontalSeparatorLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetVerticalLabelCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetVerticalLabelIsChar(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetVerticalLabelIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetVerticalLabelIsAscending(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetVerticalSeparatorLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetVerticalSeparatorLineWidth(DboBaseObject * obj, DboState & status);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return DboNet
DboNet GetNet(DboBaseObject * pObj, DboState & status);

/// @param name CString &
/// @param status DboState &
/// @return DboNet
DboNet GetNet(CString & name, DboState & status);

/// @param id unsigned long
/// @param status DboState &
/// @return DboNet
DboNet GetNet(unsigned long id, DboState & status);

/// @param location CPoint
/// @return DboConnection
DboConnection GetConnection(CPoint location);

/// @param csNetName CString &
/// @return int
int IsValidNetName(CString & csNetName);

/// @return int
int IsTransactionInProgress();

/// @param UniqueNm CString
/// @return int
int PartAlreadyExistsWithName(CString UniqueNm);

/// @return DboPtrArray
DboPtrArray GetWiresList();

/// @return DboPtrArray
DboPtrArray GetPortsList();

/// @return DboPtrArray
DboPtrArray GetERCsList();

/// @return DboPtrArray
DboPtrArray GetBookMarksList();

/// @return DboPtrArray
DboPtrArray GetGlobalsList();

/// @return DboPtrArray
DboPtrArray GetOffPageConnectorsList();

/// @return DboPtrArray
DboPtrArray GetBusEntriesList();

/// @return DboPtrArray
DboPtrArray GetCommentGraphicsList();

/// @return DboPtrArray
DboPtrArray GetTitleBlocksList();

/// @return DboPtrArray
DboPtrArray GetCustomItemsList();

/// @return DboMapNameAndIdToPartInst
DboMapNameAndIdToPartInst GetPartInstList();

/// @return int
int GetTransactionCount();

/// @param label char *
/// @return int
int GetLabelState(char * label);

/// @param label char [][50]
void GetLabelArray(char [][50] label);

/// @param oldId unsigned long
/// @param inst DboPartInst *
void NotifyChangingInstId(unsigned long oldId, DboPartInst * inst);

/// @param oldname CString const &
/// @param inst DboPartInst *
void NotifyChangingInstName(CString const & oldname, DboPartInst * inst);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return DboState
DboState MarkModified();

/// @param status DboState &
/// @return DboPagePartInstsIter
DboPagePartInstsIter NewPartInstsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboPageWiresIter
DboPageWiresIter NewWiresIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboPageWiresIter
DboPageWiresIter NewWiresIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboPagePortsIter
DboPagePortsIter NewPortsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboPagePortsIter
DboPagePortsIter NewPortsIter(DboState & status);

/// @param status DboState &
/// @return DboPageGlobalsIter
DboPageGlobalsIter NewGlobalsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboPageOffPageConnectorsIter
DboPageOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboPageOffPageConnectorsIter
DboPageOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status);

/// @param status DboState &
/// @return DboPageCommentGraphicsIter
DboPageCommentGraphicsIter NewCommentGraphicsIter(DboState & status);

/// @param status DboState &
/// @return DboPageBusEntriesIter
DboPageBusEntriesIter NewBusEntriesIter(DboState & status);

/// @param status DboState &
/// @return DboPageTitleBlocksIter
DboPageTitleBlocksIter NewTitleBlocksIter(DboState & status);

/// @param status DboState &
/// @return DboPageERCsIter
DboPageERCsIter NewERCsIter(DboState & status);

/// @param status DboState &
/// @return DboPageBookMarksIter
DboPageBookMarksIter NewBookMarksIter(DboState & status);

/// @param location CPoint
/// @param status DboState &
/// @return DboPageObjectsAtPointIter
DboPageObjectsAtPointIter NewObjectsAtPointIter(CPoint location, DboState & status);

/// @param area CRect
/// @param status DboState &
/// @return DboWiresInAreaIter
DboWiresInAreaIter NewWiresInAreaIter(CRect area, DboState & status);

/// @param pt CPoint
/// @param status DboState &
/// @return DboWiresAtPointIter
DboWiresAtPointIter NewWiresAtPointIter(CPoint pt, DboState & status);

/// @param status DboState &
/// @param bOccurrenceEdits int
/// @return DboPageEditsIter
DboPageEditsIter NewEditsIter(DboState & status, int bOccurrenceEdits=0);

/// @param status DboState &
/// @return DboPageEditsIter
DboPageEditsIter NewEditsIter(DboState & status);

/// @param UnNamedBundleList CStringList &
/// @return DboState
DboState GetUnNamedBundleList(CStringList & UnNamedBundleList);

/// @param location CPoint
/// @return DboState
DboState DeleteJunction(CPoint location);

/// @param nPageWidth long
void SetPageWidth(long nPageWidth);

/// @param nPageHeight long
void SetPageHeight(long nPageHeight);

/// @param nPinToPin long
void SetPinToPin(long nPinToPin);

/// @param bIsMetric int
void SetIsMetric(int bIsMetric);

/// @param nPageWidth long
/// @param nPageHeight long
/// @param nPinToPin long
/// @param bIsMetric int
void SetPageSizeInfo(long nPageWidth, long nPageHeight, long nPinToPin, int bIsMetric);

/// @param bVal int
/// @return DboState
DboState SetBorderDisplayed(int bVal);

/// @param bVal int
/// @return DboState
DboState SetBorderPrinted(int bVal);

/// @param bVal int
/// @return DboState
DboState SetGridRefDisplayed(int bVal);

/// @param bVal int
/// @return DboState
DboState SetGridRefPrinted(int bVal);

/// @param bVal int
/// @return DboState
DboState SetTitleBlockDisplayed(int bVal);

/// @param bVal int
/// @return DboState
DboState SetTitleBlockPrinted(int bVal);

/// @param bVal int
/// @return DboState
DboState SetANSIGridRefs(int bVal);

/// @param name CString &
/// @return DboState
DboState SetSizeName(CString & name);

/// @param size CSize
/// @return DboState
DboState SetSize(CSize size);

/// @param location CPoint
/// @return DboState
DboState SetOuterBorderMargin(CPoint location);

/// @param lineStyle enum DboValue::LineStyleT
/// @return DboState
DboState SetOuterBorderLineStyle(enum DboValue::LineStyleT lineStyle);

/// @param lineWidth enum DboValue::LineWidthT
/// @return DboState
DboState SetOuterBorderLineWidth(enum DboValue::LineWidthT lineWidth);

/// @param bval int
/// @return DboState
DboState SetOuterBorderIsVisible(int bval);

/// @param location CPoint
/// @return DboState
DboState SetInnerBorderMargin(CPoint location);

/// @param lineStyle enum DboValue::LineStyleT
/// @return DboState
DboState SetInnerBorderLineStyle(enum DboValue::LineStyleT lineStyle);

/// @param lineWidth enum DboValue::LineWidthT
/// @return DboState
DboState SetInnerBorderLineWidth(enum DboValue::LineWidthT lineWidth);

/// @param bval int
/// @return DboState
DboState SetInnerBorderIsVisible(int bval);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param font LOGFONT &
/// @return DboState
DboState SetLabelFont(LOGFONT & font);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetLabelColor(enum DboValue::ColorT color);

/// @param count int
/// @return DboState
DboState SetHorizontalLabelCount(int count);

/// @param nWidth int
/// @return DboState
DboState SetHorizontalLabelWidth(int nWidth);

/// @param bval int
/// @return DboState
DboState SetHorizontalLabelIsChar(int bval);

/// @param bval int
/// @return DboState
DboState SetHorizontalLabelIsVisible(int bval);

/// @param bval int
/// @return DboState
DboState SetHorizontalLabelIsAscending(int bval);

/// @param lineStyle enum DboValue::LineStyleT
/// @return DboState
DboState SetHorizontalSeparatorLineStyle(enum DboValue::LineStyleT lineStyle);

/// @param lineWidth enum DboValue::LineWidthT
/// @return DboState
DboState SetHorizontalSeparatorLineWidth(enum DboValue::LineWidthT lineWidth);

/// @param count int
/// @return DboState
DboState SetVerticalLabelCount(int count);

/// @param nWidth int
/// @return DboState
DboState SetVerticalLabelWidth(int nWidth);

/// @param bval int
/// @return DboState
DboState SetVerticalLabelIsChar(int bval);

/// @param bval int
/// @return DboState
DboState SetVerticalLabelIsVisible(int bval);

/// @param bval int
/// @return DboState
DboState SetVerticalLabelIsAscending(int bval);

/// @param lineStyle enum DboValue::LineStyleT
/// @return DboState
DboState SetVerticalSeparatorLineStyle(enum DboValue::LineStyleT lineStyle);

/// @param lineWidth enum DboValue::LineWidthT
/// @return DboState
DboState SetVerticalSeparatorLineWidth(enum DboValue::LineWidthT lineWidth);

/// @return DboNetScalar
DboNetScalar NewNetScalar();

/// @param bIsBundle int
/// @return DboNetBus
DboNetBus NewNetBus(int bIsBundle=0);

/// @return DboNetBus
DboNetBus NewNetBus();

void UpdatePageState();

/// @param bRedo int
void RestorePrevState(int bRedo);

void UpdateRedoState();

void InitUndoRedoData();

void ClearUndoRedoData();

/// @param bRedo int
void ClearUndoRedoInfo(int bRedo);

/// @param pObject DboDeletedObject *
void DeleteDeletedObject(DboDeletedObject * pObject);

/// @return DboDeletedObject
DboDeletedObject NewDeletedObject();

/// @param label char *
void SetLabelState(char * label);

/// @param label char *
/// @return int
int DeleteLabelState(char * label);

/// @return int
int CreateLog();

void CloseLog();

/// @param bRedo int
void DumpObjectMap(int bRedo);

/// @param type enum DboPage::TransactionType
/// @return DboState
DboState StartTransaction(enum DboPage::TransactionType type=EDIT_T);

/// @return DboState
DboState StartTransaction();

/// @param pFile CFile *
/// @return DboState
DboState CopyToFile(CFile * pFile);

/// @param pFile CFile *
/// @param bCopyName int
/// @return DboState
DboState CopyFromFile(CFile * pFile, int bCopyName=1);

/// @param pFile CFile *
/// @return DboState
DboState CopyFromFile(CFile * pFile);

/// @param source DboBaseObject *
/// @return DboState
DboState Copy(DboBaseObject * source);

/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, DboState & status, int bNewVersion=0);

/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param color enum DboValue::ColorT
/// @param nID unsigned long
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboState & status, CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, unsigned long nID=0);

/// @param status DboState &
/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param color enum DboValue::ColorT
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboState & status, CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboState & status, CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboState & status, CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param PackageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param location CPoint
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboState & status, CString & Name, CString & PackageName, DboLibPart * part, DboDevice * device, CPoint location);

/// @param pSource DboPlacedInst *
/// @param status DboState &
/// @param ptOffset CPoint const
/// @param bNewVersion int
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboPlacedInst * pSource, DboState & status, CPoint const ptOffset=CPoint(0, 0), int bNewVersion=0);

/// @param pSource DboPlacedInst *
/// @param status DboState &
/// @param ptOffset CPoint const
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboPlacedInst * pSource, DboState & status, CPoint const ptOffset=CPoint(0, 0));

/// @param pSource DboPlacedInst *
/// @param status DboState &
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboPlacedInst * pSource, DboState & status);

/// @param pSource DboTemplatePartInst *
/// @param status DboState &
/// @param ptOffset CPoint const
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboTemplatePartInst * pSource, DboState & status, CPoint const ptOffset=CPoint(0, 0));

/// @param pSource DboTemplatePartInst *
/// @param status DboState &
/// @return DboPlacedInst
DboPlacedInst NewPlacedInst(DboTemplatePartInst * pSource, DboState & status);

/// @param pOldInst DboPlacedInst *
/// @param packageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @param bUpdate int
/// @param bNewVersion int
/// @return DboPlacedInst
DboPlacedInst ReplaceInst(DboPlacedInst * pOldInst, CString & packageName, DboLibPart * part, DboDevice * device, DboState & status, int bUpdate=0, int bNewVersion=0);

/// @param pOldInst DboPlacedInst *
/// @param packageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @param bUpdate int
/// @return DboPlacedInst
DboPlacedInst ReplaceInst(DboPlacedInst * pOldInst, CString & packageName, DboLibPart * part, DboDevice * device, DboState & status, int bUpdate=0);

/// @param pOldInst DboPlacedInst *
/// @param packageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @return DboPlacedInst
DboPlacedInst ReplaceInst(DboPlacedInst * pOldInst, CString & packageName, DboLibPart * part, DboDevice * device, DboState & status);

/// @param pOldInst DboPlacedInst *
/// @param packageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @param bUpdate int
/// @param bNewVersion int
/// @param bPreserverefDes int
/// @param bDeleteOldInst int
/// @param updateDPfromLib int
/// @return DboPlacedInst
DboPlacedInst ReplaceInst(DboPlacedInst * pOldInst, CString & packageName, DboLibPart * part, DboDevice * device, DboState & status, int bUpdate, int bNewVersion, int bPreserverefDes, int bDeleteOldInst=1, int updateDPfromLib=0);

/// @param pOldInst DboPlacedInst *
/// @param packageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @param bUpdate int
/// @param bNewVersion int
/// @param bPreserverefDes int
/// @param bDeleteOldInst int
/// @return DboPlacedInst
DboPlacedInst ReplaceInst(DboPlacedInst * pOldInst, CString & packageName, DboLibPart * part, DboDevice * device, DboState & status, int bUpdate, int bNewVersion, int bPreserverefDes, int bDeleteOldInst=1);

/// @param pOldInst DboPlacedInst *
/// @param packageName CString &
/// @param part DboLibPart *
/// @param device DboDevice *
/// @param status DboState &
/// @param bUpdate int
/// @param bNewVersion int
/// @param bPreserverefDes int
/// @return DboPlacedInst
DboPlacedInst ReplaceInst(DboPlacedInst * pOldInst, CString & packageName, DboLibPart * part, DboDevice * device, DboState & status, int bUpdate, int bNewVersion, int bPreserverefDes);

/// @param pOldInst DboGraphicInstance *
/// @param pNewSymbol DboBaseObject *
/// @param packageName CString &
/// @param status DboState &
/// @param bUpdate int
/// @return DboGraphicInstance
DboGraphicInstance ReplaceGraphicInst(DboGraphicInstance * pOldInst, DboBaseObject * pNewSymbol, CString & packageName, DboState & status, int bUpdate=0);

/// @param pOldInst DboGraphicInstance *
/// @param pNewSymbol DboBaseObject *
/// @param packageName CString &
/// @param status DboState &
/// @return DboGraphicInstance
DboGraphicInstance ReplaceGraphicInst(DboGraphicInstance * pOldInst, DboBaseObject * pNewSymbol, CString & packageName, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @param nId unsigned long
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(CString & Name, DboState & status, unsigned long nId=0);

/// @param Name CString &
/// @param status DboState &
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(CString & Name, DboState & status);

/// @param pSource DboDrawnInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboDrawnInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboDrawnInst *
/// @param status DboState &
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboDrawnInst * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param boundingBox CRect
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param color enum DboValue::ColorT
/// @param isBunndleBlock bool
/// @param isUnNamedBundle bool
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboState & status, CString & Name, CRect boundingBox, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, bool isBunndleBlock=False, bool isUnNamedBundle=False);

/// @param status DboState &
/// @param Name CString &
/// @param boundingBox CRect
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param color enum DboValue::ColorT
/// @param isBunndleBlock bool
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboState & status, CString & Name, CRect boundingBox, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, bool isBunndleBlock=False);

/// @param status DboState &
/// @param Name CString &
/// @param boundingBox CRect
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param color enum DboValue::ColorT
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboState & status, CString & Name, CRect boundingBox, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param Name CString &
/// @param boundingBox CRect
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboState & status, CString & Name, CRect boundingBox, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param boundingBox CRect
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboState & status, CString & Name, CRect boundingBox, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param boundingBox CRect
/// @param location CPoint
/// @return DboDrawnInst
DboDrawnInst NewDrawnInst(DboState & status, CString & Name, CRect boundingBox, CPoint location);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param style enum DboValue::LineStyleT
/// @param width enum DboValue::LineWidthT
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE, enum DboValue::LineWidthT width=DEFAULT_LINE_WIDTH);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param style enum DboValue::LineStyleT
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param style enum DboValue::LineStyleT
/// @param width enum DboValue::LineWidthT
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE, enum DboValue::LineWidthT width=DEFAULT_LINE_WIDTH);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param style enum DboValue::LineStyleT
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd);

/// @param status DboState &
/// @param bNewVersion int
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status, int bNewVersion=0);

/// @param status DboState &
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboState & status);

/// @param pSource DboWireScalar *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboWireScalar * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboWireScalar *
/// @param status DboState &
/// @return DboWireScalar
DboWireScalar NewWireScalar(DboWireScalar * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @param width enum DboValue::LineWidthT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE, enum DboValue::LineWidthT width=DEFAULT_LINE_WIDTH);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @param width enum DboValue::LineWidthT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE, enum DboValue::LineWidthT width=DEFAULT_LINE_WIDTH);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param color enum DboValue::ColorT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @param width enum DboValue::LineWidthT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE, enum DboValue::LineWidthT width=DEFAULT_LINE_WIDTH);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bBundle int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bBundle=0);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param Name CString &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CString & Name, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @param width enum DboValue::LineWidthT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE, enum DboValue::LineWidthT width=DEFAULT_LINE_WIDTH);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param bBundle int
/// @param style enum DboValue::LineStyleT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, int bBundle=0, enum DboValue::LineStyleT style=DEFAULT_LINE_STYLE);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @param bBundle int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0, int bBundle=0);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @param bNewVersion int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, int bNewVersion=0);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @param color enum DboValue::ColorT
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param bJunctionStart int
/// @param bJunctionEnd int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, CPoint start, CPoint end, int bJunctionStart, int bJunctionEnd);

/// @param status DboState &
/// @param bBundle int
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status, int bBundle=0);

/// @param status DboState &
/// @return DboWireBus
DboWireBus NewWireBus(DboState & status);

/// @param pSource DboWireBus *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboWireBus
DboWireBus NewWireBus(DboWireBus * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboWireBus *
/// @param status DboState &
/// @return DboWireBus
DboWireBus NewWireBus(DboWireBus * pSource, DboState & status);

/// @param status DboState &
/// @param BusPoint CPoint
/// @param EndPoint CPoint
/// @param color enum DboValue::ColorT
/// @param nID unsigned long
/// @return DboBusEntry
DboBusEntry NewBusEntry(DboState & status, CPoint BusPoint, CPoint EndPoint, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR, unsigned long nID=0);

/// @param status DboState &
/// @param BusPoint CPoint
/// @param EndPoint CPoint
/// @param color enum DboValue::ColorT
/// @return DboBusEntry
DboBusEntry NewBusEntry(DboState & status, CPoint BusPoint, CPoint EndPoint, enum DboValue::ColorT color=DEFAULT_OBJECT_COLOR);

/// @param status DboState &
/// @param BusPoint CPoint
/// @param EndPoint CPoint
/// @return DboBusEntry
DboBusEntry NewBusEntry(DboState & status, CPoint BusPoint, CPoint EndPoint);

/// @param pSource DboBusEntry *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboBusEntry
DboBusEntry NewBusEntry(DboBusEntry * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboBusEntry *
/// @param status DboState &
/// @return DboBusEntry
DboBusEntry NewBusEntry(DboBusEntry * pSource, DboState & status);

/// @param location CPoint
/// @param status DboState &
void AddJunctionToWire(CPoint location, DboState & status);

/// @param status DboState &
/// @param symbol DboTitleBlockSymbol *
/// @param Name CString &
/// @return DboTitleBlock
DboTitleBlock NewTitleBlock(DboState & status, DboTitleBlockSymbol * symbol, CString & Name);

/// @param pSource DboTitleBlock *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboTitleBlock
DboTitleBlock NewTitleBlock(DboTitleBlock * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboTitleBlock *
/// @param status DboState &
/// @return DboTitleBlock
DboTitleBlock NewTitleBlock(DboTitleBlock * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboGlobalSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param nId unsigned long
/// @return DboGlobal
DboGlobal NewGlobal(DboState & status, CString & Name, DboGlobalSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, unsigned long nId=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboGlobalSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboGlobal
DboGlobal NewGlobal(DboState & status, CString & Name, DboGlobalSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboGlobalSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGlobal
DboGlobal NewGlobal(DboState & status, CString & Name, DboGlobalSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboGlobalSymbol *
/// @param location CPoint
/// @return DboGlobal
DboGlobal NewGlobal(DboState & status, CString & Name, DboGlobalSymbol * symbol, CPoint location);

/// @param pSource DboGlobal *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGlobal
DboGlobal NewGlobal(DboGlobal * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGlobal *
/// @param status DboState &
/// @return DboGlobal
DboGlobal NewGlobal(DboGlobal * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboPortSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param nID unsigned long
/// @return DboPort
DboPort NewPort(DboState & status, CString & Name, DboPortSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, unsigned long nID=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboPortSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboPort
DboPort NewPort(DboState & status, CString & Name, DboPortSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboPortSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboPort
DboPort NewPort(DboState & status, CString & Name, DboPortSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboPortSymbol *
/// @param location CPoint
/// @return DboPort
DboPort NewPort(DboState & status, CString & Name, DboPortSymbol * symbol, CPoint location);

/// @param pSource DboPort *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboPort
DboPort NewPort(DboPort * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboPort *
/// @param status DboState &
/// @return DboPort
DboPort NewPort(DboPort * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboOffPageSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param nId unsigned long
/// @return DboOffPageConnector
DboOffPageConnector NewOffPageConnector(DboState & status, CString & Name, DboOffPageSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, unsigned long nId=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboOffPageSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboOffPageConnector
DboOffPageConnector NewOffPageConnector(DboState & status, CString & Name, DboOffPageSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboOffPageSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboOffPageConnector
DboOffPageConnector NewOffPageConnector(DboState & status, CString & Name, DboOffPageSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboOffPageSymbol *
/// @param location CPoint
/// @return DboOffPageConnector
DboOffPageConnector NewOffPageConnector(DboState & status, CString & Name, DboOffPageSymbol * symbol, CPoint location);

/// @param pSource DboOffPageConnector *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboOffPageConnector
DboOffPageConnector NewOffPageConnector(DboOffPageConnector * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboOffPageConnector *
/// @param status DboState &
/// @return DboOffPageConnector
DboOffPageConnector NewOffPageConnector(DboOffPageConnector * pSource, DboState & status);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicInstance
DboGraphicInstance NewCommentGraphic(DboState & status, CPoint location, enum DboValue::RotationT rotation);

/// @param status DboState &
/// @param graphic DboGraphicObject *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param objType enum DboBaseObject::ObjectTypeT
/// @return DboGraphicInstance
DboGraphicInstance NewCommentGraphic(DboState & status, DboGraphicObject * graphic, CPoint location, enum DboValue::RotationT rotation, enum DboBaseObject::ObjectTypeT objType=GRAPHIC_INSTANCE);

/// @param status DboState &
/// @param graphic DboGraphicObject *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicInstance
DboGraphicInstance NewCommentGraphic(DboState & status, DboGraphicObject * graphic, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicInstance *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicInstance
DboGraphicInstance NewCommentGraphic(DboGraphicInstance * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicInstance *
/// @param status DboState &
/// @return DboGraphicInstance
DboGraphicInstance NewCommentGraphic(DboGraphicInstance * pSource, DboState & status);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicSymbolVectorInst
DboGraphicSymbolVectorInst NewGraphicSymbolVectorInst(DboState & status, CPoint location, enum DboValue::RotationT rotation);

/// @param status DboState &
/// @param rect CRect &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicBoxInst
DboGraphicBoxInst NewGraphicBoxInst(DboState & status, CRect & rect, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param rect CRect &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicBoxInst
DboGraphicBoxInst NewGraphicBoxInst(DboState & status, CRect & rect, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicBoxInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicBoxInst
DboGraphicBoxInst NewGraphicBoxInst(DboGraphicBoxInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicBoxInst *
/// @param status DboState &
/// @return DboGraphicBoxInst
DboGraphicBoxInst NewGraphicBoxInst(DboGraphicBoxInst * pSource, DboState & status);

/// @param status DboState &
/// @param ptStart CPoint
/// @param ptEnd CPoint
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicLineInst
DboGraphicLineInst NewGraphicLineInst(DboState & status, CPoint ptStart, CPoint ptEnd, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param ptStart CPoint
/// @param ptEnd CPoint
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicLineInst
DboGraphicLineInst NewGraphicLineInst(DboState & status, CPoint ptStart, CPoint ptEnd, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicLineInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicLineInst
DboGraphicLineInst NewGraphicLineInst(DboGraphicLineInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicLineInst *
/// @param status DboState &
/// @return DboGraphicLineInst
DboGraphicLineInst NewGraphicLineInst(DboGraphicLineInst * pSource, DboState & status);

/// @param status DboState &
/// @param rectBound CRect &
/// @param ptStart CPoint
/// @param ptEnd CPoint
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicArcInst
DboGraphicArcInst NewGraphicArcInst(DboState & status, CRect & rectBound, CPoint ptStart, CPoint ptEnd, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param rectBound CRect &
/// @param ptStart CPoint
/// @param ptEnd CPoint
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicArcInst
DboGraphicArcInst NewGraphicArcInst(DboState & status, CRect & rectBound, CPoint ptStart, CPoint ptEnd, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicArcInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicArcInst
DboGraphicArcInst NewGraphicArcInst(DboGraphicArcInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicArcInst *
/// @param status DboState &
/// @return DboGraphicArcInst
DboGraphicArcInst NewGraphicArcInst(DboGraphicArcInst * pSource, DboState & status);

/// @param status DboState &
/// @param rectBound CRect &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicEllipseInst
DboGraphicEllipseInst NewGraphicEllipseInst(DboState & status, CRect & rectBound, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param rectBound CRect &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicEllipseInst
DboGraphicEllipseInst NewGraphicEllipseInst(DboState & status, CRect & rectBound, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicEllipseInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicEllipseInst
DboGraphicEllipseInst NewGraphicEllipseInst(DboGraphicEllipseInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicEllipseInst *
/// @param status DboState &
/// @return DboGraphicEllipseInst
DboGraphicEllipseInst NewGraphicEllipseInst(DboGraphicEllipseInst * pSource, DboState & status);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicPolygonInst
DboGraphicPolygonInst NewGraphicPolygonInst(DboState & status, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicPolygonInst
DboGraphicPolygonInst NewGraphicPolygonInst(DboState & status, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicPolygonInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicPolygonInst
DboGraphicPolygonInst NewGraphicPolygonInst(DboGraphicPolygonInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicPolygonInst *
/// @param status DboState &
/// @return DboGraphicPolygonInst
DboGraphicPolygonInst NewGraphicPolygonInst(DboGraphicPolygonInst * pSource, DboState & status);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicPolylineInst
DboGraphicPolylineInst NewGraphicPolylineInst(DboState & status, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicPolylineInst
DboGraphicPolylineInst NewGraphicPolylineInst(DboState & status, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicPolylineInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicPolylineInst
DboGraphicPolylineInst NewGraphicPolylineInst(DboGraphicPolylineInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicPolylineInst *
/// @param status DboState &
/// @return DboGraphicPolylineInst
DboGraphicPolylineInst NewGraphicPolylineInst(DboGraphicPolylineInst * pSource, DboState & status);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicBezierInst
DboGraphicBezierInst NewGraphicBezierInst(DboState & status, CPoint location, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicBezierInst
DboGraphicBezierInst NewGraphicBezierInst(DboState & status, CPoint location, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicBezierInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicBezierInst
DboGraphicBezierInst NewGraphicBezierInst(DboGraphicBezierInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicBezierInst *
/// @param status DboState &
/// @return DboGraphicBezierInst
DboGraphicBezierInst NewGraphicBezierInst(DboGraphicBezierInst * pSource, DboState & status);

/// @param status DboState &
/// @param rect CRect &
/// @param location CPoint
/// @param bmDimension CSize
/// @param dwDibSize unsigned long
/// @param lpByte unsigned char *
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicOleEmbedInst
DboGraphicOleEmbedInst NewGraphicOleEmbedInst(DboState & status, CRect & rect, CPoint location, CSize bmDimension, unsigned long dwDibSize, unsigned char * lpByte, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param rect CRect &
/// @param location CPoint
/// @param bmDimension CSize
/// @param dwDibSize unsigned long
/// @param lpByte unsigned char *
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicOleEmbedInst
DboGraphicOleEmbedInst NewGraphicOleEmbedInst(DboState & status, CRect & rect, CPoint location, CSize bmDimension, unsigned long dwDibSize, unsigned char * lpByte, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicOleEmbedInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicOleEmbedInst
DboGraphicOleEmbedInst NewGraphicOleEmbedInst(DboGraphicOleEmbedInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicOleEmbedInst *
/// @param status DboState &
/// @return DboGraphicOleEmbedInst
DboGraphicOleEmbedInst NewGraphicOleEmbedInst(DboGraphicOleEmbedInst * pSource, DboState & status);

/// @param status DboState &
/// @param rectBound CRect &
/// @param location CPoint
/// @param rText CString &
/// @param rLF LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicCommentTextInst
DboGraphicCommentTextInst NewGraphicCommentTextInst(DboState & status, CRect & rectBound, CPoint location, CString & rText, LOGFONT & rLF, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param rectBound CRect &
/// @param location CPoint
/// @param rText CString &
/// @param rLF LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicCommentTextInst
DboGraphicCommentTextInst NewGraphicCommentTextInst(DboState & status, CRect & rectBound, CPoint location, CString & rText, LOGFONT & rLF, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicCommentTextInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicCommentTextInst
DboGraphicCommentTextInst NewGraphicCommentTextInst(DboGraphicCommentTextInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicCommentTextInst *
/// @param status DboState &
/// @return DboGraphicCommentTextInst
DboGraphicCommentTextInst NewGraphicCommentTextInst(DboGraphicCommentTextInst * pSource, DboState & status);

/// @param status DboState &
/// @param rect CRect &
/// @param location CPoint
/// @param bmDimension CSize
/// @param dwDibSize unsigned long
/// @param lpDib unsigned char *
/// @param rotation enum DboValue::RotationT
/// @param nId unsigned long
/// @return DboGraphicBitMapInst
DboGraphicBitMapInst NewGraphicBitMapInst(DboState & status, CRect & rect, CPoint location, CSize bmDimension, unsigned long dwDibSize, unsigned char * lpDib, enum DboValue::RotationT rotation, unsigned long nId=0);

/// @param status DboState &
/// @param rect CRect &
/// @param location CPoint
/// @param bmDimension CSize
/// @param dwDibSize unsigned long
/// @param lpDib unsigned char *
/// @param rotation enum DboValue::RotationT
/// @return DboGraphicBitMapInst
DboGraphicBitMapInst NewGraphicBitMapInst(DboState & status, CRect & rect, CPoint location, CSize bmDimension, unsigned long dwDibSize, unsigned char * lpDib, enum DboValue::RotationT rotation);

/// @param pSource DboGraphicBitMapInst *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboGraphicBitMapInst
DboGraphicBitMapInst NewGraphicBitMapInst(DboGraphicBitMapInst * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboGraphicBitMapInst *
/// @param status DboState &
/// @return DboGraphicBitMapInst
DboGraphicBitMapInst NewGraphicBitMapInst(DboGraphicBitMapInst * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param strError CString const &
/// @param strDetail CString const &
/// @param strLocation CString const &
/// @param symbol DboERCSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param bNewVersion int
/// @return DboERC
DboERC NewERC(DboState & status, CString & Name, CString const & strError, CString const & strDetail, CString const & strLocation, DboERCSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, int bNewVersion=0);

/// @param status DboState &
/// @param Name CString &
/// @param strError CString const &
/// @param strDetail CString const &
/// @param strLocation CString const &
/// @param symbol DboERCSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboERC
DboERC NewERC(DboState & status, CString & Name, CString const & strError, CString const & strDetail, CString const & strLocation, DboERCSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param strError CString const &
/// @param strDetail CString const &
/// @param strLocation CString const &
/// @param symbol DboERCSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboERC
DboERC NewERC(DboState & status, CString & Name, CString const & strError, CString const & strDetail, CString const & strLocation, DboERCSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param strError CString const &
/// @param strDetail CString const &
/// @param strLocation CString const &
/// @param symbol DboERCSymbol *
/// @param location CPoint
/// @return DboERC
DboERC NewERC(DboState & status, CString & Name, CString const & strError, CString const & strDetail, CString const & strLocation, DboERCSymbol * symbol, CPoint location);

/// @param pSource DboERC *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboERC
DboERC NewERC(DboERC * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboERC *
/// @param status DboState &
/// @return DboERC
DboERC NewERC(DboERC * pSource, DboState & status);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboBookMarkSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @param nId unsigned long
/// @return DboBookMark
DboBookMark NewBookMark(DboState & status, CString & Name, DboBookMarkSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0, unsigned long nId=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboBookMarkSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param mirror int
/// @return DboBookMark
DboBookMark NewBookMark(DboState & status, CString & Name, DboBookMarkSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION, int mirror=0);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboBookMarkSymbol *
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @return DboBookMark
DboBookMark NewBookMark(DboState & status, CString & Name, DboBookMarkSymbol * symbol, CPoint location, enum DboValue::RotationT rotation=NOROTATION);

/// @param status DboState &
/// @param Name CString &
/// @param symbol DboBookMarkSymbol *
/// @param location CPoint
/// @return DboBookMark
DboBookMark NewBookMark(DboState & status, CString & Name, DboBookMarkSymbol * symbol, CPoint location);

/// @param pSource DboBookMark *
/// @param status DboState &
/// @param bNewVersion int
/// @return DboBookMark
DboBookMark NewBookMark(DboBookMark * pSource, DboState & status, int bNewVersion=0);

/// @param pSource DboBookMark *
/// @param status DboState &
/// @return DboBookMark
DboBookMark NewBookMark(DboBookMark * pSource, DboState & status);

/// @param pDefiningObj DboSymbol *
/// @param nType int
/// @param idInterfaceID IID
/// @param strPluginName CString const &
/// @param nCookie int
/// @param nDefColorIdx UINT
/// @param pSchOcc DboInstOccurrence *
/// @return DboCustomItemInstance
DboCustomItemInstance NewCustomItemInstance(DboSymbol * pDefiningObj, int nType, IID idInterfaceID, CString const & strPluginName, int nCookie, UINT nDefColorIdx, DboInstOccurrence * pSchOcc);

/// @param pBlock DboExportBlock *
/// @return DboState
DboState Import(DboExportBlock * pBlock);

/// @param pTibleBlock DboTitleBlock *
/// @param bInstVer int
/// @param bOccVer int
/// @return DboState
DboState DeleteTitleBlock(DboTitleBlock * pTibleBlock, int bInstVer=0, int bOccVer=0);

/// @param pTibleBlock DboTitleBlock *
/// @param bInstVer int
/// @return DboState
DboState DeleteTitleBlock(DboTitleBlock * pTibleBlock, int bInstVer=0);

/// @param pTibleBlock DboTitleBlock *
/// @return DboState
DboState DeleteTitleBlock(DboTitleBlock * pTibleBlock);

/// @param inst DboPartInst *
/// @param bNewVer int
/// @param bNewOccVer int
/// @return DboState
DboState DeletePartInst(DboPartInst * inst, int bNewVer=0, int bNewOccVer=0);

/// @param inst DboPartInst *
/// @param bNewVer int
/// @return DboState
DboState DeletePartInst(DboPartInst * inst, int bNewVer=0);

/// @param inst DboPartInst *
/// @return DboState
DboState DeletePartInst(DboPartInst * inst);

/// @param wire DboWire *
/// @param bNewVer int
/// @return DboState
DboState DeleteWire(DboWire * wire, int bNewVer=0);

/// @param wire DboWire *
/// @return DboState
DboState DeleteWire(DboWire * wire);

/// @param busEntry DboBusEntry *
/// @param bNewVer int
/// @return DboState
DboState DeleteBusEntry(DboBusEntry * busEntry, int bNewVer=0);

/// @param busEntry DboBusEntry *
/// @return DboState
DboState DeleteBusEntry(DboBusEntry * busEntry);

/// @param ERC DboERC *
/// @param bNewVer int
/// @return DboState
DboState DeleteERC(DboERC * ERC, int bNewVer=0);

/// @param ERC DboERC *
/// @return DboState
DboState DeleteERC(DboERC * ERC);

/// @param bookMark DboBookMark *
/// @param bNewVer int
/// @return DboState
DboState DeleteBookMark(DboBookMark * bookMark, int bNewVer=0);

/// @param bookMark DboBookMark *
/// @return DboState
DboState DeleteBookMark(DboBookMark * bookMark);

/// @param global DboGlobal *
/// @param bNewVer int
/// @return DboState
DboState DeleteGlobal(DboGlobal * global, int bNewVer=0);

/// @param global DboGlobal *
/// @return DboState
DboState DeleteGlobal(DboGlobal * global);

/// @param port DboPort *
/// @param bNewVer int
/// @return DboState
DboState DeletePort(DboPort * port, int bNewVer=0);

/// @param port DboPort *
/// @return DboState
DboState DeletePort(DboPort * port);

/// @param connector DboOffPageConnector *
/// @param bNewVer int
/// @return DboState
DboState DeleteOffPageConnector(DboOffPageConnector * connector, int bNewVer=0);

/// @param connector DboOffPageConnector *
/// @return DboState
DboState DeleteOffPageConnector(DboOffPageConnector * connector);

/// @param instance DboGraphicInstance *
/// @param bNewVer int
/// @return DboState
DboState DeleteCommentGraphic(DboGraphicInstance * instance, int bNewVer=0);

/// @param instance DboGraphicInstance *
/// @return DboState
DboState DeleteCommentGraphic(DboGraphicInstance * instance);

/// @param pCustomItemInst DboCustomItemInstance *
/// @return DboState
DboState DeleteCustomItemInst(DboCustomItemInstance * pCustomItemInst);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetPageNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t DboPage_sGetModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t DboPage_sGetCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPage_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPage_sGetSizeName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetSizeX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetSizeY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetOuterBorderMarginX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetOuterBorderMarginY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboPage_sGetOuterBorderLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboPage_sGetOuterBorderLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetOuterBorderIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetInnerBorderMarginX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetInnerBorderMarginY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboPage_sGetInnerBorderLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboPage_sGetInnerBorderLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetInnerBorderIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboPage_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboPage_sGetLabelColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetHorizontalLabelCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetHorizontalLabelIsChar(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetHorizontalLabelIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetHorizontalLabelIsAscending(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboPage_sGetHorizontalSeparatorLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboPage_sGetHorizontalSeparatorLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetVerticalLabelCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetVerticalLabelIsChar(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetVerticalLabelIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPage_sGetVerticalLabelIsAscending(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboPage_sGetVerticalSeparatorLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboPage_sGetVerticalSeparatorLineWidth(DboBaseObject * obj, DboState & status);

/// @param csNetName CString &
/// @return int
int DboPage_IsValidNetName(CString & csNetName);

/// @param UniqueNm CString
/// @return int
int DboPage_PartAlreadyExistsWithName(CString UniqueNm);

/// @param x DboPage *
/// @return DboShadowPage
DboShadowPage DboPageToDboShadowPage(DboPage * x);

class DboShadowPage
	: public DboPage
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

};

class DboPageEditsIter
{
public:
/// @param pChangedObjectPtr DboBaseObject *&
/// @param pUserDataPtr void *&
/// @return DboState
DboState NextEdit(DboBaseObject *& pChangedObjectPtr, void *& pUserDataPtr);

};

class DboPageObjectsAtPointIter
	: public TBaseDboLibChangedObjectsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject NextObject(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBaseObject *&
/// @return unsigned long
unsigned long GetKey(DboBaseObject *& pObject);

};

class TBaseDboPagePartInstsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPagePartInstsIter
	: public TBaseDboPagePartInstsIter
{
public:
/// @param status DboState &
/// @return DboPartInst
DboPartInst NextPartInst(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPartInst *&
/// @return unsigned long
unsigned long GetKey(DboPartInst *& pObject);

};

class TBaseDboPageWiresIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageWiresIter
	: public TBaseDboSchematicNetWiresIter
{
public:
/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboWire *&
/// @return unsigned long
unsigned long GetKey(DboWire *& pObject);

};

class TBaseDboPageNetsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageNetsIter
	: public TBaseDboSchematicNetNetsIter
{
public:
/// @param status DboState &
/// @return DboNet
DboNet NextNet(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboNet *&
/// @return std::string
std::string GetKey(DboNet *& pObject);

};

class TBaseDboPagePortsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPagePortsIter
	: public TBaseDboPagePortsIter
{
public:
/// @param status DboState &
/// @return DboPort
DboPort NextPort(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPort *&
/// @return std::string
std::string GetKey(DboPort *& pObject);

};

class TBaseDboPageERCsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageERCsIter
	: public TBaseDboPageERCsIter
{
public:
/// @param status DboState &
/// @return DboERC
DboERC NextERC(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboERC *&
/// @return unsigned long
unsigned long GetKey(DboERC *& pObject);

};

class TBaseDboPageBookMarksIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageBookMarksIter
	: public TBaseDboPageBookMarksIter
{
public:
/// @param status DboState &
/// @return DboBookMark
DboBookMark NextBookMark(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBookMark *&
/// @return unsigned long
unsigned long GetKey(DboBookMark *& pObject);

};

class TBaseDboPageGlobalsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageGlobalsIter
	: public TBaseDboPageGlobalsIter
{
public:
/// @param status DboState &
/// @return DboGlobal
DboGlobal NextGlobal(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboGlobal *&
/// @return std::string
std::string GetKey(DboGlobal *& pObject);

};

class TBaseDboPageOffPageConnectorsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageOffPageConnectorsIter
	: public TBaseDboPageOffPageConnectorsIter
{
public:
/// @param status DboState &
/// @return DboOffPageConnector
DboOffPageConnector NextOffPageConnector(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboOffPageConnector *&
/// @return std::string
std::string GetKey(DboOffPageConnector *& pObject);

};

class TBaseDboPageTitleBlocksIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageTitleBlocksIter
	: public TBaseDboPageTitleBlocksIter
{
public:
/// @param status DboState &
/// @return DboTitleBlock
DboTitleBlock NextTitleBlock(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboTitleBlock *&
/// @return unsigned long
unsigned long GetKey(DboTitleBlock *& pObject);

};

class TBaseDboPageFindGraphicInstIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageFindGraphicInstIter
	: public TBaseDboPageFindGraphicInstIter
{
public:
/// @param status DboState &
/// @return DboGraphicInstance
DboGraphicInstance NextGraphicInstance(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboGraphicInstance *&
/// @return unsigned long
unsigned long GetKey(DboGraphicInstance *& pObject);

};

class TBaseDboPageBusEntriesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageBusEntriesIter
	: public TBaseDboPageBusEntriesIter
{
public:
/// @param status DboState &
/// @return DboBusEntry
DboBusEntry NextBusEntry(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBusEntry *&
/// @return unsigned long
unsigned long GetKey(DboBusEntry *& pObject);

};

class TBaseDboPageCommentGraphicsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPageCommentGraphicsIter
	: public TBaseDboPageFindGraphicInstIter
{
public:
/// @param status DboState &
/// @return DboGraphicInstance
DboGraphicInstance NextCommentGraphic(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboGraphicInstance *&
/// @return unsigned long
unsigned long GetKey(DboGraphicInstance *& pObject);

};

class DboWiresInAreaIter
{
public:
/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

};

class DboWiresAtPointIter
{
public:
/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

};

class DboPageTransaction
{
public:
void InitiateInternalTransaction();

void RegisterSchDocCommand();

void ClearTransactionHistory();

void InitAutoTransactions();

void DumpTransactionVector();

void TerminatePage();

/// @param pCheckForDuplicate bool
void PlaceUndoMarker(bool pCheckForDuplicate);

};

/// @param x DboBaseObject *
/// @return DboWire
DboWire DboBaseObjectToDboWire(DboBaseObject * x);

class DboWire
	: public DboBaseObject
{
public:
/// @return DboPage
DboPage GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param position int
/// @param status DboState &
/// @return CPoint
CPoint GetPoint(int position, DboState & status);

/// @param point CPoint
/// @param status DboState &
/// @return int
int GetPointPosition(CPoint point, DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetStartPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetEndPoint(DboState & status);

/// @param status DboState &
/// @return int
int GetPointCount(DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetNetName(CString & name);

/// @param status DboState &
/// @return int
int GetDisplayPropsPermitted(DboState & status);

/// @param point CPoint
/// @param status DboState &
/// @return int
int PointIsJunction(CPoint point, DboState & status);

/// @return bool
bool RemoveExtraJunctions();

/// @param status DboState &
/// @return DboNet
DboNet GetNet(DboState & status);

/// @param status DboState &
/// @return int
int IsGlobal(DboState & status);

/// @param status DboState &
/// @return void *
void * GetUserData(DboState & status);

/// @param point CPoint
/// @return int
int JunctionOnWire(CPoint point);

/// @param status DboState &
/// @return int
int IsHorizontal(DboState & status);

/// @param status DboState &
/// @return int
int IsVertical(DboState & status);

/// @param status DboState &
/// @return int
int IsNonOrthogonal(DboState & status);

/// @param status DboState &
/// @return int
int IsZeroLen(DboState & status);

/// @param pLocation CPoint
/// @param rStatus DboState &
/// @return bool
bool AreConnectionsAbuttingAtPoint(CPoint pLocation, DboState & rStatus);

/// @return DboPtrArray
DboPtrArray GetDispPropArray();

/// @return DboPtrArray
DboPtrArray GetNetAliasArray();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetNetName(DboBaseObject * obj, DboState & status);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param point CPoint
/// @param LineStart CPoint
/// @param LineEnd CPoint
/// @return int
int PointOnLine(CPoint point, CPoint LineStart, CPoint LineEnd);

/// @param Start1 CPoint
/// @param End1 CPoint
/// @param Start2 CPoint
/// @param End2 CPoint
/// @return int
int LinesIntersect(CPoint Start1, CPoint End1, CPoint Start2, CPoint End2);

/// @param Start1 CPoint
/// @param End1 CPoint
/// @param Start2 CPoint
/// @param End2 CPoint
/// @param Intersection CPoint &
/// @return int
int GetLinesIntersect(CPoint Start1, CPoint End1, CPoint Start2, CPoint End2, CPoint & Intersection);

/// @param rect CRect
/// @param LineStart CPoint
/// @param LineEnd CPoint
/// @return int
int LineIntersectsRect(CRect rect, CPoint LineStart, CPoint LineEnd);

/// @param point CPoint
/// @return int
int PointOnWire(CPoint point);

/// @param status DboState &
/// @return DboConnection
DboConnection GetStart(DboState & status);

/// @param status DboState &
/// @return DboConnection
DboConnection GetEnd(DboState & status);

/// @param nPosition int
/// @param status DboState &
/// @return DboConnection
DboConnection GetConnection(int nPosition, DboState & status);

/// @param status DboState &
/// @return int
int GetCreatedByDB(DboState & status);

/// @return int
int IsBoundingBoxDirty();

/// @param status DboState &
/// @return CRect
CRect GetBoundingBox(DboState & status);

/// @return CRect
CRect GetBoundingBox();

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return bool
bool IsBundleObject();

/// @param status DboState &
/// @return DboWireAliasesIter
DboWireAliasesIter NewAliasesIter(DboState & status);

/// @param status DboState &
/// @return DboDisplayPropsIter
DboDisplayPropsIter NewDisplayPropsIter(DboState & status);

/// @param status DboState &
/// @return DboWireJunctionsIter
DboWireJunctionsIter NewJunctionsIter(DboState & status);

/// @param status DboState &
/// @return DboWireConnectedWiresIter
DboWireConnectedWiresIter NewConnectedWiresIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboWirePortInstsIter
DboWirePortInstsIter NewPortInstsIter(DboState & status, enum IterDefs::IterModeT mode);

/// @param status DboState &
/// @return DboWireBusEntriesIter
DboWireBusEntriesIter NewBusEntriesIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboWirePortsIter
DboWirePortsIter NewPortsIter(DboState & status, enum IterDefs::IterModeT mode);

/// @param status DboState &
/// @return DboWireGlobalsIter
DboWireGlobalsIter NewGlobalsIter(DboState & status);

/// @param status DboState &
/// @return DboWireOffPageConnectorsIter
DboWireOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status);

/// @param location CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint location, int position=-1);

/// @param location CPoint
/// @return DboState
DboState NewPoint(CPoint location);

/// @param position int
/// @param location CPoint
/// @return DboState
DboState SetPoint(int position, CPoint location);

/// @param position int
/// @param offset CPoint
/// @return DboState
DboState MovePoint(int position, CPoint offset);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param linestyle enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT linestyle);

/// @param linewidth enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT linewidth);

/// @param location CPoint
/// @return DboState
DboState NewJunction(CPoint location);

/// @param location CPoint
/// @return DboState
DboState DeleteJunction(CPoint location);

/// @param name CString &
/// @param location CPoint
/// @param font LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @param color enum DboValue::ColorT
/// @return DboState
DboState NewName(CString & name, CPoint location, LOGFONT & font, enum DboValue::RotationT rotation, enum DboValue::ColorT color);

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetUserPropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteUserPropValue(CString const & name);

/// @param pPtr void *
/// @return DboState
DboState SetUserData(void * pPtr);

/// @param location CPoint
/// @return DboState
DboState NewConnection(CPoint location);

/// @param location CPoint
/// @param position int
/// @return DboState
DboState NewConnection(CPoint location, int position);

/// @return DboState
DboState DeletePoints();

/// @param newId unsigned long
/// @return DboState
DboState SetId(unsigned long newId);

/// @param newId unsigned long
/// @return DboState
DboState SetDuplicateId(unsigned long newId);

/// @return DboState
DboState ClearCreatedByDB();

/// @param bSetting int
void SetBoundingBoxDirty(int bSetting);

/// @param rect CRect
void SetBoundingBox(CRect rect);

/// @param status DboState &
/// @param name CString &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param font LOGFONT &
/// @param color enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & name, CPoint location, enum DboValue::RotationT rotation, LOGFONT & font, enum DboValue::ColorT color);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @param bNewVersion int
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp, int bNewVersion=0);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

/// @param status DboState &
/// @param alias CString &
/// @param location CPoint
/// @param font LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @param color enum DboValue::ColorT
/// @param ID unsigned long
/// @return DboAlias
DboAlias NewAlias(DboState & status, CString & alias, CPoint location, LOGFONT & font, enum DboValue::RotationT rotation, enum DboValue::ColorT color, unsigned long ID=0);

/// @param status DboState &
/// @param alias CString &
/// @param location CPoint
/// @param font LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @param color enum DboValue::ColorT
/// @return DboAlias
DboAlias NewAlias(DboState & status, CString & alias, CPoint location, LOGFONT & font, enum DboValue::RotationT rotation, enum DboValue::ColorT color);

void SyncNetGroupAliases();

/// @param pAlias DboAlias *
/// @return DboState
DboState DeleteAlias(DboAlias * pAlias);

void CleanupQuad();

/// @param StartPoint CPoint const &
/// @param EndPoint CPoint const &
/// @return DboState
DboState ConnectInitialization(CPoint const & StartPoint, CPoint const & EndPoint);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboWire_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboWire_sGetNetName(DboBaseObject * obj, DboState & status);

/// @param point CPoint
/// @param LineStart CPoint
/// @param LineEnd CPoint
/// @return int
int DboWire_PointOnLine(CPoint point, CPoint LineStart, CPoint LineEnd);

/// @param Start1 CPoint
/// @param End1 CPoint
/// @param Start2 CPoint
/// @param End2 CPoint
/// @return int
int DboWire_LinesIntersect(CPoint Start1, CPoint End1, CPoint Start2, CPoint End2);

/// @param Start1 CPoint
/// @param End1 CPoint
/// @param Start2 CPoint
/// @param End2 CPoint
/// @param Intersection CPoint &
/// @return int
int DboWire_GetLinesIntersect(CPoint Start1, CPoint End1, CPoint Start2, CPoint End2, CPoint & Intersection);

/// @param rect CRect
/// @param LineStart CPoint
/// @param LineEnd CPoint
/// @return int
int DboWire_LineIntersectsRect(CRect rect, CPoint LineStart, CPoint LineEnd);

/// @param x DboWire *
/// @return DboWireScalar
DboWireScalar DboWireToDboWireScalar(DboWire * x);

class DboWireScalar
	: public DboWire
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param pAlias DboAlias *
/// @return DboState
DboState DeleteAlias(DboAlias * pAlias);

};

/// @param x DboWire *
/// @return DboWireBus
DboWireBus DboWireToDboWireBus(DboWire * x);

class DboWireBus
	: public DboWire
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return bool
bool IsBundleObject();

/// @return DboState
DboState NormalizeBundleWire();

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param status DboState &
/// @param alias CString &
/// @param location CPoint
/// @param font LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @param color enum DboValue::ColorT
/// @param ID unsigned long
/// @return DboAlias
DboAlias NewAlias(DboState & status, CString & alias, CPoint location, LOGFONT & font, enum DboValue::RotationT rotation, enum DboValue::ColorT color, unsigned long ID=None);

/// @param status DboState &
/// @param alias CString &
/// @param location CPoint
/// @param font LOGFONT &
/// @param rotation enum DboValue::RotationT
/// @param color enum DboValue::ColorT
/// @return DboAlias
DboAlias NewAlias(DboState & status, CString & alias, CPoint location, LOGFONT & font, enum DboValue::RotationT rotation, enum DboValue::ColorT color);

};

/// @param x DboDisplayPropsIter *
/// @return DboWireDisplayPropsIter
DboWireDisplayPropsIter DboDisplayPropsIterToDboWireDisplayPropsIter(DboDisplayPropsIter * x);

class DboWireDisplayPropsIter
	: public DboDisplayPropsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextProp(DboState & status);

/// @param pObject DboDisplayProp *&
/// @return unsigned long
unsigned long GetKey(DboDisplayProp *& pObject);

};

class TBaseDboWireAliasesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWireAliasesIter
	: public TBaseDboWireAliasesIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboAlias *&
/// @return std::string
std::string GetKey(DboAlias *& pObject);

/// @param status DboState &
/// @return DboAlias
DboAlias NextAlias(DboState & status);

};

class DboWireJunctionsIter
{
public:
/// @param status DboState &
/// @return CPoint
CPoint NextJunction(DboState & status);

};

class TBaseDboWirePortInstsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWirePortInstsIter
	: public TBaseDboSchematicNetPortInstsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPortInst *&
/// @return std::string
std::string GetKey(DboPortInst *& pObject);

/// @param status DboState &
/// @return DboPortInst
DboPortInst NextPortInst(DboState & status);

};

class TBaseDboWireBusEntriesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWireBusEntriesIter
	: public TBaseDboPageBusEntriesIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param status DboState &
/// @return DboBusEntry
DboBusEntry NextBusEntry(DboState & status);

/// @param pObject DboBusEntry *&
/// @return unsigned long
unsigned long GetKey(DboBusEntry *& pObject);

};

class TBaseDboWirePortsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWirePortsIter
	: public TBaseDboPagePortsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPort *&
/// @return std::string
std::string GetKey(DboPort *& pObject);

/// @param status DboState &
/// @return DboPort
DboPort NextPort(DboState & status);

};

class TBaseDboWireGlobalsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWireGlobalsIter
	: public TBaseDboPageGlobalsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboGlobal *&
/// @return std::string
std::string GetKey(DboGlobal *& pObject);

/// @param status DboState &
/// @return DboGlobal
DboGlobal NextGlobal(DboState & status);

};

class TBaseDboWireOffPageConnectorsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWireOffPageConnectorsIter
	: public TBaseDboPageOffPageConnectorsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboOffPageConnector *&
/// @return std::string
std::string GetKey(DboOffPageConnector *& pObject);

/// @param status DboState &
/// @return DboOffPageConnector
DboOffPageConnector NextOffPageConnector(DboState & status);

};

class TBaseDboWireConnectedWiresIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboWireConnectedWiresIter
	: public TBaseDboSchematicNetWiresIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboWire *&
/// @return unsigned long
unsigned long GetKey(DboWire *& pObject);

/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

};

/// @param x DboBaseObject *
/// @return DboAlias
DboAlias DboBaseObjectToDboAlias(DboBaseObject * x);

class DboAlias
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return DboWire
DboWire GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param status DboState &
/// @return RotationT
RotationT GetRotation(DboState & status);

/// @param status DboState &
/// @return LOGFONT
LOGFONT GetFont(DboState & status);

/// @param status DboState &
/// @return int
int IsFontDefault(DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @return CRect
CRect GetBoundingBox();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT sGetRotation(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @return int
int IsBoundingBoxDirty();

/// @return bool
bool IsBundleObject();

/// @param OldName CString const &
/// @param NewName CString const &
/// @param status DboState &
/// @return int
int ValidateNGName(CString const & OldName, CString const & NewName, DboState & status);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param font LOGFONT &
/// @return DboState
DboState SetFont(LOGFONT & font);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param boundingBox CRect
/// @return DboState
DboState SetBoundingBox(CRect boundingBox);

/// @param bSetting int
void SetOwnerBoundingBoxDirty(int bSetting);

/// @param obj DboBaseObject *
/// @param name CString &
/// @return DboState
DboState sSetName(DboBaseObject * obj, CString & name);

/// @param obj DboBaseObject *
/// @param x int
/// @return DboState
DboState sSetLocationX(DboBaseObject * obj, int x);

/// @param obj DboBaseObject *
/// @param y int
/// @return DboState
DboState sSetLocationY(DboBaseObject * obj, int y);

/// @param obj DboBaseObject *
/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState sSetRotation(DboBaseObject * obj, enum DboValue::RotationT rotation);

/// @param obj DboBaseObject *
/// @param font LOGFONT &
/// @return DboState
DboState sSetFont(DboBaseObject * obj, LOGFONT & font);

/// @param obj DboBaseObject *
/// @param color enum DboValue::ColorT
/// @return DboState
DboState sSetColor(DboBaseObject * obj, enum DboValue::ColorT color);

/// @param bSetting int
void SetBoundingBoxDirty(int bSetting);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboAlias_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboAlias_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboAlias_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT DboAlias_sGetRotation(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboAlias_sGetFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboAlias_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param name CString &
/// @return DboState
DboState DboAlias_sSetName(DboBaseObject * obj, CString & name);

/// @param obj DboBaseObject *
/// @param x int
/// @return DboState
DboState DboAlias_sSetLocationX(DboBaseObject * obj, int x);

/// @param obj DboBaseObject *
/// @param y int
/// @return DboState
DboState DboAlias_sSetLocationY(DboBaseObject * obj, int y);

/// @param obj DboBaseObject *
/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState DboAlias_sSetRotation(DboBaseObject * obj, enum DboValue::RotationT rotation);

/// @param obj DboBaseObject *
/// @param font LOGFONT &
/// @return DboState
DboState DboAlias_sSetFont(DboBaseObject * obj, LOGFONT & font);

/// @param obj DboBaseObject *
/// @param color enum DboValue::ColorT
/// @return DboState
DboState DboAlias_sSetColor(DboBaseObject * obj, enum DboValue::ColorT color);

class DboPrimitiveAndVisiblePowerPins
{
public:
/// @return int
int GetVisiblePowerPins();

/// @return PrimitiveTypeT
PrimitiveTypeT GetPrimitive();

/// @return ViewTypeT
ViewTypeT GetViewType();

/// @param nPrimitive enum DboValue::PrimitiveTypeT
void SetPrimitive(enum DboValue::PrimitiveTypeT nPrimitive);

/// @param bVisiblePowerPins int
void SetVisiblePowerPins(int bVisiblePowerPins);

/// @param nViewType enum DboValue::ViewTypeT
void SetViewType(enum DboValue::ViewTypeT nViewType);

};

/// @param x DboGraphicInstance *
/// @return DboPartInst
DboPartInst DboGraphicInstanceToDboPartInst(DboGraphicInstance * x);

/// @param x DboInstOccMapper *
/// @return DboPartInst
DboPartInst DboInstOccMapperToDboPartInst(DboInstOccMapper * x);

class DboPartInst
	: public DboGraphicInstance
{
public:
/// @param Ref CString &
/// @return DboState
DboState GetReference(CString & Ref);

/// @param RefDes CString &
/// @return DboState
DboState GetReferenceDesignator(CString & RefDes);

/// @param value CString &
/// @return DboState
DboState GetPartValue(CString & value);

/// @param status DboState &
/// @return DboView
DboView GetContents(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetContentsViewName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetContentsLibName(CString & name);

/// @param status DboState &
/// @return ViewTypeT
ViewTypeT GetContentsViewType(DboState & status);

/// @param status DboState &
/// @return int
int GetIsPrimitive(DboState & status);

/// @param status DboState &
/// @return DboLibPart
DboLibPart GetDefiningPart(DboState & status);

/// @param status DboState &
/// @return PrimitiveTypeT
PrimitiveTypeT GetIsPrimitiveProp(DboState & status);

/// @param status DboState &
/// @return int
int IsPrimitive(DboState & status);

/// @param status DboState &
/// @return int
int IsPSpiceOnly(DboState & status);

/// @param status DboState &
/// @return int
int IsOptimizerTemplate(DboState & status);

/// @param status DboState &
/// @return int
int GetPinNumbersAreVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetPinNamesAreVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetPowerPinsAreVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetPinNamesAreRotated(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReference(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPartValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PrimitiveTypeT
PrimitiveTypeT sGetIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT sGetContentsViewType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetContentsViewName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetContentsLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPowerPinsAreVisible(DboBaseObject * obj, DboState & status);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param nPosition int
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPin(int nPosition, DboState & status);

/// @param nPosition int
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPinOrderedByLocation(int nPosition, DboState & status);

/// @param hotSpot CPoint
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPinByHotSpot(CPoint hotSpot, DboState & status);

/// @param pPinID unsigned long
/// @return DboPortInst
DboPortInst GetPinByID(unsigned long pPinID);

/// @param PinNumber CString &
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPinByPinNumber(CString & PinNumber, DboState & status);

/// @param PinName CString &
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPinByPinName(CString & PinName, DboState & status);

/// @param PinBaseName CString &
/// @param nType enum DboValue::PinTypeT
/// @param status DboState &
/// @return DboPortInst
DboPortInst GetPinByBasePinName(CString & PinBaseName, enum DboValue::PinTypeT nType, DboState & status);

/// @param PinName CString &
/// @param status DboState &
/// @return DboPortInst
DboPortInst FindPinByPinName(CString & PinName, DboState & status);

/// @param PinName CString &
/// @return int
int CountPinsWithName(CString & PinName);

/// @param PinName CString &
/// @return bool
bool HasMultiplePinsWithName(CString & PinName);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param strName CString const &
/// @param strVal CString &
/// @return int
int GetVariantProp(CString const & strName, CString & strVal);

/// @param strName CString &
/// @param strVal CString &
/// @param bNewFound int &
/// @return int
int GetNextNewVariantProp(CString & strName, CString & strVal, int & bNewFound);

/// @return int
int IsVariantPropMapEmpty();

/// @return int
int IsBoundingBoxDirty();

/// @param status DboState &
/// @return int
int GetPinCount(DboState & status);

/// @param string CString *
/// @return bool
bool HasBundleOwner(CString * string=None);

/// @return bool
bool HasBundleOwner();

/// @param entryPunName CString &
/// @return int
int GetBundleEntryPinName(CString & entryPunName);

/// @return int
int IsExternalDesignPart();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @param bReturnShared int
/// @return DboPartInstPinsIter
DboPartInstPinsIter NewPinsIter(DboState & status, enum IterDefs::IterModeT mode=ALL, int bReturnShared=0);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboPartInstPinsIter
DboPartInstPinsIter NewPinsIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboPartInstPinsIter
DboPartInstPinsIter NewPinsIter(DboState & status);

/// @param name CString const &
/// @return DboState
DboState SetReference(CString const & name);

/// @param name CString const &
/// @return DboState
DboState SetPartValue(CString const & name);

/// @param prim enum DboValue::PrimitiveTypeT
/// @return DboState
DboState SetIsPrimitiveProp(enum DboValue::PrimitiveTypeT prim);

/// @param type enum DboValue::ViewTypeT
/// @param bNewVersion int
/// @return DboState
DboState SetContentsViewType(enum DboValue::ViewTypeT type, int bNewVersion=0);

/// @param type enum DboValue::ViewTypeT
/// @return DboState
DboState SetContentsViewType(enum DboValue::ViewTypeT type);

/// @param viewName CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetContentsViewName(CString const & viewName, int bNewVersion=0);

/// @param viewName CString const &
/// @return DboState
DboState SetContentsViewName(CString const & viewName);

/// @param libName CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetContentsLibName(CString const & libName, int bNewVersion=0);

/// @param libName CString const &
/// @return DboState
DboState SetContentsLibName(CString const & libName);

/// @param bVal int
/// @return DboState
DboState SetPowerPinsAreVisible(int bVal);

/// @param nId unsigned long
/// @param bNewVersion int
/// @return DboState
DboState SetId(unsigned long nId, int bNewVersion=0);

/// @param nId unsigned long
/// @return DboState
DboState SetId(unsigned long nId);

/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

/// @param bVal int
void SetCurrent(int bVal);

/// @param pType enum DboValue::ViewTypeT
/// @return DboState
DboState SetContentViewTypeWithoutChangingOccurrences(enum DboValue::ViewTypeT pType);

/// @param newName CString const &
/// @param isForSchematicRename bool
/// @return DboState
DboState SetContentsViewNameWithoutChangingOccurrences(CString const & newName, bool isForSchematicRename);

/// @param newName CString &
/// @return DboState
DboState SetName(CString & newName);

/// @return int
int Disconnect();

/// @return int
int Connect();

/// @param bSetting int
void SetBoundingBoxDirty(int bSetting);

/// @param bVal int
void SetOccsModified(int bVal);

/// @param strName CString const &
/// @param strVal CString const &
void AddVariantProp(CString const & strName, CString const & strVal);

/// @param bFlag int
void ClearVariantMap(int bFlag=1);

void ClearVariantMap();

/// @param pPage DboPage *
/// @param pProp DboDisplayProp *
/// @return int
int PositionDisplayProp(DboPage * pPage, DboDisplayProp * pProp);

void ResetAllDisplayPropertiesFontToDefault();

/// @param pPage DboPage *
/// @param pInst DboPartInst *
/// @return int
int PositionAllDisplayProp(DboPage * pPage, DboPartInst * pInst);

void ProcessRefDesModify();

void ProcessRefDesDelete();

/// @param pMode enum DboPartInst::OCC_AUTOREF_MODE
void SetOccAutoRefMode(enum DboPartInst::OCC_AUTOREF_MODE pMode);

/// @return OCC_AUTOREF_MODE
OCC_AUTOREF_MODE GetOccAutoRefMode();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPartInst_sGetPinCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPartInst_sGetReference(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPartInst_sGetPartValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PrimitiveTypeT
PrimitiveTypeT DboPartInst_sGetIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT DboPartInst_sGetContentsViewType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPartInst_sGetContentsViewName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPartInst_sGetContentsLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPartInst_sGetPowerPinsAreVisible(DboBaseObject * obj, DboState & status);

/// @param pPage DboPage *
/// @param pProp DboDisplayProp *
/// @return int
int DboPartInst_PositionDisplayProp(DboPage * pPage, DboDisplayProp * pProp);

/// @param pPage DboPage *
/// @param pInst DboPartInst *
/// @return int
int DboPartInst_PositionAllDisplayProp(DboPage * pPage, DboPartInst * pInst);

class TBaseDboPartInstPinsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPartInstPinsIter
	: public TBaseDboSchematicNetPortInstsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPortInst *&
/// @return std::string
std::string GetKey(DboPortInst *& pObject);

/// @param status DboState &
/// @return DboPortInst
DboPortInst NextPin(DboState & status);

};

/// @param x DboPartInst *
/// @return DboPlacedInst
DboPlacedInst DboPartInstToDboPlacedInst(DboPartInst * x);

class DboPlacedInst
	: public DboPartInst
{
public:
/// @param RefDes CString &
/// @return DboState
DboState GetReferenceDesignator(CString & RefDes);

/// @param designator CString &
/// @return DboState
DboState GetDeviceDesignator(CString & designator);

/// @param status DboState &
/// @return DboLibPart
DboLibPart GetPart(DboState & status);

/// @param status DboState &
/// @return DboPackage
DboPackage GetPackage(DboState & status);

/// @param status DboState &
/// @return DboDevice
DboDevice GetDevice(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetSourcePartName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetSourcePackageName(CString & name);

/// @param designator CString &
/// @return DboState
DboState GetSourceDeviceDesignator(CString & designator);

/// @param libName CString &
/// @return DboState
DboState GetSourceLibName(CString & libName);

/// @param value CString &
/// @return DboState
DboState GetPartValue(CString & value);

/// @param lib CString &
/// @return DboState
DboState GetPCBLib(CString & lib);

/// @param footprint CString &
/// @return DboState
DboState GetPCBFootprint(CString & footprint);

/// @param status DboState &
/// @return DboLibPart
DboLibPart GetSourcePart(DboState & status);

/// @param status DboState &
/// @return DboPackage
DboPackage GetSourcePackage(DboState & status);

/// @param status DboState &
/// @return DboDevice
DboDevice GetSourceDevice(DboState & status);

/// @param status DboState &
/// @return short
short GetSourceDevicePosition(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourcePartName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourcePackageName(DboBaseObject * obj, DboState & status);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReferenceDesignator(DboBaseObject * pObj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourceDeviceDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourceLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPCBLib(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPCBFootprint(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return int
int IsOptimizerTemplate(DboState & status);

/// @param status DboState &
/// @return CString
CString GetGraphicName(DboState & status);

/// @param name CString const &
/// @param choices CStringList &
/// @return DboState
DboState GetEffectivePropValueChoices(CString const & name, CStringList & choices);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param designator CString &
/// @return DboState
DboState SetDeviceDesignator(CString & designator);

/// @param libname CString &
/// @return DboState
DboState SetPCBLib(CString & libname);

/// @param name CString &
/// @return DboState
DboState SetPCBFootprint(CString & name);

/// @return DboState
DboState Update();

/// @param graphic CString &
/// @return DboState
DboState SetGraphic(CString & graphic);

/// @param pOwningLib DboLib *
/// @param pPin DboPortInst *
/// @return DboPinShapeSymbol
DboPinShapeSymbol NewCachedPinShapeSymbol(DboLib * pOwningLib, DboPortInst * pPin);

void UpdateOpProp();

/// @param pOldInst DboPlacedInst *
void CheckAndResetDisplayProperty(DboPlacedInst * pOldInst);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetSourcePartName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetSourcePackageName(DboBaseObject * obj, DboState & status);

/// @param pObj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetReferenceDesignator(DboBaseObject * pObj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetSourceDeviceDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetSourceLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetPCBLib(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPlacedInst_sGetPCBFootprint(DboBaseObject * obj, DboState & status);

/// @param x DboPartInst *
/// @return DboDrawnInst
DboDrawnInst DboPartInstToDboDrawnInst(DboPartInst * x);

class DboDrawnInst
	: public DboPartInst
{
public:
/// @param status DboState &
/// @return DboLibPart
DboLibPart GetDefiningSymbol(DboState & status);

/// @return DboBaseObject
DboBaseObject StatefulCreate();

/// @param status DboState &
/// @param newPinVec std::vector< std::string > &
void SwapPortInstForBundle(DboState & status, std::vector< std::string > & newPinVec);

/// @param box CRect
/// @return DboState
DboState SetBoundingBox(CRect box);

/// @param name CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetReference(CString const & name, int bNewVersion=0);

/// @param name CString const &
/// @return DboState
DboState SetReference(CString const & name);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @param bundleOwner CString
/// @return DboPortInst
DboPortInst NewPortInstScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1, CString bundleOwner="");

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @return DboPortInst
DboPortInst NewPortInstScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @return DboPortInst
DboPortInst NewPortInstScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @return DboPortInst
DboPortInst NewPortInstScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @return DboPortInst
DboPortInst NewPortInstScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle);

/// @param portInst DboPortInst *
/// @param bNewVersion int
/// @return DboState
DboState DeletePortInst(DboPortInst * portInst, int bNewVersion=0);

/// @param portInst DboPortInst *
/// @return DboState
DboState DeletePortInst(DboPortInst * portInst);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @param bundleOwner CString
/// @return DboPortInst
DboPortInst NewPortInstBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1, CString bundleOwner="");

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @return DboPortInst
DboPortInst NewPortInstBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @return DboPortInst
DboPortInst NewPortInstBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @param visible int
/// @return DboPortInst
DboPortInst NewPortInstBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param IsLong int
/// @param IsClock int
/// @param IsDot int
/// @param IsLeftPointing int
/// @param IsRightPointing int
/// @param IsNetStyle int
/// @return DboPortInst
DboPortInst NewPortInstBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int IsLong, int IsClock, int IsDot, int IsLeftPointing, int IsRightPointing, int IsNetStyle);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @param bundleOwner CString
/// @param bSourceLib CString
/// @return DboPortInst
DboPortInst NewPortInstBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible, CString bundleOwner, CString bSourceLib);

/// @param pPortOrder CString &
/// @return int
int GetUnnamedNetgroupPortOrder(CString & pPortOrder);

/// @param bundleName CString
/// @param Prefix CString
/// @return DboState
DboState ChangePinNamesIfPartOfBundle(CString bundleName, CString Prefix);

/// @return DboState
DboState NormalizeBundleBlock();

/// @return DboState
DboState NormalizeUnanamedBundleBlockIfAutoGenerated();

/// @return DboState
DboState PushUserPropertiesToNets();

/// @param deletePinstList std::list< UINT > &
/// @return int
int DeletePinForBundle(std::list< UINT > & deletePinstList);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

};

/// @param x DboBaseObject *
/// @return DboPortInst
DboPortInst DboBaseObjectToDboPortInst(DboBaseObject * x);

/// @param x DboInstOccMapper *
/// @return DboPortInst
DboPortInst DboInstOccMapperToDboPortInst(DboInstOccMapper * x);

class DboPortInst
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboPartInst
DboPartInst GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin GetDefiningPin(DboState & status);

/// @param status DboState &
/// @return DboWire
DboWire GetWire(DboState & status);

/// @param status DboState &
/// @return DboNet
DboNet GetNet(DboState & status);

/// @param status DboState &
/// @return int
int GetDisplayPropsPermitted(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param status DboState &
/// @param bNewVersion int
/// @return unsigned long
unsigned long GetId(DboState & status, int bNewVersion);

/// @param name CString &
/// @return DboState
DboState GetPinName(CString & name);

/// @param number CString &
/// @return DboState
DboState GetPinNumber(CString & number);

/// @param status DboState &
/// @return int
int GetPinSwapId(DboState & status);

/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

/// @param status DboState &
/// @return int
int GetIsLong(DboState & status);

/// @param status DboState &
/// @return int
int GetIsClock(DboState & status);

/// @param status DboState &
/// @return int
int GetIsDot(DboState & status);

/// @param status DboState &
/// @return int
int GetIsLeftPointing(DboState & status);

/// @param status DboState &
/// @return int
int GetIsRightPointing(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetStartPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetOffsetStartPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetHotSpot(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetOffsetHotSpot(DboState & status);

/// @param status DboState &
/// @return int
int GetIsVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetIsShared(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNumberVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetIsGlobal(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNetStyle(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNoConnect(DboState & status);

/// @param bGenerateNet int
/// @return bool
bool IsBundlePin(int bGenerateNet=1);

/// @return bool
bool IsBundlePin();

/// @return bool
bool IsBundleObject();

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param status DboState &
/// @return int
int GetPinPosition(DboState & status);

/// @return DboPtrArray
DboPtrArray GetDispPropArray();

/// @param status DboState &
/// @return int
int GetIsUserDefinedShape(DboState & status);

/// @return DboPinShapeSymbol
DboPinShapeSymbol GetCachedPinShapePtr();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPinName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPinNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinSwapId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT sGetPinType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsLong(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsClock(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsDot(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsLeftPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsRightPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsShared(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNetStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNoConnect(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetNetName(DboBaseObject * obj, DboState & status);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinPosition(DboBaseObject * obj, DboState & status);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @param status DboState &
/// @return DboDisplayPropsIter
DboDisplayPropsIter NewDisplayPropsIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param name CString &
/// @return DboState
DboState SetPinName(CString & name);

/// @param name CString &
/// @return DboState
DboState SetPinNumber(CString & name);

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetUserPropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteUserPropValue(CString const & name);

/// @param type enum DboValue::PinTypeT
/// @return DboState
DboState SetPinType(enum DboValue::PinTypeT type);

/// @param bval int
/// @return DboState
DboState SetIsLong(int bval);

/// @param bval int
/// @return DboState
DboState SetIsClock(int bval);

/// @param bval int
/// @return DboState
DboState SetIsDot(int bval);

/// @param bval int
/// @return DboState
DboState SetIsLeftPointing(int bval);

/// @param bval int
/// @return DboState
DboState SetIsRightPointing(int bval);

/// @param point CPoint
/// @return DboState
DboState SetStartPoint(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetHotSpot(CPoint point);

/// @param val int
/// @return DboState
DboState SetIsVisible(int val);

/// @param val int
/// @return DboState
DboState SetIsGlobal(int val);

/// @param val int
/// @return DboState
DboState SetIsNetStyle(int val);

/// @param val int
/// @return DboState
DboState SetIsNoConnect(int val);

/// @param nId unsigned long
/// @param bNewVersion int
/// @return DboState
DboState SetId(unsigned long nId, int bNewVersion=0);

/// @param nId unsigned long
/// @return DboState
DboState SetId(unsigned long nId);

/// @param pPinShape DboPinShapeSymbol *
void SetCachedPinShapePtr(DboPinShapeSymbol * pPinShape);

/// @param status DboState &
/// @param name CString &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param font LOGFONT &
/// @param color enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & name, CPoint location, enum DboValue::RotationT rotation, LOGFONT & font, enum DboValue::ColorT color);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @param bNewVersion int
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp, int bNewVersion=0);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortInst_sGetPinName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortInst_sGetPinNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetPinSwapId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT DboPortInst_sGetPinType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsLong(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsClock(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsDot(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsLeftPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsRightPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsShared(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsNetStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetIsNoConnect(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetStartPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetStartPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortInst_sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInst_sGetPinPosition(DboBaseObject * obj, DboState & status);

/// @param x DboPortInst *
/// @return DboPortInstScalar
DboPortInstScalar DboPortInstToDboPortInstScalar(DboPortInst * x);

class DboPortInstScalar
	: public DboPortInst
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

};

/// @param x DboPortInst *
/// @return DboPortInstBus
DboPortInstBus DboPortInstToDboPortInstBus(DboPortInst * x);

class DboPortInstBus
	: public DboPortInst
{
public:
/// @param status DboState &
/// @return int
int GetWidth(DboState & status);

/// @param nPos int
/// @param status DboState &
/// @return DboPortInstBusMember
DboPortInstBusMember GetMember(int nPos, DboState & status);

/// @param pObj DboBaseObject *
void CopyUnnamedNegroupInfo(DboBaseObject * pObj);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

};

/// @param x DboPortInstScalar *
/// @return DboPortInstBusMember
DboPortInstBusMember DboPortInstScalarToDboPortInstBusMember(DboPortInstScalar * x);

class DboPortInstBusMember
	: public DboPortInstScalar
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return DboPortInstBus
DboPortInstBus GetContainingBus(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetPinName(CString & name);

/// @param number CString &
/// @return DboState
DboState GetPinNumber(CString & number);

/// @param status DboState &
/// @return DboNet
DboNet GetNet(DboState & status);

/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

/// @param status DboState &
/// @return int
int GetIsLong(DboState & status);

/// @param status DboState &
/// @return int
int GetIsClock(DboState & status);

/// @param status DboState &
/// @return int
int GetIsDot(DboState & status);

/// @param status DboState &
/// @return int
int GetIsLeftPointing(DboState & status);

/// @param status DboState &
/// @return int
int GetIsRightPointing(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetStartPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetOffsetStartPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetHotSpot(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetOffsetHotSpot(DboState & status);

/// @param status DboState &
/// @return int
int GetIsVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetIsShared(DboState & status);

/// @param status DboState &
/// @return int
int GetIsGlobal(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNetStyle(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNoConnect(DboState & status);

/// @param status DboState &
/// @return int
int GetPinPosition(DboState & status);

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPinName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPinNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT sGetPinType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsLong(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsClock(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsDot(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsLeftPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsRightPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsShared(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNetStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNoConnect(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinPosition(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetUserPropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteUserPropValue(CString const & name);

/// @param arg0 CString &
/// @return DboState
DboState SetPinName(CString & arg0);

/// @param arg0 CString &
/// @return DboState
DboState SetPinNumber(CString & arg0);

/// @param type enum DboValue::PinTypeT
/// @return DboState
DboState SetPinType(enum DboValue::PinTypeT type);

/// @param bval int
/// @return DboState
DboState SetIsLong(int bval);

/// @param bval int
/// @return DboState
DboState SetIsClock(int bval);

/// @param bval int
/// @return DboState
DboState SetIsDot(int bval);

/// @param bval int
/// @return DboState
DboState SetIsLeftPointing(int bval);

/// @param bval int
/// @return DboState
DboState SetIsRightPointing(int bval);

/// @param point CPoint
/// @return DboState
DboState SetStartPoint(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetHotSpot(CPoint point);

/// @param val int
/// @return DboState
DboState SetIsVisible(int val);

/// @param val int
/// @return DboState
DboState SetIsGlobal(int val);

/// @param val int
/// @return DboState
DboState SetIsNetStyle(int val);

/// @param val int
/// @return DboState
DboState SetIsNoConnect(int val);

/// @param status DboState &
/// @param name CString &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param font LOGFONT &
/// @param color enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & name, CPoint location, enum DboValue::RotationT rotation, LOGFONT & font, enum DboValue::ColorT color);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @param bNewVersion int
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp, int bNewVersion=0);

/// @param status DboState &
/// @param pProp DboDisplayProp const *
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, DboDisplayProp const * pProp);

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortInstBusMember_sGetPinName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPortInstBusMember_sGetPinNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT DboPortInstBusMember_sGetPinType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsLong(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsClock(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsDot(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsLeftPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsRightPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsShared(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsNetStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetIsNoConnect(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetStartPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetStartPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPortInstBusMember_sGetPinPosition(DboBaseObject * obj, DboState & status);

/// @param x DboDisplayPropsIter *
/// @return DboPortInstDisplayPropsIter
DboPortInstDisplayPropsIter DboDisplayPropsIterToDboPortInstDisplayPropsIter(DboDisplayPropsIter * x);

class DboPortInstDisplayPropsIter
	: public DboDisplayPropsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboDisplayProp *&
/// @return unsigned long
unsigned long GetKey(DboDisplayProp *& pObject);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextProp(DboState & status);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextPropEx(DboState & status);

};

/// @param x DboEffectivePropsIter *
/// @return DboPortInstEffectivePropsIter
DboPortInstEffectivePropsIter DboEffectivePropsIterToDboPortInstEffectivePropsIter(DboEffectivePropsIter * x);

class DboPortInstEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

/// @param x DboGraphicInstance *
/// @return DboNetSymbolInstance
DboNetSymbolInstance DboGraphicInstanceToDboNetSymbolInstance(DboGraphicInstance * x);

class DboNetSymbolInstance
	: public DboGraphicInstance
{
public:
/// @param status DboState &
/// @return DboSymbol
DboSymbol GetSymbol(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetHotSpot(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetOffsetHotSpot(DboState & status);

/// @param status DboState &
/// @return DboNet
DboNet GetNet(DboState & status);

/// @param status DboState &
/// @return DboWire
DboWire GetWire(DboState & status);

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return int
int IsBus(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetSourceSymbolName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetSourceLibName(CString & name);

/// @param occId unsigned long
/// @return DboOccurrence
DboOccurrence GetOccBasedOnOccId(unsigned long occId);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourceLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourceSymbolName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @return CString
CString sGenerateBundleObjectName(DboBaseObject * obj);

/// @return int
int IsBoundingBoxDirty();

/// @param bSetting int
void SetBoundingBoxDirty(int bSetting);

/// @param boundingBox CRect
/// @return DboState
DboState SetBoundingBox(CRect boundingBox);

/// @param offset CPoint
/// @return DboState
DboState Move(CPoint offset);

/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

/// @return int
int Disconnect();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNetSymbolInstance_sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboNetSymbolInstance_sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboNetSymbolInstance_sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNetSymbolInstance_sGetSourceLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNetSymbolInstance_sGetSourceSymbolName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @return CString
CString DboNetSymbolInstance_sGenerateBundleObjectName(DboBaseObject * obj);

/// @param x DboNetSymbolInstance *
/// @return DboERC
DboERC DboNetSymbolInstanceToDboERC(DboNetSymbolInstance * x);

class DboERC
	: public DboNetSymbolInstance
{
public:
/// @param status DboState &
/// @return ERC_Severity
ERC_Severity GetSeverity(DboState & status);

/// @param error CString &
/// @return DboState
DboState GetError(CString & error);

/// @param detail CString &
/// @return DboState
DboState GetDetail(CString & detail);

/// @param location CString &
/// @return DboState
DboState GetLocationString(CString & location);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetError(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDetail(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSeverity(DboBaseObject * obj, DboState & status);

/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboERC_sGetError(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboERC_sGetDetail(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboERC_sGetSeverity(DboBaseObject * obj, DboState & status);

/// @param x DboNetSymbolInstance *
/// @return DboBookMark
DboBookMark DboNetSymbolInstanceToDboBookMark(DboNetSymbolInstance * x);

class DboBookMark
	: public DboNetSymbolInstance
{
public:
/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

};

/// @param x DboNetSymbolInstance *
/// @return DboGlobal
DboGlobal DboNetSymbolInstanceToDboGlobal(DboNetSymbolInstance * x);

class DboGlobal
	: public DboNetSymbolInstance
{
public:
/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

/// @param status DboState &
/// @return DboGlobalSymbol
DboGlobalSymbol GetGlobalSymbol(DboState & status);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

};

/// @param x DboNetSymbolInstance *
/// @return DboOffPageConnector
DboOffPageConnector DboNetSymbolInstanceToDboOffPageConnector(DboNetSymbolInstance * x);

/// @param x DboInstOccMapper *
/// @return DboOffPageConnector
DboOffPageConnector DboInstOccMapperToDboOffPageConnector(DboInstOccMapper * x);

class DboOffPageConnector
	: public DboNetSymbolInstance
{
public:
/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOffPageConnectorOccurrence
DboOffPageConnectorOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param occId unsigned long
/// @return DboOccurrence
DboOccurrence GetOccBasedOnOccId(unsigned long occId);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

};

/// @param x DboNetSymbolInstance *
/// @return DboPort
DboPort DboNetSymbolInstanceToDboPort(DboNetSymbolInstance * x);

class DboPort
	: public DboNetSymbolInstance
{
public:
/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboPortOccurrence
DboPortOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param portName CString const &
/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(CString const & portName, DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param portName CString const &
/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(CString const & portName, DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

/// @param status DboState &
/// @return DboPortSymbol
DboPortSymbol GetPortSymbol(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT sGetPinType(DboBaseObject * obj, DboState & status);

/// @return bool
bool IsBundleObject();

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param mirror int
/// @return DboState
DboState SetMirror(int mirror);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param pinType enum DboValue::PinTypeT
/// @return DboState
DboState SetPinType(enum DboValue::PinTypeT pinType);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT DboPort_sGetPinType(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboCustomItemInstance
DboCustomItemInstance DboGraphicInstanceToDboCustomItemInstance(DboGraphicInstance * x);

class DboCustomItemInstance
	: public DboGraphicInstance
{
public:
/// @return int
int GetCookie();

/// @return IID
IID GetInterfaceID();

/// @return CString
CString GetPluginName();

/// @return int
int GetType();

/// @return DboInstOccurrence
DboInstOccurrence GetOwningOccurrence();

/// @param nCookie int
void SetCookie(int nCookie);

/// @param idInterfaceID IID
void SetInterfaceID(IID idInterfaceID);

/// @param strPluginName CString &
void SetPluginName(CString & strPluginName);

/// @param nType int
void SetType(int nType);

};

/// @param x DboBaseObject *
/// @return DboBusEntry
DboBusEntry DboBaseObjectToDboBusEntry(DboBaseObject * x);

class DboBusEntry
	: public DboBaseObject
{
public:
/// @param status DboState &
/// @return int
int IsBundle(DboState & status);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboLib
DboLib GetContainingLib();

/// @return DboPage
DboPage GetOwner();

/// @param status DboState &
/// @return CPoint
CPoint GetEntryPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetEndPoint(DboState & status);

/// @param status DboState &
/// @return DboWire
DboWire GetEntryWire(DboState & status);

/// @param status DboState &
/// @return DboWire
DboWire GetEndWire(DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param status DboState &
/// @return int
int IsBus(DboState & status);

/// @param status DboState &
/// @return void *
void * GetUserData(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEntryPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEntryPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @return DboState
DboState MarkModified();

/// @param nId unsigned long
/// @return DboState
DboState SetId(unsigned long nId);

/// @param location CPoint
/// @return DboState
DboState SetEntryPoint(CPoint location);

/// @param location CPoint
/// @return DboState
DboState SetEndPoint(CPoint location);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param pPtr void *
/// @return DboState
DboState SetUserData(void * pPtr);

/// @param rect CRect
void SetBoundingBox(CRect rect);

/// @return CRect
CRect GetBoundingBox();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBusEntry_sGetEntryPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBusEntry_sGetEntryPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBusEntry_sGetEndPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBusEntry_sGetEndPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboBusEntry_sGetColor(DboBaseObject * obj, DboState & status);

/// @param x DboLibObject *
/// @return DboCell
DboCell DboLibObjectToDboCell(DboLibObject * x);

class DboCell
	: public DboLibObject
{
public:
/// @param name CString &
/// @param status DboState &
/// @return DboLibPart
DboLibPart GetPart(CString & name, DboState & status);

/// @param index int
/// @param status DboState &
/// @return DboLibPart
DboLibPart FindPart(int index, DboState & status);

/// @param status DboState &
/// @return int
int GetSize(DboState & status);

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @param str CString &
void GetSemanticString(CString & str);

/// @param status DboState &
/// @return DboCellPartsIter
DboCellPartsIter NewPartsIter(DboState & status);

/// @param status DboState &
/// @return DboCellPartNamesIter
DboCellPartNamesIter NewPartNamesIter(DboState & status);

/// @param part DboLibPart *
/// @return DboState
DboState AddPart(DboLibPart * part);

};

class TBaseDboCellPartsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboCellPartsIter
	: public TBaseDboLibPartsIter
{
public:
/// @param status DboState &
/// @return DboLibPart
DboLibPart NextPart(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboLibPart *&
/// @return unsigned long
unsigned long GetKey(DboLibPart *& pObject);

};

class DboCellPartNamesIter
{
public:
/// @param NxtName CString &
/// @return DboState
DboState NextName(CString & NxtName);

};

/// @param x DboSymbol *
/// @return DboLibPart
DboLibPart DboSymbolToDboLibPart(DboSymbol * x);

class DboLibPart
	: public DboSymbol
{
public:
/// @param name CString &
/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin GetPin(CString & name, DboState & status);

/// @param position unsigned int
/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin GetPin(unsigned int position, DboState & status);

/// @param name CString &
/// @return DboState
DboState GetReference(CString & name);

/// @param value CString &
/// @return DboState
DboState GetPartValue(CString & value);

/// @param status DboState &
/// @return DboView
DboView GetContents(DboState & status);

/// @param status DboState &
/// @return ViewTypeT
ViewTypeT GetContentsViewType(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetContentsViewName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetContentsLibName(CString & name);

/// @param status DboState &
/// @return int
int GetPinNumbersAreVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetPinNamesAreVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetPinNamesAreRotated(DboState & status);

/// @param refDes CString &
/// @return DboState
DboState GetReferenceDesignator(CString & refDes);

/// @return DboPackage
DboPackage GetPackagePtr();

/// @return DboCell
DboCell GetCellPtr();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinNumbersAreVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinNamesAreRotated(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinNamesAreVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReference(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReferenceDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPartValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetContentsLibName(DboBaseObject * obj, DboState & status);

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @param str CString &
void GetSemanticString(CString & str);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetContentsViewName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT sGetContentsViewType(DboBaseObject * obj, DboState & status);

/// @return DboState
DboState MarkModified();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboLibPartPinsIter
DboLibPartPinsIter NewLPinsIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboLibPartPinsIter
DboLibPartPinsIter NewLPinsIter(DboState & status);

/// @param viewType enum DboValue::ViewTypeT
/// @return DboState
DboState SetContentsViewType(enum DboValue::ViewTypeT viewType);

/// @param viewName CString &
/// @return DboState
DboState SetContentsViewName(CString & viewName);

/// @param libName CString &
/// @return DboState
DboState SetContentsLibName(CString & libName);

/// @param name CString &
/// @return DboState
DboState SetReference(CString & name);

/// @param name CString &
/// @return DboState
DboState SetPartValue(CString & name);

/// @param bVal int
/// @return DboState
DboState SetPinNumbersAreVisible(int bVal);

/// @param bVal int
/// @return DboState
DboState SetPinNamesAreVisible(int bVal);

/// @param bVal int
/// @return DboState
DboState SetPinNamesAreRotated(int bVal);

/// @param pCell DboCell *
void SetCellPtr(DboCell * pCell);

/// @param pPkg DboPackage *
void SetPackagePtr(DboPackage * pPkg);

/// @return CString
CString GetSuffix();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLibPart_sGetPinNumbersAreVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLibPart_sGetPinNamesAreRotated(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLibPart_sGetPinNamesAreVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLibPart_sGetPinCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLibPart_sGetReference(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLibPart_sGetReferenceDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLibPart_sGetPartValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLibPart_sGetContentsLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboLibPart_sGetContentsViewName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT DboLibPart_sGetContentsViewType(DboBaseObject * obj, DboState & status);

/// @param x DboSymbolPinsIter *
/// @return DboLibPartPinsIter
DboLibPartPinsIter DboSymbolPinsIterToDboLibPartPinsIter(DboSymbolPinsIter * x);

class DboLibPartPinsIter
	: public DboSymbolPinsIter
{
public:
/// @param status DboState &
/// @return DboSymbolPin
DboSymbolPin NextPin(DboState & status);

};

/// @param x DboLibObject *
/// @return DboPackage
DboPackage DboLibObjectToDboPackage(DboLibObject * x);

class DboPackage
	: public DboLibObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return int
int GetSize(DboState & status);

/// @param status DboState &
/// @return int
int IsHomogeneous(DboState & status);

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @param designator CString &
/// @return DboState
DboState GetDesignator(CString & designator);

/// @param lib CString &
/// @return DboState
DboState GetPCBLib(CString & lib);

/// @param footprint CString &
/// @return DboState
DboState GetPCBFootprint(CString & footprint);

/// @param position int
/// @param status DboState &
/// @return DboDevice
DboDevice GetDevice(int position, DboState & status);

/// @param DeviceDesignator CString &
/// @param status DboState &
/// @return DboDevice
DboDevice GetDevice(CString & DeviceDesignator, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetSize(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReferenceTemplate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPCBLib(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPCBFootprint(DboBaseObject * obj, DboState & status);

/// @param csRefTmpl CString &
/// @return DboState
DboState GetReferenceTemplate(CString & csRefTmpl);

/// @param str CString &
void GetSemanticString(CString & str);

/// @return DboBundleTemplateMap
DboBundleTemplateMap GetBundleTemplateMap();

/// @return bool
bool isBundleTemplateExists();

/// @param status DboState &
/// @return DboPackageDevicesIter
DboPackageDevicesIter NewDevicesIter(DboState & status);

/// @param status DboState &
/// @return DboPackagePartsIter
DboPackagePartsIter NewPartsIter(DboState & status);

/// @param status DboState &
/// @return DboPackageAliasesIter
DboPackageAliasesIter NewAliasesIter(DboState & status);

/// @param alias CString &
/// @return DboState
DboState AddAlias(CString & alias);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param designator CString &
/// @return DboState
DboState SetDesignator(CString & designator);

/// @param libName CString &
/// @return DboState
DboState SetPCBLib(CString & libName);

/// @param footprint CString const &
/// @return DboState
DboState SetPCBFootprint(CString const & footprint);

/// @param position int
/// @return DboState
DboState DeleteDevice(int position);

/// @param csRefTmpl CString &
/// @return DboState
DboState SetReferenceTemplate(CString & csRefTmpl);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @return DboState
DboState Cleanup();

/// @param designator CString &
/// @param position int
/// @param cell DboCell *
/// @param status DboState &
/// @return DboDevice
DboDevice NewDevice(CString & designator, int position, DboCell * cell, DboState & status);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboPackage_sGetSize(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPackage_sGetReferenceTemplate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPackage_sGetPCBLib(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboPackage_sGetPCBFootprint(DboBaseObject * obj, DboState & status);

class TBaseDboPackageDevicesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPackageDevicesIter
	: public TBaseDboPackageDevicesIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboDevice *&
/// @return unsigned long
unsigned long GetKey(DboDevice *& pObject);

/// @param status DboState &
/// @return DboDevice
DboDevice NextDevice(DboState & status);

};

class TBaseDboPackagePartsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboPackagePartsIter
	: public TBaseDboLibPartsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboLibPart *&
/// @return unsigned long
unsigned long GetKey(DboLibPart *& pObject);

/// @param status DboState &
/// @return DboLibPart
DboLibPart NextPart(DboState & status);

};

class DboPackageAliasesIter
{
public:
/// @param nxt CString &
/// @return DboState
DboState Next(CString & nxt);

/// @param nxt CString &
/// @return DboState
DboState NextAlias(CString & nxt);

};

/// @param x DboBaseObject *
/// @return DboSymbolPin
DboSymbolPin DboBaseObjectToDboSymbolPin(DboBaseObject * x);

class DboSymbolPin
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboSymbol
DboSymbol GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString &
/// @return DboState
DboState GetPinName(CString & name);

/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinType(DboState & status);

/// @param status DboState &
/// @return int
int GetIsLong(DboState & status);

/// @param status DboState &
/// @return int
int GetIsClock(DboState & status);

/// @param status DboState &
/// @return int
int GetIsDot(DboState & status);

/// @param status DboState &
/// @return int
int GetIsLeftPointing(DboState & status);

/// @param status DboState &
/// @return int
int GetIsRightPointing(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNetStyle(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNoConnect(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetStartPoint(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetHotSpot(DboState & status);

/// @param status DboState &
/// @return int
int GetIsVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetIsGlobal(DboState & status);

/// @param status DboState &
/// @return int
int GetIsNumberVisible(DboState & status);

/// @param status DboState &
/// @return int
int GetIsUserDefinedShape(DboState & status);

/// @param status DboState &
/// @return int
int GetDisplayPropsPermitted(DboState & status);

/// @param status DboState &
/// @return int
int GetPinPosition(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return DboPtrArray
DboPtrArray GetDispPropArray();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPinName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT sGetPinType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsLong(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsClock(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsDot(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsLeftPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsRightPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNetStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNoConnect(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsNumberVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPinPosition(DboBaseObject * obj, DboState & status);

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @param str CString &
void GetSemanticString(CString & str);

/// @param status DboState &
/// @return DboDisplayPropsIter
DboDisplayPropsIter NewDisplayPropsIter(DboState & status);

/// @param name CString &
/// @return DboState
DboState SetPinName(CString & name);

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param type enum DboValue::PinTypeT
/// @return DboState
DboState SetPinType(enum DboValue::PinTypeT type);

/// @param bval int
/// @return DboState
DboState SetIsLong(int bval);

/// @param bval int
/// @return DboState
DboState SetIsClock(int bval);

/// @param bval int
/// @return DboState
DboState SetIsDot(int bval);

/// @param bval int
/// @return DboState
DboState SetIsLeftPointing(int bval);

/// @param bval int
/// @return DboState
DboState SetIsRightPointing(int bval);

/// @param bval int
/// @return DboState
DboState SetIsNetStyle(int bval);

/// @param bval int
/// @return DboState
DboState SetIsNoConnect(int bval);

/// @param point CPoint
/// @return DboState
DboState SetStartPoint(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetHotSpot(CPoint point);

/// @param val int
/// @return DboState
DboState SetIsVisible(int val);

/// @param val int
/// @return DboState
DboState SetIsGlobal(int val);

/// @param val int
/// @return DboState
DboState SetIsNumberVisible(int val);

/// @param nPos int
/// @return DboState
DboState SetPinPosition(int nPos);

/// @param bval int
/// @return DboState
DboState SetIsUserDefinedShape(int bval);

/// @param nPos int
/// @return DboState
DboState InsertAtPinPosition(int nPos);

/// @param status DboState &
/// @param name CString &
/// @param location CPoint
/// @param rotation enum DboValue::RotationT
/// @param font LOGFONT &
/// @param color enum DboValue::ColorT
/// @return DboDisplayProp
DboDisplayProp NewDisplayProp(DboState & status, CString & name, CPoint location, enum DboValue::RotationT rotation, LOGFONT & font, enum DboValue::ColorT color);

/// @return DboBaseObject
DboBaseObject GetParentObj();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboSymbolPin_sGetPinName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT DboSymbolPin_sGetPinType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsLong(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsClock(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsDot(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsLeftPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsRightPointing(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsNetStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsNoConnect(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetIsNumberVisible(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetStartPointX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetStartPointY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetHotSpotX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetHotSpotY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolPin_sGetPinPosition(DboBaseObject * obj, DboState & status);

/// @param x DboSymbolPin *
/// @return DboSymbolPinScalar
DboSymbolPinScalar DboSymbolPinToDboSymbolPinScalar(DboSymbolPin * x);

class DboSymbolPinScalar
	: public DboSymbolPin
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

};

/// @param x DboSymbolPin *
/// @return DboSymbolPinBus
DboSymbolPinBus DboSymbolPinToDboSymbolPinBus(DboSymbolPin * x);

class DboSymbolPinBus
	: public DboSymbolPin
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param name CString &
/// @return DboState
DboState SetPinName(CString & name);

};

/// @param x DboDisplayPropsIter *
/// @return DboSymbolPinDisplayPropsIter
DboSymbolPinDisplayPropsIter DboDisplayPropsIterToDboSymbolPinDisplayPropsIter(DboDisplayPropsIter * x);

class DboSymbolPinDisplayPropsIter
	: public DboDisplayPropsIter
{
public:
/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboDisplayProp *&
/// @return unsigned long
unsigned long GetKey(DboDisplayProp *& pObject);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextProp(DboState & status);

/// @param status DboState &
/// @return DboDisplayProp
DboDisplayProp NextPropEx(DboState & status);

};

class DboFontAndRotation
{
public:
/// @return short
short GetFontID();

/// @return RotationT
RotationT GetRotation();

/// @param nFontID short
void SetFontID(short nFontID);

/// @param nRotation enum DboValue::RotationT
void SetRotation(enum DboValue::RotationT nRotation);

};

/// @param x DboBaseObject *
/// @return DboDisplayProp
DboDisplayProp DboBaseObjectToDboDisplayProp(DboBaseObject * x);

class DboDisplayProp
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param strValue CString &
/// @param pViewOccurrence DboInstOccurrence *
/// @return DboState
DboState GetValueString(CString & strValue, DboInstOccurrence * pViewOccurrence=None);

/// @param strValue CString &
/// @return DboState
DboState GetValueString(CString & strValue);

/// @param pBaseObject DboBaseObject *
/// @param value CString &
/// @return DboState
DboState GetActualValueString(DboBaseObject * pBaseObject, CString & value);

/// @param status DboState &
/// @param bNewVersion int
/// @return unsigned long
unsigned long GetId(DboState & status, int bNewVersion=0);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @return DboBaseObject
DboBaseObject GetOwner();

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param status DboState &
/// @return RotationT
RotationT GetRotation(DboState & status);

/// @param dbFontType int
/// @param logfont LOGFONT &
/// @return DboState
DboState GetFont(int dbFontType, LOGFONT & logfont);

/// @param arg0 DboState &
/// @return int
int IsFontDefault(DboState & arg0);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param pDboObj DboBaseObject *
/// @param status DboState &
/// @return int
int GetDefaultFontType(DboBaseObject * pDboObj, DboState & status);

/// @param status DboState &
/// @return int
int GetDefaultFontType(DboState & status);

/// @param status DboState &
/// @return DisplayTypeT
DisplayTypeT GetDisplayType(DboState & status);

/// @param DWID DboDesignOccurrenceId const &
/// @param value CString &
/// @return DboState
DboState GetValueStringForOccurrence(DboDesignOccurrenceId const & DWID, CString & value);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT sGetRotation(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return DisplayTypeT
DisplayTypeT sGetDisplayType(DboBaseObject * obj, DboState & status);

/// @return CRect
CRect GetBoundingBox();

/// @return int
int IsBoundingBoxDirty();

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return DboState
DboState MarkModified();

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param location CPoint
/// @return DboState
DboState SetLocation(CPoint location);

/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState SetRotation(enum DboValue::RotationT rotation);

/// @param font LOGFONT &
/// @return DboState
DboState SetFont(LOGFONT & font);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param type enum DboValue::DisplayTypeT
/// @return DboState
DboState SetDisplayType(enum DboValue::DisplayTypeT type);

/// @param bSetting int
void SetBoundingBoxDirty(int bSetting);

/// @param bSetting int
void SetOwnerBoundingBoxDirty(int bSetting);

/// @param rect CRect
/// @return DboState
DboState SetBoundingBox(CRect rect);

/// @param strValue CString &
/// @param pViewOccurrence DboInstOccurrence *
/// @return DboState
DboState SetValueString(CString & strValue, DboInstOccurrence * pViewOccurrence=None);

/// @param strValue CString &
/// @return DboState
DboState SetValueString(CString & strValue);

/// @param obj DboBaseObject *
/// @param name CString &
/// @return DboState
DboState sSetName(DboBaseObject * obj, CString & name);

/// @param obj DboBaseObject *
/// @param x int
/// @return DboState
DboState sSetLocationX(DboBaseObject * obj, int x);

/// @param obj DboBaseObject *
/// @param y int
/// @return DboState
DboState sSetLocationY(DboBaseObject * obj, int y);

/// @param obj DboBaseObject *
/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState sSetRotation(DboBaseObject * obj, enum DboValue::RotationT rotation);

/// @param obj DboBaseObject *
/// @param font LOGFONT &
/// @return DboState
DboState sSetFont(DboBaseObject * obj, LOGFONT & font);

/// @param obj DboBaseObject *
/// @param color enum DboValue::ColorT
/// @return DboState
DboState sSetColor(DboBaseObject * obj, enum DboValue::ColorT color);

/// @param obj DboBaseObject *
/// @param displayType enum DboValue::DisplayTypeT
/// @return DboState
DboState sSetDisplayType(DboBaseObject * obj, enum DboValue::DisplayTypeT displayType);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboDisplayProp_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboDisplayProp_sGetValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboDisplayProp_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboDisplayProp_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT DboDisplayProp_sGetRotation(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboDisplayProp_sGetFont(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboDisplayProp_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return DisplayTypeT
DisplayTypeT DboDisplayProp_sGetDisplayType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param name CString &
/// @return DboState
DboState DboDisplayProp_sSetName(DboBaseObject * obj, CString & name);

/// @param obj DboBaseObject *
/// @param x int
/// @return DboState
DboState DboDisplayProp_sSetLocationX(DboBaseObject * obj, int x);

/// @param obj DboBaseObject *
/// @param y int
/// @return DboState
DboState DboDisplayProp_sSetLocationY(DboBaseObject * obj, int y);

/// @param obj DboBaseObject *
/// @param rotation enum DboValue::RotationT
/// @return DboState
DboState DboDisplayProp_sSetRotation(DboBaseObject * obj, enum DboValue::RotationT rotation);

/// @param obj DboBaseObject *
/// @param font LOGFONT &
/// @return DboState
DboState DboDisplayProp_sSetFont(DboBaseObject * obj, LOGFONT & font);

/// @param obj DboBaseObject *
/// @param color enum DboValue::ColorT
/// @return DboState
DboState DboDisplayProp_sSetColor(DboBaseObject * obj, enum DboValue::ColorT color);

/// @param obj DboBaseObject *
/// @param displayType enum DboValue::DisplayTypeT
/// @return DboState
DboState DboDisplayProp_sSetDisplayType(DboBaseObject * obj, enum DboValue::DisplayTypeT displayType);

/// @param x DboOccurrence *
/// @return DboInstOccurrence
DboInstOccurrence DboOccurrenceToDboInstOccurrence(DboOccurrence * x);

class DboInstOccurrence
	: public DboOccurrence
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(DboState & status);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathNameNumber(CString & name, char chSeparator='.');

/// @param name CString &
/// @return DboState
DboState GetPathNameNumber(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetHierPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetHierPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetImplementationName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetImplementationName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param status DboState &
/// @return DboView
DboView GetContents(DboState & status);

/// @param status DboState &
/// @return int
int IsPrimitive(DboState & status);

/// @return int
int IsPSpiceOnly();

/// @param status DboState &
/// @return int
int GetInstChildrenCount(DboState & status);

/// @param status DboState &
/// @return int
int HasChildren(DboState & status);

/// @param status DboState &
/// @return int
int IsRecursive(DboState & status);

/// @param status DboState &
/// @return DboPartInst
DboPartInst GetPartInst(DboState & status);

/// @param status DboState &
/// @return DboPartInst
DboPartInst FindPartInst(DboState & status);

/// @param ref CString &
/// @return DboState
DboState GetReference(CString & ref);

/// @param designator CString &
/// @return DboState
DboState GetDesignator(CString & designator);

/// @param refDes CString &
/// @return DboState
DboState GetReferenceDesignator(CString & refDes);

/// @param value CString &
/// @return DboState
DboState GetPartValue(CString & value);

/// @param Name CString const &
/// @param bPhysical int
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrenceByRef(CString const & Name, int bPhysical, DboState & status);

/// @param name CString const &
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrenceByHierPath(CString const & name, DboState & status);

/// @param nId int
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrence(int nId, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrence(CString & Name, DboState & status);

/// @param pInst DboPartInst *
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrence(DboPartInst * pInst, DboState & status);

/// @param nId int
/// @param status DboState &
/// @return DboTitleBlockOccurrence
DboTitleBlockOccurrence GetTitleBlockOccurrence(int nId, DboState & status);

/// @param pTitleBlock DboTitleBlock *
/// @param status DboState &
/// @return DboTitleBlockOccurrence
DboTitleBlockOccurrence GetTitleBlockOccurrence(DboTitleBlock * pTitleBlock, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboTitleBlockOccurrence
DboTitleBlockOccurrence GetTitleBlockOccurrence(CString & Name, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence GetNetOccurrence(CString & Name, DboState & status);

/// @param pNet DboSchematicNet *
/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence GetNetOccurrence(DboSchematicNet * pNet, DboState & status);

/// @param nOffPageInstanceID unsigned long
/// @param status DboState &
/// @return DboOffPageConnectorOccurrence
DboOffPageConnectorOccurrence GetOffPageOccurrence(unsigned long nOffPageInstanceID, DboState & status);

/// @param Name CString &
/// @param status DboState &
/// @return DboOffPageConnectorOccurrence
DboOffPageConnectorOccurrence GetOffPageOccurrence(CString & Name, DboState & status);

/// @param pGetMapperObjects bool
/// @return DboState
DboState CheckAndCorrectSubTreeOccurrences(bool pGetMapperObjects);

/// @param Name CString const &
/// @param status DboState &
/// @param bBus int
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(CString const & Name, DboState & status, int bBus=0);

/// @param Name CString const &
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(CString const & Name, DboState & status);

/// @param Name CString const &
/// @param Number CString &
/// @param pDiscardedOcc bool
/// @param status DboState &
/// @param bBus int
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(CString const & Name, CString & Number, bool pDiscardedOcc, DboState & status, int bBus);

/// @param Name CString const &
/// @param Number CString &
/// @param pDiscardedOcc bool
/// @param status DboState &
/// @param pIsBusMember bool
/// @param bBus int
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(CString const & Name, CString & Number, bool pDiscardedOcc, DboState & status, bool pIsBusMember, int bBus);

/// @param pPort DboSchematicPort *
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(DboSchematicPort * pPort, DboState & status);

/// @param pPortInst DboPortInst *
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(DboPortInst * pPortInst, DboState & status);

/// @param pPortInst DboPortInst *
/// @param nPos int
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(DboPortInst * pPortInst, int nPos, DboState & status);

/// @param Name CString const &
/// @param Number CString &
/// @param status DboState &
/// @param bBus int
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(CString const & Name, CString & Number, DboState & status, int bBus);

/// @param nPinId long
/// @return DboPortOccurrence
DboPortOccurrence GetPortOccurrence(long nPinId);

/// @param bVHDL int
/// @return CString
CString GetCanonicalName(int bVHDL);

/// @param bVHDL int
/// @param nToolID int
/// @return CString
CString GetCanonicalName(int bVHDL, int nToolID);

/// @param bVHDL int
/// @return CString
CString GetHdlName(int bVHDL);

/// @param bVHDL int
/// @param nToolID int
/// @return CString
CString GetHdlName(int bVHDL, int nToolID);

/// @return CString
CString GetCanonicalRefDes();

/// @param bVHDL int
/// @return CString
CString GetLibName(int bVHDL);

/// @param bVHDL int
/// @return CString
CString GetCellName(int bVHDL);

/// @param bVHDL int
/// @return CString
CString GetViewStr(int bVHDL);

/// @param Name CString const &
/// @param status DboState &
/// @return DboInstOccurrence
DboInstOccurrence GetInstOccurrenceByName(CString const & Name, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReference(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetReferenceDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPartValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PrimitiveTypeT
PrimitiveTypeT sGetIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT sGetContentsViewType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetContentsViewName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetContentsLibName(DboBaseObject * obj, DboState & status);

/// @param name CString const &
/// @param choices CStringList &
/// @return DboState
DboState GetEffectivePropValueChoices(CString const & name, CStringList & choices);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param status DboState &
/// @return int
int HasPropertyThatExists(DboState & status);

/// @param pOnDiscardedPage bool
/// @param pSchematic DboSchematic *
void SetOnDiscardedPage(bool pOnDiscardedPage, DboSchematic * pSchematic);

/// @param pOnDiscardedPage bool
void SetOnDiscardedPage(bool pOnDiscardedPage);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param status DboState
/// @return int
int GetNetAndPortsValid(DboState status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetInstance(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject FindInstance(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetPartInstId(DboState & status);

/// @param strName CString const &
/// @param strVal CString &
/// @return int
int GetVariantProp(CString const & strName, CString & strVal);

/// @param strName CString &
/// @param strVal CString &
/// @param bNewFound int &
/// @return int
int GetNextNewVariantProp(CString & strName, CString & strVal, int & bNewFound);

/// @return int
int IsVariantPropMapEmpty();

void ProcessFlatNetForPartRename();

/// @return bool
bool IsPartInstBelongToExternalDesign();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboOccurrenceChildrenIter
DboOccurrenceChildrenIter NewChildrenIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboOccurrenceChildrenIter
DboOccurrenceChildrenIter NewChildrenIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param reference CString &
/// @return DboState
DboState SetReference(CString & reference);

/// @param designator CString &
/// @return DboState
DboState SetDesignator(CString & designator);

/// @param value CString &
/// @return DboState
DboState SetPartValue(CString & value);

/// @param name CString const &
/// @return DboState
DboState DeleteDBProp(CString const & name);

/// @param nPartInstId unsigned long
/// @return DboState
DboState SetPartInstId(unsigned long nPartInstId);

/// @param bMap int
/// @return DboState
DboState ExpandOccurrences(int bMap=0);

/// @return DboState
DboState ExpandOccurrences();

/// @return DboState
DboState ExpandSubTreeOccurrences();

/// @param pSource DboBaseObject *
/// @return DboState
DboState Copy(DboBaseObject * pSource);

/// @return DboState
DboState ApplyIds();

/// @param strName CString const &
/// @param strVal CString const &
void AddVariantProp(CString const & strName, CString const & strVal);

/// @param bFlag int
void ClearVariantMap(int bFlag=1);

void ClearVariantMap();

/// @return DboState
DboState UpdateNetAndPorts();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboInstOccurrence_sGetId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetReference(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetReferenceDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetPartValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PrimitiveTypeT
PrimitiveTypeT DboInstOccurrence_sGetIsPrimitive(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT DboInstOccurrence_sGetContentsViewType(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetContentsViewName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboInstOccurrence_sGetContentsLibName(DboBaseObject * obj, DboState & status);

class TBaseDboOccurrenceChildrenIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboOccurrenceChildrenIter
	: public TBaseDboOccurrenceChildrenIter
{
public:
/// @param status DboState &
/// @return DboOccurrence
DboOccurrence NextOccurrence(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboOccurrence *&
/// @return unsigned long
unsigned long GetKey(DboOccurrence *& pObject);

};

/// @param x DboEffectivePropsIter *
/// @return DboInstOccurrenceEffectivePropsIter
DboInstOccurrenceEffectivePropsIter DboEffectivePropsIterToDboInstOccurrenceEffectivePropsIter(DboEffectivePropsIter * x);

class DboInstOccurrenceEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

/// @param x DboOccurrence *
/// @return DboNetOccurrence
DboNetOccurrence DboOccurrenceToDboNetOccurrence(DboOccurrence * x);

class DboNetOccurrence
	: public DboOccurrence
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(DboState & status);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetNetName(CString & name);

/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetNet(DboState & status);

/// @param status DboState &
/// @return DboSchematicNet
DboSchematicNet GetDeletedNet(DboState & status);

/// @param status DboState &
/// @return DboFlatNet
DboFlatNet GetFlatNet(DboState & status);

/// @param bVHDL int
/// @return CString
CString GetCanonicalName(int bVHDL);

/// @param bVHDL int
/// @param nToolId int
/// @param strName CString &
/// @return CString
CString GetCanonicalName(int bVHDL, int nToolId, CString & strName);

/// @param status DboState &
/// @return unsigned long
unsigned long GetSchematicNetId(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetInstance(DboState & status);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @param PatternMatcher TPatternMatch
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase, TPatternMatch PatternMatcher=DboPatternMatch);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param propName CString
/// @param lLock MaskT &
/// @param preTrigger CString &
/// @param postTrigger CString &
/// @return bool
bool GetAttributeLockingInfo(CString propName, MaskT & lLock, CString & preTrigger, CString & postTrigger);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param newNetId unsigned long
/// @return DboState
DboState SetSchematicNetId(unsigned long newNetId);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNetOccurrence_sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNetOccurrence_sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboNetOccurrence_sGetId(DboBaseObject * obj, DboState & status);

/// @param x DboEffectivePropsIter *
/// @return DboNetOccurrenceEffectivePropsIter
DboNetOccurrenceEffectivePropsIter DboEffectivePropsIterToDboNetOccurrenceEffectivePropsIter(DboEffectivePropsIter * x);

class DboNetOccurrenceEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

/// @param x DboOccurrence *
/// @return DboTitleBlockOccurrence
DboTitleBlockOccurrence DboOccurrenceToDboTitleBlockOccurrence(DboOccurrence * x);

class DboTitleBlockOccurrence
	: public DboOccurrence
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(DboState & status);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetSchematicPath(CString & name);

/// @param pTitleBlock DboTitleBlock *
/// @return DboState
DboState SetTitleBlock(DboTitleBlock * pTitleBlock);

/// @param status DboState &
/// @return DboTitleBlock
DboTitleBlock GetTitleBlock(DboState & status);

/// @param nTitleBlockId unsigned long
/// @return DboState
DboState SetTitleBlockId(unsigned long nTitleBlockId);

/// @param status DboState &
/// @return unsigned long
unsigned long GetTitleBlockId(DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param strName CString const &
/// @param strVal CString const &
void AddVariantProp(CString const & strName, CString const & strVal);

/// @param bFlag int
void ClearVariantMap(int bFlag=1);

void ClearVariantMap();

/// @param strName CString const &
/// @param strVal CString &
/// @return int
int GetVariantProp(CString const & strName, CString & strVal);

/// @param strName CString &
/// @param strVal CString &
/// @param bNewFound int &
/// @return int
int GetNextNewVariantProp(CString & strName, CString & strVal, int & bNewFound);

/// @return int
int IsVariantPropMapEmpty();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicPath(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetInstance(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject FindInstance(DboState & status);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockOccurrence_sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockOccurrence_sGetSchematicPath(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboTitleBlockOccurrence_sGetId(DboBaseObject * obj, DboState & status);

/// @param x DboEffectivePropsIter *
/// @return DboTitleBlockOccurrenceEffectivePropsIter
DboTitleBlockOccurrenceEffectivePropsIter DboEffectivePropsIterToDboTitleBlockOccurrenceEffectivePropsIter(DboEffectivePropsIter * x);

class DboTitleBlockOccurrenceEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

/// @param x DboBaseObject *
/// @return DboFlatNet
DboFlatNet DboBaseObjectToDboFlatNet(DboBaseObject * x);

class DboFlatNet
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @return DboDesign
DboDesign GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence GetTopNet(DboState & status);

/// @param Name CString &
/// @return DboState
DboState GetName(CString & Name);

/// @param pSchNetName CString
/// @return DboState
DboState ComputeName(CString pSchNetName="");

/// @return DboState
DboState ComputeName();

/// @param status DboState &
/// @return int
int GetIsGlobal(DboState & status);

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @return FlatNetNamingStrategyT
FlatNetNamingStrategyT GetNameStrategy();

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboFlatNetNetsIter
DboFlatNetNetsIter NewNetsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboFlatNetNetsIter
DboFlatNetNetsIter NewNetsIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboFlatNetWiresIter
DboFlatNetWiresIter NewWiresIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboFlatNetWiresIter
DboFlatNetWiresIter NewWiresIter(DboState & status);

/// @return DboFlatNetNetOccurrencesIter
DboFlatNetNetOccurrencesIter NewNetOccurrencesIter();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboFlatNetPortOccurrencesIter
DboFlatNetPortOccurrencesIter NewPortOccurrencesIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboFlatNetPortOccurrencesIter
DboFlatNetPortOccurrencesIter NewPortOccurrencesIter(DboState & status);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param propName CString
/// @param lLock MaskT &
/// @param preTrigger CString &
/// @param postTrigger CString &
/// @return bool
bool GetAttributeLockingInfo(CString propName, MaskT & lLock, CString & preTrigger, CString & postTrigger);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboFlatNet_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboFlatNet_sGetId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboFlatNet_sGetIsGlobal(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT DboFlatNet_sGetColor(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboFlatNet_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboFlatNet_sGetLineStyle(DboBaseObject * obj, DboState & status);

class TBaseDboFlatNetNetOccurrencesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboFlatNetNetOccurrencesIter
	: public TBaseDboFlatNetNetOccurrencesIter
{
public:
/// @param status DboState &
/// @return DboNetOccurrence
DboNetOccurrence NextNetOccurrence(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboNetOccurrence *&
/// @return unsigned long
unsigned long GetKey(DboNetOccurrence *& pObject);

};

class TBaseDboFlatNetPortOccurrencesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboFlatNetPortOccurrencesIter
	: public TBaseDboFlatNetPortOccurrencesIter
{
public:
/// @param status DboState &
/// @return DboPortOccurrence
DboPortOccurrence NextPortOccurrence(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPortOccurrence *&
/// @return unsigned long
unsigned long GetKey(DboPortOccurrence *& pObject);

};

/// @param x DboEffectivePropsIter *
/// @return DboFlatNetEffectivePropsIter
DboFlatNetEffectivePropsIter DboEffectivePropsIterToDboFlatNetEffectivePropsIter(DboEffectivePropsIter * x);

class DboFlatNetEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

class TBaseDboFlatNetWiresIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboFlatNetWiresIter
	: public TBaseDboSchematicNetWiresIter
{
public:
/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

/// @param pObject DboWire *&
/// @return unsigned long
unsigned long GetKey(DboWire *& pObject);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

};

class TBaseDboFlatNetNetsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboFlatNetNetsIter
	: public TBaseDboSchematicNetNetsIter
{
public:
/// @param status DboState &
/// @return DboNet
DboNet NextNet(DboState & status);

/// @param pObject DboNet *&
/// @return std::string
std::string GetKey(DboNet *& pObject);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

};

/// @param x DbBaseProp *
/// @return DBProp
DBProp DbBasePropToDBProp(DbBaseProp * x);

class DBProp
	: public DbBaseProp
{
public:
/// @param Name CString &
/// @return DboState
DboState GetName(CString & Name);

/// @return UINT
UINT GetNameID();

/// @param status DboState &
/// @return ValueType
ValueType GetType(DboState & status);

/// @param status DboState &
/// @return PhysicalType
PhysicalType GetPhysicalType(DboState & status);

/// @param status DboState &
/// @return int
int GetReadOnly(DboState & status);

/// @param obj DboBaseObject *
/// @param value DboValue &
/// @param bFromProp int
/// @return DboState
DboState GetValue(DboBaseObject * obj, DboValue & value, int bFromProp=0);

/// @param obj DboBaseObject *
/// @param value DboValue &
/// @return DboState
DboState GetValue(DboBaseObject * obj, DboValue & value);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @param bFromProp int
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value, int bFromProp=0);

/// @param obj DboBaseObject *
/// @param Value CString &
/// @return DboState
DboState GetStringValue(DboBaseObject * obj, CString & Value);

/// @param obj DboBaseObject *
/// @param font LOGFONT &
/// @return DboState
DboState GetFontValue(DboBaseObject * obj, LOGFONT & font);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int GetIntValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return unsigned long
unsigned long GetLongValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return time_t
time_t GetTimeValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int GetBOOLValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PinTypeT
PinTypeT GetPinTypeValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return PrimitiveTypeT
PrimitiveTypeT GetPrimitiveTypeValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ViewTypeT
ViewTypeT GetViewTypeValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return DisplayTypeT
DisplayTypeT GetDisplayTypeValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyleValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidthValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT GetFillStyleValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT GetHatchStyleValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return ColorT
ColorT GetColorValue(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return RotationT
RotationT GetRotationValue(DboBaseObject * obj, DboState & status);

/// @param val CString const &
/// @param status DboState &
/// @return int
int GetEnumValue(CString const & val, DboState & status);

/// @return int
int IsOkayToIterate();

/// @return int
int IsEditable();

/// @return int
int IsDeletable();

/// @return DBProp
DBProp GetNext();

/// @param pProp DBProp *
void SetNext(DBProp * pProp);

};

/// @param x DboSymbol *
/// @return DboTitleBlockSymbol
DboTitleBlockSymbol DboSymbolToDboTitleBlockSymbol(DboSymbol * x);

class DboTitleBlockSymbol
	: public DboSymbol
{
public:
/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageSize(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageModifyDate(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @return DboSymbolPinScalar
DboSymbolPinScalar NewSymbolPinScalar(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @param visible int
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint, int visible=1);

/// @param status DboState &
/// @param name CString &
/// @param type enum DboValue::PinTypeT
/// @param start CPoint
/// @param hotPoint CPoint
/// @return DboSymbolPinBus
DboSymbolPinBus NewSymbolPinBus(DboState & status, CString & name, enum DboValue::PinTypeT type, CPoint start, CPoint hotPoint);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockSymbol_sGetPageCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockSymbol_sGetPageNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockSymbol_sGetPageSize(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockSymbol_sGetPageCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlockSymbol_sGetPageModifyDate(DboBaseObject * obj, DboState & status);

/// @param x DboGraphicInstance *
/// @return DboTitleBlock
DboTitleBlock DboGraphicInstanceToDboTitleBlock(DboGraphicInstance * x);

/// @param x DboInstOccMapper *
/// @return DboTitleBlock
DboTitleBlock DboInstOccMapperToDboTitleBlock(DboInstOccMapper * x);

class DboTitleBlock
	: public DboGraphicInstance
{
public:
/// @return int
int IsBoundingBoxDirty();

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return DboSymbol
DboSymbol GetSymbol(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetSourceSymbolName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetSourceLibName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetDesignName(CString & name);

/// @param name CString &
/// @return DboState
DboState GetDesignFileName(CString & name);

/// @param status DboState &
/// @return time_t
time_t GetDesignCreateDate(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetDesignModifyDate(DboState & status);

/// @param time CString &
/// @return DboState
DboState GetDesignCreateTime(CString & time);

/// @param time CString &
/// @return DboState
DboState GetDesignModifyTime(CString & time);

/// @param status DboState &
/// @return int
int GetPageCount(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetSchematicCreateDate(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetSchematicModifyDate(DboState & status);

/// @param time CString &
/// @return DboState
DboState GetSchematicCreateTime(CString & time);

/// @param time CString &
/// @return DboState
DboState GetSchematicModifyTime(CString & time);

/// @param status DboState &
/// @return int
int GetPageNumber(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetPageCreateDate(DboState & status);

/// @param status DboState &
/// @return time_t
time_t GetPageModifyDate(DboState & status);

/// @param time CString &
/// @return DboState
DboState GetPageCreateTime(CString & time);

/// @param time CString &
/// @return DboState
DboState GetPageModifyTime(CString & time);

/// @param size CString &
/// @return DboState
DboState GetPageSize(CString & size);

/// @param arg0 DboState &
/// @return int
int GetKeepInLowerRightCorner(DboState & arg0);

/// @param name CString const &
/// @param choices CStringList &
/// @return DboState
DboState GetEffectivePropValueChoices(CString const & name, CStringList & choices);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
/// @param bOnlyCurrent bool
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status, bool bOnlyCurrent=False);

/// @param occArr DboOccurrenceArray &
/// @param pDesign DboDesign *
/// @param status DboState &
void GetObjectOccurrences(DboOccurrenceArray & occArr, DboDesign * pDesign, DboState & status);

/// @param strName CString &
/// @param strVal CString &
/// @param bNewFound int &
/// @return int
int GetNextNewVariantProp(CString & strName, CString & strVal, int & bNewFound);

/// @return int
int IsVariantPropMapEmpty();

/// @param strName CString const &
/// @param strVal CString &
/// @return int
int GetVariantProp(CString const & strName, CString & strVal);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignFileName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignModifyDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicModifyDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageModifyDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPageCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPageSize(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetPageNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourceLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSourceSymbolName(DboBaseObject * obj, DboState & status);

/// @param bSetting int
void SetBoundingBoxDirty(int bSetting);

/// @param boundingBox CRect
/// @return DboState
DboState SetBoundingBox(CRect boundingBox);

/// @param nPageCount int
/// @return DboState
DboState SetPageCount(int nPageCount);

/// @param name CString &
/// @return DboState
DboState GetSchematicName(CString & name);

/// @param nPageNumber int
/// @return DboState
DboState SetPageNumber(int nPageNumber);

/// @param bLR int
/// @return DboState
DboState SetKeepInLowerRightCorner(int bLR);

/// @param strName CString const &
/// @param strVal CString const &
void AddVariantProp(CString const & strName, CString const & strVal);

/// @param bFlag int
void ClearVariantMap(int bFlag=1);

void ClearVariantMap();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetDesignName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetDesignFileName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetDesignCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetDesignModifyDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSchematicCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSchematicModifyDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetPageCreateDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetPageModifyDate(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetDesignCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetDesignModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetPageCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetPageModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSchematicCreateTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSchematicModifyTime(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboTitleBlock_sGetPageCount(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetPageSize(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSchematicName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboTitleBlock_sGetPageNumber(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSourceLibName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboTitleBlock_sGetSourceSymbolName(DboBaseObject * obj, DboState & status);

/// @param x DboBaseObject *
/// @return DboVector
DboVector DboBaseObjectToDboVector(DboBaseObject * x);

class DboVector
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboBaseObject
DboBaseObject GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @return DboBaseObject
DboBaseObject GetParentObj();

};

/// @param x DboVector *
/// @return DboBox
DboBox DboVectorToDboBox(DboVector * x);

class DboBox
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return CPoint
CPoint GetUpperLeft(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetLowerRight(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param status DboState &
/// @return FillStyleT
FillStyleT GetFillStyle(DboState & status);

/// @param status DboState &
/// @return HatchStyleT
HatchStyleT GetHatchStyle(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param point CPoint
/// @return DboState
DboState SetUpperLeft(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetLowerRight(CPoint point);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBox_sGetLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBox_sGetTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBox_sGetRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBox_sGetBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboBox_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboBox_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboBox_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboBox_sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboFill
DboFill DboVectorToDboFill(DboVector * x);

class DboFill
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return CPoint
CPoint GetStart(DboState & status);

/// @param status DboState &
/// @return FillStyleT
FillStyleT GetFillStyle(DboState & status);

/// @param status DboState &
/// @return HatchStyleT
HatchStyleT GetHatchStyle(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param point CPoint
/// @return DboState
DboState SetStart(CPoint point);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboFill_sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboFill_sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboFill_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboFill_sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboLine
DboLine DboVectorToDboLine(DboVector * x);

class DboLine
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return CPoint
CPoint GetStart(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetEnd(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param point CPoint
/// @return DboState
DboState SetStart(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetEnd(CPoint point);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLine_sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLine_sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLine_sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboLine_sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboLine_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboLine_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboArc
DboArc DboVectorToDboArc(DboVector * x);

class DboArc
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return CPoint
CPoint GetStart(DboState & status);

/// @param status DboState &
/// @return CPoint
CPoint GetEnd(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param box CRect
/// @return DboState
DboState SetBoundingBox(CRect box);

/// @param point CPoint
/// @return DboState
DboState SetStart(CPoint point);

/// @param point CPoint
/// @return DboState
DboState SetEnd(CPoint point);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetStartX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetStartY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetEndX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboArc_sGetEndY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboArc_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboArc_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboEllipse
DboEllipse DboVectorToDboEllipse(DboVector * x);

class DboEllipse
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param status DboState &
/// @return FillStyleT
FillStyleT GetFillStyle(DboState & status);

/// @param status DboState &
/// @return HatchStyleT
HatchStyleT GetHatchStyle(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param box CRect
/// @return DboState
DboState SetBoundingBox(CRect box);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboEllipse_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboEllipse_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboEllipse_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboEllipse_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboEllipse_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboEllipse_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboEllipse_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboEllipse_sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboPolygon
DboPolygon DboVectorToDboPolygon(DboVector * x);

class DboPolygon
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param status DboState &
/// @return FillStyleT
FillStyleT GetFillStyle(DboState & status);

/// @param status DboState &
/// @return HatchStyleT
HatchStyleT GetHatchStyle(DboState & status);

/// @param status DboState &
/// @return int
int GetCount(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT sGetHatchStyle(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboPolygonPointsIter
DboPolygonPointsIter NewPointsIter(DboState & status);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param style enum DboValue::FillStyleT
/// @return DboState
DboState SetFillStyle(enum DboValue::FillStyleT style);

/// @param style enum DboValue::HatchStyleT
/// @return DboState
DboState SetHatchStyle(enum DboValue::HatchStyleT style);

/// @param point CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint point, int position=-1);

/// @param point CPoint
/// @return DboState
DboState NewPoint(CPoint point);

/// @param nIndex int
/// @return DboState
DboState RemovePoint(int nIndex);

/// @return DboState
DboState RemoveAllPoints();

/// @param position int
/// @param ptOffset CPoint &
/// @return DboState
DboState MovePoint(int position, CPoint & ptOffset);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboPolygon_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboPolygon_sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return FillStyleT
FillStyleT DboPolygon_sGetFillStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return HatchStyleT
HatchStyleT DboPolygon_sGetHatchStyle(DboBaseObject * obj, DboState & status);

class DboPolygonPointsIter
{
public:
/// @param returnPt CPoint &
/// @return DboState
DboState Next(CPoint & returnPt);

};

/// @param x DboVector *
/// @return DboPolyline
DboPolyline DboVectorToDboPolyline(DboVector * x);

class DboPolyline
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetCount(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboPolylinePointsIter
DboPolylinePointsIter NewPointsIter(DboState & status);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param point CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint point, int position=-1);

/// @param point CPoint
/// @return DboState
DboState NewPoint(CPoint point);

/// @param nIndex int
/// @return DboState
DboState RemovePoint(int nIndex);

/// @return DboState
DboState RemoveAllPoints();

/// @param position int
/// @param ptOffset CPoint &
/// @return DboState
DboState MovePoint(int position, CPoint & ptOffset);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboPolyline_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboPolyline_sGetLineWidth(DboBaseObject * obj, DboState & status);

class DboPolylinePointsIter
{
public:
/// @param returnPt CPoint &
/// @return DboState
DboState Next(CPoint & returnPt);

};

/// @param x DboVector *
/// @return DboBezier
DboBezier DboVectorToDboBezier(DboVector * x);

class DboBezier
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @param status DboState &
/// @return int
int GetCount(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT sGetLineWidth(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboBezierPointsIter
DboBezierPointsIter NewPointsIter(DboState & status);

/// @param style enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT style);

/// @param width enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT width);

/// @param point CPoint
/// @param position int
/// @return DboState
DboState NewPoint(CPoint point, int position=-1);

/// @param point CPoint
/// @return DboState
DboState NewPoint(CPoint point);

/// @param nIndex int
/// @return DboState
DboState RemovePoint(int nIndex);

/// @return DboState
DboState RemoveAllPoints();

/// @param position int
/// @param ptOffset CPoint &
/// @return DboState
DboState MovePoint(int position, CPoint & ptOffset);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineStyleT
LineStyleT DboBezier_sGetLineStyle(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LineWidthT
LineWidthT DboBezier_sGetLineWidth(DboBaseObject * obj, DboState & status);

class DboBezierPointsIter
{
public:
/// @param returnPt CPoint &
/// @return DboState
DboState Next(CPoint & returnPt);

};

/// @param x DboVector *
/// @return DboCommentText
DboCommentText DboVectorToDboCommentText(DboVector * x);

class DboCommentText
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return CRect
CRect GetBoundingBox();

/// @param txt CString &
/// @return DboState
DboState GetText(CString & txt);

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param status DboState &
/// @return LOGFONT
LOGFONT GetFont(DboState & status);

/// @param status DboState &
/// @return int
int IsFontDefault(DboState & status);

/// @return short
short GetFontId();

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetText(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT sGetFont(DboBaseObject * obj, DboState & status);

/// @param box CRect const &
/// @return DboState
DboState SetBoundingBox(CRect const & box);

/// @param text CString &
/// @return DboState
DboState SetText(CString & text);

/// @param point CPoint
/// @return DboState
DboState SetLocation(CPoint point);

/// @param font LOGFONT &
/// @return DboState
DboState SetFont(LOGFONT & font);

/// @param ptOffset CPoint const &
/// @return DboState
DboState Move(CPoint const & ptOffset);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboCommentText_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboCommentText_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboCommentText_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboCommentText_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboCommentText_sGetText(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboCommentText_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboCommentText_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return LOGFONT
LOGFONT DboCommentText_sGetFont(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboBitMap
DboBitMap DboVectorToDboBitMap(DboVector * x);

class DboBitMap
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param status DboState &
/// @return HGLOBAL
HGLOBAL GetDib(DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetDibSize(DboState & status);

/// @param status DboState &
/// @return CSize
CSize GetBitmapDimension(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param point CPoint
/// @return DboState
DboState SetLocation(CPoint point);

/// @param box CRect const
/// @return DboState
DboState SetBoundingBox(CRect const box);

/// @param nWidth int
/// @param nHeight int
/// @return DboState
DboState SetBitmapDimension(int nWidth, int nHeight);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBitMap_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBitMap_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBitMap_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBitMap_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBitMap_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboBitMap_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboOleEmbed
DboOleEmbed DboVectorToDboOleEmbed(DboVector * x);

class DboOleEmbed
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return CRect
CRect GetBoundingBox();

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param status DboState &
/// @return unsigned char
unsigned char GetByte(DboState & status);

/// @param pByte unsigned char *
void SetByte(unsigned char * pByte);

/// @param status DboState &
/// @return unsigned long
unsigned long GetDibSize(DboState & status);

/// @param status DboState &
/// @return CSize
CSize GetBitmapDimension(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param point CPoint
/// @return DboState
DboState SetLocation(CPoint point);

/// @param box CRect const
/// @return DboState
DboState SetBoundingBox(CRect const box);

/// @param nWidth int
/// @param nHeight int
/// @return DboState
DboState SetBitmapDimension(int nWidth, int nHeight);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOleEmbed_sGetBoundingBoxLeft(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOleEmbed_sGetBoundingBoxRight(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOleEmbed_sGetBoundingBoxTop(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOleEmbed_sGetBoundingBoxBottom(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOleEmbed_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOleEmbed_sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param x DboVector *
/// @return DboSymbolVector
DboSymbolVector DboVectorToDboSymbolVector(DboVector * x);

class DboSymbolVector
	: public DboVector
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return CPoint
CPoint GetLocation(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetLocationY(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboSymbolVectorVectorsIter
DboSymbolVectorVectorsIter NewVectorsIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboSymbolVectorVectorsIter
DboSymbolVectorVectorsIter NewVectorsIter(DboState & status);

/// @param point CPoint
/// @return DboState
DboState SetLocation(CPoint point);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param upperLeft CPoint
/// @param lowerRight CPoint
/// @return DboBox
DboBox NewBox(DboState & status, CPoint upperLeft, CPoint lowerRight);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboLine
DboLine NewLine(DboState & status, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboLine
DboLine NewLine(DboState & status, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param start CPoint
/// @param end CPoint
/// @return DboLine
DboLine NewLine(DboState & status, CPoint start, CPoint end);

/// @param status DboState &
/// @param boundingBox CRect
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboArc
DboArc NewArc(DboState & status, CRect boundingBox, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param boundingBox CRect
/// @param start CPoint
/// @param end CPoint
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboArc
DboArc NewArc(DboState & status, CRect boundingBox, CPoint start, CPoint end, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param boundingBox CRect
/// @param start CPoint
/// @param end CPoint
/// @return DboArc
DboArc NewArc(DboState & status, CRect boundingBox, CPoint start, CPoint end);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param boundingBox CRect
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @param boundingBox CRect
/// @return DboEllipse
DboEllipse NewEllipse(DboState & status, CRect boundingBox);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @param hatchStyle enum DboValue::HatchStyleT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL, enum DboValue::HatchStyleT hatchStyle=HORIZONTAL_HATCH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @param fillStyle enum DboValue::FillStyleT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH, enum DboValue::FillStyleT fillStyle=HOLLOW_FILL);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @return DboPolygon
DboPolygon NewPolygon(DboState & status);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @param lineWidth enum DboValue::LineWidthT
/// @return DboPolyline
DboPolyline NewPolyline(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE, enum DboValue::LineWidthT lineWidth=THIN_WIDTH);

/// @param status DboState &
/// @param lineStyle enum DboValue::LineStyleT
/// @return DboPolyline
DboPolyline NewPolyline(DboState & status, enum DboValue::LineStyleT lineStyle=SOLID_LINE);

/// @param status DboState &
/// @return DboPolyline
DboPolyline NewPolyline(DboState & status);

/// @param status DboState &
/// @param text CString &
/// @param rectBound CRect &
/// @param location CPoint
/// @param font LOGFONT &
/// @return DboCommentText
DboCommentText NewCommentText(DboState & status, CString & text, CRect & rectBound, CPoint location, LOGFONT & font);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolVector_sGetLocationX(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboSymbolVector_sGetLocationY(DboBaseObject * obj, DboState & status);

class DboSymbolVectorVectorsIter
{
public:
/// @param status DboState &
/// @return DboVector
DboVector NextVector(DboState & status);

};

class DboPinNumberEntry
{
public:
};

/// @param x DboBaseObject *
/// @return DboDevice
DboDevice DboBaseObjectToDboDevice(DboBaseObject * x);

class DboDevice
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return DboPackage
DboPackage GetOwner();

/// @param name CString &
/// @return DboState
DboState GetCellName(CString & name);

/// @param status DboState &
/// @return DboCell
DboCell GetCell(DboState & status);

/// @param designator CString &
/// @return DboState
DboState GetDesignator(CString & designator);

/// @param status DboState &
/// @return int
int GetPosition(DboState & status);

/// @param position int
/// @param PinNumber CString &
/// @return DboState
DboState GetPinNumber(int position, CString & PinNumber);

/// @param position int
/// @param status DboState &
/// @return int
int GetIsShared(int position, DboState & status);

/// @param position int
/// @param status DboState &
/// @return int
int GetPinSwapId(int position, DboState & status);

/// @param pinNumber CString &
/// @param status DboState &
/// @return int
int GetPinPosition(CString & pinNumber, DboState & status);

/// @param status DboState &
/// @return int
int GetPinCount(DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetSize(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return int
int GetSize(DboState & status);

/// @param str CString &
void GetSemanticString(CString & str);

/// @return DboLib
DboLib GetContainingLib();

/// @param pObj DboBaseObject *
/// @return int
int IsEquivalent(DboBaseObject * pObj);

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @return DboState
DboState MarkModified();

/// @return DboDevicePinNumbersIter
DboDevicePinNumbersIter NewPinNumbersIter();

/// @param cell DboCell *
/// @return DboState
DboState SetCell(DboCell * cell);

/// @param name CString &
/// @return DboState
DboState SetDesignator(CString & name);

/// @param position int
/// @param pinNumber CString &
/// @return DboState
DboState SetPinNumber(int position, CString & pinNumber);

/// @param position int
/// @param nSwapId int
/// @return DboState
DboState SetPinSwapId(int position, int nSwapId);

/// @param pinNumber CString &
/// @param position int &
/// @param isShared int
/// @param nSwapId int
/// @return DboState
DboState NewPinNumber(CString & pinNumber, int & position, int isShared=0, int nSwapId=-1);

/// @param pinNumber CString &
/// @param position int &
/// @param isShared int
/// @return DboState
DboState NewPinNumber(CString & pinNumber, int & position, int isShared=0);

/// @param pinNumber CString &
/// @param position int &
/// @return DboState
DboState NewPinNumber(CString & pinNumber, int & position);

/// @param position int
/// @return DboState
DboState DeletePinNumber(int position);

/// @param position int
/// @return DboState
DboState DeletePinNumberAtPosition(int position);

/// @param position int
/// @param isShared int
/// @return DboState
DboState SetIsShared(int position, int isShared);

/// @param position int
/// @param UniqueName CString &
/// @return DboState
DboState GeneratePinNumber(int position, CString & UniqueName);

/// @return DboState
DboState Cleanup();

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboDevice_sGetDesignator(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboDevice_sGetSize(DboBaseObject * obj, DboState & status);

class DboDevicePinNumbersIter
{
public:
/// @param pinNumber CString &
/// @return DboState
DboState NextNumber(CString & pinNumber);

};

class DboArcData
{
public:
};

class DboBoxData
{
public:
};

class DboEllipseData
{
public:
};

class DboLineData
{
public:
};

class DboPolygonData
{
public:
};

class DboPolylineData
{
public:
};

class DboPartTextData
{
public:
};

class DboBitMapData
{
public:
};

class DboPinData
{
public:
};

class DispPropData
{
public:
};

class DboInstData
{
public:
};

class DboWireData
{
public:
};

class DboBusEntryData
{
public:
};

class DboAliasData
{
public:
};

/// @param x DboBaseObject *
/// @return DboNet
DboNet DboBaseObjectToDboNet(DboBaseObject * x);

class DboNet
	: public DboBaseObject
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param name CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp GetUserProp(CString const & name, DboState & status);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetNetName(CString & name);

/// @return DboPage
DboPage GetOwner();

/// @return DboLib
DboLib GetContainingLib();

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return int
int GetObjectCount();

/// @param pBus DboNetBus *&
/// @param status DboState &
/// @return int
int IsBusMember(DboNetBus *& pBus, DboState & status);

/// @return int
int IsBundle();

/// @param nNameID UINT
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(UINT nNameID, CString & value);

/// @param name CString const &
/// @param value CString &
/// @return DboState
DboState GetEffectivePropStringValue(CString const & name, CString & value);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboOccurrence
DboOccurrence GetObjectOccurrence(DboInstOccurrence * pParentSchematicOcc);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @return int
int AssertValid();

/// @param Name CString &
/// @return int
int ValidateName(CString & Name);

/// @return int
int IsEmpty();

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @param PatternMatcher TPatternMatch
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase, TPatternMatch PatternMatcher=DboPatternMatch);

/// @param strFindWhat CString const &
/// @param bMatchCase int
/// @return int
int EffectivePropsMatch(CString const & strFindWhat, int bMatchCase);

/// @param dbColor DboValue::ColorT &
/// @param dbLineStyle DboValue::LineStyleT &
/// @param dbLineWidth DboValue::LineWidthT &
/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboState
DboState GetEffectiveColorValue(DboValue::ColorT & dbColor, DboValue::LineStyleT & dbLineStyle, DboValue::LineWidthT & dbLineWidth, DboInstOccurrence * pParentSchematicOcc);

/// @return DboSchematicNet
DboSchematicNet GetSchematicNet();

/// @param status DboState &
/// @return ColorT
ColorT GetColor(DboState & status);

/// @param status DboState &
/// @return LineStyleT
LineStyleT GetLineStyle(DboState & status);

/// @param status DboState &
/// @return LineWidthT
LineWidthT GetLineWidth(DboState & status);

/// @return bool
bool HasBundleConnection();

/// @return bool
bool HasNonNGOverrider();

/// @param flag bool
void SetNonNGOverrider(bool flag);

/// @return bool
bool IsBundleObject();

/// @return DboBaseObject
DboBaseObject GetParentObj();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboNetWiresIter
DboNetWiresIter NewWiresIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboNetWiresIter
DboNetWiresIter NewWiresIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboNetPortInstsIter
DboNetPortInstsIter NewPortInstsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboNetPortInstsIter
DboNetPortInstsIter NewPortInstsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboNetPortsIter
DboNetPortsIter NewPortsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboNetPortsIter
DboNetPortsIter NewPortsIter(DboState & status);

/// @param status DboState &
/// @return DboNetGlobalsIter
DboNetGlobalsIter NewGlobalsIter(DboState & status);

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboNetOffPageConnectorsIter
DboNetOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status, enum IterDefs::IterModeT mode=TOP);

/// @param status DboState &
/// @return DboNetOffPageConnectorsIter
DboNetOffPageConnectorsIter NewOffPageConnectorsIter(DboState & status);

/// @param status DboState &
/// @return DboNetAliasesIter
DboNetAliasesIter NewNetAliasesIter(DboState & status);

/// @param status DboState &
/// @return DboNetBusEntriesIter
DboNetBusEntriesIter NewBusEntriesIter(DboState & status);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param color enum DboValue::ColorT
/// @return DboState
DboState SetColor(enum DboValue::ColorT color);

/// @param linestyle enum DboValue::LineStyleT
/// @return DboState
DboState SetLineStyle(enum DboValue::LineStyleT linestyle);

/// @param linewidth enum DboValue::LineWidthT
/// @return DboState
DboState SetLineWidth(enum DboValue::LineWidthT linewidth);

/// @param Name CString &
/// @return DboState
DboState SetName(CString & Name);

/// @param pSchNet DboSchematicNet *
void SetSchematicNet(DboSchematicNet * pSchNet);

/// @param name CString const &
/// @return DboState
DboState DeleteUserProp(CString const & name);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVer int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVer=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param propName CString
/// @param lLock MaskT &
/// @param preTrigger CString &
/// @param postTrigger CString &
/// @return bool
bool GetAttributeLockingInfo(CString propName, MaskT & lLock, CString & preTrigger, CString & postTrigger);

/// @param name CString &
/// @return DboState
DboState ComputeNetName(CString & name);

/// @param name CString const &
/// @param value CString const &
/// @param status DboState &
/// @return DboUserProp
DboUserProp NewUserProp(CString const & name, CString const & value, DboState & status);

/// @param dbColor enum DboValue::ColorT
/// @param dbLineStyle enum DboValue::LineStyleT
/// @param dbLineWidth enum DboValue::LineWidthT
/// @param pParentSchematicOcc DboInstOccurrence *
/// @return DboState
DboState SetEffectiveColorValue(enum DboValue::ColorT dbColor, enum DboValue::LineStyleT dbLineStyle, enum DboValue::LineWidthT dbLineWidth, DboInstOccurrence * pParentSchematicOcc);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNet_sGetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboNet_sGetNetName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboNet_sGetId(DboBaseObject * obj, DboState & status);

/// @param x DboNet *
/// @return DboNetScalar
DboNetScalar DboNetToDboNetScalar(DboNet * x);

class DboNetScalar
	: public DboNet
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @return CString
CString GetBundleOwnerForBus();

};

/// @param x DboNet *
/// @return DboNetBus
DboNetBus DboNetToDboNetBus(DboNet * x);

class DboNetBus
	: public DboNet
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param status DboState &
/// @return int
int GetWidth(DboState & status);

/// @param nPos int
/// @param status DboState &
/// @return DboNet
DboNet GetMember(int nPos, DboState & status);

/// @param pNetMember DboNet *
/// @return int
int GetPosition(DboNet * pNetMember);

/// @param pNet DboNet *
/// @return int
int HasMember(DboNet * pNet);

/// @return int
int IsExpanded();

/// @return int
int IsBundle();

/// @param isSetBundle int
/// @return int
int SetIsBundle(int isSetBundle);

/// @param BundleOwner CString &
/// @return int
int GetBundleOwner(CString & BundleOwner);

/// @return bool
bool IsBundleObject();

/// @param status DboState &
/// @param mode enum IterDefs::IterModeT
/// @return DboNetBusMembersIter
DboNetBusMembersIter NewMembersIter(DboState & status, enum IterDefs::IterModeT mode=ALL);

/// @param status DboState &
/// @return DboNetBusMembersIter
DboNetBusMembersIter NewMembersIter(DboState & status);

/// @param nPos int
/// @return DboState
DboState RemoveMember(int nPos);

};

/// @param x DboEffectivePropsIter *
/// @return DboNetEffectivePropsIter
DboNetEffectivePropsIter DboEffectivePropsIterToDboNetEffectivePropsIter(DboEffectivePropsIter * x);

class DboNetEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

class TBaseDboNetWiresIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetWiresIter
	: public TBaseDboSchematicNetWiresIter
{
public:
/// @param status DboState &
/// @return DboWire
DboWire NextWire(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboWire *&
/// @return unsigned long
unsigned long GetKey(DboWire *& pObject);

};

class TBaseDboNetPortInstsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetPortInstsIter
	: public TBaseDboSchematicNetPortInstsIter
{
public:
/// @param status DboState &
/// @return DboPortInst
DboPortInst NextPortInst(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPortInst *&
/// @return std::string
std::string GetKey(DboPortInst *& pObject);

};

class TBaseDboNetBusEntriesIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetBusEntriesIter
	: public TBaseDboPageBusEntriesIter
{
public:
/// @param status DboState &
/// @return DboBusEntry
DboBusEntry NextBusEntry(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboBusEntry *&
/// @return unsigned long
unsigned long GetKey(DboBusEntry *& pObject);

};

class TBaseDboNetPortsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetPortsIter
	: public TBaseDboPagePortsIter
{
public:
/// @param status DboState &
/// @return DboPort
DboPort NextPort(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboPort *&
/// @return std::string
std::string GetKey(DboPort *& pObject);

};

class TBaseDboNetGlobalsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetGlobalsIter
	: public TBaseDboPageGlobalsIter
{
public:
/// @param status DboState &
/// @return DboGlobal
DboGlobal NextGlobal(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboGlobal *&
/// @return std::string
std::string GetKey(DboGlobal *& pObject);

};

class TBaseDboNetOffPageConnectorsIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetOffPageConnectorsIter
	: public TBaseDboPageOffPageConnectorsIter
{
public:
/// @param status DboState &
/// @return DboOffPageConnector
DboOffPageConnector NextOffPageConnector(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboOffPageConnector *&
/// @return std::string
std::string GetKey(DboOffPageConnector *& pObject);

};

class TBaseDboNetBusMembersIter
	: public IterDefs
{
public:
/// @return int
int GetType();

/// @return DboBaseObject
DboBaseObject GetSource();

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param flag UINT
/// @param status DboState &
void SetFlag(UINT flag, DboState & status);

/// @param status DboState &
void Sort(DboState & status);

};

class DboNetBusMembersIter
	: public TBaseDboSchematicNetNetsIter
{
public:
/// @param status DboState &
/// @return DboNet
DboNet NextMember(DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject Next(DboState & status);

/// @param pObject DboNet *&
/// @return std::string
std::string GetKey(DboNet *& pObject);

};

class DboNetAliasesIter
{
public:
/// @param nxtAlias CString &
/// @return DboState
DboState NextAlias(CString & nxtAlias);

};

class DboOffPageConnectorOccurrence
	: public DboOccurrence
{
public:
/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param nId unsigned long
/// @return DboState
DboState SetId(unsigned long nId);

/// @param status DboState &
/// @return unsigned long
unsigned long GetId(DboState & status);

/// @param status DboState &
/// @return DboSchematic
DboSchematic GetSchematic(DboState & status);

/// @param nOffPageId unsigned long
/// @return DboState
DboState SetOffPageConnectorId(unsigned long nOffPageId);

/// @param status DboState &
/// @return unsigned long
unsigned long GetOffPageConnectorId(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetSchematicPath(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetPathName(CString & name);

/// @param name CString &
/// @param chSeparator char
/// @return DboState
DboState GetRefPathName(CString & name, char chSeparator='/');

/// @param name CString &
/// @return DboState
DboState GetRefPathName(CString & name);

/// @param name CString const &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState GetEffectivePropValueType(CString const & name, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValueForIref(CString const & name, CString const & value);

/// @param name CString const &
/// @param value CString const &
/// @param bNewVersion int
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value, int bNewVersion=0);

/// @param name CString const &
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(CString const & name, CString const & value);

/// @param nNameID UINT
/// @param value CString const &
/// @return DboState
DboState SetEffectivePropStringValue(UINT nNameID, CString const & value);

/// @param name CString const &
/// @return DboState
DboState DeleteEffectiveProp(CString const & name);

/// @param status DboState &
/// @return DboEffectivePropsIter
DboEffectivePropsIter NewEffectivePropsIter(DboState & status);

/// @param name CString const &
/// @param bExists int &
/// @return DboState
DboState GetEffectivePropValueExists(CString const & name, int & bExists);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetSchematicPath(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int sGetId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString sGetName(DboBaseObject * obj, DboState & status);

/// @param status DboState &
/// @return DboBaseObject
DboBaseObject GetInstance(DboState & status);

/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @param name CString const &
void SetOccName(CString const & name);

};

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboOffPageConnectorOccurrence_sGetPathName(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboOffPageConnectorOccurrence_sGetSchematicPath(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return int
int DboOffPageConnectorOccurrence_sGetId(DboBaseObject * obj, DboState & status);

/// @param obj DboBaseObject *
/// @param status DboState &
/// @return CString
CString DboOffPageConnectorOccurrence_sGetName(DboBaseObject * obj, DboState & status);

class DboOffPageConnectorOccurrenceArray
{
public:
};

class DboOffPageConnectorOccurrenceEffectivePropsIter
	: public DboEffectivePropsIter
{
public:
/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable);

/// @param Name CString &
/// @param Value CString &
/// @param nType DboValue::ValueType &
/// @param bEditable int &
/// @param bDeletable int &
/// @return DboState
DboState NextEffectiveProp(CString & Name, CString & Value, DboValue::ValueType & nType, int & bEditable, int & bDeletable);

};

class DboPathMgr
{
public:
void sInit();

void sExit();

/// @param pPath char const *
/// @param bMemorize bool
/// @return DboState
DboState sLookupPath(char const * pPath, bool bMemorize=False);

/// @param pPath char const *
/// @return DboState
DboState sLookupPath(char const * pPath);

/// @return PathsMapT
PathsMapT sGetAllPaths();

/// @param pPath char const *
void sClearPathHistory(char const * pPath=None);

void sClearPathHistory();

/// @param pTimeOut unsigned long
void sSetPathLookupTimeout(unsigned long pTimeOut);

/// @return unsigned long
unsigned long sGetPathLookupTimeout();

/// @param pTimeOut unsigned long
void sSetExitWaitTimeout(unsigned long pTimeOut);

/// @param pPath char const *
/// @return std::string
std::string sGetFullPath(char const * pPath);

/// @param pPath char const *
/// @return bool
bool sIsReadOnly(char const * pPath);

/// @param pPath char const *
void sForgetReadOnlyAttribute(char const * pPath=None);

void sForgetReadOnlyAttribute();

/// @param pPath char const *
void sDumpToSessionLog(char const * pPath=None);

void sDumpToSessionLog();

/// @param bVal int
void sSetLegacySaveAs(int bVal);

/// @return int
int sGetLegacySaveAs();

};

void DboPathMgr_sInit();

void DboPathMgr_sExit();

/// @param pPath char const *
/// @param bMemorize bool
/// @return DboState
DboState sLookupPath(char const * pPath, bool bMemorize=False);

/// @param pPath char const *
/// @return DboState
DboState DboPathMgr_sLookupPath(char const * pPath);

/// @return PathsMapT
PathsMapT DboPathMgr_sGetAllPaths();

/// @param pPath char const *
void sClearPathHistory(char const * pPath=None);

void DboPathMgr_sClearPathHistory();

/// @param pTimeOut unsigned long
void DboPathMgr_sSetPathLookupTimeout(unsigned long pTimeOut);

/// @return unsigned long
unsigned long DboPathMgr_sGetPathLookupTimeout();

/// @param pTimeOut unsigned long
void DboPathMgr_sSetExitWaitTimeout(unsigned long pTimeOut);

/// @param pPath char const *
/// @return std::string
std::string DboPathMgr_sGetFullPath(char const * pPath);

/// @param pPath char const *
/// @return bool
bool DboPathMgr_sIsReadOnly(char const * pPath);

/// @param pPath char const *
void sForgetReadOnlyAttribute(char const * pPath=None);

void DboPathMgr_sForgetReadOnlyAttribute();

/// @param pPath char const *
void sDumpToSessionLog(char const * pPath=None);

void DboPathMgr_sDumpToSessionLog();

/// @param bVal int
void DboPathMgr_sSetLegacySaveAs(int bVal);

/// @return int
int DboPathMgr_sGetLegacySaveAs();

class DboTclHelper
{
public:
/// @return std::vector<(std::string)>
std::vector<(std::string)> sMakeStdVector();

/// @param pVector std::vector< std::string > &
/// @param index int
/// @return char
char sGetConstCharPtrFromVector(std::vector< std::string > & pVector, int index);

/// @param pVector std::vector< std::string > &
/// @return int
int sGetVectorSize(std::vector< std::string > & pVector);

/// @param pVector std::vector< std::string > &
/// @param arg1 char const *
void sPushBackToVector(std::vector< std::string > & pVector, char const * arg1);

/// @param pVector std::vector< std::string > &
/// @param index int
void sRemoveFromVector(std::vector< std::string > & pVector, int index);

/// @param pVal char const *
/// @return std::string
std::string sMakeStdStr(char const * pVal);

/// @return int
int sMakeInt();

/// @param pVal int &
/// @return int
int sGetInt(int & pVal);

/// @return unsigned long
unsigned long sMakeULong();

/// @param pVal unsigned long &
/// @return unsigned long
unsigned long sGetULong(unsigned long & pVal);

/// @return CString
CString sMakeCString();

/// @param pVal char const *
/// @return CString
CString sMakeCString(char const * pVal);

/// @param pVal CString
/// @return CString
CString sMakeCString(CString pVal);

/// @param pVal std::string &
/// @return char
char sGetConstCharPtr(std::string & pVal);

/// @param pVal CString &
/// @return char
char sGetConstCharPtr(CString & pVal);

/// @param pStr CString *
void sDeleteCString(CString * pStr);

/// @return DboValue
DboValue sMakeDboValue();

/// @return ValueType
ValueType sMakeDboValueType();

/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
/// @return CRect
CRect sMakeCRect(int x1, int y1, int x2, int y2);

/// @return CRect
CRect sMakeCRect();

/// @param arg0 CRect &
/// @return CPoint
CPoint sGetCRectTopLeft(CRect & arg0);

/// @param arg0 CRect &
/// @return CPoint
CPoint sGetCRectBottomRight(CRect & arg0);

/// @param pRect CRect *
void sDeleteCRect(CRect * pRect);

/// @param x int
/// @param y int
/// @return CPoint
CPoint sMakeCPoint(int x, int y);

/// @return CPoint
CPoint sMakeCPoint();

/// @param arg0 CPoint &
/// @return int
int sGetCPointX(CPoint & arg0);

/// @param arg0 CPoint &
/// @return int
int sGetCPointY(CPoint & arg0);

/// @param pPoint CPoint *
void sDeleteCPoint(CPoint * pPoint);

/// @param rSize CSize &
/// @return int
int sGetCSizeX(CSize & rSize);

/// @param rSize CSize &
/// @return int
int sGetCSizeY(CSize & rSize);

/// @return LOGFONT
LOGFONT sMakeLOGFONT();

/// @param lfFaceName char *
/// @param lfHeight long
/// @param lfWidth long
/// @param lfEscapement long
/// @param lfOrientation long
/// @param lfWeight long
/// @param lfItalic unsigned char
/// @param lfUnderline unsigned char
/// @param lfStrikeOut unsigned char
/// @param lfCharSet unsigned char
/// @param lfOutPrecision unsigned char
/// @param lfClipPrecision unsigned char
/// @param lfQuality unsigned char
/// @param lfPitchAndFamily unsigned char
/// @return LOGFONT
LOGFONT sMakeLOGFONT(char * lfFaceName, long lfHeight, long lfWidth, long lfEscapement, long lfOrientation, long lfWeight, unsigned char lfItalic, unsigned char lfUnderline, unsigned char lfStrikeOut, unsigned char lfCharSet, unsigned char lfOutPrecision, unsigned char lfClipPrecision, unsigned char lfQuality, unsigned char lfPitchAndFamily);

/// @param BoundingBox CRect
/// @param Location CPoint
/// @param bmpFile char *
/// @return DboBitMapData
DboBitMapData sMakeBitMapData(CRect BoundingBox, CPoint Location, char * bmpFile);

/// @param pBitMapStruct DboBitMapData *
/// @param pGrObj DboGraphicObject *
/// @param pPage DboPage *
/// @param pRotation enum DboValue::RotationT
/// @param status DboState &
/// @return DboBitMap
DboBitMap sMakeBitmap(DboBitMapData * pBitMapStruct, DboGraphicObject * pGrObj, DboPage * pPage, enum DboValue::RotationT pRotation, DboState & status);

/// @param pDboBitmap DboBitMap *
/// @param rStatus DboState &
/// @return char
char sGetBase64ImageData(DboBitMap * pDboBitmap, DboState & rStatus);

/// @param pName char const *
/// @param pFrom char const *
/// @param pTo char const *
/// @return char
char sCastPtr(char const * pName, char const * pFrom, char const * pTo);

/// @return DboSession
DboSession sCreateSession();

/// @param pSession DboSession *
void sDeleteSession(DboSession * pSession);

void sReleaseAllCreatedPtrs();

/// @param pObject DboBaseObject *
void sSetDboObjectInProcess(DboBaseObject * pObject);

/// @return DboBaseObject
DboBaseObject sGetDboObjectInProcess();

/// @param pPage DboPage *
void sEvalPage(DboPage * pPage);

/// @param pObj DboBaseObject *
/// @param propName CString
/// @param lockFlag int
/// @param preTrigger char *
/// @param postTrigger char *
void sLockProperty(DboBaseObject * pObj, CString propName, int lockFlag, char * preTrigger, char * postTrigger);

/// @param key char *
void CleanOrCADRegistry(char * key);

void ReRegisterOrCADPlugins();

};

/// @return std::vector<(std::string)>
std::vector<(std::string)> DboTclHelper_sMakeStdVector();

/// @param pVector std::vector< std::string > &
/// @param index int
/// @return char
char DboTclHelper_sGetConstCharPtrFromVector(std::vector< std::string > & pVector, int index);

/// @param pVector std::vector< std::string > &
/// @return int
int DboTclHelper_sGetVectorSize(std::vector< std::string > & pVector);

/// @param pVector std::vector< std::string > &
/// @param arg1 char const *
void DboTclHelper_sPushBackToVector(std::vector< std::string > & pVector, char const * arg1);

/// @param pVector std::vector< std::string > &
/// @param index int
void DboTclHelper_sRemoveFromVector(std::vector< std::string > & pVector, int index);

/// @param pVal char const *
/// @return std::string
std::string DboTclHelper_sMakeStdStr(char const * pVal);

/// @return int
int DboTclHelper_sMakeInt();

/// @param pVal int &
/// @return int
int DboTclHelper_sGetInt(int & pVal);

/// @return unsigned long
unsigned long DboTclHelper_sMakeULong();

/// @param pVal unsigned long &
/// @return unsigned long
unsigned long DboTclHelper_sGetULong(unsigned long & pVal);

/// @return CString
CString sMakeCString();

/// @param pVal char const *
/// @return CString
CString sMakeCString(char const * pVal);

/// @param pVal CString
/// @return CString
CString DboTclHelper_sMakeCString(CString pVal);

/// @param pVal std::string &
/// @return char
char sGetConstCharPtr(std::string & pVal);

/// @param pVal CString &
/// @return char
char DboTclHelper_sGetConstCharPtr(CString & pVal);

/// @param pStr CString *
void DboTclHelper_sDeleteCString(CString * pStr);

/// @return DboValue
DboValue DboTclHelper_sMakeDboValue();

/// @return ValueType
ValueType DboTclHelper_sMakeDboValueType();

/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
/// @return CRect
CRect sMakeCRect(int x1, int y1, int x2, int y2);

/// @return CRect
CRect DboTclHelper_sMakeCRect();

/// @param arg0 CRect &
/// @return CPoint
CPoint DboTclHelper_sGetCRectTopLeft(CRect & arg0);

/// @param arg0 CRect &
/// @return CPoint
CPoint DboTclHelper_sGetCRectBottomRight(CRect & arg0);

/// @param pRect CRect *
void DboTclHelper_sDeleteCRect(CRect * pRect);

/// @param x int
/// @param y int
/// @return CPoint
CPoint sMakeCPoint(int x, int y);

/// @return CPoint
CPoint DboTclHelper_sMakeCPoint();

/// @param arg0 CPoint &
/// @return int
int DboTclHelper_sGetCPointX(CPoint & arg0);

/// @param arg0 CPoint &
/// @return int
int DboTclHelper_sGetCPointY(CPoint & arg0);

/// @param pPoint CPoint *
void DboTclHelper_sDeleteCPoint(CPoint * pPoint);

/// @param rSize CSize &
/// @return int
int DboTclHelper_sGetCSizeX(CSize & rSize);

/// @param rSize CSize &
/// @return int
int DboTclHelper_sGetCSizeY(CSize & rSize);

/// @return LOGFONT
LOGFONT sMakeLOGFONT();

/// @param lfFaceName char *
/// @param lfHeight long
/// @param lfWidth long
/// @param lfEscapement long
/// @param lfOrientation long
/// @param lfWeight long
/// @param lfItalic unsigned char
/// @param lfUnderline unsigned char
/// @param lfStrikeOut unsigned char
/// @param lfCharSet unsigned char
/// @param lfOutPrecision unsigned char
/// @param lfClipPrecision unsigned char
/// @param lfQuality unsigned char
/// @param lfPitchAndFamily unsigned char
/// @return LOGFONT
LOGFONT DboTclHelper_sMakeLOGFONT(char * lfFaceName, long lfHeight, long lfWidth, long lfEscapement, long lfOrientation, long lfWeight, unsigned char lfItalic, unsigned char lfUnderline, unsigned char lfStrikeOut, unsigned char lfCharSet, unsigned char lfOutPrecision, unsigned char lfClipPrecision, unsigned char lfQuality, unsigned char lfPitchAndFamily);

/// @param BoundingBox CRect
/// @param Location CPoint
/// @param bmpFile char *
/// @return DboBitMapData
DboBitMapData DboTclHelper_sMakeBitMapData(CRect BoundingBox, CPoint Location, char * bmpFile);

/// @param pBitMapStruct DboBitMapData *
/// @param pGrObj DboGraphicObject *
/// @param pPage DboPage *
/// @param pRotation enum DboValue::RotationT
/// @param status DboState &
/// @return DboBitMap
DboBitMap DboTclHelper_sMakeBitmap(DboBitMapData * pBitMapStruct, DboGraphicObject * pGrObj, DboPage * pPage, enum DboValue::RotationT pRotation, DboState & status);

/// @param pDboBitmap DboBitMap *
/// @param rStatus DboState &
/// @return char
char DboTclHelper_sGetBase64ImageData(DboBitMap * pDboBitmap, DboState & rStatus);

/// @param pName char const *
/// @param pFrom char const *
/// @param pTo char const *
/// @return char
char DboTclHelper_sCastPtr(char const * pName, char const * pFrom, char const * pTo);

/// @return DboSession
DboSession DboTclHelper_sCreateSession();

/// @param pSession DboSession *
void DboTclHelper_sDeleteSession(DboSession * pSession);

void DboTclHelper_sReleaseAllCreatedPtrs();

/// @param pObject DboBaseObject *
void DboTclHelper_sSetDboObjectInProcess(DboBaseObject * pObject);

/// @return DboBaseObject
DboBaseObject DboTclHelper_sGetDboObjectInProcess();

/// @param pPage DboPage *
void DboTclHelper_sEvalPage(DboPage * pPage);

/// @param pObj DboBaseObject *
/// @param propName CString
/// @param lockFlag int
/// @param preTrigger char *
/// @param postTrigger char *
void DboTclHelper_sLockProperty(DboBaseObject * pObj, CString propName, int lockFlag, char * preTrigger, char * postTrigger);

/// @param key char *
void DboTclHelper_CleanOrCADRegistry(char * key);

void DboTclHelper_ReRegisterOrCADPlugins();

class XMATIC
{
public:
/// @param pXmlPathIn char const *
/// @param pOlbPathOut char const *
/// @param pAppendMode bool
/// @param pLogFilePath char const *
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn, char const * pOlbPathOut=None, bool pAppendMode=False, char const * pLogFilePath=None);

/// @param pXmlPathIn char const *
/// @param pOlbPathOut char const *
/// @param pAppendMode bool
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn, char const * pOlbPathOut=None, bool pAppendMode=False);

/// @param pXmlPathIn char const *
/// @param pOlbPathOut char const *
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn, char const * pOlbPathOut=None);

/// @param pXmlPathIn char const *
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn);

/// @param pXmlPathIn char const *
/// @param pDsnPathOut char const *
/// @param pAppendMode bool
/// @param pLogFilePath char const *
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn, char const * pDsnPathOut=None, bool pAppendMode=False, char const * pLogFilePath=None);

/// @param pXmlPathIn char const *
/// @param pDsnPathOut char const *
/// @param pAppendMode bool
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn, char const * pDsnPathOut=None, bool pAppendMode=False);

/// @param pXmlPathIn char const *
/// @param pDsnPathOut char const *
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn, char const * pDsnPathOut=None);

/// @param pXmlPathIn char const *
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn);

/// @param pOlbPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @param pLogFilePath char const *
/// @return DboState
DboState OLB2XML(char const * pOlbPathIn, char const * pXmlPathOut, char const * pXsdPath=None, char const * pLogFilePath=None);

/// @param pOlbPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @return DboState
DboState OLB2XML(char const * pOlbPathIn, char const * pXmlPathOut, char const * pXsdPath=None);

/// @param pOlbPathIn char const *
/// @param pXmlPathOut char const *
/// @return DboState
DboState OLB2XML(char const * pOlbPathIn, char const * pXmlPathOut);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @param pLogFilePath char const *
/// @return DboState
DboState DSN2XML(char const * pDsnPathIn, char const * pXmlPathOut, char const * pXsdPath=None, char const * pLogFilePath=None);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @return DboState
DboState DSN2XML(char const * pDsnPathIn, char const * pXmlPathOut, char const * pXsdPath=None);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @return DboState
DboState DSN2XML(char const * pDsnPathIn, char const * pXmlPathOut);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @param pLogFilePath char const *
/// @return DboState
DboState ExportNetGroupXML(char const * pDsnPathIn, char const * pXmlPathOut, char const * pXsdPath, char const * pLogFilePath);

/// @param pCapPathIn char const *
/// @param pEdifPathOut char const *
/// @param pCfgPath char const *
/// @return bool
bool CAP2EDIF(char const * pCapPathIn, char const * pEdifPathOut, char const * pCfgPath);

/// @param pEdifPathIn char const *
/// @param pCapPathOut char const *
/// @param pCfgPath char const *
/// @return bool
bool EDIF2CAP(char const * pEdifPathIn, char const * pCapPathOut, char const * pCfgPath);

};

/// @param pXmlPathIn char const *
/// @param pOlbPathOut char const *
/// @param pAppendMode bool
/// @param pLogFilePath char const *
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn, char const * pOlbPathOut=None, bool pAppendMode=False, char const * pLogFilePath=None);

/// @param pXmlPathIn char const *
/// @param pOlbPathOut char const *
/// @param pAppendMode bool
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn, char const * pOlbPathOut=None, bool pAppendMode=False);

/// @param pXmlPathIn char const *
/// @param pOlbPathOut char const *
/// @return DboState
DboState XML2OLB(char const * pXmlPathIn, char const * pOlbPathOut=None);

/// @param pXmlPathIn char const *
/// @return DboState
DboState XMATIC_XML2OLB(char const * pXmlPathIn);

/// @param pXmlPathIn char const *
/// @param pDsnPathOut char const *
/// @param pAppendMode bool
/// @param pLogFilePath char const *
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn, char const * pDsnPathOut=None, bool pAppendMode=False, char const * pLogFilePath=None);

/// @param pXmlPathIn char const *
/// @param pDsnPathOut char const *
/// @param pAppendMode bool
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn, char const * pDsnPathOut=None, bool pAppendMode=False);

/// @param pXmlPathIn char const *
/// @param pDsnPathOut char const *
/// @return DboState
DboState XML2DSN(char const * pXmlPathIn, char const * pDsnPathOut=None);

/// @param pXmlPathIn char const *
/// @return DboState
DboState XMATIC_XML2DSN(char const * pXmlPathIn);

/// @param pOlbPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @param pLogFilePath char const *
/// @return DboState
DboState OLB2XML(char const * pOlbPathIn, char const * pXmlPathOut, char const * pXsdPath=None, char const * pLogFilePath=None);

/// @param pOlbPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @return DboState
DboState OLB2XML(char const * pOlbPathIn, char const * pXmlPathOut, char const * pXsdPath=None);

/// @param pOlbPathIn char const *
/// @param pXmlPathOut char const *
/// @return DboState
DboState XMATIC_OLB2XML(char const * pOlbPathIn, char const * pXmlPathOut);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @param pLogFilePath char const *
/// @return DboState
DboState DSN2XML(char const * pDsnPathIn, char const * pXmlPathOut, char const * pXsdPath=None, char const * pLogFilePath=None);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @return DboState
DboState DSN2XML(char const * pDsnPathIn, char const * pXmlPathOut, char const * pXsdPath=None);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @return DboState
DboState XMATIC_DSN2XML(char const * pDsnPathIn, char const * pXmlPathOut);

/// @param pDsnPathIn char const *
/// @param pXmlPathOut char const *
/// @param pXsdPath char const *
/// @param pLogFilePath char const *
/// @return DboState
DboState XMATIC_ExportNetGroupXML(char const * pDsnPathIn, char const * pXmlPathOut, char const * pXsdPath, char const * pLogFilePath);

/// @param pCapPathIn char const *
/// @param pEdifPathOut char const *
/// @param pCfgPath char const *
/// @return bool
bool XMATIC_CAP2EDIF(char const * pCapPathIn, char const * pEdifPathOut, char const * pCfgPath);

/// @param pEdifPathIn char const *
/// @param pCapPathOut char const *
/// @param pCfgPath char const *
/// @return bool
bool XMATIC_EDIF2CAP(char const * pEdifPathIn, char const * pCapPathOut, char const * pCfgPath);

class CorDb_Dll_Tcl
{
public:
/// @return int
int InitInstance();

/// @return int
int ExitInstance();

};

class DboBundleType
	: public DboLibObject
{
public:
/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return BundleTypeT
BundleTypeT GetBundleType();

/// @return int
int GetWidth();

/// @return DboBundle
DboBundle GetParent();

/// @return ObjectTypeT
ObjectTypeT GetObjectType();

/// @param name CString &
/// @return DboState
DboState SetName(CString & name);

/// @param parent DboBundle *
void AddParent(DboBundle * parent);

/// @param parent DboBundle *
void RemoveParent(DboBundle * parent);

/// @param parent DboBundle *
void SetAllParentDirty(DboBundle * parent);

};

class DboBundleScalarMember
	: public DboBundleType
{
public:
/// @return bool
bool IsBundleMember();

};

class DboBundleBusMember
	: public DboBundleType
{
public:
/// @param name CString &
/// @return DboState
DboState GetName(CString & name);

/// @return int
int GetLsb();

/// @return int
int GetMsb();

/// @param name CString &
void GetBaseName(CString & name);

/// @return int
int GetWidth();

/// @param name CString &
void GetDisplayName(CString & name);

/// @return bool
bool IsBundleMember();

};

class DboBundle
	: public DboBundleBusMember
{
public:
/// @param name CString &
/// @param type enum DboBundleType::BundleTypeT
/// @param width int
/// @return DboState
DboState isMemberAddable(CString & name, enum DboBundleType::BundleTypeT type, int width=0);

/// @param name CString &
/// @param type enum DboBundleType::BundleTypeT
/// @return DboState
DboState isMemberAddable(CString & name, enum DboBundleType::BundleTypeT type);

/// @param name CString &
/// @param type enum DboBundleType::BundleTypeT
/// @param width int
/// @return DboState
DboState AddMember(CString & name, enum DboBundleType::BundleTypeT type, int width=0);

/// @param name CString &
/// @param type enum DboBundleType::BundleTypeT
/// @return DboState
DboState AddMember(CString & name, enum DboBundleType::BundleTypeT type);

/// @param name CString &
/// @param allBundleMember bool
/// @return DboBundleType
DboBundleType GetMember(CString & name, bool allBundleMember=True);

/// @param name CString &
/// @return DboBundleType
DboBundleType GetMember(CString & name);

/// @param name CString
/// @return int
int GetMemberIndex(CString name);

/// @param memberName CString
/// @return int
int GetPosition(CString memberName);

/// @param pIter int &
/// @return int
int StartMemberIter(int & pIter);

/// @param pIter int &
/// @param name CString &
/// @param type DboBundleType::BundleTypeT &
/// @return int
int GetNextMember(int & pIter, CString & name, DboBundleType::BundleTypeT & type);

/// @param msb int
void SetMsb(int msb);

/// @param PropName CString
/// @param PropValue CString
void SetBundleProperty(CString PropName, CString PropValue);

/// @param PropName CString
void DeleteBundleProperty(CString PropName);

/// @param PropName CString &
/// @return CString
CString GetBundleProperty(CString & PropName);

/// @param PropertiesMap CMapStringToString &
void GetBundlePropertyMap(CMapStringToString & PropertiesMap);

/// @return DboLib
DboLib GetContainingLib();

/// @return bool
bool IsBundleMember();

/// @param name CString &
/// @param type enum DboBundleType::BundleTypeT
/// @return int
int CanBeMember(CString & name, enum DboBundleType::BundleTypeT type);

/// @param name CString
/// @return bool
bool isRecursiveAdd(CString name);

/// @param name CString
/// @return CString
CString GetBusOwnerName(CString name);

/// @param pSourceLibName CString
void SetBundleOwnerInformation(CString pSourceLibName);

/// @param pOwnerName CString &
/// @param pSourceLibName CString &
/// @return bool
bool GetBundleOwnerInformation(CString & pOwnerName, CString & pSourceLibName);

/// @param pMembername std::string
/// @return bool
bool IsMemberDeleted(std::string pMembername);

/// @param pMemberName std::string
/// @param pNewName std::string &
/// @return bool
bool IsMemberRenamed(std::string pMemberName, std::string & pNewName);

void ClearEditMaps();

/// @param width int
/// @param doAdd int
void ChangeMsb(int width, int doAdd=1);

/// @param width int
void ChangeMsb(int width);

/// @return int
int isDirty();

/// @param arg0 int
void setDirty(int arg0);

/// @param name CString &
/// @return bool
bool DeleteMember(CString & name);

/// @param OldName CString &
/// @param NewName CString &
/// @return bool
bool RenameMember(CString & OldName, CString & NewName);

/// @param index int
/// @param isUp bool
/// @return bool
bool MoveUpDown(int index, bool isUp);

/// @param PropertiesMap CMapStringToString &
void MergeBundlePropertyMap(CMapStringToString & PropertiesMap);

};

class DboBundleMemberIter
{
public:
/// @param name CString &
/// @param type DboBundleType::BundleTypeT &
/// @return int
int Next(CString & name, DboBundleType::BundleTypeT & type);

};

class DboBundleNetIter
{
public:
/// @param name CString &
/// @return int
int Next(CString & name);

};

class BundleReferenceCount
{
public:
/// @return CString
CString GetBundleOwner();

/// @return int
int AddReferenceCount();

/// @return int
int ReduceReferenceCount();

};

class DboBundleTemplateMap
{
public:
/// @param pLib DboLib *
/// @param fileName CString
void ExportToDCF(DboLib * pLib, CString fileName);

/// @param isTop bool
/// @param BundleName CString
/// @param bundleTempName CString &
void GetTempName(bool isTop, CString BundleName, CString & bundleTempName);

/// @param bundleName CString
/// @return DboState
DboState BundleAlreadyThere(CString bundleName);

/// @param name CString &
/// @return DboBundleMemberIter
DboBundleMemberIter NewBundleMemberIter(CString & name);

/// @param name CString &
/// @param bundleMemberArray CStringArray &
/// @return int
int GetBundleMembers(CString & name, CStringArray & bundleMemberArray);

/// @param name CString &
/// @param mode enum DboBundleType::BundleNetIterMode
/// @return DboBundleNetIter
DboBundleNetIter NewBundleNetIter(CString & name, enum DboBundleType::BundleNetIterMode mode=NETSITER_UNEXPANDED);

/// @param name CString &
/// @return DboBundleNetIter
DboBundleNetIter NewBundleNetIter(CString & name);

/// @param name CString &
/// @param netArray CStringArray &
/// @param getExpanded int
/// @param getCompleteHierName int
/// @return int
int GetBundleNets(CString & name, CStringArray & netArray, int getExpanded=0, int getCompleteHierName=0);

/// @param name CString &
/// @param netArray CStringArray &
/// @param getExpanded int
/// @return int
int GetBundleNets(CString & name, CStringArray & netArray, int getExpanded=0);

/// @param name CString &
/// @param netArray CStringArray &
/// @return int
int GetBundleNets(CString & name, CStringArray & netArray);

/// @param name CString &
/// @param netName CString &
/// @param index int
/// @param parentName CString &
/// @param getCompleteHierName int
/// @return int
int GetBundleNet(CString & name, CString & netName, int index, CString & parentName, int getCompleteHierName=0);

/// @param name CString &
/// @param netName CString &
/// @param index int
/// @param parentName CString &
/// @return int
int GetBundleNet(CString & name, CString & netName, int index, CString & parentName);

/// @param bundleArray CStringArray &
/// @param isDisplay int
void GetBundleTemplates(CStringArray & bundleArray, int isDisplay=0);

/// @param bundleArray CStringArray &
void GetBundleTemplates(CStringArray & bundleArray);

/// @param bundleArray CPtrArray &
void GetBundleTemplates(CPtrArray & bundleArray);

/// @param name CString &
/// @return int
int IsBundle(CString & name);

/// @param name CString &
void GetInternalBundleName(CString & name);

/// @param BundleName CString
/// @param InternalName CString &
void GetInternalBundleName(CString BundleName, CString & InternalName);

/// @param name CString &
/// @param NGBaseName CString &
void GetDisplayBundleName(CString & name, CString & NGBaseName);

/// @param name CString &
void GetDisplayBundleName(CString & name);

/// @param BundleName CString
/// @param BundleMemberName CString
/// @param isDirect bool
/// @return bool
bool IsBundleMember(CString BundleName, CString BundleMemberName, bool isDirect=True);

/// @param BundleName CString
/// @param BundleMemberName CString
/// @return bool
bool IsBundleMember(CString BundleName, CString BundleMemberName);

/// @return POSITION
POSITION GetPortIter();

/// @param nPos POSITION &
/// @param Name CString &
/// @return POSITION
POSITION GetNextPort(POSITION & nPos, CString & Name);

/// @param BundleName CString &
/// @param PropName CString &
/// @return CString
CString GetBundleProperty(CString & BundleName, CString & PropName);

/// @param BundleName CString &
/// @param PropertiesMap CMapStringToString &
void GetBundlePropertyMap(CString & BundleName, CMapStringToString & PropertiesMap);

/// @param file CFile &
/// @param TemplateVersion int
void ReadOneBundle(CFile & file, int TemplateVersion);

/// @param file CFile &
/// @param BundleName CString
void SaveOneBundle(CFile & file, CString BundleName);

/// @param name CString &
/// @param srcLibName CString
/// @return DboBundle
DboBundle GetBundle(CString & name, CString srcLibName="");

/// @param name CString &
/// @return DboBundle
DboBundle GetBundle(CString & name);

/// @param name CString &
/// @return bool
bool LookUpNets(CString & name);

/// @param memberType CString
/// @return int
int sGetMemberTypeIdGivenString(CString memberType);

/// @param id int
/// @return CString
CString sGetMemberTypeStringGivenId(int id);

/// @param name CString &
/// @param memberOfName CString &
/// @param type enum DboBundleType::BundleTypeT
/// @param width int
/// @return DboState
DboState isMemberAddable(CString & name, CString & memberOfName, enum DboBundleType::BundleTypeT type, int width=0);

/// @param name CString &
/// @param memberOfName CString &
/// @param type enum DboBundleType::BundleTypeT
/// @return DboState
DboState isMemberAddable(CString & name, CString & memberOfName, enum DboBundleType::BundleTypeT type);

void MarkModifiedDesign();

/// @param pObj DboBaseObject *
/// @param newIndex int &
/// @return DboBaseObject
DboBaseObject GetUnnamedBundleOwnerObject(DboBaseObject * pObj, int & newIndex);

void ClearEditMaps();

/// @param propName CString
/// @return bool
bool IsInternalProperty(CString propName);

/// @param name CString &
/// @param owner DboBaseObject *
/// @param width int
/// @param isNewBundleCreated bool &
/// @return DboBundle
DboBundle AddBundleTemplate(CString & name, DboBaseObject * owner, int width, bool & isNewBundleCreated);

/// @param pObj DboBaseObject *
/// @param memberName CString
/// @return int
int GetMemerIndexFromUnnamedBundle(DboBaseObject * pObj, CString memberName);

/// @param index int
/// @param pObj DboBaseObject *
/// @param bundleNetName CString &
/// @param parentName CString &
/// @return bool
bool GetNameForUnNamedBundle(int index, DboBaseObject * pObj, CString & bundleNetName, CString & parentName);

/// @param name CString &
/// @param memberOfName CString &
/// @param type enum DboBundleType::BundleTypeT
/// @param owner DboBaseObject *
/// @return DboState
DboState AddBundleMember(CString & name, CString & memberOfName, enum DboBundleType::BundleTypeT type, DboBaseObject * owner);

/// @param name CString &
/// @param type DboBundleType::BundleTypeT &
/// @param owner DboLib *
/// @return DboBundleType
DboBundleType AddBundleNet(CString & name, DboBundleType::BundleTypeT & type, DboLib * owner);

/// @param name CString &
/// @param memberOfName CString &
/// @return bool
bool DeleteBundleMember(CString & name, CString & memberOfName);

/// @param name CString &
/// @param OldmemberOfName CString &
/// @param NewMemberName CString
/// @return bool
bool RenameBundleMember(CString & name, CString & OldmemberOfName, CString NewMemberName);

/// @param name CString &
/// @param BundleSourceLibName CString &
/// @return int
int RemoveBundleSafe(CString & name, CString & BundleSourceLibName);

/// @param BundleName CString
/// @param index int
/// @param isUp bool
/// @return bool
bool MoveUpDown(CString BundleName, int index, bool isUp);

};

/// @param pLib DboLib *
/// @param fileName CString
void DboBundleTemplateMap_ExportToDCF(DboLib * pLib, CString fileName);

/// @param name CString &
/// @param NGBaseName CString &
void GetDisplayBundleName(CString & name, CString & NGBaseName);

/// @param name CString &
void DboBundleTemplateMap_GetDisplayBundleName(CString & name);

/// @param memberType CString
/// @return int
int DboBundleTemplateMap_sGetMemberTypeIdGivenString(CString memberType);

/// @param id int
/// @return CString
CString DboBundleTemplateMap_sGetMemberTypeStringGivenId(int id);

/// @param propName CString
/// @return bool
bool DboBundleTemplateMap_IsInternalProperty(CString propName);

class NG_DCFWriter
{
public:
void init();

void end();

void WriteDCF();

};

class DBXMLWriter
{
public:
/// @param sTag char const *
/// @param sValue char const *
void CreateChild(char const * sTag, char const * sValue);

/// @param sTag char const *
void Createtag(char const * sTag);

void CloseLasttag();

void CloseAlltags();

/// @param sAttrName char const *
/// @param sAttrvalue char const *
void AddAtributes(char const * sAttrName, char const * sAttrvalue);

/// @param sComment char const *
void AddComment(char const * sComment);

/// @return bool
bool IsXMLWritable();

void DoOutput2Stream();

/// @param pDesignName char const *
/// @param pName char const *
/// @param pXsdPath char const *
void AddDesignTag(char const * pDesignName, char const * pName, char const * pXsdPath);

/// @param pLibName char const *
/// @param pXsdPath char const *
void AddLibraryTag(char const * pLibName, char const * pXsdPath);

/// @param pScmName char const *
void AddSchematicTag(char const * pScmName);

/// @param pPageName char const *
void AddPageTag(char const * pPageName);

/// @param pName char const *
/// @param lStart CPoint
/// @param lEnd CPoint
/// @param bIsWireScalar bool
void AddWireTag(char const * pName, CPoint lStart, CPoint lEnd, bool bIsWireScalar);

/// @param pColor enum DboValue::ColorT
/// @param pTagName char const *
void AddWireColorTag(enum DboValue::ColorT pColor, char const * pTagName);

/// @param pLocation CPoint
void AddJunctionTag(CPoint pLocation);

/// @param pNxtName char const *
/// @param pLocation CPoint
/// @param pRot enum DboValue::RotationT
/// @param pColor enum DboValue::ColorT
void AddAliasTag(char const * pNxtName, CPoint pLocation, enum DboValue::RotationT pRot, enum DboValue::ColorT pColor);

/// @param pFont LOGFONT
void AddAliasFontTag(LOGFONT pFont);

/// @param pPortName char const *
void AddBundlePortTag(char const * pPortName);

/// @param BundleTemplate DboBundleTemplateMap *
/// @param bundlenames char const *
/// @param isTop bool
void CreateBundleTag(DboBundleTemplateMap * BundleTemplate, char const * bundlenames, bool isTop);

/// @param BundleTemplate DboBundleTemplateMap *
/// @param lXMLWriter DBXMLWriter &
void WriteBundleDefinition(DboBundleTemplateMap * BundleTemplate, DBXMLWriter & lXMLWriter);

/// @param pTagName char const *
/// @param pName char const *
/// @param pRot enum DboValue::RotationT
/// @param pLocation CPoint
void AddDisplayPropTag(char const * pTagName, char const * pName, enum DboValue::RotationT pRot, CPoint pLocation);

/// @param pFont LOGFONT
void AddPropFontTag(LOGFONT pFont);

/// @param pColor enum DboValue::ColorT
void AddPropColorTag(enum DboValue::ColorT pColor);

/// @param pDispType enum DboValue::DisplayTypeT
void AddPropDisplayTypeTag(enum DboValue::DisplayTypeT pDispType);

/// @param pTagName char const *
/// @param pName char const *
/// @param pValue char const *
void AddUserPropTag(char const * pTagName, char const * pName, char const * pValue);

/// @param pName char const *
/// @param pLocation CPoint
/// @param pRot enum DboValue::RotationT
/// @param pMirror bool
/// @param pLibName char const *
/// @param pSymblName char const *
void AddGlobalTag(char const * pName, CPoint pLocation, enum DboValue::RotationT pRot, bool pMirror, char const * pLibName, char const * pSymblName);

/// @param pName char const *
/// @param pDetail char const *
/// @param pError char const *
/// @param pLocationStr char const *
/// @param pLibName char const *
/// @param pSymblName char const *
/// @param pLocation CPoint
/// @param pMirror bool
/// @param pRot enum DboValue::RotationT
void AddERCTag(char const * pName, char const * pDetail, char const * pError, char const * pLocationStr, char const * pLibName, char const * pSymblName, CPoint pLocation, bool pMirror, enum DboValue::RotationT pRot);

/// @param pName char const *
/// @param pLocation CPoint
/// @param pRot enum DboValue::RotationT
/// @param pMirror bool
/// @param pLibName char const *
/// @param pSymblName char const *
void AddOffPageConnector(char const * pName, CPoint pLocation, enum DboValue::RotationT pRot, bool pMirror, char const * pLibName, char const * pSymblName);

/// @param pName char const *
/// @param pLocation CPoint
/// @param pRot enum DboValue::RotationT
/// @param pLibName char const *
/// @param pSymblName char const *
/// @param pMirror bool
void AddPortTag(char const * pName, CPoint pLocation, enum DboValue::RotationT pRot, char const * pLibName, char const * pSymblName, bool pMirror);

/// @param pName char const *
/// @param pLocation CPoint
/// @param pRot enum DboValue::RotationT
/// @param pLibName char const *
/// @param pSymblName char const *
void AddTitleBlockTag(char const * pName, CPoint pLocation, enum DboValue::RotationT pRot, char const * pLibName, char const * pSymblName);

/// @param pTitleBlockDisplayed bool
void AddTitleBlockDisplayTag(bool pTitleBlockDisplayed);

/// @param pBorderDisplayed bool
void AddBorderDisplayTag(bool pBorderDisplayed);

/// @param pCount int
void AddTitlePageCountTag(int pCount);

/// @param pNumber int
void AddTitlePageNumberTag(int pNumber);

/// @param pGridRefDisplayed bool
void AddGridRefDisplayTag(bool pGridRefDisplayed);

/// @param pPageWidth long
/// @param pPageHeight long
/// @param pPinToPin long
/// @param pIsMetric bool
void AddPageSizeInfoTag(long pPageWidth, long pPageHeight, long pPinToPin, bool pIsMetric);

/// @param pSize char const *
void AddSizeNameTag(char const * pSize);

/// @param pOuterLocation CPoint
void AddOuterBorderMarginTag(CPoint pOuterLocation);

/// @param pLineStyle enum DboValue::LineStyleT
void AddOuterBorderStyleTag(enum DboValue::LineStyleT pLineStyle);

/// @param pLinewidth enum DboValue::LineWidthT
void AddOuterBorderWidthTag(enum DboValue::LineWidthT pLinewidth);

/// @param pIsVisible bool
void AddOuterBorderVisibleTag(bool pIsVisible);

/// @param pInnerLocation CPoint
void AddInnerBorderMarginTag(CPoint pInnerLocation);

/// @param pStyle enum DboValue::LineStyleT
void AddInnerBorderStyleTag(enum DboValue::LineStyleT pStyle);

/// @param pwidth enum DboValue::LineWidthT
void AddInnerBorderWidthTag(enum DboValue::LineWidthT pwidth);

/// @param pInnerVisible bool
void AddInnerBorderVisibleTag(bool pInnerVisible);

/// @param pColor enum DboValue::ColorT
void AddColorTag(enum DboValue::ColorT pColor);

/// @param pFont LOGFONT
void AddLabelFontTag(LOGFONT pFont);

/// @param pLabelColor enum DboValue::ColorT
void AddLabelColorTag(enum DboValue::ColorT pLabelColor);

/// @param pCount int
void AddHorizontalCountTag(int pCount);

/// @param pLabelWidth int
void AddHorizontalWidthTag(int pLabelWidth);

/// @param pIsChar bool
void AddHorizontalIsCharTag(bool pIsChar);

/// @param pLabelVisible bool
void AddHorizontalVisibleTag(bool pLabelVisible);

/// @param pIsAscending bool
void AddHorizontalAscendingTag(bool pIsAscending);

/// @param pSeparatorStyle enum DboValue::LineStyleT
void AddHorizontalStyleTag(enum DboValue::LineStyleT pSeparatorStyle);

/// @param pSeparatorWidth enum DboValue::LineWidthT
void AddHorizontalSeparatorWidthTag(enum DboValue::LineWidthT pSeparatorWidth);

/// @param pVCount int
void AddVerticalCountTag(int pVCount);

/// @param pVWidth int
void AddVerticalWidthTag(int pVWidth);

/// @param pVerticalIsChar bool
void AddVerticalIsCharTag(bool pVerticalIsChar);

/// @param pVerticalIsVisible bool
void AddVerticalVisibleTag(bool pVerticalIsVisible);

/// @param pVerticalIsAscending bool
void AddVerticalAscendingTag(bool pVerticalIsAscending);

/// @param pVerticalLineStyle enum DboValue::LineStyleT
void AddVerticalStyleTag(enum DboValue::LineStyleT pVerticalLineStyle);

/// @param pVerticalLineWidth enum DboValue::LineWidthT
void AddVerticalSeparatorWidthTag(enum DboValue::LineWidthT pVerticalLineWidth);

/// @param pBusPt CPoint
/// @param pEndPt CPoint
void AddBusEntryTag(CPoint pBusPt, CPoint pEndPt);

/// @param pName char const *
/// @param bIsNetScalar bool
void AddNetTag(char const * pName, bool bIsNetScalar);

/// @param pName char const *
/// @param pLocation CPoint
/// @param pLibName char const *
/// @param pPkgName char const *
/// @param pDeviceDesignator char const *
/// @param pRot enum DboValue::RotationT
/// @param pMirror bool
/// @param pColor enum DboValue::ColorT
void AddPartInstTag(char const * pName, CPoint pLocation, char const * pLibName, char const * pPkgName, char const * pDeviceDesignator, enum DboValue::RotationT pRot, bool pMirror, enum DboValue::ColorT pColor);

/// @param pName char const *
/// @param pLocation CPoint
/// @param pLibName char const *
/// @param pRot enum DboValue::RotationT
/// @param pMirror bool
/// @param pColor enum DboValue::ColorT
/// @param pBBox CRect
/// @param lDeviceDesignator char const *
void AddDrawnInstTag(char const * pName, CPoint pLocation, char const * pLibName, enum DboValue::RotationT pRot, bool pMirror, enum DboValue::ColorT pColor, CRect pBBox, char const * lDeviceDesignator);

/// @param pPCBLibName char const *
void AddPCBTag(char const * pPCBLibName);

/// @param pContentsLibName char const *
void AddContentsLibNameTag(char const * pContentsLibName);

/// @param pContentsViewName char const *
void AddContentsViewNameTag(char const * pContentsViewName);

/// @param pType enum DboValue::ViewTypeT
void AddContentsViewTypeTag(enum DboValue::ViewTypeT pType);

/// @param pPType enum DboValue::PrimitiveTypeT
void AddIsPrimitivePropTag(enum DboValue::PrimitiveTypeT pPType);

/// @param pValue char const *
void AddPartValueTag(char const * pValue);

/// @param pReferenceName char const *
void AddReferenceTag(char const * pReferenceName);

/// @param pName char const *
/// @param pType enum DboValue::PinTypeT
/// @param lStart CPoint
/// @param lHotPoint CPoint
/// @param lVisible bool
/// @param bPortInstScalar bool
void AddPortInstTag(char const * pName, enum DboValue::PinTypeT pType, CPoint lStart, CPoint lHotPoint, bool lVisible, bool bPortInstScalar);

/// @param pLong bool
void AddIsLongTag(bool pLong);

/// @param pClock bool
void AddIsClockTag(bool pClock);

/// @param pDot bool
void AddIsDotTag(bool pDot);

/// @param pLeft bool
void AddIsLeftPointingTag(bool pLeft);

/// @param pRight bool
void AddIsRightPointingTag(bool pRight);

/// @param pNet bool
void AddIsNetStyleTag(bool pNet);

/// @param pNoConnect bool
void AddIsNoConnectTag(bool pNoConnect);

/// @param pGlobal bool
void AddIsGlobalTag(bool pGlobal);

/// @param pNumVisible bool
void AddIsNumberVisibleTag(bool pNumVisible);

/// @param pName char const *
/// @param pTagName char const *
void AddSymbolTag(char const * pName, char const * pTagName);

/// @param pName char const *
/// @param pStart CPoint
/// @param pHotPt CPoint
/// @param pPosition int
/// @param pType enum DboValue::PinTypeT
/// @param pVisible bool
/// @param bIsSymbolPinScalar bool
void AddSymbolPinTag(char const * pName, CPoint pStart, CPoint pHotPt, int pPosition, enum DboValue::PinTypeT pType, bool pVisible, bool bIsSymbolPinScalar);

/// @param pPkgName char const *
/// @param pRefDesPrefix char const *
/// @param pIsHomo int
/// @param pAlphaNumeric int
void AddPackageTag(char const * pPkgName, char const * pRefDesPrefix, int pIsHomo, int pAlphaNumeric);

void AddLibPartTag();

void AddLibPartNormalViewTag();

void AddLibPartConvertViewTag();

void AddDeviceTag();

/// @param pPinNumber char const *
/// @param pPosition int
void AddDevicePinNumberTag(char const * pPinNumber, int pPosition);

/// @param pPosition int
/// @param pIsShared int
void AddDevicePinSharedTag(int pPosition, int pIsShared);

/// @param pPosition int
/// @param pSwapId int
void AddDevicePinSwapIdTag(int pPosition, int pSwapId);

/// @param lPinNum bool
void AddIsPinNumbersVisibleTag(bool lPinNum);

/// @param lPinRot bool
void AddIsPinNamesRotatedTag(bool lPinRot);

/// @param lPinNum bool
void AddIsPinNamesVisibleTag(bool lPinNum);

/// @param pRect CRect
/// @param pTagName char const *
void AddBBoxTag(CRect pRect, char const * pTagName);

/// @param pRect CRect
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pFill enum DboValue::FillStyleT
/// @param pHatch enum DboValue::HatchStyleT
void AddEllipseTag(CRect pRect, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, enum DboValue::FillStyleT pFill, enum DboValue::HatchStyleT pHatch);

/// @param pUpperLeft CPoint
/// @param pLowerRight CPoint
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pFill enum DboValue::FillStyleT
/// @param pHatch enum DboValue::HatchStyleT
void AddBoxTag(CPoint pUpperLeft, CPoint pLowerRight, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, enum DboValue::FillStyleT pFill, enum DboValue::HatchStyleT pHatch);

/// @param pStart CPoint
/// @param pEnd CPoint
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
void AddLineTag(CPoint pStart, CPoint pEnd, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth);

/// @param pRect CRect
/// @param pStart CPoint
/// @param pEnd CPoint
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
void AddArcTag(CRect pRect, CPoint pStart, CPoint pEnd, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth);

/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pFill enum DboValue::FillStyleT
/// @param pHatch enum DboValue::HatchStyleT
void AddPolygonTag(enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, enum DboValue::FillStyleT pFill, enum DboValue::HatchStyleT pHatch);

/// @param pPt CPoint
void AddPolygonPointTag(CPoint pPt);

/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
void AddPolylineTag(enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth);

/// @param pPt CPoint
void AddPolylinePointTag(CPoint pPt);

/// @param pText char const *
/// @param pRect CRect
/// @param pLoc CPoint
void AddCommentTextTag(char const * pText, CRect pRect, CPoint pLoc);

/// @param pPath char const *
/// @param pRect CRect
/// @param pLoc CPoint
void AddBitMapTag(char const * pPath, CRect pRect, CPoint pLoc);

/// @param pStart CPoint
/// @param pStyle enum DboValue::FillStyleT
/// @param pHatch enum DboValue::HatchStyleT
void AddFillTag(CPoint pStart, enum DboValue::FillStyleT pStyle, enum DboValue::HatchStyleT pHatch);

/// @param pName char const *
/// @param pLoc CPoint
/// @param pRot enum DboValue::RotationT
/// @param pUpperLeft CPoint
/// @param pLowerRight CPoint
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pFill enum DboValue::FillStyleT
/// @param pHatch enum DboValue::HatchStyleT
void AddBoxInstTag(char const * pName, CPoint pLoc, enum DboValue::RotationT pRot, CPoint pUpperLeft, CPoint pLowerRight, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, enum DboValue::FillStyleT pFill, enum DboValue::HatchStyleT pHatch);

/// @param pName char const *
/// @param pLoc CPoint
/// @param pRot enum DboValue::RotationT
/// @param pStart CPoint
/// @param pEnd CPoint
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
void AddLineInstTag(char const * pName, CPoint pLoc, enum DboValue::RotationT pRot, CPoint pStart, CPoint pEnd, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth);

/// @param pName char const *
/// @param pLoc CPoint
/// @param pRot enum DboValue::RotationT
/// @param pRect CRect
/// @param pStart CPoint
/// @param pEnd CPoint
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
void AddArcInstTag(char const * pName, CPoint pLoc, enum DboValue::RotationT pRot, CRect pRect, CPoint pStart, CPoint pEnd, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth);

/// @param pName char const *
/// @param pLoc CPoint
/// @param pRot enum DboValue::RotationT
/// @param pRect CRect
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pFill enum DboValue::FillStyleT
/// @param lHatch enum DboValue::HatchStyleT
void AddEllipseInstTag(char const * pName, CPoint pLoc, enum DboValue::RotationT pRot, CRect pRect, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, enum DboValue::FillStyleT pFill, enum DboValue::HatchStyleT lHatch);

/// @param pName char const *
/// @param pLoc CPoint
/// @param pRot enum DboValue::RotationT
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pFill enum DboValue::FillStyleT
/// @param pHatch enum DboValue::HatchStyleT
void AddPolygonInstTag(char const * pName, CPoint pLoc, enum DboValue::RotationT pRot, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, enum DboValue::FillStyleT pFill, enum DboValue::HatchStyleT pHatch);

/// @param pName char const *
/// @param pStyle enum DboValue::LineStyleT
/// @param pWidth enum DboValue::LineWidthT
/// @param pLoc CPoint
/// @param pRot enum DboValue::RotationT
void AddPolylineInstTag(char const * pName, enum DboValue::LineStyleT pStyle, enum DboValue::LineWidthT pWidth, CPoint pLoc, enum DboValue::RotationT pRot);

/// @param pRect CRect
/// @param pTxt char const *
/// @param pLocation CPoint
/// @param pRot enum DboValue::RotationT
/// @param pFont LOGFONT
void AddCommentTextInstTag(CRect pRect, char const * pTxt, CPoint pLocation, enum DboValue::RotationT pRot, LOGFONT pFont);

/// @param pFont LOGFONT
void AddTextFontTag(LOGFONT pFont);

/// @param pRect CRect
void AddBitMapInstTag(CRect pRect);

void AddOccurrencesTag();

/// @param pPathName char const *
void AddInstOccTag(char const * pPathName);

/// @param pPathName char const *
void AddNetOccTag(char const * pPathName);

/// @param pPathName char const *
void AddPortOccTag(char const * pPathName);

/// @param pPathName char const *
void AddOffPageOccTag(char const * pPathName);

/// @param pPathName char const *
void AddTitleBlockOccTag(char const * pPathName);

};

class DboExtBlobNode
{
public:
/// @param pBlobNode DboExtBlobNode::BlobNodeData_t *
/// @return BlobNodeData_t
BlobNodeData_t InitBlob(DboExtBlobNode::BlobNodeData_t * pBlobNode);

/// @return char
char GetType();

/// @param pType char const *
void SetType(char const * pType);

/// @return char
char GetVersion();

/// @param pVersion char const *
void SetVersion(char const * pVersion);

/// @return BlobId_t
BlobId_t GetId();

/// @param pId DboExtBlobNode::BlobId_t
void SetId(DboExtBlobNode::BlobId_t pId);

/// @return BlobSeq_t
BlobSeq_t GetSequence();

/// @param pSeq DboExtBlobNode::BlobSeq_t
void SetSequence(DboExtBlobNode::BlobSeq_t pSeq);

/// @return BlobBitmap_t
BlobBitmap_t GetBitmap();

/// @param pBitmap DboExtBlobNode::BlobBitmap_t
void SetBitmap(DboExtBlobNode::BlobBitmap_t pBitmap);

/// @return size_t
size_t GetStreamSize();

/// @param pSize size_t
void SetStreamSize(size_t pSize);

/// @return size_t
size_t GetNodeDataSize();

/// @return ExtDataBytePtrT
ExtDataBytePtrT GetStream();

/// @param pStream ExtDataBytePtrT
void SetStream(ExtDataBytePtrT pStream);

/// @param pNodeData DboExtBlobNode::BlobNodeData_t *
/// @return bool
bool LoadNodeData(DboExtBlobNode::BlobNodeData_t * pNodeData);

/// @param pBuffer ExtDataBytePtrT
/// @return size_t
size_t StoreNodeData(ExtDataBytePtrT pBuffer);

};

class DboExtCentral
{
public:
/// @return DboExtCentral
DboExtCentral sGetInstance();

/// @param pSource DboBaseObject *
/// @param pDest DboBaseObject *
/// @return bool
bool CopyExtensions(DboBaseObject * pSource, DboBaseObject * pDest);

/// @param pObject DboBaseObject *
/// @param pType enum DboExtensionTypeT
/// @return DboExtension
DboExtension CreateExtension(DboBaseObject * pObject, enum DboExtensionTypeT pType);

/// @param pObject DboBaseObject *
/// @param pType enum DboExtensionTypeT
/// @param pSubType char const *
/// @param pVersion char const *
/// @return DboExtBlobNode
DboExtBlobNode CreateBlobExtension(DboBaseObject * pObject, enum DboExtensionTypeT pType, char const * pSubType, char const * pVersion);

/// @param pObject DboBaseObject *
/// @param pExtension DboExtension *
/// @return bool
bool SetExtension(DboBaseObject * pObject, DboExtension * pExtension);

/// @param pObject DboBaseObject *
/// @param pType enum DboExtensionTypeT
/// @return DboExtension
DboExtension GetExtension(DboBaseObject * pObject, enum DboExtensionTypeT pType);

/// @param pObject DboBaseObject *
/// @param pSubType char const *
/// @param pVersion char const *
/// @return BlobListT
BlobListT GetBlobExtension(DboBaseObject * pObject, char const * pSubType, char const * pVersion);

/// @param pType char const *
/// @param pVersion char const *
/// @param pHandler DboExtBlobHandler *
/// @return bool
bool RegisterBlobHandler(char const * pType, char const * pVersion, DboExtBlobHandler * pHandler);

};

/// @return DboExtCentral
DboExtCentral DboExtCentral_sGetInstance();

class Psp2CapBaseInfo
{
public:
/// @param sub Psp2CapBaseInfo *
void AddSub(Psp2CapBaseInfo * sub);

/// @param i int
/// @return Psp2CapBaseInfo
Psp2CapBaseInfo GetSub(int i);

/// @return int
int GetNumSubs();

/// @param propname CString
/// @param value CString
void InsertProp(CString propname, CString value);

/// @return CString
CString GetName();

/// @return PSP2CAP_OBJ_T
PSP2CAP_OBJ_T GetType();

/// @param propName CString
/// @return CString
CString GetPropValue(CString propName);

/// @return int
int IsPlaced();

/// @return int
int IsPart();

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @param ch char
void WriteChar(unsigned char * buffer, int & index, int size, char ch);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @param str CString
void WriteString(unsigned char * buffer, int & index, int size, CString str);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @return char
char ReadChar(unsigned char * buffer, int & index, int size);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @return CString
CString ReadString(unsigned char * buffer, int & index, int size);

/// @return long
long GetStorageSize();

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
void WriteToStream(unsigned char * buffer, int & index, int size);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @return bool
bool ReadFromStream(unsigned char * buffer, int & index, int size);

/// @return Psp2CapBaseInfoSubsIter
Psp2CapBaseInfoSubsIter GetSubsIter();

};

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @param ch char
void Psp2CapBaseInfo_WriteChar(unsigned char * buffer, int & index, int size, char ch);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @param str CString
void Psp2CapBaseInfo_WriteString(unsigned char * buffer, int & index, int size, CString str);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @return char
char Psp2CapBaseInfo_ReadChar(unsigned char * buffer, int & index, int size);

/// @param buffer unsigned char *
/// @param index int &
/// @param size int
/// @return CString
CString Psp2CapBaseInfo_ReadString(unsigned char * buffer, int & index, int size);

class Psp2CapBaseInfoSubsIter
{
public:
/// @return Psp2CapBaseInfo
Psp2CapBaseInfo NextSub();

};

/// @param x DboExtBlobNode *
/// @return DboExtBlobNodePsp2Cap
DboExtBlobNodePsp2Cap DboExtBlobNodeToDboExtBlobNodePsp2Cap(DboExtBlobNode * x);

class DboExtBlobNodePsp2Cap
	: public DboExtBlobNode
{
public:
/// @param pNodeData DboExtBlobNode::BlobNodeData_t *
/// @return bool
bool LoadNodeData(DboExtBlobNode::BlobNodeData_t * pNodeData);

/// @param pBuffer ExtDataBytePtrT
/// @return size_t
size_t StoreNodeData(ExtDataBytePtrT pBuffer);

/// @param pPspiceData Psp2CapBaseInfo *
void SetData(Psp2CapBaseInfo * pPspiceData);

/// @return Psp2CapBaseInfo
Psp2CapBaseInfo GetData();

};

class DboMiscFileWriter
{
public:
/// @param pRootStorage char *
/// @param pSubStorage char *
/// @return DboMiscFileWriter
DboMiscFileWriter GetOrCreateMiscStorageForWrite(char * pRootStorage, char * pSubStorage);

/// @param pRootStorage char *
/// @param pSubStorage char *
/// @return DboMiscFileWriter
DboMiscFileWriter GetMiscStorageForRead(char * pRootStorage, char * pSubStorage);

/// @param pStreamFileName char *
/// @param pDescr char *
/// @return int
int AddFileStream(char * pStreamFileName, char * pDescr);

/// @param pStreamFileName char *
/// @return int
int UpdateFileStream(char * pStreamFileName);

/// @param pStreamFileName char *
/// @return int
int DeleteFileStream(char * pStreamFileName);

void ReleaseStorage();

/// @param pStreamFileName char *
/// @return std::string
std::string GetFileStreamData(char * pStreamFileName);

/// @param pStreamFileName char *
/// @param pFileInfo std::string &
/// @return int
int GetFileInfo(char * pStreamFileName, std::string & pFileInfo);

/// @return std::string
std::string GetAllFileInfo();

/// @return std::string
std::string GetFileList();

/// @return int
int WasStorageOpenSuccessful();

/// @param pStorageName char *
/// @return int
int IsThisUserStorageCreationAllowed(char * pStorageName);

/// @param pStreamFileName char *
/// @param pFilePath char *
void DumpFileAs(char * pStreamFileName, char * pFilePath);

/// @param pStreamFileName char *
/// @param pAttrName char *
/// @return std::string
std::string GetStreamInfoStringType(char * pStreamFileName, char * pAttrName);

/// @param streamName char *
/// @param pDstFilePath char *
/// @param pReplace int
/// @return int
int IsOKToOverWrite(char * streamName, char * pDstFilePath, int pReplace);

/// @param streamName char *
/// @param pDstFilePath char *
/// @param pReplace int
/// @return int
int IsOKToPullIn(char * streamName, char * pDstFilePath, int pReplace);

/// @param pFilepath char *
/// @return std::string
std::string GetFileCreationTime(char * pFilepath);

};

/// @param pRootStorage char *
/// @param pSubStorage char *
/// @return DboMiscFileWriter
DboMiscFileWriter DboMiscFileWriter_GetOrCreateMiscStorageForWrite(char * pRootStorage, char * pSubStorage);

/// @param pRootStorage char *
/// @param pSubStorage char *
/// @return DboMiscFileWriter
DboMiscFileWriter DboMiscFileWriter_GetMiscStorageForRead(char * pRootStorage, char * pSubStorage);

/// @param pStorageName char *
/// @return int
int DboMiscFileWriter_IsThisUserStorageCreationAllowed(char * pStorageName);

/// @param pFilepath char *
/// @return std::string
std::string DboMiscFileWriter_GetFileCreationTime(char * pFilepath);

class RefDesQueryOptions
{
public:
};

class RefDesQueryObject
{
public:
void AssignProposedRefDes();

/// @param pInstOcc DboInstOccurrence *
void BuildRefNumRange(DboInstOccurrence * pInstOcc);

};

class DboRefDesUtils
{
public:
/// @param pRef CString
/// @param pRefPrefix CString &
/// @param pRefNum int &
void SplitPartReference(CString pRef, CString & pRefPrefix, int & pRefNum);

/// @param pDesStr CString const &
/// @return int
int GetDesignatorNumber(CString const & pDesStr);

/// @param pStrPrefix CString
/// @param pNum int
/// @return CString
CString GetReference(CString pStrPrefix, int pNum);

/// @param pDboBaseObj DboBaseObject *
/// @param pDesNum int
/// @return CString
CString GetDesignatorString(DboBaseObject * pDboBaseObj, int pDesNum);

/// @param pDboBaseObj DboBaseObject *
/// @return DboState
DboState ResetReference(DboBaseObject * pDboBaseObj);

/// @param pNumRange DboNumericRange *
/// @param strRefRange CString
/// @param pRefPrefix CString
/// @return bool
bool BuildRefNumRange(DboNumericRange * pNumRange, CString strRefRange, CString pRefPrefix);

};

/// @param pRef CString
/// @param pRefPrefix CString &
/// @param pRefNum int &
void DboRefDesUtils_SplitPartReference(CString pRef, CString & pRefPrefix, int & pRefNum);

/// @param pDesStr CString const &
/// @return int
int DboRefDesUtils_GetDesignatorNumber(CString const & pDesStr);

/// @param pStrPrefix CString
/// @param pNum int
/// @return CString
CString DboRefDesUtils_GetReference(CString pStrPrefix, int pNum);

/// @param pDboBaseObj DboBaseObject *
/// @param pDesNum int
/// @return CString
CString DboRefDesUtils_GetDesignatorString(DboBaseObject * pDboBaseObj, int pDesNum);

/// @param pDboBaseObj DboBaseObject *
/// @return DboState
DboState DboRefDesUtils_ResetReference(DboBaseObject * pDboBaseObj);

/// @param pNumRange DboNumericRange *
/// @param strRefRange CString
/// @param pRefPrefix CString
/// @return bool
bool DboRefDesUtils_BuildRefNumRange(DboNumericRange * pNumRange, CString strRefRange, CString pRefPrefix);

class RefDesPartInfo
{
public:
};

class DboRefDesMap
{
public:
/// @param pStrRef CString
/// @param pStrDes CString
/// @param pDboBaseObj DboBaseObject *
void AddRefDesEntry(CString pStrRef, CString pStrDes, DboBaseObject * pDboBaseObj);

/// @param pDboBaseObj DboBaseObject *
void AddRefDesEntry(DboBaseObject * pDboBaseObj);

/// @param pStrPrefix CString
/// @return RefNumMap
RefNumMap GetRefNumMap(CString pStrPrefix);

void ClearMap();

/// @param pDboBaseObj DboBaseObject *
void RemoveEntry(DboBaseObject * pDboBaseObj);

};

class DboRefDesQuerySorter
{
public:
};

class DboRefDesManager
{
public:
/// @return DboRefDesMap
DboRefDesMap GetInstanceRefDesMap();

/// @return DboRefDesMap
DboRefDesMap GetOccRefDesMap();

void RefreshInstanceRefDesMap();

/// @param pTopOcc DboInstOccurrence *
/// @param bRecurseOverChildren bool
void RefreshOccRefDesMap(DboInstOccurrence * pTopOcc, bool bRecurseOverChildren);

void RefreshOccRefDesMap();

/// @param pDboBaseObj DboBaseObject *
void ProcessRefDesModify(DboBaseObject * pDboBaseObj);

/// @param pDboBaseObj DboBaseObject *
void ProcessObjectDelete(DboBaseObject * pDboBaseObj);

/// @param pInstOcc DboInstOccurrence *
void AddInstOccToPending(DboInstOccurrence * pInstOcc);

void AssignRefDesToPendingInstOccs();

void ClearPendingInstOccs();

};

class DboRefDesQueryHandler
{
public:
/// @param pQueryObj RefDesQueryObject *
/// @return bool
bool GetNextRefDes(RefDesQueryObject * pQueryObj);

/// @param pQueryOptions RefDesQueryOptions *
void SetQueryOptions(RefDesQueryOptions * pQueryOptions);

/// @return RefDesQueryOptions
RefDesQueryOptions GetQueryOptions();

/// @param pQueryMap DboRefDesMap *
void SetQueryMap(DboRefDesMap * pQueryMap);

/// @param lQueryList DboBaseObjectListT *
void AssignRefDesToList(DboBaseObjectListT * lQueryList);

/// @param pDboBaseObj DboBaseObject *
/// @return bool
bool IsRefDesValid(DboBaseObject * pDboBaseObj);

};

class DboRefDesAnnotate
{
public:
void AnnotateIncremental();

void AnnotateUnconditional();

};


/// @}
