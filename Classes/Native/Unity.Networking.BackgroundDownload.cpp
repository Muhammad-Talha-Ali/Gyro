#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>
struct Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Networking.BackgroundDownload>
struct KeyCollection_t6194F879E9D6876DC38C7FB1A2A11F54E0CB5A9C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Networking.BackgroundDownload>
struct ValueCollection_tED0B164CBDABCD5CF290DB28D92A8B6352BD5001;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Networking.BackgroundDownload>[]
struct EntryU5BU5D_tF55FB230E1F56250C7798E196F8B5EA59402081D;
// Unity.Networking.BackgroundDownload[]
struct BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// Unity.Networking.BackgroundDownload
struct BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974;
// Unity.Networking.BackgroundDownloadiOS
struct BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral309794FCD99CE5E70AC39ABA8DBF011AC4C6CF47;
IL2CPP_EXTERN_C String_t* _stringLiteral36BC5D2DBDEEB9B26473F93B3E2F70580021C2F9;
IL2CPP_EXTERN_C String_t* _stringLiteral71E625E45D727CF13B5F05E07DE2058F9024257E;
IL2CPP_EXTERN_C String_t* _stringLiteralA86B6FA4CD50E8D8B80421AA33CA1EC4D4CD2734;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BackgroundDownload_Start_m708A80B19DA1ADB9A10071D3F2481782CB938CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m345408A8470F55A7E9B8122A46935891287F9656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m78D75BA723EAF03726E61C23D09106519064F22A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4ADD726DC6AB02CA8E8C357A2D68D68C8E309D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m73E15E905DFF4BA246EB8ED39C9203C080C53DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m6A09347EE546195FAC512F04949D3E29F2B7F178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAD3BF926925BC89D9AD1ACE56DEDF384520DF88F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3806D7E64F3D7465DB570C93FCCCC9E8B5191BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m77237F3E58AC0813C493EA160B91991B1A0216CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m79396C7ED1A38DCC2F04FF98D0AB29014D3BB012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD845F5534A83773D83DCF9266831F6A79F0E11BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFE8F543ECB88C9620511B7DB76E9AA0069E74E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF38BADAB39CC459E7D0F1CC72B81EE5118A13D19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0C0A6269C00DB1A5F1CDE816FF9D2528AD662EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6856A4E056EDF877D9D78094CACACD8A645EC1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6A1D5267B49F39503A0BF02B983C18FA2EB5094A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m16CB99BBD7631726AD4A7050581910997AA197C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA55EE81203089B96800B159AA07A2A0EB69C9AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC3C92BFD7725EFE888D9CD9022D7FD8B62797903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t76F393BF0CD4A4634DA3CBF626A8152FA1D8AB5D 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___entries_1)); }
	inline EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___keys_7)); }
	inline KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___values_8)); }
	inline ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>
struct Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF55FB230E1F56250C7798E196F8B5EA59402081D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6194F879E9D6876DC38C7FB1A2A11F54E0CB5A9C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tED0B164CBDABCD5CF290DB28D92A8B6352BD5001 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___entries_1)); }
	inline EntryU5BU5D_tF55FB230E1F56250C7798E196F8B5EA59402081D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF55FB230E1F56250C7798E196F8B5EA59402081D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF55FB230E1F56250C7798E196F8B5EA59402081D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___keys_7)); }
	inline KeyCollection_t6194F879E9D6876DC38C7FB1A2A11F54E0CB5A9C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6194F879E9D6876DC38C7FB1A2A11F54E0CB5A9C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6194F879E9D6876DC38C7FB1A2A11F54E0CB5A9C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ___values_8)); }
	inline ValueCollection_tED0B164CBDABCD5CF290DB28D92A8B6352BD5001 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tED0B164CBDABCD5CF290DB28D92A8B6352BD5001 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tED0B164CBDABCD5CF290DB28D92A8B6352BD5001 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53, ___value_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_value_1() const { return ___value_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Unity.Networking.BackgroundDownload>
struct KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2, ___value_1)); }
	inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * get_value_1() const { return ___value_1; }
	inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct Enumerator_t165535373A2C041075C388ED21DF73971A40816A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___dictionary_0)); }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___current_3)); }
	inline KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Unity.Networking.BackgroundDownload>
struct Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3, ___dictionary_0)); }
	inline Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3, ___current_3)); }
	inline KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Networking.BackgroundDownloadPolicy
struct BackgroundDownloadPolicy_t3907A9F11ED4D2126A063F60BFB12C661E509ED2 
{
public:
	// System.Int32 Unity.Networking.BackgroundDownloadPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BackgroundDownloadPolicy_t3907A9F11ED4D2126A063F60BFB12C661E509ED2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Networking.BackgroundDownloadStatus
struct BackgroundDownloadStatus_t0B89C03BFF9D9C6E3158CA73C6C61BAA8C140744 
{
public:
	// System.Int32 Unity.Networking.BackgroundDownloadStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BackgroundDownloadStatus_t0B89C03BFF9D9C6E3158CA73C6C61BAA8C140744, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.UriFormat
struct UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t25C936463BDE737B16A8EC3DA05091FC31F1A71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Unity.Networking.BackgroundDownloadConfig
struct BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 
{
public:
	// System.Uri Unity.Networking.BackgroundDownloadConfig::url
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url_0;
	// System.String Unity.Networking.BackgroundDownloadConfig::filePath
	String_t* ___filePath_1;
	// Unity.Networking.BackgroundDownloadPolicy Unity.Networking.BackgroundDownloadConfig::policy
	int32_t ___policy_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Unity.Networking.BackgroundDownloadConfig::requestHeaders
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___requestHeaders_3;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054, ___url_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_url_0() const { return ___url_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_0), (void*)value);
	}

