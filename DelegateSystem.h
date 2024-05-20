#pragma once
#include <list>


#define DECLARE_DELEGATE(DelegateName)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType = void (*)();\
void Bind(FDelegateType FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(){\
for (FDelegateType Delg : Delegates){Delg();}}\
private:\
std::list<FDelegateType> Delegates;};


#define DECLARE_DELEGATE_1(DelegateName, DataType1, Var1)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType1 = void (*)(DataType1 Var1);\
void Bind(FDelegateType1 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType1 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1){\
for (FDelegateType1 Delg : Delegates){Delg(Var1);}}\
private:\
std::list<FDelegateType1> Delegates;};

#define DECLARE_DELEGATE_2(DelegateName, DataType1, Var1, DataType2, Var2)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType2 = void (*)(DataType1 Var1, DataType2 Var2);\
void Bind(FDelegateType2 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType2 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2){\
for (FDelegateType2 Delg : Delegates){Delg(Var1, Var2);}}\
private:\
std::list<FDelegateType2> Delegates;};

#define DECLARE_DELEGATE_3(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType3 = void (*)();\
void Bind(FDelegateType3 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType3 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3){\
for (FDelegateType3 Delg : Delegates){Delg(Var1, Var2, Var3);}}\
private:\
std::list<FDelegateType3> Delegates;};

#define DECLARE_DELEGATE_4(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType4 = void (*)();\
void Bind(FDelegateType4 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType4 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4){\
for (FDelegateType4 Delg : Delegates){Delg(Var1, Var2, Var3, Var4);}}\
private:\
std::list<FDelegateType4> Delegates;};

#define DECLARE_DELEGATE_5(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4, DataType5, Var5)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType5 = void (*)();\
void Bind(FDelegateType5 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType5 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4, DataType5 Var5){\
for (FDelegateType5 Delg : Delegates){Delg(Var1, Var2, Var3, Var4, Var5);}}\
private:\
std::list<FDelegateType5> Delegates;};

#define DECLAR6_DELEGATE_6(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4, DataType5, Var5, DataType6, Var6)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType6 = void (*)();\
void Bind(FDelegateType6 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType6 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4, DataType5 Var5, DataType6 Var6){\
for (FDelegateType6 Delg : Delegates){Delg(Var1, Var2, Var3, Var4, Var5, Var6);}}\
private:\
std::list<FDelegateType6> Delegates;};

#define DECLARE_DELEGATE_7(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4, DataType5, Var5, DataType6, Var6, DataType7, Var7)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType7 = void (*)();\
void Bind(FDelegateType7 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType7 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4, DataType5 Var5, DataType6 Var6, DataType7 Var7){\
for (FDelegateType7 Delg : Delegates){Delg(Var1, Var2, Var3, Var4, Var5, Var6, Var7);}}\
private:\
std::list<FDelegateType7> Delegates;};

#define DECLARE_DELEGATE_8(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4, DataType5, Var5, DataType6, Var6, DataType7, Var7, DataType8, Var8)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType8 = void (*)();\
void Bind(FDelegateType8 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType8 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4, DataType5 Var5, DataType6 Var6, DataType7 Var7, DataType8 Var8){\
for (FDelegateType8 Delg : Delegates){Delg(Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8);}}\
private:\
std::list<FDelegateType8> Delegates;};

#define DECLARE_DELEGATE_9(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4, DataType5, Var5, DataType6, Var6, DataType7, Var7, DataType8, Var8, DataType9, Var9)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType9 = void (*)();\
void Bind(FDelegateType9 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType9 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4, DataType5 Var5, DataType6 Var6, DataType7 Var7, DataType8 Var8, DataType9 Var9){\
for (FDelegateType9 Delg : Delegates){Delg(Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8, Var9);}}\
private:\
std::list<FDelegateType9> Delegates;};

#define DECLARE_DELEGATE_10(DelegateName, DataType1, Var1, DataType2, Var2, DataType3, Var3, DataType4, Var4, DataType5, Var5, DataType6, Var6, DataType7, Var7, DataType8, Var8, DataType9, Var9, DataType10, Var10)struct DelegateName{\
/*Example for Args: uint8_t, DeviceType, const float, Value*/\
using FDelegateType0 = void (*)();\
void Bind(FDelegateType0 FunctionToBind) { Delegates.push_back(FunctionToBind); }\
void UnbindAll() { Delegates.clear(); }\
void Unbind(FDelegateType0 FunctionToUnbind){\
Delegates.remove(FunctionToUnbind);}\
void Invoke(DataType1 Var1, DataType2 Var2, DataType3 Var3, DataType4 Var4, DataType5 Var5, DataType6 Var6, DataType7 Var7, DataType8 Var8, DataType9 Var9, DataType10 Var10){\
for (FDelegateType0 Delg : Delegates){Delg(Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8, Var9, Var10);}}\
private:\
std::list<FDelegateType0> Delegates;};