	inline static int32_t get_offset_of_filePath_1() { return static_cast<int32_t>(offsetof(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054, ___filePath_1)); }
	inline String_t* get_filePath_1() const { return ___filePath_1; }
	inline String_t** get_address_of_filePath_1() { return &___filePath_1; }
	inline void set_filePath_1(String_t* value)
	{
		___filePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filePath_1), (void*)value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054, ___policy_2)); }
	inline int32_t get_policy_2() const { return ___policy_2; }
	inline int32_t* get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(int32_t value)
	{
		___policy_2 = value;
	}

	inline static int32_t get_offset_of_requestHeaders_3() { return static_cast<int32_t>(offsetof(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054, ___requestHeaders_3)); }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * get_requestHeaders_3() const { return ___requestHeaders_3; }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 ** get_address_of_requestHeaders_3() { return &___requestHeaders_3; }
	inline void set_requestHeaders_3(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * value)
	{
		___requestHeaders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestHeaders_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Networking.BackgroundDownloadConfig
struct BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_pinvoke
{
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url_0;
	char* ___filePath_1;
	int32_t ___policy_2;
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___requestHeaders_3;
};
// Native definition for COM marshalling of Unity.Networking.BackgroundDownloadConfig
struct BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_com
{
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url_0;
	Il2CppChar* ___filePath_1;
	int32_t ___policy_2;
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___requestHeaders_3;
};

// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_18)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_21)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// Unity.Networking.BackgroundDownload
struct BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// Unity.Networking.BackgroundDownloadConfig Unity.Networking.BackgroundDownload::_config
	BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ____config_1;
	// Unity.Networking.BackgroundDownloadStatus Unity.Networking.BackgroundDownload::_status
	int32_t ____status_2;
	// System.String Unity.Networking.BackgroundDownload::_error
	String_t* ____error_3;

public:
	inline static int32_t get_offset_of__config_1() { return static_cast<int32_t>(offsetof(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974, ____config_1)); }
	inline BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  get__config_1() const { return ____config_1; }
	inline BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * get_address_of__config_1() { return &____config_1; }
	inline void set__config_1(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  value)
	{
		____config_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____config_1))->___url_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____config_1))->___filePath_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____config_1))->___requestHeaders_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__status_2() { return static_cast<int32_t>(offsetof(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974, ____status_2)); }
	inline int32_t get__status_2() const { return ____status_2; }
	inline int32_t* get_address_of__status_2() { return &____status_2; }
	inline void set__status_2(int32_t value)
	{
		____status_2 = value;
	}

	inline static int32_t get_offset_of__error_3() { return static_cast<int32_t>(offsetof(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974, ____error_3)); }
	inline String_t* get__error_3() const { return ____error_3; }
	inline String_t** get_address_of__error_3() { return &____error_3; }
	inline void set__error_3(String_t* value)
	{
		____error_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_3), (void*)value);
	}
};

struct BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload> Unity.Networking.BackgroundDownload::_downloads
	Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * ____downloads_0;

public:
	inline static int32_t get_offset_of__downloads_0() { return static_cast<int32_t>(offsetof(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields, ____downloads_0)); }
	inline Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * get__downloads_0() const { return ____downloads_0; }
	inline Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 ** get_address_of__downloads_0() { return &____downloads_0; }
	inline void set__downloads_0(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * value)
	{
		____downloads_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____downloads_0), (void*)value);
	}
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// Unity.Networking.BackgroundDownloadiOS
struct BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42  : public BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974
{
public:
	// System.IntPtr Unity.Networking.BackgroundDownloadiOS::_backend
	intptr_t ____backend_4;

public:
	inline static int32_t get_offset_of__backend_4() { return static_cast<int32_t>(offsetof(BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42, ____backend_4)); }
	inline intptr_t get__backend_4() const { return ____backend_4; }
	inline intptr_t* get_address_of__backend_4() { return &____backend_4; }
	inline void set__backend_4(intptr_t value)
	{
		____backend_4 = value;
	}
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Networking.BackgroundDownload[]
struct BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * m_Items[1];

public:
	inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownload::LoadDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload_LoadDownloads_m01D12A76F9406F00D96E7144C1F70A7E64CFEA32 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::get_Count()
inline int32_t Dictionary_2_get_Count_m77237F3E58AC0813C493EA160B91991B1A0216CE (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::GetEnumerator()
inline Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3  Dictionary_2_GetEnumerator_m4ADD726DC6AB02CA8E8C357A2D68D68C8E309D0E (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3  (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Unity.Networking.BackgroundDownload>::get_Current()
inline KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  Enumerator_get_Current_m0C0A6269C00DB1A5F1CDE816FF9D2528AD662EDC_inline (Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  (*) (Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 *, const RuntimeMethod*))Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Unity.Networking.BackgroundDownload>::get_Value()
inline BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * KeyValuePair_2_get_Value_mA55EE81203089B96800B159AA07A2A0EB69C9AB3_inline (KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2 * __this, const RuntimeMethod* method)
{
	return ((  BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * (*) (KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Unity.Networking.BackgroundDownload>::MoveNext()
inline bool Enumerator_MoveNext_mF38BADAB39CC459E7D0F1CC72B81EE5118A13D19 (Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Unity.Networking.BackgroundDownload>::Dispose()
inline void Enumerator_Dispose_mFE8F543ECB88C9620511B7DB76E9AA0069E74E57 (Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Unity.Networking.BackgroundDownload Unity.Networking.BackgroundDownload::Start(Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * BackgroundDownload_Start_m708A80B19DA1ADB9A10071D3F2481782CB938CCD (BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m78D75BA723EAF03726E61C23D09106519064F22A (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownloadiOS::.ctor(Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS__ctor_mFBFBD485FE96E893ED098513F47158229EA02197 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::Add(!0,!1)
inline void Dictionary_2_Add_m345408A8470F55A7E9B8122A46935891287F9656 (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, String_t* ___key0, BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, String_t*, BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Networking.BackgroundDownload::SaveDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload_SaveDownloads_mCF1187954E571BC3644C6B18884B3314742F0635 (const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::Remove(!0)
inline bool Dictionary_2_Remove_m6A09347EE546195FAC512F04949D3E29F2B7F178 (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload> Unity.Networking.BackgroundDownloadiOS::LoadDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * BackgroundDownloadiOS_LoadDownloads_m73412DA0F74A88EBA2AF3F93422444E52A64C972 (const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownloadiOS::SaveDownloads(System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_SaveDownloads_m38A6FEE95D5E63951BCA2ECE0842B67DCFAACB76 (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * ___downloads0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mAD3BF926925BC89D9AD1ACE56DEDF384520DF88F (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, String_t* ___key0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, String_t*, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD845F5534A83773D83DCF9266831F6A79F0E11BD (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, String_t* ___key0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, String_t*, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Networking.BackgroundDownloadConfig::AddRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59 (BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownload::.ctor(Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload__ctor_m750DBE9EDA03D3A681A8DAD9AD68EBF17DA24F4B (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.IntPtr Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadCreateRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BackgroundDownloadiOS_UnityBackgroundDownloadCreateRequest_m6EEF532588CEB27E2631500C53B2EC22C599748B (String_t* ___url0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_t165535373A2C041075C388ED21DF73971A40816A  Dictionary_2_GetEnumerator_m73E15E905DFF4BA246EB8ED39C9203C080C53DB7 (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t165535373A2C041075C388ED21DF73971A40816A  (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  Enumerator_get_Current_m6856A4E056EDF877D9D78094CACACD8A645EC1E4_inline (Enumerator_t165535373A2C041075C388ED21DF73971A40816A * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  (*) (Enumerator_t165535373A2C041075C388ED21DF73971A40816A *, const RuntimeMethod*))Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_inline (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_mC3C92BFD7725EFE888D9CD9022D7FD8B62797903 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m6A1D5267B49F39503A0BF02B983C18FA2EB5094A_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m16CB99BBD7631726AD4A7050581910997AA197C7_inline (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline)(__this, method);
}
// System.Void Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadAddRequestHeader(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UnityBackgroundDownloadAddRequestHeader_mE8F2BB541181DB394512042E3ABC457C3CB90949 (intptr_t ___headers0, String_t* ___name1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E (Enumerator_t165535373A2C041075C388ED21DF73971A40816A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t165535373A2C041075C388ED21DF73971A40816A *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5 (Enumerator_t165535373A2C041075C388ED21DF73971A40816A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t165535373A2C041075C388ED21DF73971A40816A *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.IntPtr Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadStart(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BackgroundDownloadiOS_UnityBackgroundDownloadStart_mAF60CC7472DEE451ED03ACB324DE7BF25BA84A72 (intptr_t ___request0, String_t* ___dest1, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownloadiOS::UpdateStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UpdateStatus_m6A32C9870479DE28E596437001C330278CCC60C6 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method);
// Unity.Networking.BackgroundDownloadStatus Unity.Networking.BackgroundDownload::get_status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BackgroundDownload_get_status_mB254D43CD711B56B8B13B51CE3A75FA20A70AE2D_inline (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::.ctor()
inline void Dictionary_2__ctor_m3806D7E64F3D7465DB570C93FCCCC9E8B5191BCA (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetCount_m08643D6DE8E694069068D87001D56278E61DD69E (const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetAll(System.IntPtr[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UnityBackgroundDownloadGetAll_m7DDB58E3473945217704FE8498437CD9E55D852A (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___downloads0, const RuntimeMethod* method);
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetUrl(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetUrl_m015396E8D19215E279ABAF27EB34BE87D2364BCD (intptr_t ___backend0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method);
// System.String Unity.Networking.BackgroundDownloadiOS::MarshalObjCString(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BackgroundDownloadiOS_MarshalObjCString_m15B72764AE3C8F8FD394A0F8BC8B5A2AF38C34F2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetFilePath(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetFilePath_m549D83FA0F93972E1FC84EF231BE929E732716E0 (intptr_t ___backend0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownloadiOS::.ctor(System.IntPtr,Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS__ctor_m018C4B7F51FD70CA09534A3371C4BD4C0DB39FFD (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, intptr_t ___backend0, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m79396C7ED1A38DCC2F04FF98D0AB29014D3BB012 (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * __this, String_t* ___key0, BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *, String_t*, BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Single Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetProgress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BackgroundDownloadiOS_UnityBackgroundDownloadGetProgress_mB7671C1E5574850F5145A642E038301BF6BDA366 (intptr_t ___backend0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UnityBackgroundDownloadDestroy_mE7820A5EFBD8E45BE968C6E57830CB3A439F561A (intptr_t ___backend0, const RuntimeMethod* method);
// System.Void Unity.Networking.BackgroundDownload::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload_Dispose_mF840FEAA807D0570DB040B882A010CB2F3F52850 (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetStatus_m187A97FE1F3F9FEC7DE95ADC661BD51BE29B4B7F (intptr_t ___backend0, const RuntimeMethod* method);
// System.String Unity.Networking.BackgroundDownloadiOS::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BackgroundDownloadiOS_GetError_m325B926AAFE330ED7F2B2ACA29FB5425DBC6EFFD (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetError(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetError_m9546120E1DE42F9CCAEC87932BBDE2A5D686BAE1 (intptr_t ___backend0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_Unicode_mB0C6AE1F91373CEB8A5BC5466F6B8F92C0A398B9 (const RuntimeMethod* method);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityBackgroundDownloadCreateRequest(Il2CppChar*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityBackgroundDownloadAddRequestHeader(intptr_t, Il2CppChar*, Il2CppChar*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityBackgroundDownloadStart(intptr_t, Il2CppChar*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityBackgroundDownloadGetStatus(intptr_t);
IL2CPP_EXTERN_C float DEFAULT_CALL UnityBackgroundDownloadGetProgress(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityBackgroundDownloadDestroy(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityBackgroundDownloadGetCount();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityBackgroundDownloadGetAll(intptr_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityBackgroundDownloadGetUrl(intptr_t, uint8_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityBackgroundDownloadGetFilePath(intptr_t, uint8_t*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityBackgroundDownloadGetError(intptr_t, uint8_t*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Networking.BackgroundDownload[] Unity.Networking.BackgroundDownload::get_backgroundDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* BackgroundDownload_get_backgroundDownloads_m0F53D60D38ECF8B15AB31422EA2ABE8768D924A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4ADD726DC6AB02CA8E8C357A2D68D68C8E309D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m77237F3E58AC0813C493EA160B91991B1A0216CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE8F543ECB88C9620511B7DB76E9AA0069E74E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF38BADAB39CC459E7D0F1CC72B81EE5118A13D19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0C0A6269C00DB1A5F1CDE816FF9D2528AD662EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA55EE81203089B96800B159AA07A2A0EB69C9AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// lock (typeof(BackgroundDownload))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000d:
	try
	{// begin try (depth: 1)
		{
			Type_t * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// LoadDownloads();
			BackgroundDownload_LoadDownloads_m01D12A76F9406F00D96E7144C1F70A7E64CFEA32(/*hidden argument*/NULL);
			// var ret = new BackgroundDownload[_downloads.Count];
			Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_3 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
			NullCheck(L_3);
			int32_t L_4;
			L_4 = Dictionary_2_get_Count_m77237F3E58AC0813C493EA160B91991B1A0216CE(L_3, /*hidden argument*/Dictionary_2_get_Count_m77237F3E58AC0813C493EA160B91991B1A0216CE_RuntimeMethod_var);
			BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* L_5 = (BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E*)(BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E*)SZArrayNew(BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E_il2cpp_TypeInfo_var, (uint32_t)L_4);
			V_2 = L_5;
			// int i = 0;
			V_3 = 0;
			// foreach (var download in _downloads)
			Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_6 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
			NullCheck(L_6);
			Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3  L_7;
			L_7 = Dictionary_2_GetEnumerator_m4ADD726DC6AB02CA8E8C357A2D68D68C8E309D0E(L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m4ADD726DC6AB02CA8E8C357A2D68D68C8E309D0E_RuntimeMethod_var);
			V_4 = L_7;
		}

IL_0038:
		try
		{// begin try (depth: 2)
			{
				goto IL_0051;
			}

IL_003a:
			{
				// foreach (var download in _downloads)
				KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2  L_8;
				L_8 = Enumerator_get_Current_m0C0A6269C00DB1A5F1CDE816FF9D2528AD662EDC_inline((Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m0C0A6269C00DB1A5F1CDE816FF9D2528AD662EDC_RuntimeMethod_var);
				V_5 = L_8;
				// ret[i++] = download.Value;
				BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* L_9 = V_2;
				int32_t L_10 = V_3;
				int32_t L_11 = L_10;
				V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
				BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * L_12;
				L_12 = KeyValuePair_2_get_Value_mA55EE81203089B96800B159AA07A2A0EB69C9AB3_inline((KeyValuePair_2_t009F2980D78906FA73DE24C5117BEE93769458B2 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mA55EE81203089B96800B159AA07A2A0EB69C9AB3_RuntimeMethod_var);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_12);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)L_12);
			}

IL_0051:
			{
				// foreach (var download in _downloads)
				bool L_13;
				L_13 = Enumerator_MoveNext_mF38BADAB39CC459E7D0F1CC72B81EE5118A13D19((Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mF38BADAB39CC459E7D0F1CC72B81EE5118A13D19_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_003a;
				}
			}

IL_005a:
			{
				IL2CPP_LEAVE(0x6A, FINALLY_005c);
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_005c;
		}

FINALLY_005c:
		{// begin finally (depth: 2)
			Enumerator_Dispose_mFE8F543ECB88C9620511B7DB76E9AA0069E74E57((Enumerator_t4F3233D4ACFA103677F9FC1E01D864F07017A9B3 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mFE8F543ECB88C9620511B7DB76E9AA0069E74E57_RuntimeMethod_var);
			IL2CPP_END_FINALLY(92)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(92)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x6A, IL_006a)
		}

IL_006a:
		{
			// return ret;
			BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* L_14 = V_2;
			V_6 = L_14;
			IL2CPP_LEAVE(0x79, FINALLY_006f);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006f;
	}

FINALLY_006f:
	{// begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_0078;
			}
		}

IL_0072:
		{
			Type_t * L_16 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(111)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(111)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
	}

IL_0079:
	{
		// }
		BackgroundDownloadU5BU5D_tB71D268C92727228F3838164C8CFEF64C8A8954E* L_17 = V_6;
		return L_17;
	}
}
// Unity.Networking.BackgroundDownload Unity.Networking.BackgroundDownload::Start(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * BackgroundDownload_Start_m59A9470497F5E038A2FBF3345B98A5C8DAFC31B7 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___url0, String_t* ___filePath1, const RuntimeMethod* method)
{
	BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var config = new BackgroundDownloadConfig();
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 ));
		// config.url = url;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___url0;
		(&V_0)->set_url_0(L_0);
		// config.filePath = filePath;
		String_t* L_1 = ___filePath1;
		(&V_0)->set_filePath_1(L_1);
		// return Start(config);
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_2 = V_0;
		BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * L_3;
		L_3 = BackgroundDownload_Start_m708A80B19DA1ADB9A10071D3F2481782CB938CCD(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Unity.Networking.BackgroundDownload Unity.Networking.BackgroundDownload::Start(Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * BackgroundDownload_Start_m708A80B19DA1ADB9A10071D3F2481782CB938CCD (BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m345408A8470F55A7E9B8122A46935891287F9656_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m78D75BA723EAF03726E61C23D09106519064F22A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * V_2 = NULL;
	BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (typeof(BackgroundDownload))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000d:
	try
	{// begin try (depth: 1)
		{
			Type_t * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// LoadDownloads();
			BackgroundDownload_LoadDownloads_m01D12A76F9406F00D96E7144C1F70A7E64CFEA32(/*hidden argument*/NULL);
			// if (_downloads.ContainsKey(config.filePath))
			Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_3 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
			BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_4 = ___config0;
			String_t* L_5 = L_4.get_filePath_1();
			NullCheck(L_3);
			bool L_6;
			L_6 = Dictionary_2_ContainsKey_m78D75BA723EAF03726E61C23D09106519064F22A(L_3, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m78D75BA723EAF03726E61C23D09106519064F22A_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0037;
			}
		}

IL_002c:
		{
			// throw new ArgumentException("Download of this file is already present");
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA86B6FA4CD50E8D8B80421AA33CA1EC4D4CD2734)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BackgroundDownload_Start_m708A80B19DA1ADB9A10071D3F2481782CB938CCD_RuntimeMethod_var)));
		}

IL_0037:
		{
			// var download = new BackgroundDownloadimpl(config);
			BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_8 = ___config0;
			BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * L_9 = (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 *)il2cpp_codegen_object_new(BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42_il2cpp_TypeInfo_var);
			BackgroundDownloadiOS__ctor_mFBFBD485FE96E893ED098513F47158229EA02197(L_9, L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			// _downloads.Add(config.filePath, download);
			Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_10 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
			BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_11 = ___config0;
			String_t* L_12 = L_11.get_filePath_1();
			BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * L_13 = V_2;
			NullCheck(L_10);
			Dictionary_2_Add_m345408A8470F55A7E9B8122A46935891287F9656(L_10, L_12, L_13, /*hidden argument*/Dictionary_2_Add_m345408A8470F55A7E9B8122A46935891287F9656_RuntimeMethod_var);
			// SaveDownloads();
			BackgroundDownload_SaveDownloads_mCF1187954E571BC3644C6B18884B3314742F0635(/*hidden argument*/NULL);
			// return download;
			BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * L_14 = V_2;
			V_3 = L_14;
			IL2CPP_LEAVE(0x62, FINALLY_0058);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{// begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_0061;
			}
		}

IL_005b:
		{
			Type_t * L_16 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_16, /*hidden argument*/NULL);
		}

IL_0061:
		{
			IL2CPP_END_FINALLY(88)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x62, IL_0062)
	}

IL_0062:
	{
		// }
		BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * L_17 = V_3;
		return L_17;
	}
}
// System.Void Unity.Networking.BackgroundDownload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload__ctor_mA5B4ED539ADF0807DF7B8D228316E517D76C0F87 (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	{
		// protected BackgroundDownload()
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Networking.BackgroundDownload::.ctor(Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload__ctor_m750DBE9EDA03D3A681A8DAD9AD68EBF17DA24F4B (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// protected BackgroundDownload(BackgroundDownloadConfig config)
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		// _config = config;
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_0 = ___config0;
		__this->set__config_1(L_0);
		// switch (_config.policy)
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * L_1 = __this->get_address_of__config_1();
		int32_t L_2 = L_1->get_policy_2();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))) > ((uint32_t)2))))
		{
			goto IL_002e;
		}
	}

IL_0022:
	{
		// _config.policy = BackgroundDownloadPolicy.AllowMetered;
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * L_5 = __this->get_address_of__config_1();
		L_5->set_policy_2(2);
	}

IL_002e:
	{
		// }
		return;
	}
}
// Unity.Networking.BackgroundDownloadConfig Unity.Networking.BackgroundDownload::get_config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  BackgroundDownload_get_config_mFD6042359F65BE63BDC528F37A2CC5F4E7718CAA (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	{
		// public BackgroundDownloadConfig config { get { return _config; } }
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_0 = __this->get__config_1();
		return L_0;
	}
}
// Unity.Networking.BackgroundDownloadStatus Unity.Networking.BackgroundDownload::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownload_get_status_mB254D43CD711B56B8B13B51CE3A75FA20A70AE2D (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	{
		// public virtual BackgroundDownloadStatus status { get { return _status; } }
		int32_t L_0 = __this->get__status_2();
		return L_0;
	}
}
// System.String Unity.Networking.BackgroundDownload::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BackgroundDownload_get_error_mA5F5028110543B150815B5C652D730610B529EA6 (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	{
		// public string error { get { return _error; } }
		String_t* L_0 = __this->get__error_3();
		return L_0;
	}
}
// System.Single Unity.Networking.BackgroundDownload::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BackgroundDownload_get_progress_m35B11066850956E1A0CA07FB2585AD5CF3A43E0C (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	{
		// public float progress { get { return GetProgress(); } }
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(11 /* System.Single Unity.Networking.BackgroundDownload::GetProgress() */, __this);
		return L_0;
	}
}
// System.Void Unity.Networking.BackgroundDownload::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload_Dispose_mF840FEAA807D0570DB040B882A010CB2F3F52850 (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6A09347EE546195FAC512F04949D3E29F2B7F178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36BC5D2DBDEEB9B26473F93B3E2F70580021C2F9);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (typeof(BackgroundDownload))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_000d:
	try
	{// begin try (depth: 1)
		{
			Type_t * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
			// _downloads.Remove(_config.filePath);
			Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_3 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
			BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * L_4 = __this->get_address_of__config_1();
			String_t* L_5 = L_4->get_filePath_1();
			NullCheck(L_3);
			bool L_6;
			L_6 = Dictionary_2_Remove_m6A09347EE546195FAC512F04949D3E29F2B7F178(L_3, L_5, /*hidden argument*/Dictionary_2_Remove_m6A09347EE546195FAC512F04949D3E29F2B7F178_RuntimeMethod_var);
			// SaveDownloads();
			BackgroundDownload_SaveDownloads_mCF1187954E571BC3644C6B18884B3314742F0635(/*hidden argument*/NULL);
			// if (_status == BackgroundDownloadStatus.Downloading)
			int32_t L_7 = __this->get__status_2();
			if (L_7)
			{
				goto IL_004a;
			}
		}

IL_0038:
		{
			// _status = BackgroundDownloadStatus.Failed;
			__this->set__status_2(2);
			// _error = "Aborted";
			__this->set__error_3(_stringLiteral36BC5D2DBDEEB9B26473F93B3E2F70580021C2F9);
		}

IL_004a:
		{
			// }
			IL2CPP_LEAVE(0x56, FINALLY_004c);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{// begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_0055;
			}
		}

IL_004f:
		{
			Type_t * L_9 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		}

IL_0055:
		{
			IL2CPP_END_FINALLY(76)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.BackgroundDownload::LoadDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload_LoadDownloads_m01D12A76F9406F00D96E7144C1F70A7E64CFEA32 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_downloads == null)
		Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_0 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _downloads = BackgroundDownloadimpl.LoadDownloads();
		Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_1;
		L_1 = BackgroundDownloadiOS_LoadDownloads_m73412DA0F74A88EBA2AF3F93422444E52A64C972(/*hidden argument*/NULL);
		((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->set__downloads_0(L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void Unity.Networking.BackgroundDownload::SaveDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownload_SaveDownloads_mCF1187954E571BC3644C6B18884B3314742F0635 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BackgroundDownloadimpl.SaveDownloads(_downloads);
		Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_0 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974_il2cpp_TypeInfo_var))->get__downloads_0();
		BackgroundDownloadiOS_SaveDownloads_m38A6FEE95D5E63951BCA2ECE0842B67DCFAACB76(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Networking.BackgroundDownloadConfig
IL2CPP_EXTERN_C void BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshal_pinvoke(const BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054& unmarshaled, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_pinvoke& marshaled)
{
	Exception_t* ___url_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'url' of type 'BackgroundDownloadConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___url_0Exception, NULL);
}
IL2CPP_EXTERN_C void BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshal_pinvoke_back(const BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_pinvoke& marshaled, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054& unmarshaled)
{
	Exception_t* ___url_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'url' of type 'BackgroundDownloadConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___url_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Networking.BackgroundDownloadConfig
IL2CPP_EXTERN_C void BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshal_pinvoke_cleanup(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Networking.BackgroundDownloadConfig
IL2CPP_EXTERN_C void BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshal_com(const BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054& unmarshaled, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_com& marshaled)
{
	Exception_t* ___url_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'url' of type 'BackgroundDownloadConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___url_0Exception, NULL);
}
IL2CPP_EXTERN_C void BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshal_com_back(const BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_com& marshaled, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054& unmarshaled)
{
	Exception_t* ___url_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'url' of type 'BackgroundDownloadConfig': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___url_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Networking.BackgroundDownloadConfig
IL2CPP_EXTERN_C void BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshal_com_cleanup(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054_marshaled_com& marshaled)
{
}
// System.Void Unity.Networking.BackgroundDownloadConfig::AddRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59 (BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAD3BF926925BC89D9AD1ACE56DEDF384520DF88F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD845F5534A83773D83DCF9266831F6A79F0E11BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException("Header name cannot be empty");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71E625E45D727CF13B5F05E07DE2058F9024257E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (value == null)
		String_t* L_3 = ___value1;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		// throw new ArgumentNullException("Header value cannot be null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral309794FCD99CE5E70AC39ABA8DBF011AC4C6CF47)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (requestHeaders == null)
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_5 = __this->get_requestHeaders_3();
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		// requestHeaders = new Dictionary<string, List<string>>();
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_6 = (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *)il2cpp_codegen_object_new(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C(L_6, /*hidden argument*/Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C_RuntimeMethod_var);
		__this->set_requestHeaders_3(L_6);
	}

IL_0034:
	{
		// if (requestHeaders.TryGetValue(name, out values))
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_7 = __this->get_requestHeaders_3();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_mAD3BF926925BC89D9AD1ACE56DEDF384520DF88F(L_7, L_8, (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mAD3BF926925BC89D9AD1ACE56DEDF384520DF88F_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// values.Add(value);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = V_0;
		String_t* L_11 = ___value1;
		NullCheck(L_10);
		List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A(L_10, L_11, /*hidden argument*/List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var);
		return;
	}

IL_004c:
	{
		// values = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_12, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_12;
		// values.Add(value);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = V_0;
		String_t* L_14 = ___value1;
		NullCheck(L_13);
		List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A(L_13, L_14, /*hidden argument*/List_1_Add_mD8C90346622A7F72A072D319F0E2AE851BB5885A_RuntimeMethod_var);
		// requestHeaders[name] = values;
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_15 = __this->get_requestHeaders_3();
		String_t* L_16 = ___name0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = V_0;
		NullCheck(L_15);
		Dictionary_2_set_Item_mD845F5534A83773D83DCF9266831F6A79F0E11BD(L_15, L_16, L_17, /*hidden argument*/Dictionary_2_set_Item_mD845F5534A83773D83DCF9266831F6A79F0E11BD_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 *>(__this + _offset);
	BackgroundDownloadConfig_AddRequestHeader_m37EE0A534A94E9E53BC7DAFD022BC823E666DE59(_thisAdjusted, ___name0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Networking.BackgroundDownloadiOS::.ctor(Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS__ctor_mFBFBD485FE96E893ED098513F47158229EA02197 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m73E15E905DFF4BA246EB8ED39C9203C080C53DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6856A4E056EDF877D9D78094CACACD8A645EC1E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6A1D5267B49F39503A0BF02B983C18FA2EB5094A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m16CB99BBD7631726AD4A7050581910997AA197C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC3C92BFD7725EFE888D9CD9022D7FD8B62797903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t165535373A2C041075C388ED21DF73971A40816A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// : base(config)
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_0 = ___config0;
		BackgroundDownload__ctor_m750DBE9EDA03D3A681A8DAD9AD68EBF17DA24F4B(__this, L_0, /*hidden argument*/NULL);
		// var destDir = Path.GetDirectoryName(Path.Combine(Application.persistentDataPath, config.filePath));
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_2 = ___config0;
		String_t* L_3 = L_2.get_filePath_1();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (!Directory.Exists(destDir))
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		// Directory.CreateDirectory(destDir);
		String_t* L_8 = V_0;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_9;
		L_9 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_8, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// IntPtr request = UnityBackgroundDownloadCreateRequest(config.url.AbsoluteUri);
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_10 = ___config0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_11 = L_10.get_url_0();
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Uri_get_AbsoluteUri_mC494374C2A3B1DFC9C3DC6CCB8A8A758580C11DA(L_11, /*hidden argument*/NULL);
		intptr_t L_13;
		L_13 = BackgroundDownloadiOS_UnityBackgroundDownloadCreateRequest_m6EEF532588CEB27E2631500C53B2EC22C599748B(L_12, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_13;
		// if (config.requestHeaders != null)
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_14 = ___config0;
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_15 = L_14.get_requestHeaders_3();
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		// foreach (var header in config.requestHeaders)
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_16 = ___config0;
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_17 = L_16.get_requestHeaders_3();
		NullCheck(L_17);
		Enumerator_t165535373A2C041075C388ED21DF73971A40816A  L_18;
		L_18 = Dictionary_2_GetEnumerator_m73E15E905DFF4BA246EB8ED39C9203C080C53DB7(L_17, /*hidden argument*/Dictionary_2_GetEnumerator_m73E15E905DFF4BA246EB8ED39C9203C080C53DB7_RuntimeMethod_var);
		V_2 = L_18;
	}

IL_0051:
	try
	{// begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0053:
		{
			// foreach (var header in config.requestHeaders)
			KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  L_19;
			L_19 = Enumerator_get_Current_m6856A4E056EDF877D9D78094CACACD8A645EC1E4_inline((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m6856A4E056EDF877D9D78094CACACD8A645EC1E4_RuntimeMethod_var);
			V_3 = L_19;
			// if (header.Value != null)
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20;
			L_20 = KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_RuntimeMethod_var);
			if (!L_20)
			{
				goto IL_00a5;
			}
		}

IL_0064:
		{
			// foreach (var val in header.Value)
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21;
			L_21 = KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mC2476B38FA5CB1B8C7A113524E76499DB7127E9B_RuntimeMethod_var);
			NullCheck(L_21);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_22;
			L_22 = List_1_GetEnumerator_mC3C92BFD7725EFE888D9CD9022D7FD8B62797903(L_21, /*hidden argument*/List_1_GetEnumerator_mC3C92BFD7725EFE888D9CD9022D7FD8B62797903_RuntimeMethod_var);
			V_4 = L_22;
		}

IL_0072:
		try
		{// begin try (depth: 2)
			{
				goto IL_008c;
			}

IL_0074:
			{
				// foreach (var val in header.Value)
				String_t* L_23;
				L_23 = Enumerator_get_Current_m6A1D5267B49F39503A0BF02B983C18FA2EB5094A_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_get_Current_m6A1D5267B49F39503A0BF02B983C18FA2EB5094A_RuntimeMethod_var);
				V_5 = L_23;
				// UnityBackgroundDownloadAddRequestHeader(request, header.Key, val);
				intptr_t L_24 = V_1;
				String_t* L_25;
				L_25 = KeyValuePair_2_get_Key_m16CB99BBD7631726AD4A7050581910997AA197C7_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m16CB99BBD7631726AD4A7050581910997AA197C7_RuntimeMethod_var);
				String_t* L_26 = V_5;
				BackgroundDownloadiOS_UnityBackgroundDownloadAddRequestHeader_mE8F2BB541181DB394512042E3ABC457C3CB90949((intptr_t)L_24, L_25, L_26, /*hidden argument*/NULL);
			}

IL_008c:
			{
				// foreach (var val in header.Value)
				bool L_27;
				L_27 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0074;
				}
			}

IL_0095:
			{
				IL2CPP_LEAVE(0xA5, FINALLY_0097);
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0097;
		}

FINALLY_0097:
		{// begin finally (depth: 2)
			Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_4), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
			IL2CPP_END_FINALLY(151)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(151)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		}

IL_00a5:
		{
			// foreach (var header in config.requestHeaders)
			bool L_28;
			L_28 = Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0053;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00b0);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_2), /*hidden argument*/Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// _backend = UnityBackgroundDownloadStart(request, config.filePath);
		intptr_t L_29 = V_1;
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_30 = ___config0;
		String_t* L_31 = L_30.get_filePath_1();
		intptr_t L_32;
		L_32 = BackgroundDownloadiOS_UnityBackgroundDownloadStart_mAF60CC7472DEE451ED03ACB324DE7BF25BA84A72((intptr_t)L_29, L_31, /*hidden argument*/NULL);
		__this->set__backend_4((intptr_t)L_32);
		// }
		return;
	}
}
// System.Void Unity.Networking.BackgroundDownloadiOS::.ctor(System.IntPtr,Unity.Networking.BackgroundDownloadConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS__ctor_m018C4B7F51FD70CA09534A3371C4BD4C0DB39FFD (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, intptr_t ___backend0, BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  ___config1, const RuntimeMethod* method)
{
	{
		// : base(config)
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_0 = ___config1;
		BackgroundDownload__ctor_m750DBE9EDA03D3A681A8DAD9AD68EBF17DA24F4B(__this, L_0, /*hidden argument*/NULL);
		// _backend = backend;
		intptr_t L_1 = ___backend0;
		__this->set__backend_4((intptr_t)L_1);
		// }
		return;
	}
}
// Unity.Networking.BackgroundDownloadStatus Unity.Networking.BackgroundDownloadiOS::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_get_status_m6E859457E21CC6980620A18C177F74F10547CBD6 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method)
{
	{
		// public override BackgroundDownloadStatus status { get { UpdateStatus(); return base.status; } }
		BackgroundDownloadiOS_UpdateStatus_m6A32C9870479DE28E596437001C330278CCC60C6(__this, /*hidden argument*/NULL);
		// public override BackgroundDownloadStatus status { get { UpdateStatus(); return base.status; } }
		int32_t L_0;
		L_0 = BackgroundDownload_get_status_mB254D43CD711B56B8B13B51CE3A75FA20A70AE2D_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Unity.Networking.BackgroundDownloadiOS::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundDownloadiOS_get_keepWaiting_mBC221B57937D95C395FCDA3F9B25F262F58ADCB3 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method)
{
	{
		// UpdateStatus();
		BackgroundDownloadiOS_UpdateStatus_m6A32C9870479DE28E596437001C330278CCC60C6(__this, /*hidden argument*/NULL);
		// return _status == BackgroundDownloadStatus.Downloading;
		int32_t L_0 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)__this)->get__status_2();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload> Unity.Networking.BackgroundDownloadiOS::LoadDownloads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * BackgroundDownloadiOS_LoadDownloads_m73412DA0F74A88EBA2AF3F93422444E52A64C972 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3806D7E64F3D7465DB570C93FCCCC9E8B5191BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m79396C7ED1A38DCC2F04FF98D0AB29014D3BB012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * V_0 = NULL;
	int32_t V_1 = 0;
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	int32_t V_4 = 0;
	BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * V_7 = NULL;
	{
		// var downloads = new Dictionary<string, BackgroundDownload>();
		Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_0 = (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 *)il2cpp_codegen_object_new(Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3806D7E64F3D7465DB570C93FCCCC9E8B5191BCA(L_0, /*hidden argument*/Dictionary_2__ctor_m3806D7E64F3D7465DB570C93FCCCC9E8B5191BCA_RuntimeMethod_var);
		V_0 = L_0;
		// int numDownloads = UnityBackgroundDownloadGetCount();
		int32_t L_1;
		L_1 = BackgroundDownloadiOS_UnityBackgroundDownloadGetCount_m08643D6DE8E694069068D87001D56278E61DD69E(/*hidden argument*/NULL);
		V_1 = L_1;
		// if (numDownloads > 0)
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		// IntPtr[] loadedDownloads = new IntPtr[numDownloads];
		int32_t L_3 = V_1;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_4 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		// UnityBackgroundDownloadGetAll(loadedDownloads);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_5 = V_2;
		BackgroundDownloadiOS_UnityBackgroundDownloadGetAll_m7DDB58E3473945217704FE8498437CD9E55D852A(L_5, /*hidden argument*/NULL);
		// byte[] buffer = new byte[2048];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_3 = L_6;
		// for (int i = 0; i < numDownloads; ++i)
		V_4 = 0;
		goto IL_008f;
	}

IL_0030:
	{
		// IntPtr backend = loadedDownloads[i];
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		intptr_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// BackgroundDownloadConfig config = new BackgroundDownloadConfig();
		il2cpp_codegen_initobj((&V_5), sizeof(BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054 ));
		// int length = UnityBackgroundDownloadGetUrl(backend, buffer);
		intptr_t L_11 = (intptr_t)L_10;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_3;
		int32_t L_13;
		L_13 = BackgroundDownloadiOS_UnityBackgroundDownloadGetUrl_m015396E8D19215E279ABAF27EB34BE87D2364BCD((intptr_t)L_11, L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		// config.url = new Uri(MarshalObjCString(buffer, length));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_3;
		int32_t L_15 = V_6;
		String_t* L_16;
		L_16 = BackgroundDownloadiOS_MarshalObjCString_m15B72764AE3C8F8FD394A0F8BC8B5A2AF38C34F2(L_14, L_15, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_17 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_17, L_16, /*hidden argument*/NULL);
		(&V_5)->set_url_0(L_17);
		// length = UnityBackgroundDownloadGetFilePath(backend, buffer);
		intptr_t L_18 = (intptr_t)L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_3;
		int32_t L_20;
		L_20 = BackgroundDownloadiOS_UnityBackgroundDownloadGetFilePath_m549D83FA0F93972E1FC84EF231BE929E732716E0((intptr_t)L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		// config.filePath = MarshalObjCString(buffer, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = V_3;
		int32_t L_22 = V_6;
		String_t* L_23;
		L_23 = BackgroundDownloadiOS_MarshalObjCString_m15B72764AE3C8F8FD394A0F8BC8B5A2AF38C34F2(L_21, L_22, /*hidden argument*/NULL);
		(&V_5)->set_filePath_1(L_23);
		// var dl = new BackgroundDownloadiOS(backend, config);
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_24 = V_5;
		BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * L_25 = (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 *)il2cpp_codegen_object_new(BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42_il2cpp_TypeInfo_var);
		BackgroundDownloadiOS__ctor_m018C4B7F51FD70CA09534A3371C4BD4C0DB39FFD(L_25, (intptr_t)L_18, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// downloads[config.filePath] = dl;
		Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_26 = V_0;
		BackgroundDownloadConfig_t84118A53E65A4343441766565F04E4BF7749E054  L_27 = V_5;
		String_t* L_28 = L_27.get_filePath_1();
		BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * L_29 = V_7;
		NullCheck(L_26);
		Dictionary_2_set_Item_m79396C7ED1A38DCC2F04FF98D0AB29014D3BB012(L_26, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_m79396C7ED1A38DCC2F04FF98D0AB29014D3BB012_RuntimeMethod_var);
		// for (int i = 0; i < numDownloads; ++i)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_008f:
	{
		// for (int i = 0; i < numDownloads; ++i)
		int32_t L_31 = V_4;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0030;
		}
	}

IL_0094:
	{
		// return downloads;
		Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * L_33 = V_0;
		return L_33;
	}
}
// System.Void Unity.Networking.BackgroundDownloadiOS::SaveDownloads(System.Collections.Generic.Dictionary`2<System.String,Unity.Networking.BackgroundDownload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_SaveDownloads_m38A6FEE95D5E63951BCA2ECE0842B67DCFAACB76 (Dictionary_2_t72C4F6DF49BC81559D8220EF1F2829FB12507DB3 * ___downloads0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single Unity.Networking.BackgroundDownloadiOS::GetProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BackgroundDownloadiOS_GetProgress_m4FB6325FBD43FD0334DC084D2DCC79386A36D2AE (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_backend == IntPtr.Zero)
		intptr_t L_0 = __this->get__backend_4();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return 1.0f;
		return (1.0f);
	}

IL_0018:
	{
		// if (_status != BackgroundDownloadStatus.Downloading)
		int32_t L_2 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)__this)->get__status_2();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// return 1.0f;
		return (1.0f);
	}

IL_0026:
	{
		// return UnityBackgroundDownloadGetProgress(_backend);
		intptr_t L_3 = __this->get__backend_4();
		float L_4;
		L_4 = BackgroundDownloadiOS_UnityBackgroundDownloadGetProgress_mB7671C1E5574850F5145A642E038301BF6BDA366((intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.Networking.BackgroundDownloadiOS::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_Dispose_m298EEC1607E4BE05646C373AD9027B156E159381 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_backend != IntPtr.Zero)
		intptr_t L_0 = __this->get__backend_4();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// UnityBackgroundDownloadDestroy(_backend);
		intptr_t L_2 = __this->get__backend_4();
		BackgroundDownloadiOS_UnityBackgroundDownloadDestroy_mE7820A5EFBD8E45BE968C6E57830CB3A439F561A((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// base.Dispose();
		BackgroundDownload_Dispose_mF840FEAA807D0570DB040B882A010CB2F3F52850(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Networking.BackgroundDownloadiOS::UpdateStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UpdateStatus_m6A32C9870479DE28E596437001C330278CCC60C6 (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_backend == IntPtr.Zero)
		intptr_t L_0 = __this->get__backend_4();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// if (_status != BackgroundDownloadStatus.Downloading)
		int32_t L_2 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)__this)->get__status_2();
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		return;
	}

IL_001c:
	{
		// _status = (BackgroundDownloadStatus)UnityBackgroundDownloadGetStatus(_backend);
		intptr_t L_3 = __this->get__backend_4();
		int32_t L_4;
		L_4 = BackgroundDownloadiOS_UnityBackgroundDownloadGetStatus_m187A97FE1F3F9FEC7DE95ADC661BD51BE29B4B7F((intptr_t)L_3, /*hidden argument*/NULL);
		((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)__this)->set__status_2(L_4);
		// if (_status == BackgroundDownloadStatus.Failed)
		int32_t L_5 = ((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)__this)->get__status_2();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0042;
		}
	}
	{
		// _error = GetError();
		String_t* L_6;
		L_6 = BackgroundDownloadiOS_GetError_m325B926AAFE330ED7F2B2ACA29FB5425DBC6EFFD(__this, /*hidden argument*/NULL);
		((BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 *)__this)->set__error_3(L_6);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.String Unity.Networking.BackgroundDownloadiOS::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BackgroundDownloadiOS_GetError_m325B926AAFE330ED7F2B2ACA29FB5425DBC6EFFD (BackgroundDownloadiOS_t1DA305CF824677A59A6EAC235B71D121B8781D42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (_backend == IntPtr.Zero)
		intptr_t L_0 = __this->get__backend_4();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0018:
	{
		// byte[] buffer = new byte[2048];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_0 = L_2;
		// int length = UnityBackgroundDownloadGetError(_backend, buffer);
		intptr_t L_3 = __this->get__backend_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		int32_t L_5;
		L_5 = BackgroundDownloadiOS_UnityBackgroundDownloadGetError_m9546120E1DE42F9CCAEC87932BBDE2A5D686BAE1((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// return MarshalObjCString(buffer, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_0;
		int32_t L_7 = V_1;
		String_t* L_8;
		L_8 = BackgroundDownloadiOS_MarshalObjCString_m15B72764AE3C8F8FD394A0F8BC8B5A2AF38C34F2(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Unity.Networking.BackgroundDownloadiOS::MarshalObjCString(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BackgroundDownloadiOS_MarshalObjCString_m15B72764AE3C8F8FD394A0F8BC8B5A2AF38C34F2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		// return Encoding.Unicode.GetString(buffer, 0, length);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_Unicode_mB0C6AE1F91373CEB8A5BC5466F6B8F92C0A398B9(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, 0, L_2);
		return L_3;
	}
}
// System.IntPtr Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadCreateRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BackgroundDownloadiOS_UnityBackgroundDownloadCreateRequest_m6EEF532588CEB27E2631500C53B2EC22C599748B (String_t* ___url0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);

	// Marshaling of parameter '___url0' to native representation
	Il2CppChar* ____url0_marshaled = NULL;
	if (___url0 != NULL)
	{
		____url0_marshaled = ___url0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadCreateRequest)(____url0_marshaled);

	return returnValue;
}
// System.Void Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadAddRequestHeader(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UnityBackgroundDownloadAddRequestHeader_mE8F2BB541181DB394512042E3ABC457C3CB90949 (intptr_t ___headers0, String_t* ___name1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppChar*, Il2CppChar*);

	// Marshaling of parameter '___name1' to native representation
	Il2CppChar* ____name1_marshaled = NULL;
	if (___name1 != NULL)
	{
		____name1_marshaled = ___name1->get_address_of_m_firstChar_1();
	}

	// Marshaling of parameter '___value2' to native representation
	Il2CppChar* ____value2_marshaled = NULL;
	if (___value2 != NULL)
	{
		____value2_marshaled = ___value2->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadAddRequestHeader)(___headers0, ____name1_marshaled, ____value2_marshaled);

}
// System.IntPtr Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadStart(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BackgroundDownloadiOS_UnityBackgroundDownloadStart_mAF60CC7472DEE451ED03ACB324DE7BF25BA84A72 (intptr_t ___request0, String_t* ___dest1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppChar*);

	// Marshaling of parameter '___dest1' to native representation
	Il2CppChar* ____dest1_marshaled = NULL;
	if (___dest1 != NULL)
	{
		____dest1_marshaled = ___dest1->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadStart)(___request0, ____dest1_marshaled);

	return returnValue;
}
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetStatus_m187A97FE1F3F9FEC7DE95ADC661BD51BE29B4B7F (intptr_t ___backend0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetStatus)(___backend0);

	return returnValue;
}
// System.Single Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetProgress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BackgroundDownloadiOS_UnityBackgroundDownloadGetProgress_mB7671C1E5574850F5145A642E038301BF6BDA366 (intptr_t ___backend0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetProgress)(___backend0);

	return returnValue;
}
// System.Void Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UnityBackgroundDownloadDestroy_mE7820A5EFBD8E45BE968C6E57830CB3A439F561A (intptr_t ___backend0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadDestroy)(___backend0);

}
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetCount_m08643D6DE8E694069068D87001D56278E61DD69E (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetCount)();

	return returnValue;
}
// System.Void Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetAll(System.IntPtr[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundDownloadiOS_UnityBackgroundDownloadGetAll_m7DDB58E3473945217704FE8498437CD9E55D852A (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___downloads0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Marshaling of parameter '___downloads0' to native representation
	intptr_t* ____downloads0_marshaled = NULL;
	if (___downloads0 != NULL)
	{
		____downloads0_marshaled = reinterpret_cast<intptr_t*>((___downloads0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetAll)(____downloads0_marshaled);

}
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetUrl(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetUrl_m015396E8D19215E279ABAF27EB34BE87D2364BCD (intptr_t ___backend0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*);

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetUrl)(___backend0, ____buffer1_marshaled);

	return returnValue;
}
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetFilePath(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetFilePath_m549D83FA0F93972E1FC84EF231BE929E732716E0 (intptr_t ___backend0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*);

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetFilePath)(___backend0, ____buffer1_marshaled);

	return returnValue;
}
// System.Int32 Unity.Networking.BackgroundDownloadiOS::UnityBackgroundDownloadGetError(System.IntPtr,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundDownloadiOS_UnityBackgroundDownloadGetError_m9546120E1DE42F9CCAEC87932BBDE2A5D686BAE1 (intptr_t ___backend0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*);

	// Marshaling of parameter '___buffer1' to native representation
	uint8_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<uint8_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityBackgroundDownloadGetError)(___backend0, ____buffer1_marshaled);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BackgroundDownload_get_status_mB254D43CD711B56B8B13B51CE3A75FA20A70AE2D_inline (BackgroundDownload_t0A58E6EA0B89E4527922547BF0DB83BC7271A974 * __this, const RuntimeMethod* method)
{
	{
		// public virtual BackgroundDownloadStatus status { get { return _status; } }
		int32_t L_0 = __this->get__status_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
