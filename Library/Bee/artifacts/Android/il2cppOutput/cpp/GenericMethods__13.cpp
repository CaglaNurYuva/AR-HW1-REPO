﻿#include "pch-cpp.hpp"





template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t311FE6772BE844D8DD6741B5F17F22B17B395341;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Func_1_t97C6124008260D65F78265F8B3965ACA776F0671;
struct Func_2_t8A65018A43098590B8FE77A424204D524E1CDFAE;
struct Func_2_t2894A0E655128DCA085A62AC7E91AA50E34051FE;
struct Func_2_t768E45AC224B8B0A2FF0AF51561075C9EA671111;
struct Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D;
struct Func_2_tDC72553AEF8707070A5FFB9D46F144F9BE06A9EC;
struct Func_2_tCF2EB71968412F781C874AB88FAFB49525BC76FA;
struct Func_2_t74E67EF682F267BFC373E1C713DA5D46A68F08E4;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B;
struct HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475;
struct IComparer_1_tFAD3AE9FE3CE1FB3CBB781C55DC57C986D71521E;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
struct List_1_t2A1B5F23CE88404F66E4A1AB7ADC7F78F18B6E9E;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_t86DE555F7234D971C3FF4F1C74A8631E8498BFEA;
struct List_1_t660C0DEB5CCE3DB654363B2C90CC563508E5B65B;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
struct List_1U5BU5D_tD7E8D354E002BAA9C366B7ED1871E18A44619421;
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE;
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49;
struct TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A;
struct TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D;
struct ReadActionJsonU5BU5D_t77929C62C9D95D0C5DF96AEB33748B4CD11EF89D;
struct WriteActionJsonU5BU5D_t028B15E467D7812D1C4C9B6F905E414007BEF46A;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct StateChangeMonitorListenerU5BU5D_tEF042EA5E57858FE7C48A9F1AF7A55B249ADB5A9;
struct RemoteInputDeviceU5BU5D_tB3C8B8C0AAE6347DB4E4D58D94254291C1FDD7F5;
struct BitRegionU5BU5D_t6D477477F7EB84242BA07FA65BC1BD6DA74A3D39;
struct DeviceJsonU5BU5D_tD8A3D5639BB87977D72F14C0AEDA8EBC7C625278;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED;
struct BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086;
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
struct DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE;
struct DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3;
struct DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A;
struct DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Entry_t475ED76E31923970E7F7A6522E570E7577C487B9;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventConsumer_t6D08A21A3FF574758C289118775786B6D35754F3;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct FieldInfo_t;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDtdEntityInfo_t554100CF6FA38D7516CEFDDA083D02E64A2D5C27;
struct IInputActionCollection_tCACBB682A8D400B755D43654E7FF9B4F3CECD3FD;
struct IInputStateChangeMonitor_t043FD8736A6F45C06A2FAFFC5BE70A565F999598;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418;
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
struct PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47;
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0;
struct SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37;
struct SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70;
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09;
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE;
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D;
struct BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A;
struct TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2;
struct NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49;
struct BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57;
struct PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31;
struct TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3;
struct NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F;

IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1;
IL2CPP_EXTERN_C String_t* _stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com;
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke;
struct BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com;
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com;
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com;
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke;
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com;
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke;
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525;
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com;
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke;
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D;
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_com;
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_pinvoke;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC 
{
	float ___sum;
	int32_t ___count;
};
struct EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB 
{
	union
	{
		struct
		{
		};
		uint8_t EmptyData_tC7B11A9E1949C5344FF2D2112FB7B4C384E675AE__padding[1];
	};
};
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	RuntimeObject* ___Value;
	int32_t ___HashCode;
	int32_t ___Next;
};
struct Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	bool ___value;
};
struct Entry_tA212E7034D981AC2F7E219C600769EE485919684 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int32_t ___value;
};
struct Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int64_t ___value;
};
struct Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct Entry_t532FECF491646E3372F9D145FEC277E0C5089CBC 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	float ___value;
};
struct Entry_tEF6BEA499CCB8C4F2AA974BD354B4E3BCFE5EC4B 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	uint64_t ___value;
};
struct Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 
{
	int32_t ___hashCode;
	int32_t ___next;
	int64_t ___key;
	RuntimeObject* ___value;
};
struct Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	bool ___value;
};
struct Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct Entry_tC44036EDE3BC084F847AF870E0FA6D39AA7CF48A 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	float ___value;
};
struct Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	int32_t ___value;
};
struct Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	RuntimeObject* ___value;
};
struct FieldDescription_tB07B9A8A36D288EF5A367E31BB9F960C9AFC5C84 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_t8A65018A43098590B8FE77A424204D524E1CDFAE* ___read;
	WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* ___write;
};
struct FieldDescription_tA20B2E21CC6343B934D81EE0323E68064202DC91 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_t2894A0E655128DCA085A62AC7E91AA50E34051FE* ___read;
	WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* ___write;
};
struct FieldDescription_tC0E3208384D85C2111E01E3E3643D049A5BF27C9 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_t768E45AC224B8B0A2FF0AF51561075C9EA671111* ___read;
	WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* ___write;
};
struct FieldDescription_tF966E1A895C9645EB70298559E8EE0DA6D25F751 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_tD4AE8636BC57AF9B1896888EB2D0CC7EA4CB9D4D* ___read;
	WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* ___write;
};
struct FieldDescription_t49EFF075153CA828C4A70A5FC0A95BABED258EB0 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_tDC72553AEF8707070A5FFB9D46F144F9BE06A9EC* ___read;
	WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* ___write;
};
struct FieldDescription_t7BF3A6BF777EDF76D9E119A6B3F5263B9F81262C 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_tCF2EB71968412F781C874AB88FAFB49525BC76FA* ___read;
	WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* ___write;
};
struct FieldDescription_t4EF9A6B0A2CFA67ACD13432B4F72EE5DABF216F4 
{
	String_t* ___name;
	String_t* ___ussName;
	Func_2_t74E67EF682F267BFC373E1C713DA5D46A68F08E4* ___read;
	WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* ___write;
};
struct HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	RuntimeObject* ___compiledGraph;
};
struct InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 
{
	int32_t ___length;
	uint64_t ___firstValue;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___additionalValues;
};
struct KVPair_2_t289A62AF6AB4F1FD80F1977C4D6C802052A8BADC 
{
	HashMapHelper_1_t51F726D16732CD16EFBBB3DE324B481A05388D2B* ___m_Data;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 
{
	int32_t ___key;
	bool ___value;
};
struct KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 
{
	int32_t ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 
{
	int32_t ___key;
	int64_t ___value;
};
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t891D449DA189ED572EFC0E4457FE9D980AF86555 
{
	int32_t ___key;
	float ___value;
};
struct KeyValuePair_2_tB80CFCE1FE63EA90A1922B957B5C34F1F5C3C606 
{
	int32_t ___key;
	uint64_t ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B 
{
	int32_t ___m_InstanceID;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct StructMultiKey_2_tBE8AC1F77387A29245D48FBA8C8C8E1763344DD5 
{
	RuntimeObject* ___Value1;
	RuntimeObject* ___Value2;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E 
{
	TextColorGradientU5BU5D_tA27A5E49640CF01334A10DBDBC959903AFBD941A* ___itemStack;
	int32_t ___index;
	TextColorGradient_t22D94E441E8E8CD772B966C167E5C0AEB0919D70* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField;
	RuntimeObject* ___m_Data;
	RuntimeObject* ___m_Children;
};
struct ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE 
{
	uint32_t ___start;
	uint32_t ___size;
	RuntimeObject* ___handle;
	bool ___shortLived;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke
{
	uint32_t ___start;
	uint32_t ___size;
	Il2CppIUnknown* ___handle;
	int32_t ___shortLived;
};
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com
{
	uint32_t ___start;
	uint32_t ___size;
	Il2CppIUnknown* ___handle;
	int32_t ___shortLived;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___flagValues;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___displayNames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___names;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tooltip;
	bool ___flags;
	Type_t* ___underlyingType;
	bool ___unsigned;
	bool ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_pinvoke
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	char** ___displayNames;
	char** ___names;
	char** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8_marshaled_com
{
	EnumU5BU5D_t6106A94708E3435454078BF14FA50152B7301912* ___values;
	Il2CppSafeArray* ___flagValues;
	Il2CppChar** ___displayNames;
	Il2CppChar** ___names;
	Il2CppChar** ___tooltip;
	int32_t ___flags;
	Type_t* ___underlyingType;
	int32_t ___unsigned;
	int32_t ___serializable;
};
struct FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct GlyphAnchorPoint_t1E0A7753CCCC41F22D3C408C4F96DDEC70291929 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate;
	float ___m_YCoordinate;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 
{
	int32_t ___m_Id;
	int32_t ___m_Version;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	String_t* ___m_InterfaceName;
	String_t* ___m_DeviceClass;
	String_t* ___m_Manufacturer;
	String_t* ___m_Product;
	String_t* ___m_Serial;
	String_t* ___m_Version;
	String_t* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName;
	char* ___m_DeviceClass;
	char* ___m_Manufacturer;
	char* ___m_Product;
	char* ___m_Serial;
	char* ___m_Version;
	char* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName;
	Il2CppChar* ___m_DeviceClass;
	Il2CppChar* ___m_Manufacturer;
	Il2CppChar* ___m_Product;
	Il2CppChar* ___m_Serial;
	Il2CppChar* ___m_Version;
	Il2CppChar* ___m_Capabilities;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302 
{
	String_t* ___m_ApiName;
	uint64_t ___m_Handle;
};
struct InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302_marshaled_pinvoke
{
	char* ___m_ApiName;
	uint64_t ___m_Handle;
};
struct InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302_marshaled_com
{
	Il2CppChar* ___m_ApiName;
	uint64_t ___m_Handle;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct MarkPositionAdjustment_tEE7CE316B8F61A7D6725524435B6363E849C62ED 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment;
	float ___m_YPositionAdjustment;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_pinvoke
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshaled_com
{
	int32_t ___index;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 
{
	uint32_t ___m_Bits;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 
{
	int32_t ___tileX;
	int32_t ___tileZ;
};
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	int32_t ___m_Index;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 
{
	float ___m0;
	float ___m1;
	float ___m2;
	float ___m3;
	float ___m4;
	float ___m5;
	float ___m6;
	float ___m7;
	float ___m8;
	float ___m9;
	float ___m10;
	float ___m11;
	float ___m12;
	float ___m13;
	float ___m14;
	float ___m15;
};
struct VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117 
{
	String_t* ___StateName;
};
struct VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117_marshaled_pinvoke
{
	char* ___StateName;
};
struct VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117_marshaled_com
{
	Il2CppChar* ___StateName;
};
struct VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 
{
	float ___x;
	float ___y;
};
struct VuVector2I_t6E61240FAD857B768B44FED1EF11930DE260E8BE 
{
	int32_t ___x;
	int32_t ___y;
};
struct VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 
{
	float ___x;
	float ___y;
	float ___z;
};
struct WordInfo_tA466206097891A5A2590896EE164AFC406EB060D 
{
	int32_t ___firstCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___characterCount;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA 
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	String_t* ____value;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	char* ____value;
};
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info;
	uint16_t ____idxSibling;
	uint16_t ____idxParent;
	uint16_t ____idxSimilar;
	uint16_t ____posOffset;
	uint32_t ____props;
	Il2CppChar* ____value;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page;
	int32_t ____idx;
};
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page;
	int32_t ____idx;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int4_tBA77D4945786DE82C3A487B33955EA1004996052 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D 
{
	Type_t* ___type;
	int32_t ___index;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshaled_pinvoke
{
	Type_t* ___type;
	int32_t ___index;
};
struct AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_marshaled_com
{
	Type_t* ___type;
	int32_t ___index;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	int32_t ___valueIndex;
	int32_t ___matchedVariableCount;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x;
	uint16_t ___y;
	int32_t ___freeSlots;
};
struct TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 
{
	int32_t ___Start;
	int32_t ___End;
	int32_t ___Count;
	int32_t ___IndexStart;
	int32_t ___IndexEnd;
};
struct CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9 
{
	String_t* ___name;
	float ___sideLength;
	float ___topDiameter;
	float ___bottomDiameter;
	String_t* ___previewSide;
	String_t* ___previewTop;
	String_t* ___previewBottom;
};
struct CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9_marshaled_pinvoke
{
	char* ___name;
	float ___sideLength;
	float ___topDiameter;
	float ___bottomDiameter;
	char* ___previewSide;
	char* ___previewTop;
	char* ___previewBottom;
};
struct CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9_marshaled_com
{
	Il2CppChar* ___name;
	float ___sideLength;
	float ___topDiameter;
	float ___bottomDiameter;
	Il2CppChar* ___previewSide;
	Il2CppChar* ___previewTop;
	Il2CppChar* ___previewBottom;
};
struct MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD 
{
	List_1_t86DE555F7234D971C3FF4F1C74A8631E8498BFEA* ___parts;
};
struct MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD_marshaled_pinvoke
{
	List_1_t86DE555F7234D971C3FF4F1C74A8631E8498BFEA* ___parts;
};
struct MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD_marshaled_com
{
	List_1_t86DE555F7234D971C3FF4F1C74A8631E8498BFEA* ___parts;
};
struct Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC 
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	bool ___isSet;
};
struct Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC_marshaled_pinvoke
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___isSet;
};
struct Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC_marshaled_com
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___isSet;
};
struct ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4 
{
	Type_t* ___SourceType;
	Type_t* ___DestinationType;
};
struct ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4_marshaled_pinvoke
{
	Type_t* ___SourceType;
	Type_t* ___DestinationType;
};
struct ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4_marshaled_com
{
	Type_t* ___SourceType;
	Type_t* ___DestinationType;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393 
{
	Dictionary_2_t311FE6772BE844D8DD6741B5F17F22B17B395341* ___m_BindingPerId;
	List_1_t660C0DEB5CCE3DB654363B2C90CC563508E5B65B* ___m_Bindings;
};
struct BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393_marshaled_pinvoke
{
	Dictionary_2_t311FE6772BE844D8DD6741B5F17F22B17B395341* ___m_BindingPerId;
	List_1_t660C0DEB5CCE3DB654363B2C90CC563508E5B65B* ___m_Bindings;
};
struct BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393_marshaled_com
{
	Dictionary_2_t311FE6772BE844D8DD6741B5F17F22B17B395341* ___m_BindingPerId;
	List_1_t660C0DEB5CCE3DB654363B2C90CC563508E5B65B* ___m_Bindings;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_marshaled_pinvoke
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_marshaled_com
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column;
	String_t* ____error;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshaled_pinvoke
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column;
	char* ____error;
};
struct ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_marshaled_com
{
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column;
	Il2CppChar* ____error;
};
struct DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D 
{
	int32_t ___chunkIndex;
	int32_t ___arrayIndex;
	int32_t ___version;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk;
	int32_t ___previousChunkIndex;
	bool ___valid;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshaled_pinvoke
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk;
	int32_t ___previousChunkIndex;
	int32_t ___valid;
};
struct CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_marshaled_com
{
	DecalEntityChunk_t2CDCBFA35711DA074631D26572EF9755A3AD740C* ___entityChunk;
	DecalCachedChunk_tDEF493C8A3A1F442BDEC1794BDDA0996B32DCACE* ___cachedChunk;
	DecalCulledChunk_tFD4472F0ADDD173C7B13E8B0529983E745F12ED3* ___culledChunk;
	DecalDrawCallChunk_tBD0491A1B0B7D19DF01A5C9EDE0A40CBEDBF7A3A* ___drawCallChunk;
	int32_t ___previousChunkIndex;
	int32_t ___valid;
};
struct AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C 
{
	int32_t ___vertexCount;
	int32_t ___indexCount;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_pinvoke
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshaled_com
{
	uint32_t ___m_GateCount;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___m_Queue;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 
{
	int32_t ___DefaultActionCategories;
	int32_t ___DefaultActionAtTargetCategories;
	int32_t ___HandleEventTrickleDownCategories;
	int32_t ___HandleEventBubbleUpCategories;
};
struct BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929 
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___nearestSamplerPass;
	int32_t ___bilinearSamplerPass;
};
struct BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___nearestSamplerPass;
	int32_t ___bilinearSamplerPass;
};
struct BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___nearestSamplerPass;
	int32_t ___bilinearSamplerPass;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FocusedElement;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FocusedElement;
};
struct FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_SubTreeRoot;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FocusedElement;
};
struct SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A 
{
	int32_t ___packetCount;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	RuntimeObject* ___key;
	RuntimeObject* ___val;
	int32_t ___hash_coll;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___val;
	int32_t ___hash_coll;
};
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key;
	Il2CppIUnknown* ___val;
	int32_t ___hash_coll;
};
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A 
{
	String_t* ___name;
	String_t* ___id;
	String_t* ___path;
	String_t* ___interactions;
	String_t* ___processors;
	String_t* ___groups;
	String_t* ___action;
	bool ___isComposite;
	bool ___isPartOfComposite;
};
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke
{
	char* ___name;
	char* ___id;
	char* ___path;
	char* ___interactions;
	char* ___processors;
	char* ___groups;
	char* ___action;
	int32_t ___isComposite;
	int32_t ___isPartOfComposite;
};
struct BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___id;
	Il2CppChar* ___path;
	Il2CppChar* ___interactions;
	Il2CppChar* ___processors;
	Il2CppChar* ___groups;
	Il2CppChar* ___action;
	int32_t ___isComposite;
	int32_t ___isPartOfComposite;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 
{
	String_t* ___action;
	String_t* ___id;
	String_t* ___path;
	String_t* ___interactions;
	String_t* ___processors;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_marshaled_pinvoke
{
	char* ___action;
	char* ___id;
	char* ___path;
	char* ___interactions;
	char* ___processors;
};
struct BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_marshaled_com
{
	Il2CppChar* ___action;
	Il2CppChar* ___id;
	Il2CppChar* ___path;
	Il2CppChar* ___interactions;
	Il2CppChar* ___processors;
};
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 
{
	String_t* ___name;
	String_t* ___type;
	String_t* ___id;
	String_t* ___expectedControlType;
	String_t* ___expectedControlLayout;
	String_t* ___processors;
	String_t* ___interactions;
	bool ___passThrough;
	bool ___initialStateCheck;
	BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D* ___bindings;
};
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke
{
	char* ___name;
	char* ___type;
	char* ___id;
	char* ___expectedControlType;
	char* ___expectedControlLayout;
	char* ___processors;
	char* ___interactions;
	int32_t ___passThrough;
	int32_t ___initialStateCheck;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke* ___bindings;
};
struct ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___type;
	Il2CppChar* ___id;
	Il2CppChar* ___expectedControlType;
	Il2CppChar* ___expectedControlLayout;
	Il2CppChar* ___processors;
	Il2CppChar* ___interactions;
	int32_t ___passThrough;
	int32_t ___initialStateCheck;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com* ___bindings;
};
struct ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 
{
	String_t* ___name;
	String_t* ___id;
	ReadActionJsonU5BU5D_t77929C62C9D95D0C5DF96AEB33748B4CD11EF89D* ___actions;
	BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D* ___bindings;
};
struct ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_marshaled_pinvoke
{
	char* ___name;
	char* ___id;
	ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_pinvoke* ___actions;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke* ___bindings;
};
struct ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___id;
	ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_marshaled_com* ___actions;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com* ___bindings;
};
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A 
{
	String_t* ___name;
	String_t* ___type;
	String_t* ___id;
	String_t* ___expectedControlType;
	String_t* ___processors;
	String_t* ___interactions;
	bool ___initialStateCheck;
};
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_pinvoke
{
	char* ___name;
	char* ___type;
	char* ___id;
	char* ___expectedControlType;
	char* ___processors;
	char* ___interactions;
	int32_t ___initialStateCheck;
};
struct WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___type;
	Il2CppChar* ___id;
	Il2CppChar* ___expectedControlType;
	Il2CppChar* ___processors;
	Il2CppChar* ___interactions;
	int32_t ___initialStateCheck;
};
struct WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 
{
	String_t* ___name;
	String_t* ___id;
	WriteActionJsonU5BU5D_t028B15E467D7812D1C4C9B6F905E414007BEF46A* ___actions;
	BindingJsonU5BU5D_t29AC06DF255ED44F4154C5D663FA094BE8A65B5D* ___bindings;
};
struct WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_marshaled_pinvoke
{
	char* ___name;
	char* ___id;
	WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_pinvoke* ___actions;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_pinvoke* ___bindings;
};
struct WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___id;
	WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_marshaled_com* ___actions;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_marshaled_com* ___bindings;
};
struct Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 
{
	RuntimeObject* ___instance;
	FieldInfo_t* ___field;
	int32_t ___bindingIndex;
};
struct Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_marshaled_pinvoke
{
	Il2CppIUnknown* ___instance;
	FieldInfo_t* ___field;
	int32_t ___bindingIndex;
};
struct Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_marshaled_com
{
	Il2CppIUnknown* ___instance;
	FieldInfo_t* ___field;
	int32_t ___bindingIndex;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 
{
	int32_t ___U3CpartU3Ek__BackingField;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 
{
	String_t* ___name;
	String_t* ___bindingGroup;
	DeviceJsonU5BU5D_tD8A3D5639BB87977D72F14C0AEDA8EBC7C625278* ___devices;
};
struct SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_marshaled_pinvoke
{
	char* ___name;
	char* ___bindingGroup;
	DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke* ___devices;
};
struct SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___bindingGroup;
	DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com* ___devices;
};
#pragma pack(push, tp, 1)
struct ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 
{
	uint16_t ___endBitOffset;
	int16_t ___leftChildIndex;
	uint16_t ___controlStartIndex;
	uint8_t ___controlCount;
};
#pragma pack(pop, tp)
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	uint32_t ___groupIndex;
};
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	uint32_t ___groupIndex;
};
struct StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	uint32_t ___groupIndex;
};
struct StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	double ___time;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	int32_t ___timerIndex;
};
struct StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	double ___time;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	int32_t ___timerIndex;
};
struct StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control;
	double ___time;
	RuntimeObject* ___monitor;
	int64_t ___monitorIndex;
	int32_t ___timerIndex;
};
struct RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 
{
	int32_t ___senderId;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___layouts;
	RemoteInputDeviceU5BU5D_tB3C8B8C0AAE6347DB4E4D58D94254291C1FDD7F5* ___devices;
};
struct RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_marshaled_pinvoke
{
	int32_t ___senderId;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke* ___layouts;
	RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke* ___devices;
};
struct RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_marshaled_com
{
	int32_t ___senderId;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com* ___layouts;
	RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com* ___devices;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 
{
	int32_t ___refCount;
	bool ___enabledByInputModule;
};
struct InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_marshaled_pinvoke
{
	int32_t ___refCount;
	int32_t ___enabledByInputModule;
};
struct InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_marshaled_com
{
	int32_t ___refCount;
	int32_t ___enabledByInputModule;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C 
{
	uint32_t ___bitOffset;
	uint32_t ___sizeInBits;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 
{
	MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50* ___callback;
	RuntimeObject* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_com
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D 
{
	bool ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_pinvoke
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_marshaled_com
{
	int32_t ___valid;
	int32_t ___lastUsedFrameIndex;
	int32_t ___viewInstanceID;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E 
{
	int32_t ____int32;
	String_t* ____string;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_pinvoke
{
	int32_t ____int32;
	char* ____string;
};
struct FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshaled_com
{
	int32_t ____int32;
	Il2CppChar* ____string;
};
struct BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E 
{
	int32_t ____SharedDestChunksOffset;
	int32_t ____L0L1rxOffset;
	int32_t ____L1GryOffset;
	int32_t ____L1BrzOffset;
	int32_t ____ValidityOffset;
	int32_t ____ProbeOcclusionOffset;
	int32_t ____SkyOcclusionOffset;
	int32_t ____SkyShadingDirectionOffset;
	int32_t ____L2_0Offset;
	int32_t ____L2_1Offset;
	int32_t ____L2_2Offset;
	int32_t ____L2_3Offset;
	int32_t ____L0Size;
	int32_t ____L0ProbeSize;
	int32_t ____L1Size;
	int32_t ____L1ProbeSize;
	int32_t ____ValiditySize;
	int32_t ____ValidityProbeSize;
	int32_t ____ProbeOcclusionSize;
	int32_t ____ProbeOcclusionProbeSize;
	int32_t ____SkyOcclusionSize;
	int32_t ____SkyOcclusionProbeSize;
	int32_t ____SkyShadingDirectionSize;
	int32_t ____SkyShadingDirectionProbeSize;
	int32_t ____L2Size;
	int32_t ____L2ProbeSize;
	int32_t ____ProbeCountInChunkLine;
	int32_t ____ProbeCountInChunkSlice;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 
{
	String_t* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_marshaled_pinvoke
{
	char* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_marshaled_com
{
	Il2CppChar* ___sceneGUID;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___cellList;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C 
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_pinvoke
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_com
{
	int32_t ___sceneHash;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellDataAsset;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___cellOptionalDataAsset;
};
struct StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A 
{
	int32_t ___offset;
	int32_t ___elementCount;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 
{
	Il2CppChar ___ChMin;
	Il2CppChar ___ChMax;
	int32_t ___LcOp;
	int32_t ___Data;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_pinvoke
{
	uint8_t ___ChMin;
	uint8_t ___ChMax;
	int32_t ___LcOp;
	int32_t ___Data;
};
struct LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshaled_com
{
	uint8_t ___ChMin;
	uint8_t ___ChMax;
	int32_t ___LcOp;
	int32_t ___Data;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	bool ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_pinvoke
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_marshaled_com
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producers;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumers;
	int32_t ___refCount;
	int32_t ___imported;
};
struct ParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C 
{
	int32_t ___index;
	int32_t ___gpuAddress;
	int32_t ___uintOffset;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C 
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_marshaled_pinvoke
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_marshaled_com
{
	List_1_t7253D93BC3B5BDCC4F6B9FD6460CF1AEC4C0EAD5* ___tags;
	int32_t ___start;
	int32_t ___end;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
};
struct HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this_;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshaled_pinvoke
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this_;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight;
};
struct SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_marshaled_com
{
	SequenceNode_t49ACD22961E06675458A60447D7AA32B26835AB0* ___this_;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastpos;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___lastposLeft;
	BitSet_t89F906D542C052F4565FBEF32E1E9713B966026B* ___firstposRight;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 
{
	bool ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_pinvoke
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_marshaled_com
{
	int32_t ___isActive;
	int32_t ___viewInstanceID;
	int32_t ___planeCount;
	int32_t ___lastUsedFrameIndex;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mediaQueries;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	char** ___mediaQueries;
};
struct ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___styleSheet;
	Il2CppChar** ___mediaQueries;
};
struct SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 
{
	int32_t ___sheetInstanceID;
	int32_t ___index;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandleU5BU5D_t66B7732469E9E30B1FB9A6E386315DAB36914ADE* ___handles;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* ___handles;
};
struct FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2 
{
	String_t* ___familyName;
	String_t* ___styleName;
	int32_t ___faceIndex;
	String_t* ___filePath;
	uint64_t ___hashCode;
};
struct FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2_marshaled_pinvoke
{
	char* ___familyName;
	char* ___styleName;
	int32_t ___faceIndex;
	char* ___filePath;
	uint64_t ___hashCode;
};
struct FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2_marshaled_com
{
	Il2CppChar* ___familyName;
	Il2CppChar* ___styleName;
	int32_t ___faceIndex;
	Il2CppChar* ___filePath;
	uint64_t ___hashCode;
};
struct FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F 
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
};
struct FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F_marshaled_pinvoke
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
};
struct FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F_marshaled_com
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
};
struct ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94 
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___allocations;
};
struct ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94_marshaled_pinvoke
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___allocations;
};
struct ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94_marshaled_com
{
	List_1_t6D4D3AAF46D9E2944E578579CE720FABFD990C26* ___allocations;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF 
{
	String_t* ___m_ElementName;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_NamesPath;
	String_t* ___m_AttributeName;
	String_t* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_pinvoke
{
	char* ___m_ElementName;
	char** ___m_NamesPath;
	char* ___m_AttributeName;
	char* ___m_Value;
};
struct AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshaled_com
{
	Il2CppChar* ___m_ElementName;
	Il2CppChar** ___m_NamesPath;
	Il2CppChar* ___m_AttributeName;
	Il2CppChar* ___m_Value;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_marshaled_pinvoke
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_marshaled_com
{
	int32_t ___m_ElementId;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_ElementIdsPath;
	UxmlSerializedData_t5BDDB665835158F6BC2975E086891B337C3BB706* ___m_SerializedData;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_pinvoke
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshaled_com
{
	int32_t ___nameHashCode;
	int32_t ___familyNameHashCode;
	int32_t ___styleNameHashCode;
	int64_t ___familyNameAndStyleHashCode;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___fontAsset;
};
struct SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 
{
	float ___x;
	float ___y;
	float ___w;
	float ___h;
};
struct SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 
{
	float ___w;
	float ___h;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	bool ___dynamic;
	int32_t ___refCount;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___dynamic;
	int32_t ___refCount;
};
struct TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___dynamic;
	int32_t ___refCount;
};
struct ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED 
{
	Type_t* ___SourceType;
	Type_t* ___DestinationType;
};
struct ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED_marshaled_pinvoke
{
	Type_t* ___SourceType;
	Type_t* ___DestinationType;
};
struct ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED_marshaled_com
{
	Type_t* ___SourceType;
	Type_t* ___DestinationType;
};
struct DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B 
{
	uint32_t ___handle;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	List_1U5BU5D_tD7E8D354E002BAA9C366B7ED1871E18A44619421* ___commandLists;
};
struct DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshaled_pinvoke
{
	uint32_t ___handle;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	List_1_t2A1B5F23CE88404F66E4A1AB7ADC7F78F18B6E9E** ___commandLists;
};
struct DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshaled_com
{
	uint32_t ___handle;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	List_1_t2A1B5F23CE88404F66E4A1AB7ADC7F78F18B6E9E** ___commandLists;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___requestVersion;
	int32_t ___writeVersion;
};
struct Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99_marshaled_pinvoke
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___requestVersion;
	int32_t ___writeVersion;
};
struct Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99_marshaled_com
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___requestVersion;
	int32_t ___writeVersion;
};
struct TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	int32_t ___BufferLength;
};
struct TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	int32_t ___BufferLength;
};
struct TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture;
	int32_t ___BufferLength;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 
{
	String_t* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_pinvoke
{
	char* ___name;
	int32_t ___insertionPointId;
};
struct SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___insertionPointId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 
{
	String_t* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_pinvoke
{
	char* ___slotName;
	int32_t ___assetId;
};
struct SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshaled_com
{
	Il2CppChar* ___slotName;
	int32_t ___assetId;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 
{
	String_t* ___alias;
	String_t* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_pinvoke
{
	char* ___alias;
	char* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshaled_com
{
	Il2CppChar* ___alias;
	Il2CppChar* ___path;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___asset;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_pinvoke
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_com
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 
{
	RuntimeObject* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_pinvoke
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_marshaled_com
{
	Il2CppIUnknown* ___source;
	int64_t ___version;
};
struct NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 
{
	String_t* ___prefix;
	String_t* ___uri;
	int32_t ___scopeId;
	int32_t ___previousNsIndex;
};
struct NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshaled_pinvoke
{
	char* ___prefix;
	char* ___uri;
	int32_t ___scopeId;
	int32_t ___previousNsIndex;
};
struct NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___uri;
	int32_t ___scopeId;
	int32_t ___previousNsIndex;
};
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 
{
	String_t* ___name;
	String_t* ___value;
};
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_pinvoke
{
	char* ___name;
	char* ___value;
};
struct VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___value;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD 
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_pinvoke
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_marshaled_com
{
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname;
	XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D* ___xso;
};
struct QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 
{
	String_t* ___prefix;
	String_t* ___localname;
	String_t* ___namespaceUri;
};
struct QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_pinvoke
{
	char* ___prefix;
	char* ___localname;
	char* ___namespaceUri;
};
struct QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___localname;
	Il2CppChar* ___namespaceUri;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___chars;
	int32_t ___charPos;
	int32_t ___charsUsed;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	bool ___appendMode;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes;
	int32_t ___bytePos;
	int32_t ___bytesUsed;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader;
	int32_t ___lineNo;
	int32_t ___lineStartPos;
	String_t* ___baseUriStr;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri;
	bool ___isEof;
	bool ___isStreamEof;
	RuntimeObject* ___entity;
	int32_t ___entityId;
	bool ___eolNormalized;
	bool ___entityResolvedManually;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshaled_pinvoke
{
	uint8_t* ___chars;
	int32_t ___charPos;
	int32_t ___charsUsed;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	int32_t ___appendMode;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder;
	Il2CppSafeArray* ___bytes;
	int32_t ___bytePos;
	int32_t ___bytesUsed;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader;
	int32_t ___lineNo;
	int32_t ___lineStartPos;
	char* ___baseUriStr;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri;
	int32_t ___isEof;
	int32_t ___isStreamEof;
	RuntimeObject* ___entity;
	int32_t ___entityId;
	int32_t ___eolNormalized;
	int32_t ___entityResolvedManually;
};
struct ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_marshaled_com
{
	uint8_t* ___chars;
	int32_t ___charPos;
	int32_t ___charsUsed;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding;
	int32_t ___appendMode;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___decoder;
	Il2CppSafeArray* ___bytes;
	int32_t ___bytePos;
	int32_t ___bytesUsed;
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader;
	int32_t ___lineNo;
	int32_t ___lineStartPos;
	Il2CppChar* ___baseUriStr;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri;
	int32_t ___isEof;
	int32_t ___isStreamEof;
	RuntimeObject* ___entity;
	int32_t ___entityId;
	int32_t ___eolNormalized;
	int32_t ___entityResolvedManually;
};
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 
{
	String_t* ___prefix;
	String_t* ___ns;
	bool ___declared;
	int32_t ___prevNsIndex;
};
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_pinvoke
{
	char* ___prefix;
	char* ___ns;
	int32_t ___declared;
	int32_t ___prevNsIndex;
};
struct Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___ns;
	int32_t ___declared;
	int32_t ___prevNsIndex;
};
struct AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 
{
	String_t* ___prefix;
	String_t* ___namespaceUri;
	String_t* ___localName;
	int32_t ___prev;
};
struct AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshaled_pinvoke
{
	char* ___prefix;
	char* ___namespaceUri;
	char* ___localName;
	int32_t ___prev;
};
struct AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___namespaceUri;
	Il2CppChar* ___localName;
	int32_t ___prev;
};
struct AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 
{
	int32_t ___Depth;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___Node;
};
struct AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshaled_pinvoke
{
	int32_t ___Depth;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___Node;
};
struct AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_marshaled_com
{
	int32_t ___Depth;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___Node;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 
{
	String_t* ___displayName;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_pinvoke
{
	char* ___displayName;
	Il2CppMethodPointer ___action;
};
struct ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_marshaled_com
{
	Il2CppChar* ___displayName;
	Il2CppMethodPointer ___action;
};
struct PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 
{
	uint32_t ___Hi;
	uint64_t ___MidLo;
};
struct Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 
{
	Il2CppChar ___match;
	String_t* ___replacement;
};
struct Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshaled_pinvoke
{
	uint8_t ___match;
	char* ___replacement;
};
struct Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7_marshaled_com
{
	uint8_t ___match;
	Il2CppChar* ___replacement;
};
struct U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9__padding[256];
	};
};
struct U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8__padding[4096];
	};
};
struct U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156__padding[512];
	};
};
struct U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E__padding[1024];
	};
};
struct PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 
{
	Func_1_t97C6124008260D65F78265F8B3965ACA776F0671* ___factoryMethod;
	String_t* ___metadata;
};
struct PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_marshaled_pinvoke
{
	Il2CppMethodPointer ___factoryMethod;
	char* ___metadata;
};
struct PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_marshaled_com
{
	Il2CppMethodPointer ___factoryMethod;
	Il2CppChar* ___metadata;
};
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 
{
	String_t* ___devicePath;
	bool ___isOptional;
	bool ___isOR;
};
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_pinvoke
{
	char* ___devicePath;
	int32_t ___isOptional;
	int32_t ___isOR;
};
struct DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_marshaled_com
{
	Il2CppChar* ___devicePath;
	int32_t ___isOptional;
	int32_t ___isOR;
};
struct Capability_t1A686C4F719B0408BCBB428021405F440196E16E 
{
	String_t* ___path;
	String_t* ___value;
};
struct Capability_t1A686C4F719B0408BCBB428021405F440196E16E_marshaled_pinvoke
{
	char* ___path;
	char* ___value;
};
struct Capability_t1A686C4F719B0408BCBB428021405F440196E16E_marshaled_com
{
	Il2CppChar* ___path;
	Il2CppChar* ___value;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D 
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	String_t* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_pinvoke
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	char* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_marshaled_com
{
	int32_t ____index;
	int32_t ____stackDepth;
	int32_t ____continuationsDepth;
	Il2CppChar* ____name;
	Instruction_t7ED95EF62BBC5003D30C1CE0FF8B1D79105A8998* ____instruction;
};
struct U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015__padding[28];
	};
};
struct U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7__padding[28];
	};
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 
{
	String_t* ___name;
	bool ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	bool ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_pinvoke
{
	char* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___imported;
	int32_t ___creationPassIndex;
	int32_t ___releasePassIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___consumerList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___producerList;
	int32_t ___memoryless;
	TextureResourceData_t0714EB0BFE2BFB2FC4E0CCFFBFE5CAA6C4B53BE3* ___textureData;
	BufferResourceData_t0B823212ADCC9AA80412877B802DD43236781D57* ___bufferData;
};
struct U3C_StpSetupPerViewConstantsU3Ee__FixedBuffer_t9BB7998676CF28C673FFF3872BE1163DFEDAB3F6 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3C_StpSetupPerViewConstantsU3Ee__FixedBuffer_t9BB7998676CF28C673FFF3872BE1163DFEDAB3F6__padding[256];
	};
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 
{
	String_t* ___message;
	bool ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_pinvoke
{
	char* ___message;
	int32_t ___isCompatible;
};
struct PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_marshaled_com
{
	Il2CppChar* ___message;
	int32_t ___isCompatible;
};
struct Entry_tEA99553F325828A74A65B889F46BE09836044044 
{
	int32_t ___hashCode;
	int32_t ___next;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___key;
	RuntimeObject* ___value;
};
struct Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key;
	RuntimeObject* ___value;
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___key;
	uint32_t ___value;
};
struct Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF 
{
	int32_t ___hashCode;
	int32_t ___next;
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D 
{
	int32_t ___hashCode;
	int32_t ___next;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	int32_t ___value;
};
struct Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F 
{
	int32_t ___hashCode;
	int32_t ___next;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	RuntimeObject* ___value;
};
struct Entry_t36D9AC9C14DAB1152CB545EBA984280DC00BB831 
{
	int32_t ___hashCode;
	int32_t ___next;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___key;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value;
};
struct Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value;
};
struct Entry_t268E00F33ED8EA210E8206EC0EC0E0D0FA439804 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___value;
};
struct Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___value;
};
struct Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value;
};
struct Entry_t3931D073D20E5270318C5CBBF20CD9B44F0047B5 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___value;
};
struct Entry_t57FAB7B3B72CEF97C2C3195D29213CE2E994EB7E 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E ___value;
};
struct Entry_t6CB2C9C76B8422AA5DF5DD1E87052DD6EB445097 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___value;
};
struct Entry_t86463E0F155AA24243B749A6C95BB3067310256B 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F ___value;
};
struct Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value;
};
struct Entry_tDE3185C2F06F1AB3103EE59F89D5AE31F6D2AC60 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___value;
};
struct Entry_tE8CF104B482ED92A3BF31C2B151BD3FEBFAF2F6F 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___value;
};
struct Entry_t575ADA8FFB2EED66C64622ACC70ED8CF7A732FFA 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key;
	RuntimeObject* ___value;
};
struct Entry_t5DA42CAF95F196F03BDD802C9D4F704954B556AB 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key;
	PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 ___value;
};
struct Entry_t3D6F8281693147B14CFB23C071F35112EEE78B18 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___value;
};
struct Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___value;
};
struct Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 ___value;
};
struct Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___value;
};
struct Entry_t9C565819818CEE927F7310B20154140C74FF0587 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct Entry_t78A47A3F6CEEC34154BDF4FD6C3969CE5616A1B1 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9 ___value;
};
struct Entry_t71C45DDCCD78FD0E7AF3AF206A8A18DE08416B9A 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD ___value;
};
struct Entry_t0395BB83B858BE27C56AEF888748A3D53D50CA63 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393 ___value;
};
struct Entry_tE8A84B93BCCEA1FC321B6098FA0DDC8449273A50 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___value;
};
struct Entry_t24F25ECA3BDA03521151C33B3297BAAE878226BF 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 ___value;
};
struct Entry_t01E9E5E4C8A4A7369178E151EC69E96FBE005223 
{
	int32_t ___hashCode;
	int32_t ___next;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___key;
	RuntimeObject* ___value;
};
struct Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C 
{
	int32_t ___hashCode;
	int32_t ___next;
	TerrainTileCoord_t2181DDF40A8A428A84817957CB7FB19A314F4F09 ___key;
	RuntimeObject* ___value;
};
struct Entry_tFA80A0E5C486507679B91EED262F276050345D8A 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint64_t ___key;
	FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2 ___value;
};
struct Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 
{
	int32_t ___hashCode;
	int32_t ___next;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___key;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___value;
};
struct Entry_t26455ABD1A40D1C764F944F6727C5F1EB14C99B9 
{
	int32_t ___hashCode;
	int32_t ___next;
	ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4 ___key;
	RuntimeObject* ___value;
};
struct Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 
{
	int32_t ___hashCode;
	int32_t ___next;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___key;
	RuntimeObject* ___value;
};
struct Entry_t1F47B0D124BA50EA91FF4060DA20FC0C7A7002AA 
{
	int32_t ___hashCode;
	int32_t ___next;
	ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED ___key;
	RuntimeObject* ___value;
};
struct InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 
{
	int32_t ___length;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___firstValue;
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___additionalValues;
};
struct KeyValuePair_2_tAC0330F506B0E9163D3B28C7146DC5ACD338DC13 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t3F2A3CB7BBA975883A7BEA65F8283E2D7BE1E52B 
{
	StructMultiKey_2_tBE8AC1F77387A29245D48FBA8C8C8E1763344DD5 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE 
{
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 
{
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___key;
	uint32_t ___value;
};
struct KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 
{
	Guid_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	int32_t ___value;
};
struct KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 
{
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tCB5A489A71D852FC66BB97682513ACE12D6DA714 
{
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___key;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value;
};
struct KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD 
{
	int32_t ___key;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value;
};
struct KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F 
{
	int32_t ___key;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___value;
};
struct KeyValuePair_2_tCB001F11F43B16AB7AB558987DC896FEEC538FEC 
{
	int32_t ___key;
	HierarchyNode_t6A6A738223CC5D7FB463CAF6F379C48726891704 ___value;
};
struct KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 
{
	int32_t ___key;
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A ___value;
};
struct KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE 
{
	int32_t ___key;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value;
};
struct KeyValuePair_2_t758D218BF34F33D9F3457E619DC4B799BAE72E45 
{
	int32_t ___key;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___value;
};
struct KeyValuePair_2_t52A07580EAD838EA5B953EBA04EA6432B9CA4DAC 
{
	int32_t ___key;
	CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E ___value;
};
struct KeyValuePair_2_tDEBC563E5C12F27FFAE83443E53D915B13B50B7F 
{
	int32_t ___key;
	StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___value;
};
struct KeyValuePair_2_t2A4EA71F94B1445F8A1862CF71334E632EFDA513 
{
	int32_t ___key;
	FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F ___value;
};
struct KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A 
{
	int32_t ___key;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___value;
};
struct KeyValuePair_2_t7616DF3AFBD691862E103D736E4382E092597B82 
{
	int32_t ___key;
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___value;
};
struct Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE 
{
	bool ___hasValue;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___value;
};
struct Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C 
{
	bool ___hasValue;
	InputUserAccountHandle_t5776422AE54C62C20D681118AB41AEA387446302 ___value;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA 
{
	MaterialReferenceU5BU5D_t4A9B88114E223BD96CE5121053664023CE2DE07E* ___itemStack;
	int32_t ___index;
	MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26 ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Item2;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct ByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692 
{
	uint8_t ___value__;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	bool ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct CookieToken_t320BE5F5654B48CAE72D9844EE7C6EA0F70C9FEA 
{
	int32_t ___value__;
};
struct DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10 
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array;
	int32_t ___length;
};
struct DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_pinvoke
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array;
	int32_t ___length;
};
struct DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_com
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array;
	int32_t ___length;
};
struct DynamicResScalePolicyType_tBFCAFCA277DD1112F688D4556F28D7B48E2C3A0D 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FeatureType_t794EFAD24C687FA0CDC5A313581A39F5CB61CC41 
{
	int32_t ___value__;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontStyles_t284AF8C10031F4774DF8BC8DE6DF9EC11EE14668 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct GraphicsFenceType_t8C3F229DC2BE62FA78724BA3D35FFCB3A64F7E0A 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Offset_tF4AF8F62C21FD6DCB5255F705A59CC10583E22C4 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct InstanceIdType_t2E40362B45FA06FC4EF8EC67C8BF66F7496CC707 
{
	int32_t ___value__;
};
struct InstanceOcclusionEventType_tF66ED25A6A1D3943D326795EA91E803D666ECF79 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t1E0A7753CCCC41F22D3C408C4F96DDEC70291929 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_tEE7CE316B8F61A7D6725524435B6363E849C62ED ___m_MarkPositionAdjustment;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint;
	uint32_t ___m_MarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t1E0A7753CCCC41F22D3C408C4F96DDEC70291929 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_tEE7CE316B8F61A7D6725524435B6363E849C62ED ___m_CombiningMarkPositionAdjustment;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint;
	uint32_t ___m_CombiningMarkGlyphID;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct RenderGraphPassType_tD00EC2DAA135C660EE7E71652291A4672104EA2D 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct ScaleMode_t16AD656758EE54C56B3DA34FE4F2033C9C2EE13D 
{
	int32_t ___value__;
};
struct SortDirection_t1CF90CCD8B5D86EF2630D0F080500514821467E4 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE 
{
	int32_t ___value__;
};
struct TextAlignment_tD681BE7D2451C44115A90D2D8AA7D91C78A5A070 
{
	int32_t ___value__;
};
struct TextFontWeight_t789E26840C291C6C1270D4434CE007ACDFA40350 
{
	int32_t ___value__;
};
struct TextProcessingElementType_t875F9E5219DA4EE68DD3FF4F9EA18BB497B388EA 
{
	int32_t ___value__;
};
struct Tokens_t59054E7109144A03E2ABAF78915DDE9B6290D924 
{
	int32_t ___value__;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	uint32_t ___settingIndex;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 
{
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___center;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___extent;
};
struct VuCameraVideoModePreset_t91252FC288FE2DFCBA7F8332C500A60008F464FB 
{
	int32_t ___value__;
};
struct VuImagePixelFormat_tD038EE1145925E5368952AC221D730FBBB112A82 
{
	int32_t ___value__;
};
struct VuMesh_t610D23A74D378D2B8636B20835651F9FCD77FE9B 
{
	int32_t ___numVertices;
	intptr_t ___pos;
	intptr_t ___tex;
	intptr_t ___normal;
	int32_t ___numFaces;
	intptr_t ___faceIndices;
};
struct VuObserverType_t06936554CAF0211D6F70BA40AADAF5065378C5B9 
{
	int32_t ___value__;
};
struct WebCamKind_t6E6C1B17D52A297F99D6A758D43B6D90D3287D5C 
{
	int32_t ___value__;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	bool ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XmlSpace_t6A78E68D9618EE5EFEA37E875ED46B88B03DB357 
{
	int32_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct AnchorPose_tCE0852BC709B8B4971C58EEF93648080FC568B9F 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___translationData;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___rotationData;
};
#pragma pack(push, tp, 1)
struct AnchorPose_tCE0852BC709B8B4971C58EEF93648080FC568B9F_marshaled_pinvoke
{
	float ___translationData[3];
	float ___rotationData[9];
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct AnchorPose_tCE0852BC709B8B4971C58EEF93648080FC568B9F_marshaled_com
{
	float ___translationData[3];
	float ___rotationData[9];
};
#pragma pack(pop, tp)
struct AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116 
{
	String_t* ___name;
	String_t* ___targetID;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMax;
	String_t* ___authoringModelPath;
	String_t* ___occlusionModelPath;
	String_t* ___navMeshModelPath;
	String_t* ___version;
};
struct AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116_marshaled_pinvoke
{
	char* ___name;
	char* ___targetID;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMax;
	char* ___authoringModelPath;
	char* ___occlusionModelPath;
	char* ___navMeshModelPath;
	char* ___version;
};
struct AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___targetID;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMax;
	Il2CppChar* ___authoringModelPath;
	Il2CppChar* ___occlusionModelPath;
	Il2CppChar* ___navMeshModelPath;
	Il2CppChar* ___version;
};
struct ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	String_t* ___previewImage;
};
struct ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	char* ___previewImage;
};
struct ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	Il2CppChar* ___previewImage;
};
struct ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D 
{
	String_t* ___name;
	String_t* ___targetID;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMax;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___guideViewNames;
	bool ___lowPower;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___version;
	bool ___hasRealisticTextures;
	String_t* ___previewImage;
	String_t* ___assemblyId;
	bool ___containsTrainedEntryPoint;
	bool ___containsMTDatabase;
};
struct ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D_marshaled_pinvoke
{
	char* ___name;
	char* ___targetID;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMax;
	char** ___guideViewNames;
	int32_t ___lowPower;
	Il2CppSafeArray* ___version;
	int32_t ___hasRealisticTextures;
	char* ___previewImage;
	char* ___assemblyId;
	int32_t ___containsTrainedEntryPoint;
	int32_t ___containsMTDatabase;
};
struct ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___targetID;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bboxMax;
	Il2CppChar** ___guideViewNames;
	int32_t ___lowPower;
	Il2CppSafeArray* ___version;
	int32_t ___hasRealisticTextures;
	Il2CppChar* ___previewImage;
	Il2CppChar* ___assemblyId;
	int32_t ___containsTrainedEntryPoint;
	int32_t ___containsMTDatabase;
};
struct MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB 
{
	String_t* ___name;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB_marshaled_pinvoke
{
	char* ___name;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB_marshaled_com
{
	Il2CppChar* ___name;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C 
{
	String_t* ___name;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___availableLabels;
};
struct ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C_marshaled_pinvoke
{
	char* ___name;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	char** ___availableLabels;
};
struct ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C_marshaled_com
{
	Il2CppChar* ___name;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Il2CppChar** ___availableLabels;
};
struct AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B 
{
	String_t* ___name;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___minLuminance;
	float ___maxLuminance;
};
struct AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshaled_pinvoke
{
	char* ___name;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___minLuminance;
	float ___maxLuminance;
};
struct AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_marshaled_com
{
	Il2CppChar* ___name;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	float ___minLuminance;
	float ___maxLuminance;
};
struct MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices;
	int32_t ___indexOffset;
};
struct Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7 
{
	EventConsumer_t6D08A21A3FF574758C289118775786B6D35754F3* ___handler;
	int32_t ___priority;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___playerId;
	HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475* ____types;
};
struct Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7_marshaled_pinvoke
{
	Il2CppMethodPointer ___handler;
	int32_t ___priority;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___playerId;
	HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475* ____types;
};
struct Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7_marshaled_com
{
	Il2CppMethodPointer ___handler;
	int32_t ___priority;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___playerId;
	HashSet_1_t0F16759FF079A28DCA2DCF39BA6A61B5D502A475* ____types;
};
struct PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nx;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___ny;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nz;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___d;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nxAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nyAbs;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___nzAbs;
};
struct HIDCollectionType_t7AC7F0F059AEAEEFBD54D5F4DB1DFCB85254C854 
{
	int32_t ___value__;
};
struct HIDElementFlags_t3C41C626435310A0F354E862D4747C2369E8720C 
{
	int32_t ___value__;
};
struct HIDReportType_t37249B7677BD7083BEB296DEC42B8A0C0ADE562F 
{
	int32_t ___value__;
};
struct UsagePage_t6EF545F107AB1DED99B07C377BD0B8457DC6F7B8 
{
	int32_t ___value__;
};
struct Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 
{
	U3Chammersley2dSeq16U3Ee__FixedBuffer_t6F140D0C91E62112E1635AF868D461A48FB26EC9 ___hammersley2dSeq16;
};
struct Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 
{
	U3Chammersley2dSeq256U3Ee__FixedBuffer_t10E5086FADEE57D861BB75F2AB059694CD6862C8 ___hammersley2dSeq256;
};
struct Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 
{
	U3Chammersley2dSeq32U3Ee__FixedBuffer_t4D989F40E722CE7266EEF1B3C59EA668353D4156 ___hammersley2dSeq32;
};
struct Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 
{
	U3Chammersley2dSeq64U3Ee__FixedBuffer_t8AC325DA590C70B67FFC758DC78935109659D47E ___hammersley2dSeq64;
};
struct HebrewToken_tFAA97D4A183580830C64EB11A971CC75EB08B76E 
{
	int16_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 
{
	int32_t ___m_DeviceId;
	String_t* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	String_t* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_pinvoke
{
	int32_t ___m_DeviceId;
	char* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	char* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_com
{
	int32_t ___m_DeviceId;
	Il2CppChar* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Il2CppChar* ___m_FullLayoutJson;
};
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description;
	int32_t ___deviceId;
	bool ___isNative;
	bool ___isRemoved;
};
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_marshaled_pinvoke
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description;
	int32_t ___deviceId;
	int32_t ___isNative;
	int32_t ___isRemoved;
};
struct AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_marshaled_com
{
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description;
	int32_t ___deviceId;
	int32_t ___isNative;
	int32_t ___isRemoved;
};
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE 
{
	int32_t ___remoteId;
	int32_t ___localId;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description;
};
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_pinvoke
{
	int32_t ___remoteId;
	int32_t ___localId;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description;
};
struct RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_marshaled_com
{
	int32_t ___remoteId;
	int32_t ___localId;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description;
};
struct UserFlags_t0D9881A5B286F3AD3EA18AE68926593C59E1B2D6 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B 
{
	int32_t ___isValid;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID;
};
struct BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
};
struct LocationFlag_t967AE045AA727496F989291CFBC14F53964FCECB 
{
	int32_t ___value__;
};
struct Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position;
	int32_t ___subdivisionLevel;
};
struct IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612 
{
	int32_t ___firstChunkIndex;
	int32_t ___numberOfChunks;
	int32_t ___minSubdivInCell;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minValidBrickIndexForCellAtMaxRes;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxValidBrickIndexForCellAtMaxResPlusOne;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___entryPositionInBricksAtMaxRes;
	bool ___hasOnlyBiggerBricks;
};
struct IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612_marshaled_pinvoke
{
	int32_t ___firstChunkIndex;
	int32_t ___numberOfChunks;
	int32_t ___minSubdivInCell;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minValidBrickIndexForCellAtMaxRes;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxValidBrickIndexForCellAtMaxResPlusOne;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___entryPositionInBricksAtMaxRes;
	int32_t ___hasOnlyBiggerBricks;
};
struct IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612_marshaled_com
{
	int32_t ___firstChunkIndex;
	int32_t ___numberOfChunks;
	int32_t ___minSubdivInCell;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minValidBrickIndexForCellAtMaxRes;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxValidBrickIndexForCellAtMaxResPlusOne;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___entryPositionInBricksAtMaxRes;
	int32_t ___hasOnlyBiggerBricks;
};
struct IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___positionInBricks;
	int32_t ___minSubdiv;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minBrickPos;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxBrickPosPlusOne;
	bool ___hasMinMax;
	bool ___hasOnlyBiggerBricks;
};
struct IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491_marshaled_pinvoke
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___positionInBricks;
	int32_t ___minSubdiv;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minBrickPos;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxBrickPosPlusOne;
	int32_t ___hasMinMax;
	int32_t ___hasOnlyBiggerBricks;
};
struct IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491_marshaled_com
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___positionInBricks;
	int32_t ___minSubdiv;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___minBrickPos;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___maxBrickPosPlusOne;
	int32_t ___hasMinMax;
	int32_t ___hasOnlyBiggerBricks;
};
struct ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2 
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___mask;
	String_t* ___name;
};
struct ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2_marshaled_pinvoke
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___mask;
	char* ___name;
};
struct ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2_marshaled_com
{
	RenderingLayerMask_tD73B9FC1A65A937F18E56833FC83BF89C2B085A1 ___mask;
	Il2CppChar* ___name;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 
{
	String_t* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C ___data;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_marshaled_pinvoke
{
	char* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_pinvoke ___data;
};
struct ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_marshaled_com
{
	Il2CppChar* ___scenario;
	ObsoletePerScenarioData_tB1EFC0C7B7EA6D0DD0CACC22888799725FC6787C_marshaled_com ___data;
};
struct SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___receiverSphereLightSpace;
	float ___cascadeBlendCullingFactor;
};
struct CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 
{
	uint32_t ___updateCount;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___imageContentsHash;
	int32_t ___size;
	int32_t ___mipCount;
	U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 ___dataIndices;
	U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 ___levels;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___lastUsed;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___hdrData;
};
struct CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_marshaled_pinvoke
{
	uint32_t ___updateCount;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___imageContentsHash;
	int32_t ___size;
	int32_t ___mipCount;
	U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 ___dataIndices;
	U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 ___levels;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___lastUsed;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___hdrData;
};
struct CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_marshaled_com
{
	uint32_t ___updateCount;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___imageContentsHash;
	int32_t ___size;
	int32_t ___mipCount;
	U3CdataIndicesU3Ee__FixedBuffer_t677CDB83B4442D63FD8585F33B9D66ACAA94F015 ___dataIndices;
	U3ClevelsU3Ee__FixedBuffer_tB315393D404C579B01A5BF48C07E5C247F030CD7 ___levels;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture;
	int32_t ___lastUsed;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___hdrData;
};
struct TagType_t247BEA6080E7E453FA6F0BC2E8C05D682D94E35A 
{
	int32_t ___value__;
};
struct PerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___currentProj;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lastProj;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lastLastProj;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___currentView;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lastView;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lastLastView;
};
struct StpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpCommonConstant;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpSetupConstants0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpSetupConstants1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpSetupConstants2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpSetupConstants3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpSetupConstants4;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpSetupConstants5;
	U3C_StpSetupPerViewConstantsU3Ee__FixedBuffer_t9BB7998676CF28C673FFF3872BE1163DFEDAB3F6 ____StpSetupPerViewConstants;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpDilConstants0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpTaaConstants0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpTaaConstants1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpTaaConstants2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____StpTaaConstants3;
};
struct LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___attenuation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___spotDirection;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___occlusionProbeChannels;
	uint32_t ___layerMask;
};
struct WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B 
{
	int32_t ___len;
	intptr_t ___buf;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src;
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___srcRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___dstPos;
	int32_t ___border;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD 
{
	String_t* ___filename;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame;
	bool ___rotated;
	bool ___trimmed;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_pinvoke
{
	char* ___filename;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame;
	int32_t ___rotated;
	int32_t ___trimmed;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot;
};
struct Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_marshaled_com
{
	Il2CppChar* ___filename;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___frame;
	int32_t ___rotated;
	int32_t ___trimmed;
	SpriteFrame_t0AD908328349FA1B90D428FEBAAD7B480B6D59F4 ___spriteSourceSize;
	SpriteSize_tF99BB7603AE2E6587E6184ACAB6CD209FE6569B3 ___sourceSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot;
};
struct TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___UtcOffset;
	bool ___IsDst;
	uint8_t ___AbbreviationIndex;
};
struct TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshaled_pinvoke
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___UtcOffset;
	int32_t ___IsDst;
	uint8_t ___AbbreviationIndex;
};
struct TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshaled_com
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___UtcOffset;
	int32_t ___IsDst;
	uint8_t ___AbbreviationIndex;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841 
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_pinvoke
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct RaycastHitData_t5EAB266730389AB27715962670C2512800451841_marshaled_com
{
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___U3CgraphicU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldHitPositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscreenPositionU3Ek__BackingField;
	float ___U3CdistanceU3Ek__BackingField;
};
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___alloc;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	bool ___vertices;
};
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshaled_pinvoke
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___alloc;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	int32_t ___vertices;
};
struct AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshaled_com
{
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___alloc;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___page;
	int32_t ___vertices;
};
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 
{
	uint32_t ___id;
	uint32_t ___allocTime;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocVerts;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___permAllocIndices;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage;
	bool ___copyBackIndices;
};
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshaled_pinvoke
{
	uint32_t ___id;
	uint32_t ___allocTime;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocVerts;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke ___permAllocIndices;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage;
	int32_t ___copyBackIndices;
};
struct AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshaled_com
{
	uint32_t ___id;
	uint32_t ___allocTime;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___meshHandle;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocVerts;
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com ___permAllocIndices;
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___permPage;
	int32_t ___copyBackIndices;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD 
{
	int32_t ___HijriMonthsLengthFlags;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshaled_pinvoke
{
	int32_t ___HijriMonthsLengthFlags;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate;
};
struct DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshaled_com
{
	int32_t ___HijriMonthsLengthFlags;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___GregorianDate;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___m_Path;
	String_t* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	int32_t ___m_InstanceID;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___m_Path;
	char* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	int32_t ___m_InstanceID;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_TypeFullName;
	LazyLoadReference_1_tD57A582D5A28F3AE34FBB810985EF171325FAF1B ___m_AssetReference;
	int32_t ___m_InstanceID;
	Type_t* ___m_CachedType;
};
struct ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___RequestedTextureSize;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___ResampledTextureSize;
	int32_t ___RequestedFPS;
};
struct XmlEventType_t0FA77E8C9C8BAEC1F22C6C522164C1D873652019 
{
	int32_t ___value__;
};
struct AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE 
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 ___name;
	String_t* ___val;
	int32_t ___contentPos;
	int32_t ___hashCode;
	int32_t ___prevHash;
};
struct AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshaled_pinvoke
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_pinvoke ___name;
	char* ___val;
	int32_t ___contentPos;
	int32_t ___hashCode;
	int32_t ___prevHash;
};
struct AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_marshaled_com
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_com ___name;
	Il2CppChar* ___val;
	int32_t ___contentPos;
	int32_t ___hashCode;
	int32_t ___prevHash;
};
struct NamespaceState_t96D7826057D94D01FF46912868C57967FC8E6C01 
{
	int32_t ___value__;
};
struct NamespaceKind_t6467E27BEA03F980D0B9345377D43742C8712D42 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke ___deviceMatcher;
};
struct LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___layoutName;
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com ___deviceMatcher;
};
struct Flags_t36D5070200D1061BA68BF41808748FA000DEE57C 
{
	int32_t ___value__;
};
struct Flags_t1E712B23AAE0C9B46749E115A88CF844D5AD1C33 
{
	int32_t ___value__;
};
struct Result_t55BE0CAEA046549D542B733456ED2B920A14B99D 
{
	int32_t ___value__;
};
struct VisualsProcessingType_tF15A2244C9F89A1F98BB36AA5BA30DA372193119 
{
	int32_t ___value__;
};
struct Entry_t3BB5AE8DB2C314E056B4DB2BBE9A2C15E7D8B944 
{
	int32_t ___hashCode;
	int32_t ___next;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___key;
	RuntimeObject* ___value;
};
struct Entry_t008CACF55D7F47352355FB69BA62E34489CF2116 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 ___value;
};
struct Entry_tD522C09559070EF861CE8629AC53D945627CD974 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	uint8_t ___value;
};
struct Entry_t2378BFE014F1CDD303C90E9DFC67292CCFA27725 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 ___value;
};
struct Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	bool ___value;
};
struct Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int32_t ___value;
};
struct Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int32_t ___value;
};
struct Entry_tA4CE377ED53530282179BE10A55FE3A4E4A5CF4E 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value;
};
struct Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	RuntimeObject* ___value;
};
struct Entry_tCAA5E8C25DBDD41FDE687FAC9279F16A616DCEC6 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct Entry_tA76B18EF78BF0132EE1736D5F5B829D890C26E5C 
{
	int32_t ___hashCode;
	int32_t ___next;
	int64_t ___key;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___value;
};
struct Entry_tDBF9A1E46F0B46762BB888B9D95070CCD059DA95 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value;
};
struct Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	int32_t ___value;
};
struct Entry_t9021423938AB6DA55D07BD536E4BD78B05F30FC2 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116 ___value;
};
struct Entry_tE4247208050F1CE52403ACCE7C5BFB29A7F983CF 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B ___value;
};
struct Entry_tB91023BECCBA53F163D91AE13E4833494B322C15 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D ___value;
};
struct Entry_tA34945A0BD5A528339B3897A712BC0B2192A62DA 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C ___value;
};
struct Entry_t220AA9583FC76C1A60DB0B8C1F33ADB13276D772 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6 ___value;
};
struct Entry_tE9F630515B2639FC32421D8BCA4A3FDA5DA81F57 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	MarkToBaseAdjustmentRecord_t03C041CB56601B46F025C69B899BBAB750201C71 ___value;
};
struct Entry_tEC1A94D2B396350073237678CBE5013D9C23336F 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___value;
};
struct Entry_t6AE26C6078FCDA8F86904D21F25FCFF5D726FAC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	MarkToMarkAdjustmentRecord_t5D12F757E4ECB2EA12EB404228D70FA4DDBD6654 ___value;
};
struct Entry_tEFAC589ECF730F050787AF6E5CF97CF8C3529F88 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___value;
};
struct KeyValuePair_2_tF09A31A02B0B1C5470675A654E6FA428EBB7FB4E 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tB999B4329040B950BC24C49C2E5CAD7574557D0B 
{
	int32_t ___key;
	ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 ___value;
};
struct KeyValuePair_2_tE9D30A991F93C5CC802881BEB1E7D7627F086D79 
{
	int32_t ___key;
	uint8_t ___value;
};
struct KeyValuePair_2_tC5ADF0AFF823F052499A61A1D65C6BB0A8C0342A 
{
	int32_t ___key;
	CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 ___value;
};
struct KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 
{
	int32_t ___key;
	bool ___value;
};
struct KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C 
{
	int32_t ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 
{
	int32_t ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tF73F53965CC04C7018C460F8A3C7B211797A2D4D 
{
	int32_t ___key;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value;
};
struct KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B 
{
	int32_t ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t4FE3608051BEBD190AEB2C7B27376911D8EF25B0 
{
	int32_t ___key;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 
{
	HighlightStateU5BU5D_tCF5677B4773947CE4C64B938B12AC50DDA347435* ___itemStack;
	int32_t ___index;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F 
{
	TextAlignmentU5BU5D_t756DC2D672145699CB9718DDBA5982ED51A95F49* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 
{
	TextFontWeightU5BU5D_t3DE32809AEE657255C8333897D61F2EA5279D43F* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 
{
	int32_t ___Item1;
	RuntimeObject* ___Item2;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
	int32_t ___m_FenceType;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___lineExtents;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_Value;
	int32_t ___m_Version;
	int32_t ___U3CtypeU3Ek__BackingField;
};
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	int32_t ___m_ValueType;
	int32_t ___valueIndex;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	int32_t ___m_InstanceId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	int32_t ___m_InstanceId;
	int32_t ___m_TextureId;
};
struct VuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D 
{
	int32_t ___presetMode;
	VuVector2I_t6E61240FAD857B768B44FED1EF11930DE260E8BE ___resolution;
	float ___frameRate;
	int32_t ___format;
};
struct VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E 
{
	int32_t ___observerType;
	String_t* ___name;
};
struct VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E_marshaled_pinvoke
{
	int32_t ___observerType;
	char* ___name;
};
struct VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E_marshaled_com
{
	int32_t ___observerType;
	Il2CppChar* ___name;
};
struct VuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963 
{
	int32_t ___id;
	int64_t ___timestamp;
	int32_t ___version;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___transform;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox;
	VuMesh_t610D23A74D378D2B8636B20835651F9FCD77FE9B ___mesh;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C 
{
	String_t* ___m_Name;
	String_t* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___m_Resolutions;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions;
};
struct WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_DepthCameraName;
	int32_t ___m_Flags;
	int32_t ___m_Kind;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* ___m_Resolutions;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	String_t* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845 
{
	String_t* ___uuid;
	AnchorPose_tCE0852BC709B8B4971C58EEF93648080FC568B9F ___pose;
};
#pragma pack(push, tp, 1)
struct Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845_marshaled_pinvoke
{
	char* ___uuid;
	AnchorPose_tCE0852BC709B8B4971C58EEF93648080FC568B9F_marshaled_pinvoke ___pose;
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845_marshaled_com
{
	char* ___uuid;
	AnchorPose_tCE0852BC709B8B4971C58EEF93648080FC568B9F_marshaled_com ___pose;
};
#pragma pack(pop, tp)
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1 
{
	String_t* ___name;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	String_t* ___previewImage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___boundingBox2D;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin;
	int32_t ___idType;
	int32_t ___idLength;
	int32_t ___maxId;
};
struct VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1_marshaled_pinvoke
{
	char* ___name;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	char* ___previewImage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___boundingBox2D;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin;
	int32_t ___idType;
	int32_t ___idLength;
	int32_t ___maxId;
};
struct VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1_marshaled_com
{
	Il2CppChar* ___name;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	Il2CppChar* ___previewImage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___boundingBox2D;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin;
	int32_t ___idType;
	int32_t ___idLength;
	int32_t ___maxId;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 
{
	String_t* ___m_name;
	int32_t ___m_token;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_pinvoke
{
	char* ___m_name;
	int32_t ___m_token;
};
struct RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_marshaled_com
{
	Il2CppChar* ___m_name;
	int32_t ___m_token;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 
{
	int32_t ___type;
	PerformDynamicRes_t0949EAA6943CF225A1F61B233E13A440C1C09B47* ___method;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshaled_pinvoke
{
	int32_t ___type;
	Il2CppMethodPointer ___method;
};
struct ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_marshaled_com
{
	int32_t ___type;
	Il2CppMethodPointer ___method;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 
{
	String_t* ____word;
	int32_t ____token;
	int32_t ____op;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshaled_pinvoke
{
	char* ____word;
	int32_t ____token;
	int32_t ____op;
};
struct ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_marshaled_com
{
	Il2CppChar* ____word;
	int32_t ____token;
	int32_t ____op;
};
struct HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 
{
	int32_t ___type;
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___parent;
	int32_t ___childCount;
	int32_t ___firstChild;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED 
{
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___unit;
	int32_t ___unitExponent;
	int32_t ___logicalMin;
	int32_t ___logicalMax;
	int32_t ___physicalMin;
	int32_t ___physicalMax;
	int32_t ___reportType;
	int32_t ___collectionIndex;
	int32_t ___reportId;
	int32_t ___reportSizeInBits;
	int32_t ___reportOffsetInBits;
	int32_t ___flags;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_marshaled_pinvoke
{
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___unit;
	int32_t ___unitExponent;
	int32_t ___logicalMin;
	int32_t ___logicalMax;
	int32_t ___physicalMin;
	int32_t ___physicalMax;
	int32_t ___reportType;
	int32_t ___collectionIndex;
	int32_t ___reportId;
	int32_t ___reportSizeInBits;
	int32_t ___reportOffsetInBits;
	int32_t ___flags;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax;
};
struct HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_marshaled_com
{
	int32_t ___usage;
	int32_t ___usagePage;
	int32_t ___unit;
	int32_t ___unitExponent;
	int32_t ___logicalMin;
	int32_t ___logicalMax;
	int32_t ___physicalMin;
	int32_t ___physicalMax;
	int32_t ___reportType;
	int32_t ___collectionIndex;
	int32_t ___reportId;
	int32_t ___reportSizeInBits;
	int32_t ___reportOffsetInBits;
	int32_t ___flags;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMin;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___usageMax;
};
struct HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F 
{
	int32_t ___reportId;
	int32_t ___reportType;
	int32_t ___currentBitOffset;
};
struct HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F 
{
	int32_t ___page;
	int32_t ___usage;
};
struct HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C 
{
	int16_t ___token;
	int16_t ___value;
};
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_Layout;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_Name;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___m_DisplayName;
};
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_Layout;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_Name;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___m_DisplayName;
};
struct ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_Layout;
	InlinedArray_1_tCCDDAF60E5E0753897C733E70A407B21D4DCCD70 ___m_Usages;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_Name;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___m_DisplayName;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 
{
	String_t* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke
{
	char* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com
{
	Il2CppChar* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 
{
	BitRegionU5BU5D_t6D477477F7EB84242BA07FA65BC1BD6DA74A3D39* ___memoryRegions;
	StateChangeMonitorListenerU5BU5D_tEF042EA5E57858FE7C48A9F1AF7A55B249ADB5A9* ___listeners;
	DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10 ___signalled;
	bool ___needToUpdateOrderingOfMonitors;
	bool ___needToCompactArrays;
};
struct StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_marshaled_pinvoke
{
	BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C* ___memoryRegions;
	StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_pinvoke* ___listeners;
	DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_pinvoke ___signalled;
	int32_t ___needToUpdateOrderingOfMonitors;
	int32_t ___needToCompactArrays;
};
struct StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_marshaled_com
{
	BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C* ___memoryRegions;
	StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_marshaled_com* ___listeners;
	DynamicBitfield_t4EE89B3E0E02AA497D0D0768DE48E64DC490AE10_marshaled_com ___signalled;
	int32_t ___needToUpdateOrderingOfMonitors;
	int32_t ___needToCompactArrays;
};
struct Info_tA3039772991DEEDBC29A00439A055C5166133A27 
{
	int32_t ___viewType;
	int32_t ___viewInstanceID;
	int32_t ___splitIndex;
};
struct Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 
{
	int32_t ___viewInstanceID;
	int32_t ___eventType;
	int32_t ___occluderVersion;
	int32_t ___subviewMask;
	int32_t ___occlusionTest;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___subRect;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___scaleMode;
	intptr_t ___backgroundRepeatInstanceList;
	int32_t ___backgroundRepeatInstanceListStartIndex;
	int32_t ___backgroundRepeatInstanceListEndIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___backgroundRepeatRect;
	intptr_t ___texture;
	intptr_t ___sprite;
	intptr_t ___vectorImage;
	intptr_t ___spriteTexture;
	intptr_t ___spriteVertices;
	intptr_t ___spriteUVs;
	intptr_t ___spriteTriangles;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSize;
	float ___texturePixelsPerPoint;
	int32_t ___leftSlice;
	int32_t ___topSlice;
	int32_t ___rightSlice;
	int32_t ___bottomSlice;
	float ___sliceScale;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rectInset;
	NativeColorPage_tD578D4E96ABBDBB0E6A608F6CE97A0362ABD7D4B ___colorPage;
	int32_t ___meshFlags;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage;
};
struct BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor;
	float ___leftWidth;
	float ___topWidth;
	float ___rightWidth;
	float ___bottomWidth;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA 
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_pinvoke
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_marshaled_com
{
	SortColumnDescription_t278A693B84340D73A6FADCFB1521E313A80F9C37* ___columnDesc;
	int32_t ___direction;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField;
	RuntimeObject* ___U3CPanelU3Ek__BackingField;
	int32_t ___U3CFlagsU3Ek__BackingField;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshaled_pinvoke
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField;
	RuntimeObject* ___U3CPanelU3Ek__BackingField;
	int32_t ___U3CFlagsU3Ek__BackingField;
};
struct PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshaled_com
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPositionU3Ek__BackingField;
	RuntimeObject* ___U3CPanelU3Ek__BackingField;
	int32_t ___U3CFlagsU3Ek__BackingField;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options;
	String_t* ____cultureKey;
	String_t* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options;
	char* ____cultureKey;
	char* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options;
	Il2CppChar* ____cultureKey;
	Il2CppChar* ____pattern;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 
{
	int32_t ___tagType;
	bool ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_marshaled_pinvoke
{
	int32_t ___tagType;
	int32_t ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
};
struct Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_marshaled_com
{
	int32_t ___tagType;
	int32_t ___isClosing;
	int32_t ___start;
	int32_t ___end;
	TagValue_tB20CF236F5A47E5F5B7E110BBFB7C066D866D4C2* ___value;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 
{
	int32_t ___state;
	bool ___negate;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_pinvoke
{
	int32_t ___state;
	int32_t ___negate;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_com
{
	int32_t ___state;
	int32_t ___negate;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct TextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002 
{
	int32_t ___elementType;
	uint32_t ___unicode;
	int32_t ___stringIndex;
	int32_t ___length;
};
struct XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 
{
	int32_t ___eventType;
	String_t* ___s1;
	String_t* ___s2;
	String_t* ___s3;
	RuntimeObject* ___o;
};
struct XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshaled_pinvoke
{
	int32_t ___eventType;
	char* ___s1;
	char* ___s2;
	char* ___s3;
	Il2CppIUnknown* ___o;
};
struct XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_marshaled_com
{
	int32_t ___eventType;
	Il2CppChar* ___s1;
	Il2CppChar* ___s2;
	Il2CppChar* ___s3;
	Il2CppIUnknown* ___o;
};
struct ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 ___name;
	String_t* ___xmlLang;
	int32_t ___xmlSpace;
	bool ___xmlspacePreserve;
	NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49* ___nsdecls;
};
struct ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshaled_pinvoke
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_pinvoke ___name;
	char* ___xmlLang;
	int32_t ___xmlSpace;
	int32_t ___xmlspacePreserve;
	NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49* ___nsdecls;
};
struct ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_marshaled_com
{
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_marshaled_com ___name;
	Il2CppChar* ___xmlLang;
	int32_t ___xmlSpace;
	int32_t ___xmlspacePreserve;
	NamespaceDecl_t0B5D3E28F9E6733D3ADBBE7CAF3FA4DD11787D49* ___nsdecls;
};
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C 
{
	String_t* ___name;
	String_t* ___prefix;
	String_t* ___defaultNs;
	int32_t ___defaultNsState;
	int32_t ___xmlSpace;
	String_t* ___xmlLang;
	int32_t ___prevNsTop;
	int32_t ___prefixCount;
	bool ___mixed;
};
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_pinvoke
{
	char* ___name;
	char* ___prefix;
	char* ___defaultNs;
	int32_t ___defaultNsState;
	int32_t ___xmlSpace;
	char* ___xmlLang;
	int32_t ___prevNsTop;
	int32_t ___prefixCount;
	int32_t ___mixed;
};
struct TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___prefix;
	Il2CppChar* ___defaultNs;
	int32_t ___defaultNsState;
	int32_t ___xmlSpace;
	Il2CppChar* ___xmlLang;
	int32_t ___prevNsTop;
	int32_t ___prefixCount;
	int32_t ___mixed;
};
struct ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 
{
	int32_t ___prevNSTop;
	String_t* ___prefix;
	String_t* ___localName;
	String_t* ___namespaceUri;
	int32_t ___xmlSpace;
	String_t* ___xmlLang;
};
struct ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshaled_pinvoke
{
	int32_t ___prevNSTop;
	char* ___prefix;
	char* ___localName;
	char* ___namespaceUri;
	int32_t ___xmlSpace;
	char* ___xmlLang;
};
struct ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_marshaled_com
{
	int32_t ___prevNSTop;
	Il2CppChar* ___prefix;
	Il2CppChar* ___localName;
	Il2CppChar* ___namespaceUri;
	int32_t ___xmlSpace;
	Il2CppChar* ___xmlLang;
};
struct Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 
{
	String_t* ___prefix;
	String_t* ___namespaceUri;
	int32_t ___kind;
	int32_t ___prevNsIndex;
};
struct Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshaled_pinvoke
{
	char* ___prefix;
	char* ___namespaceUri;
	int32_t ___kind;
	int32_t ___prevNsIndex;
};
struct Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___namespaceUri;
	int32_t ___kind;
	int32_t ___prevNsIndex;
};
struct EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement;
	int32_t ___type;
	Entry_t475ED76E31923970E7F7A6522E570E7577C487B9* ___rootEntry;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F 
{
	String_t* ___name;
	int32_t ___type;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReadLists;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceWriteLists;
	bool ___culled;
	bool ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31* ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_pinvoke
{
	char* ___name;
	int32_t ___type;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReadLists;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31* ___scriptInfo;
};
struct PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___type;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReadLists;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceWriteLists;
	int32_t ___culled;
	int32_t ___async;
	int32_t ___nativeSubPassIndex;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___generateDebugData;
	NRPInfo_tFAE346DBF564B1FDA1EBC1D2F0C3EDC93143D04F* ___nrpInfo;
	PassScriptInfo_t8619301849E12A8422C5C4BF3D19F5D7410A0A31* ___scriptInfo;
};
struct Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___key;
	RuntimeObject* ___value;
};
struct Entry_t087349F3AE170AB56B4363B52E225A982E89F930 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value;
};
struct Entry_t6E3617D543B4D6B204B7728D9E47A38BA5CEB5BB 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___value;
};
struct Entry_tCD54E3E97C7119F5116132F49CC1ED41AF5757E6 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1 ___value;
};
struct Entry_tD8875C96F18F04DE9948C96AC2CB648E8901D064 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value;
};
struct Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___key;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___value;
};
struct Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 
{
	int32_t ___hashCode;
	int32_t ___next;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___key;
	RuntimeObject* ___value;
};
struct Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E 
{
	int32_t ___hashCode;
	int32_t ___next;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	int32_t ___value;
};
struct Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB 
{
	int32_t ___hashCode;
	int32_t ___next;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	int32_t ___value;
};
struct Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 
{
	int32_t ___hashCode;
	int32_t ___next;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	RuntimeObject* ___value;
};
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 
{
	ValueTuple_2_tC290D1473EEF2960484F075957B2A1F638CD9119 ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 
{
	ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___key;
	EnumData_tB9520C9179D9D6C57B2BF70E76FE4EB4DC94A6F8 ___value;
};
struct KeyValuePair_2_t6072DB27D2EA2946956C283915DB65E059D45940 
{
	int32_t ___key;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___value;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	bool ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	bool ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_pinvoke
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	int32_t ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshaled_com
{
	int32_t ___previousWordBreak;
	int32_t ___totalCharacterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visibleSpriteCount;
	int32_t ___visibleLinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___startOfLineAscender;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___previousLineScale;
	float ___pageAscender;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	float ___fontScale;
	float ___fontScaleMultiplier;
	int32_t ___italicAngle;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09* ___textInfo;
	LineInfo_t2BBD461B330C46ACA45596A8E72FEA4172F88CF5 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor;
	HighlightState_tFF5FE9065990F04A37FEC545A0024047F0ABD740 ___highlightState;
	FontStyleStack_t63C77495F068E6DF762D6AF063A817E3709659A7 ___basicStyleStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___italicAngleStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___colorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___underlineColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___strikethroughColorStack;
	TextProcessingStack_1_t7868E818AC1E1B5FED21B76D5C309C9A04380B63 ___highlightColorStack;
	TextProcessingStack_1_tF3616757510D9631241E95596F10A4139420DA16 ___highlightStateStack;
	TextProcessingStack_1_t0F39F088E8F8F6E18C3C463B2998ADC5B7A0513E ___colorGradientStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___sizeStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___indentStack;
	TextProcessingStack_1_t698B87CDD968C2046F57134BB3AB807EBFFD7790 ___fontWeightStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___styleStack;
	TextProcessingStack_1_t9FC06E35259ADD291ED640FE7554D8C03EA5F555 ___baselineStack;
	TextProcessingStack_1_t27834AAB14D26DC6519558C4C2574BA9C190D8E8 ___actionStack;
	TextProcessingStack_1_t0C74606C1B6C7817CA95F0DCA46B219CF6FB35CA ___materialReferenceStack;
	TextProcessingStack_1_tE63296B08A4C34E38D7EF3FFFA3470076B9E3A0F ___lineJustificationStack;
	int32_t ___lastBaseGlyphIndex;
	int32_t ___spriteAnimationId;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___currentFontAsset;
	SpriteAsset_t1D3CF1D9DC350A4690CB09DE228A8B59F2F02313* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_t369FB2B84521A0229C2FA3D4C8592B14E07CEFE6 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	int32_t ___isDrivenLineSpacing;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
};
struct ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA 
{
	String_t* ___objectRegistrationName;
	String_t* ___parameter;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___value;
};
struct ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_marshaled_pinvoke
{
	char* ___objectRegistrationName;
	char* ___parameter;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke ___bindingMask;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___value;
};
struct ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_marshaled_com
{
	Il2CppChar* ___objectRegistrationName;
	Il2CppChar* ___parameter;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com ___bindingMask;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___value;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CvariantsU3Ek__BackingField;
	String_t* ___U3CuseStateFromU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField;
	char* ___U3CuseStateFromU3Ek__BackingField;
	char* ___U3CdisplayNameU3Ek__BackingField;
	char* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CvariantsU3Ek__BackingField;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CmaxValueU3Ek__BackingField;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 
{
	bool ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509 ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_pinvoke
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_pinvoke ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_marshaled_com
{
	int32_t ___isBorderJob;
	NativeRectParams_t18E2E456D50F027D08BF8B4BCBD83DF7FDB1C02F ___rectParams;
	BorderParams_tA3F0684BE19E681B68F40A773737978EB3FD1509_marshaled_com ___borderParams;
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC 
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_pinvoke
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_com
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF 
{
	UnsafeMeshGenerationNode_t1FF7D38D9B39DC59A2F8E2DFC92BFAB2481E88A2 ___node;
	int32_t ___snapshotIndex;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 
{
	String_t* ___name;
	int32_t ___index;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceCreateList;
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	bool ___enableAsyncCompute;
	bool ___allowPassCulling;
	bool ___needGraphicsFence;
	bool ___culled;
	bool ___culledByRendererList;
	bool ___hasSideEffect;
	bool ___enableFoveatedRasterization;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_pinvoke
{
	char* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
};
struct CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_marshaled_com
{
	Il2CppChar* ___name;
	int32_t ___index;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceCreateList;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___resourceReleaseList;
	GraphicsFence_t199180163AEDE0C1BE868F8E1314A47610B1FABB ___fence;
	int32_t ___refCount;
	int32_t ___syncToPassIndex;
	int32_t ___syncFromPassIndex;
	int32_t ___enableAsyncCompute;
	int32_t ___allowPassCulling;
	int32_t ___needGraphicsFence;
	int32_t ___culled;
	int32_t ___culledByRendererList;
	int32_t ___hasSideEffect;
	int32_t ___enableFoveatedRasterization;
};
struct RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___h;
	bool ___preserveCounterValue;
};
struct RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___h;
	int32_t ___preserveCounterValue;
};
struct RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___h;
	int32_t ___preserveCounterValue;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 
{
	int32_t ___index;
	String_t* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	bool ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_pinvoke
{
	int32_t ___index;
	char* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_com
{
	int32_t ___index;
	Il2CppChar* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___shL0L1RxData;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL1GL1RyData;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL1BL1RzData;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_1;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_2;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_3;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___probeOcclusion;
};
struct Entry_t860658A268435C0F4527823E39101F707ABCC3A3 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___value;
};
struct Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 ___value;
};
struct Entry_tBE79E9CAC9D7DD54B4635CEE784E7DC034A6E98B 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___value;
};
struct Entry_tFD8E26AB004B4E28E573BCD8440A1F1B23F25693 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___value;
};
struct KeyValuePair_2_tB121246E130D8B10E5EAAE733E6F683AE0FA90DD 
{
	int32_t ___key;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___value;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct DataSourceContext_t7458B85023D9BF30FBDC3023358BD2FB7BBE0332 
{
	RuntimeObject* ___U3CdataSourceU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CdataSourcePathU3Ek__BackingField;
};
struct DataSourceContext_t7458B85023D9BF30FBDC3023358BD2FB7BBE0332_marshaled_pinvoke
{
	Il2CppIUnknown* ___U3CdataSourceU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___U3CdataSourcePathU3Ek__BackingField;
};
struct DataSourceContext_t7458B85023D9BF30FBDC3023358BD2FB7BBE0332_marshaled_com
{
	Il2CppIUnknown* ___U3CdataSourceU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___U3CdataSourcePathU3Ek__BackingField;
};
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27 
{
	int32_t ___m_Result;
	float ___m_Score;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Requirements;
};
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_pinvoke
{
	int32_t ___m_Result;
	float ___m_Score;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_Requirements;
};
struct MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_com
{
	int32_t ___m_Result;
	float ___m_Score;
	InputControlList_1_tE5EA4873D06A889C726FE4CC90A6D26CAC2EEE13 ___m_Devices;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_Requirements;
};
struct Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 
{
	int32_t ___m_RequirementIndex;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Requirements;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls;
};
struct Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3_marshaled_pinvoke
{
	int32_t ___m_RequirementIndex;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_Requirements;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls;
};
struct Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3_marshaled_com
{
	int32_t ___m_RequirementIndex;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_Requirements;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Controls;
};
struct Entry_t6E9696F8B80B2FA4B858B58AA27B787B5974C4AD 
{
	int32_t ___hashCode;
	int32_t ___next;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___key;
	RuntimeObject* ___value;
};
struct Entry_tD7E15205D45D077BC3C10F2121743F8658BEC172 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___key;
	DataSourceContext_t7458B85023D9BF30FBDC3023358BD2FB7BBE0332 ___value;
};
struct KeyValuePair_2_t75FAA8CAE789C96693485F8C6E9B4FAA2FFB8FFF 
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___key;
	RuntimeObject* ___value;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	bool ___shouldProcess;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_marshaled_pinvoke
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	int32_t ___shouldProcess;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_marshaled_com
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	int32_t ___shouldProcess;
};
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C 
{
	Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C ___platformUserAccountHandle;
	String_t* ___platformUserAccountName;
	String_t* ___platformUserAccountId;
	int32_t ___deviceCount;
	int32_t ___deviceStartIndex;
	RuntimeObject* ___actions;
	Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE ___controlScheme;
	MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27 ___controlSchemeMatch;
	int32_t ___lostDeviceCount;
	int32_t ___lostDeviceStartIndex;
	int32_t ___flags;
};
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke
{
	Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C ___platformUserAccountHandle;
	char* ___platformUserAccountName;
	char* ___platformUserAccountId;
	int32_t ___deviceCount;
	int32_t ___deviceStartIndex;
	RuntimeObject* ___actions;
	Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE ___controlScheme;
	MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_pinvoke ___controlSchemeMatch;
	int32_t ___lostDeviceCount;
	int32_t ___lostDeviceStartIndex;
	int32_t ___flags;
};
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com
{
	Nullable_1_tFEEAB31DE57F94E8B9494F3454060FE03553EB2C ___platformUserAccountHandle;
	Il2CppChar* ___platformUserAccountName;
	Il2CppChar* ___platformUserAccountId;
	int32_t ___deviceCount;
	int32_t ___deviceStartIndex;
	RuntimeObject* ___actions;
	Nullable_1_t16AD7DAD50FE498393D70E4661FB4349D271C2EE ___controlScheme;
	MatchResult_t02FDB08E41694242EC6B6F66D6DB30768EEA2F27_marshaled_com ___controlSchemeMatch;
	int32_t ___lostDeviceCount;
	int32_t ___lostDeviceStartIndex;
	int32_t ___flags;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField;
};
struct EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC_StaticFields
{
	EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC ___Default;
};
struct EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E_StaticFields
{
	EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E ___Default;
};
struct EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D_StaticFields
{
	EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D ___Default;
};
struct EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38_StaticFields
{
	EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38 ___Default;
};
struct EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83_StaticFields
{
	EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83 ___Default;
};
struct EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022_StaticFields
{
	EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022 ___Default;
};
struct EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3_StaticFields
{
	EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3 ___Default;
};
struct EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C_StaticFields
{
	EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C ___Default;
};
struct EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182_StaticFields
{
	EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182 ___Default;
};
struct EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533_StaticFields
{
	EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533 ___Default;
};
struct EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0_StaticFields
{
	EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0 ___Default;
};
struct EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1_StaticFields
{
	EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1 ___Default;
};
struct EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F_StaticFields
{
	EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F ___Default;
};
struct EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E_StaticFields
{
	EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___Default;
};
struct EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB_StaticFields
{
	EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___Default;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_StaticFields
{
	RuntimeObject* ___comparer;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5 (VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB (VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845 (VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuMatrix44F_Equals_m5FEA274551E330BE6DE3748ADA2FAE2C57EFAF16 (VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuVector2F_Equals_m3E4FFA3C29081BE998AE21649889CCAF9999C16C (VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4 (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8 (float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97 (int4_tBA77D4945786DE82C3A487B33955EA1004996052* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceRequirement_Equals_m8B21D6C5F042071FE736CC9D3F360265AEE9F6D8 (DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Record_Equals_mEAE03AEEBA5DD28BBFD29288ABD97ECA570E1745 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_Equals_m4A516862648D99564D5FA05FC99DF63A275D2996 (JsonValue_t01DB320267C848E729A400EF2345979978F851D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2 (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QName_Equals_mE8465B903C08BDE00EA2293C8BF6841EFB650634 (QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m8607C92881A800B10A96D62148CE7A750E62640E_gshared (RuntimeArray* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_item;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2050E232F77364815777E995C96FC9E41E98C582_gshared (RuntimeArray* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5 = ___0_item;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mF072B5964F42AC3B28463A6572BBB5E3E8A89AC1_gshared (RuntimeArray* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___0_item;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948_mD4D910CB0A446EB60AB4A2DC996822EAAC33B519_gshared (RuntimeArray* __this, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_5 = ___0_item;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m4E4CB613B2606CD31E2057AC9E443B271954A42C_gshared (RuntimeArray* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = ___0_item;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76_mBB7A6225A160ECD0FBE13434056C573C2F22718E_gshared (RuntimeArray* __this, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_5 = ___0_item;
		VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VertexAttributeDescriptor_Equals_m6FBFEE42E1BAAAC2D38434EDF0906C5B76D56BE5((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805_m918733C0E20E9F3647BEC1F72DAA45D2D593026F_gshared (RuntimeArray* __this, VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_5 = ___0_item;
		VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleLight_Equals_m40D683BCDD1632AC8127BEC3810B73A4EC90EAEB((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B_m7012AAA1078B7C25D31DC2489735A49EB3200F40_gshared (RuntimeArray* __this, VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_5 = ___0_item;
		VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VisibleReflectionProbe_Equals_m67A72812AD1FEEA3C942AAAAA2A47909F3FEC845((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D_m948434620EF099AA23609D5EDE93FA57B43DC47C_gshared (RuntimeArray* __this, VuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D L_5 = ___0_item;
		VuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VuCameraVideoMode_tB492EBEB0605860CCAC237A94369C4C29011350D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E_mA466412C49520C44B30769CBF384CEDFA2D5FEA2_gshared (RuntimeArray* __this, VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E L_5 = ___0_item;
		VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VuDatabaseTargetInfo_tACF0C984E38A6AA4F6FB07B5AAEFEA516A651E6E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6_m386D319CF44F117D688AB39266C6FF4BD459C0B4_gshared (RuntimeArray* __this, VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 L_5 = ___0_item;
		VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VuMatrix44F_Equals_m5FEA274551E330BE6DE3748ADA2FAE2C57EFAF16((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963_m018D094A3084929078ABAAE630E31E12B5DFDB06_gshared (RuntimeArray* __this, VuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963 L_5 = ___0_item;
		VuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VuMeshObservationBlock_tE6EB4D4BD9AA468CDB198D07F697FFD717E04963> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117_mD58D365C234CB6844C0CD4C4EE5194E671D5861F_gshared (RuntimeArray* __this, VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117 L_5 = ___0_item;
		VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VuModelTargetStateInfo_t9B26867D304B04B7A64BDD5F340CA2BFA372F117> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8_m13A28DDD530EF7851F768A25655331F8BFB4ED9D_gshared (RuntimeArray* __this, VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_5 = ___0_item;
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = VuVector2F_Equals_m3E4FFA3C29081BE998AE21649889CCAF9999C16C((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C_m1E998A5A997EC7FD31AD660C1CA6C87610C8D808_gshared (RuntimeArray* __this, WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_5 = ___0_item;
		WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WebCamDevice_t3D72A89B7F52FD27192023A67254D19E89D9738C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordInfo_tA466206097891A5A2590896EE164AFC406EB060D_m8A974827B6ED52B570A43AB71D2EA251B552CC33_gshared (RuntimeArray* __this, WordInfo_tA466206097891A5A2590896EE164AFC406EB060D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordInfo_tA466206097891A5A2590896EE164AFC406EB060D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_5 = ___0_item;
		WordInfo_tA466206097891A5A2590896EE164AFC406EB060D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordInfo_tA466206097891A5A2590896EE164AFC406EB060D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_m638C56CD91A3E5CE706043D796606C529D2CB119_gshared (RuntimeArray* __this, WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_5 = ___0_item;
		WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_mED6789E3761D6FA098C8691795306CD85349365B_gshared (RuntimeArray* __this, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_5 = ___0_item;
		WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m0C5C554BB812EDD8F79E40C669E95F95EC6160F9_gshared (RuntimeArray* __this, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_5 = ___0_item;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_m6B3F37F3FCC9B6D0C9D422AB871825F9973D5C98_gshared (RuntimeArray* __this, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_5 = ___0_item;
		XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_m266C25C63246A960D5FCE8A6234C25CE961826B1_gshared (RuntimeArray* __this, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_5 = ___0_item;
		XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_m04440F253D76CE434E42CB6CE4962F933CC528DC_gshared (RuntimeArray* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_5 = ___0_item;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_m448C264CB8FE04F8819A7AFBE2FEC93289E6216F_gshared (RuntimeArray* __this, XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_5 = ___0_item;
		XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIl2CppFullySharedGenericAny_m8B7CCAC86F27AB5C27D0AB84D823D11D11013D25_gshared (RuntimeArray* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	const Il2CppFullySharedGenericAny L_10 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	memset(V_2, 0, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (Il2CppFullySharedGenericAny*)V_2);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_6, V_2, SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_6);
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9;
		L_9 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_8, L_9));
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___0_item : &___0_item), SizeOf_T_tCF2F275D8C8C55C55C2E8D4C4B513FF0766ABE6B);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_12, (void*)(Il2CppFullySharedGenericAny*)V_2, L_11);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_14, L_15));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0065:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_19;
		L_19 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_mB696172EB9652C14700FFAB54C7F6F65ECC416B4_gshared (RuntimeArray* __this, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_5 = ___0_item;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float2_Equals_mD389D74AC9D1E4E537F95C97B79026A6C3244788((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mBFA13200E975E6D04E95673A9D1EE83211D3E2F3_gshared (RuntimeArray* __this, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___0_item;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float3_Equals_mD988046122040559D8C9EFED2DA347495D722A2C((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m210D3D2CAFCFBD1638A0F50F5A5FCEF6A9867AB8_gshared (RuntimeArray* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_5 = ___0_item;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4_Equals_m4D841ABA91D26FA16B07205DC9D51612265FFAB4((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mF115854BF0EEBBACD62DFDC41024B6E0A7D0D483_gshared (RuntimeArray* __this, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_5 = ___0_item;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = float4x4_Equals_mD77FF5880D1151E85DC213AFF8E24B12044DB6B8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisint4_tBA77D4945786DE82C3A487B33955EA1004996052_m851EE47A6B716BC6E89AEE483DAD3FD19CBDB1C5_gshared (RuntimeArray* __this, int4_tBA77D4945786DE82C3A487B33955EA1004996052 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int4_tBA77D4945786DE82C3A487B33955EA1004996052 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_5 = ___0_item;
		int4_tBA77D4945786DE82C3A487B33955EA1004996052 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = int4_Equals_mD93E26A15709372D4D3E34D8797F80C3FA01CD97((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisjvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_mED8E439E04FB9F91B7180387B5CF3635FE8D9AC6_gshared (RuntimeArray* __this, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_5 = ___0_item;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisquaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_m7333310631C789ADCB310F96285FAFD89F5DB195_gshared (RuntimeArray* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_5 = ___0_item;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAnchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845_m9C2A5EA5743ED64A8C7333D4DE4012EF702BC482_gshared (RuntimeArray* __this, Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845 L_5 = ___0_item;
		Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Anchor_t3DA9B0DC41D0E2960E0EBEFA43A6AB410D052845> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE_m0F0F27C18190887EFE68143BD32DA120E6580521_gshared (RuntimeArray* __this, ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_5 = ___0_item;
		ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D_m06256604D61B4F324224F520CA9A5B5881DEDA2A_gshared (RuntimeArray* __this, AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_5 = ___0_item;
		AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeEntry_t646320DFCA1CFF9E19700C8AEBF785FE35BB2A9D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_m2C3587CAF7FFE2171324C0AD9C78B226C72C0E7B_gshared (RuntimeArray* __this, AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_5 = ___0_item;
		AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253_m42022C48B079C10FB78D4C9AD7B18FBB1AB42B33_gshared (RuntimeArray* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_5 = ___0_item;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDBD0FB46B01ABF3DDAF2B784A3A3E91CC16C998F_gshared (RuntimeArray* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPage_t04FE552A388BF55B12C8868E19589136957E00A5_m2326940FBBFF6C4D56FA7B8FC99DDF815289E2F9_gshared (RuntimeArray* __this, Page_t04FE552A388BF55B12C8868E19589136957E00A5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Page_t04FE552A388BF55B12C8868E19589136957E00A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_5 = ___0_item;
		Page_t04FE552A388BF55B12C8868E19589136957E00A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Page_t04FE552A388BF55B12C8868E19589136957E00A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTableRange_tD242F3D62C818E84B6903C18A6CE33399672B497_m3BAEFC9B5542B6A887B221028FD733779E8F23EB_gshared (RuntimeArray* __this, TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_5 = ___0_item;
		TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TableRange_tD242F3D62C818E84B6903C18A6CE33399672B497> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116_mC6BF80A58EC605B84514448E1C35EBC7F68B7967_gshared (RuntimeArray* __this, AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116 L_5 = ___0_item;
		AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AreaTargetData_tAF1E1697E6D7C71E030BC00BA36F0462C459A116> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9_mAE8C6AF7AF63B5E4B30F017EFFEFF78D85BAA0A4_gshared (RuntimeArray* __this, CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9 L_5 = ___0_item;
		CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CylinderTargetData_t44BC2130A9D17AF0DA730F85E07FD43BB6104FE9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B_m559624B60493078B5DFE9E0732675411E939C60D_gshared (RuntimeArray* __this, ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B L_5 = ___0_item;
		ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ImageTargetData_tAC7CDC3C9AFC3FD2AEA91228C1A7E56E3F2BD54B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D_mCD59ADF199B91EAF5C16B29B5E3681C2C792EE74_gshared (RuntimeArray* __this, ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D L_5 = ___0_item;
		ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ModelTargetData_t9ADFCD29536760032C777CDBCA3E86026138610D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD_m445CD89819AE6B382993AF5C538D6A9AD1946F9F_gshared (RuntimeArray* __this, MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD L_5 = ___0_item;
		MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MultiTargetData_t06F442BF6288A84E28C091779A69B363A9E58EDD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB_mA7BB6713B0EE7EB76803950F96CB138EED440239_gshared (RuntimeArray* __this, MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB L_5 = ___0_item;
		MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MultiTargetPartData_t0F57F55AEC2B8AAFA77D7FE23052537D3AC2DACB> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C_mC0CED7804EAFAA8DE4DAD973772E0925BCB22AB0_gshared (RuntimeArray* __this, ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C L_5 = ___0_item;
		ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ValidationAreaData_t3F6B02113A782A8A075E017133DD63C669357F3C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1_m9A68F3B31C3DE1ED13CB379F7C229BFBC99683E1_gshared (RuntimeArray* __this, VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1 L_5 = ___0_item;
		VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VuMarkData_tCA2C474941EB81B41AE716F777CE97F870A655F1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisItem_tFA847F868B1ECD768A489638A61F7BC398DECDAC_m3FA13A58C9D29B90B78447E8C392E806C64D9F49_gshared (RuntimeArray* __this, Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC L_5 = ___0_item;
		Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Item_tFA847F868B1ECD768A489638A61F7BC398DECDAC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4_m9BD8130D05A0BB89434AC0348459DE09408151F5_gshared (RuntimeArray* __this, ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4 L_5 = ___0_item;
		ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConverterKey_t229FE236736BFCAAE6BAAE10197264C5635309E4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3_mD628D4BC3DE15A6E96F72EE8FDAF3BC8DFFBBD87_gshared (RuntimeArray* __this, RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_5 = ___0_item;
		RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RecognizedAttribute_t67AAD871D05C66CFF976B98E4492B979993FB7D3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_mD9C0B60994B0734D8C4794DC240DF2C6E1CD3599_gshared (RuntimeArray* __this, AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_5 = ___0_item;
		AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_mCA26A017D34372ABCB941A8F5C1D5FA8B0618918_gshared (RuntimeArray* __this, SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_5 = ___0_item;
		SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393_m6BF0F2E8635D7502427C421D3BB4BFAF2E610C45_gshared (RuntimeArray* __this, BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393 L_5 = ___0_item;
		BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingDataCollection_t12C0EB3332113B5F8C71B1F1CC1632CD10256393> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_m01263C2C9E69292B5B4AFBB46E8CA6E749197130_gshared (RuntimeArray* __this, BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 L_5 = ___0_item;
		BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_mF67B73146FFB3DEFA2DE4D52453A19B2B7FF10DF_gshared (RuntimeArray* __this, ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 L_5 = ___0_item;
		ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274_m517CDFCC671986C67F6CB56ABF52E9063EDCA3EA_gshared (RuntimeArray* __this, ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_5 = ___0_item;
		ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColumnError_t3D871FBB7F0AF24C2D8AF6F334C1D65729079274> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B_m56FBDCCC892EFF9144FAE93A2E1F2766DD3D2208_gshared (RuntimeArray* __this, AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B L_5 = ___0_item;
		AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AlbedoDebugValidationPresetData_tCCFD994474750370F3F5AAEE6312FDF5F06C106B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D_m78965E60CA0F8D8DA9E27A835289803A5CBD49B8_gshared (RuntimeArray* __this, DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D L_5 = ___0_item;
		DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DecalEntityItem_tE2209120E111E679725F7022B0C54DEC6783EA5D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9_m2792BBD9B1089B3C26D0FAE541544180A29D05A0_gshared (RuntimeArray* __this, CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 L_5 = ___0_item;
		CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CombinedChunks_tCFB3356163B9F9B0E31E0B194E9B415F83340ED9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375_m30FA6D1F4240D26CE1A7D7B6B197F09E4430E438_gshared (RuntimeArray* __this, ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_5 = ___0_item;
		ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ScalerContainer_t8C9EBECAB45F9B7C806AF9F477262E5F80F5E375> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C_mB2CEC96591FE8AA10B19F28E7F44413DB781B439_gshared (RuntimeArray* __this, AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_5 = ___0_item;
		AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocSize_t906784497648EDC3F45F4EA656C6858238BA2F7C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B_mCA0D4465C3C1B03974E8FA00747BFD23FE5F21FF_gshared (RuntimeArray* __this, MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_5 = ___0_item;
		MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<MaskMesh_tBA4A29153655DB02C99D6BF624A64795A084806B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_m8D42839F5033101608759246007E834BB78F5A34_gshared (RuntimeArray* __this, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_5 = ___0_item;
		DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mE6AB4B39A9EE3036CD5E36258643D4B14B560F99_gshared (RuntimeArray* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_5 = ___0_item;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0_mE744B04BFFAF70A4E1BF0B373F6B725B4242B832_gshared (RuntimeArray* __this, DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_5 = ___0_item;
		DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DefaultEventInterests_tF62D361FCDFA26C0E0A55ECCD8C20A64B3F2D8F0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRegistration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7_mF555469D2BF929F33D9D040CF4E3B8936F4DA480_gshared (RuntimeArray* __this, Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7 L_5 = ___0_item;
		Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Registration_t4882E3A82099DD20B2E91917C08BD4D2216F21D7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReservedWords_t2834E11516C795E0AD880A651793517590DFCF87_m3BFE4A559C95BA5D1BD9F9E3AB33C69458415D95_gshared (RuntimeArray* __this, ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_5 = ___0_item;
		ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReservedWords_t2834E11516C795E0AD880A651793517590DFCF87> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929_m062485B53BE262184475AD2DF7A638548F0BA04D_gshared (RuntimeArray* __this, BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929 L_5 = ___0_item;
		BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BlitMaterialData_t8B4CAD38F4F25D16C156FD16BECB34FCA26E4929> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_m3046D7DEC9CED9D96EE064B1862594C6EC755E41_gshared (RuntimeArray* __this, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_5 = ___0_item;
		FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B_mE59718C87AAE96BFFBFE7806525041256D2B3662_gshared (RuntimeArray* __this, PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B L_5 = ___0_item;
		PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PlanePacket4_t2954005DBF78AC180CF45B652536CC2F5158D54B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSplitInfo_t708E0734C9BC407BA5882105A9721756605C913A_m513D834E6E8648D225FC5C0F8D0A6EDCD32A60CD_gshared (RuntimeArray* __this, SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A L_5 = ___0_item;
		SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SplitInfo_t708E0734C9BC407BA5882105A9721756605C913A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7_m77D8E2C51712B5EE4901CE8AFEA43CA130C3A9F9_gshared (RuntimeArray* __this, HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 L_5 = ___0_item;
		HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDCollectionDescriptor_t9235094BD1880EA02E4E07F9C02AC98088EFB9F7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED_mE06B4DA690BFEE6EFB21D1714CC549487F399B21_gshared (RuntimeArray* __this, HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED L_5 = ___0_item;
		HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDElementDescriptor_t18CA9618F730F541BA1C873745A1AE71823D4CED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F_mE936F2AD7507789BB7F33174979FA2F90C2A9A76_gshared (RuntimeArray* __this, HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F L_5 = ___0_item;
		HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDReportData_t2F0D5DFC9087B851FA3288EFBB6FF4EAA863BB4F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F_m922598E17FC74CF89B0D5C26004FD5B46995C993_gshared (RuntimeArray* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_5 = ___0_item;
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0_m6152CFDBE6A641209CD91A7736FF7B9307FBADDB_gshared (RuntimeArray* __this, Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_5 = ___0_item;
		Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq16_t397C360C61F6E7F51A0A76E3D2C33D9E3E7DA9C0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3_m74F88EA3F347402D12661A7232F4D68E508480F2_gshared (RuntimeArray* __this, Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_5 = ___0_item;
		Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq256_tC5B5FB2A55263672FAF8EDF3CC19470F51E623C3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042_mC210119A626925F08B1DF56E02C4A7FD48D3F105_gshared (RuntimeArray* __this, Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_5 = ___0_item;
		Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq32_t5222FE247619F99BDD08C37FE5B0D94747718042> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7_m92D5ACE2BF2579F0F71E11B4CF2BE9FB4EF4E71A_gshared (RuntimeArray* __this, Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_5 = ___0_item;
		Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Hammersley2dSeq64_tAF73FAB2FE740998DFFF551198D6C651F0A058E7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_Tisbucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_mA601AC1A9209505C75ABCBE3D5DFBA677221EAE0_gshared (RuntimeArray* __this, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = ___0_item;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C_m2B1D94AA92AE385E5FCEDD0B5113118ABDDFF90B_gshared (RuntimeArray* __this, HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_5 = ___0_item;
		HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HebrewValue_tC21FD2DC21D49A9CC5EBCB7895A9431A5DF0801C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A_m26CB01E30E96EC9BD05BABAB5ACDE3A10EAEFDB5_gshared (RuntimeArray* __this, BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A L_5 = ___0_item;
		BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingJson_tD39890E66B1818DE8FEDA640970E315109723F7A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2_mE21BF469E6EE32DB237508CB37ED5DBAE4F9264B_gshared (RuntimeArray* __this, BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 L_5 = ___0_item;
		BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BindingOverrideJson_t32DC7BCB9A35C133E2B4F4BB185592F1C0A97AC2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75_m566E260598518BB769AAE3AA93D2820C109826CE_gshared (RuntimeArray* __this, ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 L_5 = ___0_item;
		ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadActionJson_t912C3AB53939E37EA2AAE5AC5E50CABB2CE52A75> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356_m42EA84E81D7BCD8825F88D95732F9C0899603E1E_gshared (RuntimeArray* __this, ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 L_5 = ___0_item;
		ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ReadMapJson_t4C2C1BF7E023C8F056170F9BB2E037A0C2BED356> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A_m51B5BB964F5BD68454377825EB159249E2CA9203_gshared (RuntimeArray* __this, WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A L_5 = ___0_item;
		WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteActionJson_t42C7FFE506F2CC1ADC4FFA45CCE53AD6AC00404A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5_m59544530C179882B28D722C464FDBA6CF4F67FC8_gshared (RuntimeArray* __this, WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 L_5 = ___0_item;
		WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WriteMapJson_tC52CE27F1307259B5B16A31FA675ACC13305A0A5> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6_m48F922AF59CC071545D85B4D151EEC5A65165E16_gshared (RuntimeArray* __this, Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 L_5 = ___0_item;
		Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Parameter_tD6E1ED34401D532B18F2CEBCDA8BC4E5332110B6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA_m07EBB4CF49C64BA810DC9222B0A7C4A87EE5359C_gshared (RuntimeArray* __this, ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA L_5 = ___0_item;
		ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParameterOverride_tC0D5877125AE0F07C6A1EF2110FB799B3DCB89BA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_m560AF2A896CF67E9F6B2FDF6EC4541E560EF7585_gshared (RuntimeArray* __this, ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 L_5 = ___0_item;
		ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_m2EC0B74436603B32934748E25B6A0BB0CB36969C_gshared (RuntimeArray* __this, PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_5 = ___0_item;
		PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_mA91FA44A824E45957E04A938E889B0E64AE64299_gshared (RuntimeArray* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_5 = ___0_item;
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74_m6A0E7EFA9A802266CA04DCE9DC75A40B5BC05D6F_gshared (RuntimeArray* __this, ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 L_5 = ___0_item;
		ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParsedPathComponent_tFDDC18D805FF3BA971DCCF6C6F2B2F4129F6FF74> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_mAECF9C1B5D13DFB96B8A5E4998B20F556C36C834_gshared (RuntimeArray* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_5 = ___0_item;
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = DeviceRequirement_Equals_m8B21D6C5F042071FE736CC9D3F360265AEE9F6D8((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80_mEDFFBEE7EEB4B1001F3A214DAD96889A4C16B10B_gshared (RuntimeArray* __this, SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 L_5 = ___0_item;
		SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SchemeJson_t35D7E80205240ADFCEC9BDED04EFD8AC94D18E80> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0_mDEB3E004A1E5FF5F437E882204531F1A0326A087_gshared (RuntimeArray* __this, ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 L_5 = ___0_item;
		ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_m63BD7317CBE7DCE42E98F77CC3A25FC401367D98_gshared (RuntimeArray* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_5 = ___0_item;
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6_mFAFBFEC78FBE5ACAD79047FF95A9D65BB94A1109_gshared (RuntimeArray* __this, AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 L_5 = ___0_item;
		AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AvailableDevice_tEA24B4A4D9BF644F85FECF7EEACF2D02369940B6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA_m3424C1E431699A2C8D9DBB70DCA097B120D41850_gshared (RuntimeArray* __this, StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA L_5 = ___0_item;
		StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorListener_t8DDE11DEF769AE92B7A6B6554D41511AA2A7BDDA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE_mEBBED4B22984B79037B58119C795928C64A409D9_gshared (RuntimeArray* __this, StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE L_5 = ___0_item;
		StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorTimeout_t9D00677B36798F8E8A4FA1DC5797CBD5F5C4F1DE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1_m70DCACE3B314850639BFD7A49B0BD02CC4528E7C_gshared (RuntimeArray* __this, StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 L_5 = ___0_item;
		StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StateChangeMonitorsForDevice_t1D72E96B14B577C50ECFE5DB631E9D7EC32CC0C1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE_m6F8D910DD10DB908807E17EFCD299E8B89C0866D_gshared (RuntimeArray* __this, RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE L_5 = ___0_item;
		RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RemoteInputDevice_tF7E8C5EB795DA20F3EABAA259FE5A118C976C5AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736_m127A8B6703C3725B2145BE2DEEF75481A4A59CF9_gshared (RuntimeArray* __this, RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 L_5 = ___0_item;
		RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RemoteSender_tDE9BD8E2CF827F718C3C22D9A38F8E84AC188736> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRecord_tF7FF07DC502355356B48CE78337FB16B196E2EE0_m570EC8080CCDE3D1BB38C17144DC915ECAC94B39_gshared (RuntimeArray* __this, Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_5 = ___0_item;
		Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = Record_Equals_mEAE03AEEBA5DD28BBFD29288ABD97ECA570E1745((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9_m5F0973F54663839AE7841A98493AA4CD5FD5A373_gshared (RuntimeArray* __this, InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 L_5 = ___0_item;
		InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InputActionReferenceState_t4704CE84127FDB4DDB6AAD752B3ED2530768C4F9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_m9BE1B4398B37D2EB506CB3ED1831D43737E41072_gshared (RuntimeArray* __this, OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 L_5 = ___0_item;
		OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_m1D2DC3C85918D71C69638592C5DA8F54B1DFC8BD_gshared (RuntimeArray* __this, UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C L_5 = ___0_item;
		UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInfo_tA3039772991DEEDBC29A00439A055C5166133A27_m869108A0B6B5EA7187A5813ADAA0692695B035B6_gshared (RuntimeArray* __this, Info_tA3039772991DEEDBC29A00439A055C5166133A27 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Info_tA3039772991DEEDBC29A00439A055C5166133A27 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Info_tA3039772991DEEDBC29A00439A055C5166133A27 L_5 = ___0_item;
		Info_tA3039772991DEEDBC29A00439A055C5166133A27 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Info_tA3039772991DEEDBC29A00439A055C5166133A27> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInfo_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84_m8BC3A0966FAF67945415BD43965595F793E287E3_gshared (RuntimeArray* __this, Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 L_5 = ___0_item;
		Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Info_tDBEB127ABB26184014A541C0CAD1FC8D1B95DE84> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m707EC9D4CB192201E6201500CA1AA2DC59ABBC38_gshared (RuntimeArray* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_5 = ___0_item;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = JsonValue_Equals_m4A516862648D99564D5FA05FC99DF63A275D2996((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m08B10E2BA8F69F3F32142B161EC79C137870920F_gshared (RuntimeArray* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_5 = ___0_item;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C_m5B45BA13395A85FC016BB361ACD6F9C7830AF4DD_gshared (RuntimeArray* __this, BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C L_5 = ___0_item;
		BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BitRegion_tFE885CE2CC6C0287CF86BF59672C19D86D8DFC4C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_m56FC6C59CF51FFB7A1AA3A50B2D25D4CC5ECF08C_gshared (RuntimeArray* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_5 = ___0_item;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D_mE0818D33DF401FE83D69A21DAF61E1A407D3BAE6_gshared (RuntimeArray* __this, BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D L_5 = ___0_item;
		BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BackgroundRepeatInstance_t2D7A8E1F6278188BE2026DF769C49A975D38B12D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C_m7C1E116B4824BB896AE4D1AEC907523FC2130C50_gshared (RuntimeArray* __this, RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C L_5 = ___0_item;
		RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RepeatRectUV_tD14FA437CD80FC82B2ED78B34A201F3C91416A7C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2_m47D7925E27D7549B33C0A9186238C769B825058F_gshared (RuntimeArray* __this, TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 L_5 = ___0_item;
		TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TessellationJobParameters_tA2407D5C15761590BDD217DDE4861964544E8CE2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA_mD69603BF7C970A53FCD893F6706E0C1405D95A75_gshared (RuntimeArray* __this, SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_5 = ___0_item;
		SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SortedColumnState_t24958C451ECBAA5C6C868EA4881A27E45DEEA1AA> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D_m23C4C1E1D491FCD1032B1BFBFF138D92E74BB345_gshared (RuntimeArray* __this, OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D L_5 = ___0_item;
		OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OccluderContextSlot_t963DBFFF1612E4108D0BEB42369F78758BE71D5D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisOnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_mD4F84A932F94D7D781700834C3B4F84A4CF4520D_gshared (RuntimeArray* __this, OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC L_5 = ___0_item;
		OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPainter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF_m25F320D02C70522AC0FFB4864F1F93BDCFC7D29F_gshared (RuntimeArray* __this, Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF L_5 = ___0_item;
		Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Painter2DJobData_t227572FEAE4A071ED0378501E752A72FF0ACC4EF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_mC66BCEC5997879778FB48B85283513E7C9F19DE1_gshared (RuntimeArray* __this, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_5 = ___0_item;
		FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_m8E283C6E972C0C2D8202BF74D4C9CDE2366FC907_gshared (RuntimeArray* __this, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_5 = ___0_item;
		PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBrick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0_mCDC98C72E7779F960FD49DC607B283EDFA5C8C66_gshared (RuntimeArray* __this, Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_5 = ___0_item;
		Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Brick_tE6E9230DFDF650A631C116E79FB28F41618C3CE0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612_m64E40FD4D44FAFDE6DA025B0D0EB8FEEB2DC8116_gshared (RuntimeArray* __this, IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612 L_5 = ___0_item;
		IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<IndirectionEntryUpdateInfo_tE7FBE2925AD48922F9CF93DDB2DD6F80961D4612> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B_m97EC877CCE58159A2EEE4CE639BA5BE80461F58A_gshared (RuntimeArray* __this, BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_5 = ___0_item;
		BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BrickChunkAlloc_t95EB283E186F5DA1E74A8DDE415EB8E7ABFDF51B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E_m7071BA33D33B78D2D7A15C78C18D362B22CC782A_gshared (RuntimeArray* __this, CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E L_5 = ___0_item;
		CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CellStreamingScratchBufferLayout_t9C3A198B967DCECDB79C97C05BEFAEA74E70077E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisIndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491_mA2BC9C58539C58AFCF35685DE48DFF974647921B_gshared (RuntimeArray* __this, IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491 L_5 = ___0_item;
		IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<IndirectionEntryInfo_t64A9F32C66AB51C1D55146BF5FA63393DEA1F491> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2_m482DDC495C8551B58D67EF37A988A616B2085CB7_gshared (RuntimeArray* __this, ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2 L_5 = ___0_item;
		ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProbeLayerMask_tB42B4F7201B4073E8F701C2B3F6A2B5A113574C2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591_mD6270682ADE7F23813BD32B456E072F76C2F2CF9_gshared (RuntimeArray* __this, SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_5 = ___0_item;
		SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SerializedPerSceneCellList_tDF6654463D2F5052472326DE949ABE002ED92591> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7_m7565C0B52D6E4754F73A413A30764C43B97D37FA_gshared (RuntimeArray* __this, ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_5 = ___0_item;
		ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ObsoleteSerializablePerScenarioDataItem_t4DB1ADB8C2522C62B43309AF1874419D8572EEB7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A_m30F4A0B7655BFCE7A5242B76133BA9B152051950_gshared (RuntimeArray* __this, StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_5 = ___0_item;
		StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StreamableCellDesc_t30C9692E80F3E2FD12CF286548763F9F4DE5048A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A_m66B6169E5D7871C8D78357A054F5C14EB526C93E_gshared (RuntimeArray* __this, SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A L_5 = ___0_item;
		SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SplitInfo_tBD1436BC99CBBC9658FA9219EB22657F757C4A1A> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098_mD4F4574659D3CF238BB42E8C9FE97A74E3EAAC97_gshared (RuntimeArray* __this, CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 L_5 = ___0_item;
		CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CachedProbe_tC10A827C72825D45E4EDEC5B930D0B16B188C098> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_m7B5F1DC7B98598CF59BA5AAB966E0D8679A4D001_gshared (RuntimeArray* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_5 = ___0_item;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = CachedCodeEntryKey_Equals_m59F40708B97179EA5C9019EA6A958D7AB8BC8CA2((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_mAEC37F2039B0F7F73E9403615F03B431ADE58D13_gshared (RuntimeArray* __this, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_5 = ___0_item;
		LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mAE6B169036ECFBDE5BBD3D8A641A3235F1A758D0_gshared (RuntimeArray* __this, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_5 = ___0_item;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948_mA7089BEB84067A7BCD9B95520E5515202FE4CDC9_gshared (RuntimeArray* __this, CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 L_5 = ___0_item;
		CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledPassInfo_t0602472C646D539122A25EDD89C2E65F136A1948> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C_mC3A8625B2AFB7B01652F6EC75C371F8C8975B333_gshared (RuntimeArray* __this, CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C L_5 = ___0_item;
		CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<CompiledResourceInfo_t22204344249241C372CFC608709931F7EEEF733C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B_m1288AA902F893CC9AC9FEB3C1403E80913F6F811_gshared (RuntimeArray* __this, RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B L_5 = ___0_item;
		RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RandomWriteResourceInfo_t04214564685AADFC286AABE3C3254CE97ECEC34B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C_m67FB843D6342579C98D179E1883082C2529621DF_gshared (RuntimeArray* __this, ParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C L_5 = ___0_item;
		ParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParamInfo_t803ECC740CF6797AB0777E9A7EF99DFE0B081A9C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSegment_t7476FA02F7FF67504507F796A025E59EA4F8D46C_m432FD5E8A744C04771798FDF11B99C326E36E523_gshared (RuntimeArray* __this, Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C L_5 = ___0_item;
		Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Segment_t7476FA02F7FF67504507F796A025E59EA4F8D46C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406_m572F2328E0A5C048A8B6C80C8249F87F3514445D_gshared (RuntimeArray* __this, Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 L_5 = ___0_item;
		Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Tag_tB37E1F5BC9241B2E9F87599AE63B581ED70F4406> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631_m1DCAD63339D39A064208BD5E860CEC27D3D84ED1_gshared (RuntimeArray* __this, PerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631 L_5 = ___0_item;
		PerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerViewConfig_t95D30D36A2FFBE52731798AEEBE923AA7752B631> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisStpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754_mB0E208812944A2435353A8E686900B0E8CCABF68_gshared (RuntimeArray* __this, StpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		StpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754 L_5 = ___0_item;
		StpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<StpConstantBufferData_t12C7727CEDC1B8B7ECA73862CD7BB3F5D32B2754> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisHitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_mA936B807A02B5465FFD26D1EEE1F5F28B671349B_gshared (RuntimeArray* __this, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_5 = ___0_item;
		HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7_mC55B38F8F17BCB40BA76C54D41E7EE4E5498CF65_gshared (RuntimeArray* __this, SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_5 = ___0_item;
		SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SequenceConstructPosContext_tDEC4FB1B8F19EFD1AC27C150D561C2D4F6090BA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED_m9BDDE4FA2EAF5C8E854CB2C04E4397E5501894EB_gshared (RuntimeArray* __this, LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED L_5 = ___0_item;
		LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LightData_tAC4023737E9903DE3F96B993AA323E062ABCB9ED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSlot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127_m171CE1534A456F363B042BD6BF6A6A5C30630E45_gshared (RuntimeArray* __this, Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 L_5 = ___0_item;
		Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Slot_tA2F29CF08EAE46C3E2B6D96DCD7C96BF887A6127> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B_m36D8E5EDD2689046B5048891009485A44525E1FA_gshared (RuntimeArray* __this, WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_5 = ___0_item;
		WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WSABUF_tCBB60A3DE1FB95395F72DA6C6F9D33FE3C40140B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_m269BDB3F4D473D96BA2863991CCFF95FF98FAAA5_gshared (RuntimeArray* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = ___0_item;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_m1359E84ED80560DC8719533F13A642EEE993FA4E_gshared (RuntimeArray* __this, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_5 = ___0_item;
		ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_mEDC204D897D57BED6CEE721EB401F8C1E7F8FA05_gshared (RuntimeArray* __this, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_5 = ___0_item;
		ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574_m573A2963FF86144B07F7F8AE6593A6F71DA1345E_gshared (RuntimeArray* __this, SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_5 = ___0_item;
		SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SheetHandleKey_tD6F2FE5B26CB5B86F18F74C8D47B5FA63D77B574> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_mD4A0E3D2C943FF36684930D2D9824C55B9E1609F_gshared (RuntimeArray* __this, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_5 = ___0_item;
		ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2_m19136BCA94960DA96FCD4B660DE13E308BC6110F_gshared (RuntimeArray* __this, FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2 L_5 = ___0_item;
		FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontReference_tC622F9633EF0CC4D4A898DB2ACA771122AA722A2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F_m97262A0383CD55C5B5E9744CF9744C2FE8D9336E_gshared (RuntimeArray* __this, FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F L_5 = ___0_item;
		FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontAssetRef_t13D11FF02B5009724B829DBC1C9AC5493170606F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002_mB3F7B98F99B15060821BA7D675C61EA1080CDD9D_gshared (RuntimeArray* __this, TextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002 L_5 = ___0_item;
		TextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextProcessingElement_t112DA2367B8DCCFC278C42DC49D5C832FF415002> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94_m09D2BB32E8D7985689C0293872998D7E39680D63_gshared (RuntimeArray* __this, ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94 L_5 = ___0_item;
		ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ThreadData_tA70A7A546B8B58F4F9D2ABE81A67CE6C324A5E94> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_mB128E0A356F08CB5456DAA2D88E96655A8AB7003_gshared (RuntimeArray* __this, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_5 = ___0_item;
		AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67_m41D23D8EFA1BF853264F4FDA8B25272A1D4E163F_gshared (RuntimeArray* __this, UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_5 = ___0_item;
		UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UxmlSerializedDataOverride_t612A2DF19F1F3AF231244900F30A331CFB9CAD67> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_m8F716108A5A14F5A7B25F6343D3D0E0745826D7A_gshared (RuntimeArray* __this, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_5 = ___0_item;
		FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_m1774B27BC5EF4D40FB16BBE549B614260745420B_gshared (RuntimeArray* __this, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_5 = ___0_item;
		FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisBlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_m5FFBC09949B7E60E859100058D764EAD74E4EAEA_gshared (RuntimeArray* __this, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_5 = ___0_item;
		BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisFrame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD_mD9D89FB216988AE6FFF71483494D974954088EC9_gshared (RuntimeArray* __this, Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_5 = ___0_item;
		Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Frame_tE254B3BDA010B9114EF1F470C177342FAF3E8FFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_m4717169AE2C7EE107250FB849FC360F98161B166_gshared (RuntimeArray* __this, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_5 = ___0_item;
		TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_mC4B5AFEE82887920185F7735B6B6F3A18C05335D_gshared (RuntimeArray* __this, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_5 = ___0_item;
		TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisRaycastHitData_t5EAB266730389AB27715962670C2512800451841_mEED3E7196C62F4D9F8C200CFD83C6D2DBE054CD7_gshared (RuntimeArray* __this, RaycastHitData_t5EAB266730389AB27715962670C2512800451841 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RaycastHitData_t5EAB266730389AB27715962670C2512800451841 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_5 = ___0_item;
		RaycastHitData_t5EAB266730389AB27715962670C2512800451841 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<RaycastHitData_t5EAB266730389AB27715962670C2512800451841> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED_mBFE7DBE17D105E7DA69E527AF3FD74F8A6C9F505_gshared (RuntimeArray* __this, ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED L_5 = ___0_item;
		ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ConverterKey_t6745D40AF749763178406F1EBDE17C17F74A60ED> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_m6E06811914A9B267F927DE35C37BB11115EE93F6_gshared (RuntimeArray* __this, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 L_5 = ___0_item;
		AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_mC60FDA052C390D02DD08D19745BBE46EDD67E07B_gshared (RuntimeArray* __this, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 L_5 = ___0_item;
		AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_mBD39F281C02F002724F0481D668C1289046168B2_gshared (RuntimeArray* __this, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B L_5 = ___0_item;
		DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_m58E5D996F93DBF21AFC6350D6F1C60211B661A75_gshared (RuntimeArray* __this, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_5 = ___0_item;
		DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m31A62937883F119D36E9BE9D9BA31B6369B45579_gshared (RuntimeArray* __this, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_5 = ___0_item;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisItem_t03C78E910AEF9602D894C512E8868D5E32A2EC99_m4655792978DDC394173954756414713E0429ECA0_gshared (RuntimeArray* __this, Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 L_5 = ___0_item;
		Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119_mC19A30126597F5911177F4BB992CED37EA432F65_gshared (RuntimeArray* __this, TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_5 = ___0_item;
		TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TextureData_tE94917EF09AA9845384F5F7D4E3AA38747674119> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_m65196C7AD14E9DDD39207B970223C78B5148B332_gshared (RuntimeArray* __this, AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_5 = ___0_item;
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_mD89894A2B146936D502A2786F4B2D71EAD42CD48_gshared (RuntimeArray* __this, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_5 = ___0_item;
		SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisSlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_m303EA946CB42AE7FF787F8EF4C4243021BBE5277_gshared (RuntimeArray* __this, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_5 = ___0_item;
		SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_mA3BB24204157BEA8D7C7C4FAA18219698CC277BF_gshared (RuntimeArray* __this, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_5 = ___0_item;
		UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisUxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_m513A1C50C2CB69AAB1809B589F7E5A41F0888468_gshared (RuntimeArray* __this, UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_5 = ___0_item;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8_m1D2BDDD5654263516C1296D6B6B0E3862CCBE081_gshared (RuntimeArray* __this, VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_5 = ___0_item;
		VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VersionInfo_tD8EF94E6EB7FCB9167CE193F9FFAAB6DE0518DE8> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6_m473BA5731F69326BCB3F50C3DABDAD9E648E857E_gshared (RuntimeArray* __this, ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6 L_5 = ___0_item;
		ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ProfileData_tA2B9E7119CD0F5AE7EDAF3E1141BBA4905FDDAC6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2_mC99463EDC5F84A918CA1AD971B365F67D9764F31_gshared (RuntimeArray* __this, XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 L_5 = ___0_item;
		XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XmlEvent_t71D4A86D45FCBC2D95E47F0EC32CEC49FEA1E0B2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4_mDEBEADAC35098D86A9B1AE35C5D818600E0949AC_gshared (RuntimeArray* __this, NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 L_5 = ___0_item;
		NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<NamespaceDeclaration_tF445C0E2CA7FE3EF3357E2FC0D282A04136174F4> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisVirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49_m2449D15E3C465968295B042BDCBD7344E2438546_gshared (RuntimeArray* __this, VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 L_5 = ___0_item;
		VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<VirtualAttribute_tA52A03466D0572EE2CA47743C4A08EEE73A66D49> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisXmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD_mBECD338B2169FB1BC822C7E780674CC0CB8D6A07_gshared (RuntimeArray* __this, XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_5 = ___0_item;
		XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<XmlSchemaObjectEntry_t79D1310E1F5CA860FAD243853E59A3C2ACDB83CD> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE_m3902C7E949A1C4B98C874A5448DB6899F17B50EC_gshared (RuntimeArray* __this, AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE L_5 = ___0_item;
		AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttrInfo_tE531B225E6B37BA755A3F7B0DE8FCC6D3AB453AE> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235_m33E479332C8785CB2A60EBD41696A432347FA2D3_gshared (RuntimeArray* __this, ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 L_5 = ___0_item;
		ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElemInfo_t4643E7FF61D3697F995A85EDF42BF479EA30B235> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisQName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156_m4DA56ADAB8FD118CC9A76AEA0EEEC17A0ED9EC78_gshared (RuntimeArray* __this, QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 L_5 = ___0_item;
		QName_tA3E1CB09850DEF9376C068A29697FEDB0F82C156 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		bool L_8;
		L_8 = QName_Equals_mE8465B903C08BDE00EA2293C8BF6841EFB650634((&V_2), L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_9, L_10));
	}

IL_0061:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0065:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_14;
		L_14 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886_m7829131FF37D8DD97590E4BEAD321C72A7FDDB5D_gshared (RuntimeArray* __this, ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 L_5 = ___0_item;
		ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ParsingState_tF0FABA16483FCC2DB710460D11CD79D35C4E2886> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNamespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853_m69965253944E8C82009F8A022AC56F0727CD5324_gshared (RuntimeArray* __this, Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 L_5 = ___0_item;
		Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Namespace_t98C96E77A64CE0105E85EEF2416A270C2AFA6853> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisTagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C_mC5617510E303CE09898EC562E69750F74573CF23_gshared (RuntimeArray* __this, TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C L_5 = ___0_item;
		TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<TagInfo_tDECE4D67D7F52936C9E8F58DE38BE11733108F5C> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2_m9E8480CBA65E66A3C7A58CB8378060DA3BE19876_gshared (RuntimeArray* __this, AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 L_5 = ___0_item;
		AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AttrName_t0B37BBC030EEC83B4B00DFCDD9C1DB43A31675F2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592_mB67C3187FFBE6280617F9D6D0283C4009FC9717E_gshared (RuntimeArray* __this, ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 L_5 = ___0_item;
		ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ElementScope_t7BA86196EE58918EA5CA952D37FE3C7B19A33592> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisNamespace_tC7546D20184E40E3566060C1246B764E4DBA55A0_m7B288F4A0D5A48653D127C2042602F4F63620A5B_gshared (RuntimeArray* __this, Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 L_5 = ___0_item;
		Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Namespace_tC7546D20184E40E3566060C1246B764E4DBA55A0> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisAndNode_tD84E0D831AD339630C4170F558969F4ACAD73653_m77B9EC1B726A5AA7DE6CF08E7CEE01F913777983_gshared (RuntimeArray* __this, AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 L_5 = ___0_item;
		AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<AndNode_tD84E0D831AD339630C4170F558969F4ACAD73653> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9_m98B90DB0F3A0C680176A596860A348921543D96B_gshared (RuntimeArray* __this, ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_5 = ___0_item;
		ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ContextMenuItem_t0D29D1ECB0C1F769EFC9ACA2D0AE6B1A8A4736A9> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304_m38545E86C92832E3FC46B6C11B726012CDCF7C47_gshared (RuntimeArray* __this, PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_5 = ___0_item;
		PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PowerOvfl_t00CAEB1B84D897513AD903AC683159A172CA9304> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMap_t130828B38036909DD82C3A4CCCB9AA0130113AA7_mC3226A5647FB60BA4DD5846234516C0CD8C48B7C_gshared (RuntimeArray* __this, Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 L_5 = ___0_item;
		Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Map_t130828B38036909DD82C3A4CCCB9AA0130113AA7> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisLayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6_m66481E93FE6839038D7EAB17EC9C1B438368B14B_gshared (RuntimeArray* __this, LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_5 = ___0_item;
		LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<LayoutMatcher_t0D8F5E32A7C82BC292EBA0FAA3EB2D9F1F72A0A6> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63_mFB96E42F120F086850EBC9858904A22CDD2B8F9A_gshared (RuntimeArray* __this, PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 L_5 = ___0_item;
		PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PrecompiledLayout_tEFFE070A47145E8B18D5003F777983D278034A63> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisMatch_tA78289B0574DC99A39C9F344CA013C3A5916FBE3_m4401EB68F218868A62921C266A92C344A9ADF161_gshared (RuntimeArray* __this, Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 L_5 = ___0_item;
		Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Match_tA78289B0574DC99A39C9F344CA013C3A5916FBE3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisDeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2_m6E24CAD84FB55B3087E59E1A9C0017348AE9EF1C_gshared (RuntimeArray* __this, DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 L_5 = ___0_item;
		DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<DeviceJson_t62221814EF0AB9D5DB20A870D7C15C45A8AC06F2> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisCapability_t1A686C4F719B0408BCBB428021405F440196E16E_mEAD1D59BA141ED0F19FAF7155FD23D69AFCAB3E8_gshared (RuntimeArray* __this, Capability_t1A686C4F719B0408BCBB428021405F440196E16E ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Capability_t1A686C4F719B0408BCBB428021405F440196E16E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		Capability_t1A686C4F719B0408BCBB428021405F440196E16E L_5 = ___0_item;
		Capability_t1A686C4F719B0408BCBB428021405F440196E16E L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<Capability_t1A686C4F719B0408BCBB428021405F440196E16E> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisInstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D_m01B920BED27D5B68BD3FA2C588E117DE574C1115_gshared (RuntimeArray* __this, InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_5 = ___0_item;
		InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<InstructionView_tA381D8A27DEDDEE43C71B3BB3A2FADC0CD059A3D> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m284F002503E533DFF1FE9F75765F4112988807BD_gshared (RuntimeArray* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = ___0_item;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55_m47ED0DF8B72090ACB15207E4600BC02E3FA19D68_gshared (RuntimeArray* __this, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_5 = ___0_item;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisEntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76_m3180EBDDFB854E56C31D9AF1B79B59BBFCB58B71_gshared (RuntimeArray* __this, EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_5 = ___0_item;
		EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<EntryProcessingInfo_t087A9D95B60BC4FE30163E435406F6CFE3084B76> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F_m911011B95E0779303EFA90D38B65ECDBB38255A8_gshared (RuntimeArray* __this, PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_5 = ___0_item;
		PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PassData_t70EFDE0ED44B50E9E144E803C17DE2373723887F> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3_m85DF541DA785423E079FCC4F70340C0D0714BD68_gshared (RuntimeArray* __this, ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_5 = ___0_item;
		ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<ResourceData_t78BFD0FF4432C51882F5558EEDF6A8925F4F28B3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__IndexOf_TisPassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3_mE600F627497DB4E30935F880BB08AB02CD0BCB43_gshared (RuntimeArray* __this, PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 ___0_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA* L_1 = (RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RankException_t57E52FB1527D150EF5B5E031D2BA08B85BAE91BA_il2cpp_TypeInfo_var)));
		RankException__ctor_m92CFA18243797ADB9BA12DFF436EC3139DCFC48B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89EE3F7AE8AF1895B90AAC597B98A25EFB53DCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(__this, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		GetGenericValueImpl(__this, L_3, (&V_2));
		goto IL_0042;
	}

IL_0042:
	{
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_5 = ___0_item;
		PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3 L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), &L_6);
		Il2CppFakeBox<PassCompatibilityInfo_tD79DCD78EC09F9D22A9E203048C684EEC9C237F3> L_8(il2cpp_rgctx_data(method->rgctx_data, 1), (&V_2));
		bool L_9;
		L_9 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_8), L_7, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_1;
		int32_t L_11;
		L_11 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_add(L_10, L_11));
	}

IL_0061:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_15;
		L_15 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(__this, 0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_m314F69352F273B49C3D148E1309233E3BACE1F3B_gshared (RuntimeArray* __this, int32_t ___0_index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_mF9A73ADA1BCBFCBCC98E58C799CFE5E6ED248C7E_gshared (RuntimeArray* __this, int32_t ___0_index, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC_mDD91C37EC3F8EB264876226ADBE309F82864C7EB_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t3ADF94D95DAB6657C31C89FBD83359BCC8B247EC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E_m5B3034871551AD522083FD42D0C361EEFB7CCE16_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t1C3D3C071EBD9CF479FFE737CB6E0618C82FE95E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D_mD1AF03D14D50FE18B27CAA3324EFFE251076086A_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t00356C2BB80236243B9C3C1D0EFBF8837803D27D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38_mE5BD99C7BA922CC0B352419E3BDA9A2831DE907F_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t7183F0DFD428196C101194E2BD35B1681D39DE38 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83_mFFAF8BB3EFDF5060C0DCB8B947D9824EEEFCFEE1_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t48DAAB7E0603E64673C08055B3C11B08F9AB5A83 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022_mD11F36CBB17CEDC356294E2A6BD921E71BBDC0EF_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tF289285BF36F0D81770920F887D038CEE0FDE022 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3_m78331CCC18EFD3A68E20ADD07C5AA844D919D57D_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t02ECBE01728C0979248845C107F3FCE871DDC9E3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C_m9572804B67904EACD78E5F8D78E499F34E934DA5_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tB976A2FB38B5384D01F0E788A4C35E43321C374C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182_mC95327291CD283A9F3253A753B47503DC8BC5406_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tF13A138DEF2627A8D32807954AEF9E30615B8182 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533_mD8FE840A114E43E4AA4779FF7F12B45D738F1850_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t4FC1686BC526371087AD5A5B28DBE30D1ECDD533 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0_m05CABF3A27739D88F97C652FA07C889EF524A0D8_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t4A4F82A772FE766AA090A0628F398EA4D55646F0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1_mBFE0F071FEA4238E142D656EB860C097331068D3_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t43DE49ADBBE9CFA603DCA7C5CDC998DE6DC976A1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F_mB59D57020A8BA457DDA7B38D10CF53CE4EF2E8A1_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tA8769B9E6E130745DA8CFF6D496ED462ED74B44F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E_m06C63068AD2D6555442052B6B8BD103A007B1D9A_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_t2CB75995D335E22F6BF31D1CB979DB1067C5025E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB_m67EE0EAB15B63389D791F507AAD16D6C485F25DD_gshared (RuntimeArray* __this, int32_t ___0_index, EmptyData_tED1BB22234DD4A2FBA90416759D025535300EDCB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6E72C722C46949F140550D563C1F41E304752583_m0ED5C89C81D24171B6FD8C9718C3A497A235C4CF_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6E72C722C46949F140550D563C1F41E304752583 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEA99553F325828A74A65B889F46BE09836044044_m01A9D4BEE15F6B4309FD801D4EE5F3B0152A0F47_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEA99553F325828A74A65B889F46BE09836044044 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3163F685A0E0BA30BB0DC59EE749223C803392A1_m428DD47FAA15D6AA3D7F2865CB27DACFC42BE44E_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3163F685A0E0BA30BB0DC59EE749223C803392A1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t087349F3AE170AB56B4363B52E225A982E89F930_m77228C487F4C633935B5AD53227EC2FB8E28A901_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t087349F3AE170AB56B4363B52E225A982E89F930 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3_mE8929310EF7A0AC6A92C7F71BDECA62EC4E27AE9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA4817090CE6582E963337E1A7E58CDE955A8A9D3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448_m8FA8D029CBA9CF562E15D497FCB1206AFE78A06F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D_m96CE01A6AAD55AAC953EA77DD1F2865F9EAD5369_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tF030DFA43CB99B28608F2EE73FCD28E7DE2F193D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6E9696F8B80B2FA4B858B58AA27B787B5974C4AD_mD2CD11CACA99810937CE6909BEC369472066BE23_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6E9696F8B80B2FA4B858B58AA27B787B5974C4AD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3BB5AE8DB2C314E056B4DB2BBE9A2C15E7D8B944_m871652275C2F7AC4FDA329BCABFCBC550A2C6D92_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3BB5AE8DB2C314E056B4DB2BBE9A2C15E7D8B944 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF_m6214821C1AFFC81312CB32C17D9D6E9A2AD94D85_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4BAC0D992203B05A8D2645406D4CF9E24E0F5BEF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t899F478E066573053AECA9BF68F5B4E9D05CD67D_m6A15984853375E3EBB56C00A9DF11363F21633BC_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t899F478E066573053AECA9BF68F5B4E9D05CD67D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F_mC0171B2B356904DAA7C0E120D0E132E2FD4C8D83_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t343716AA7796A6C22FFA9AEBC18EF142FCBDB10F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t36D9AC9C14DAB1152CB545EBA984280DC00BB831_m6086632F3719B42A1D49FA3474145510D2AC3ECF_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t36D9AC9C14DAB1152CB545EBA984280DC00BB831 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C_m6AF51E26448B162EB7CED405D18701AE5D88FDAB_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t008CACF55D7F47352355FB69BA62E34489CF2116_m37E5014F647CFF8CB392C76DC6924A77B13D6C67_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t008CACF55D7F47352355FB69BA62E34489CF2116 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE_mF87C2901411DF09497E5EA9EE60917D237E81049_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tD522C09559070EF861CE8629AC53D945627CD974_mF8B4F20FA2F9BA028AC7191EC99EACAE6474469B_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tD522C09559070EF861CE8629AC53D945627CD974 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6E3617D543B4D6B204B7728D9E47A38BA5CEB5BB_mD133B0B0B24208404EA91915D1CE81D588908A96_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6E3617D543B4D6B204B7728D9E47A38BA5CEB5BB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t268E00F33ED8EA210E8206EC0EC0E0D0FA439804_m98C4FDEB7065FC35DAF1F3DD069D014B1C0B3F29_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t268E00F33ED8EA210E8206EC0EC0E0D0FA439804 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA212E7034D981AC2F7E219C600769EE485919684_m7DE05A76E0313C1C4BA91A674F23A6E2BA9E05E4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA212E7034D981AC2F7E219C600769EE485919684 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4F374F13C9422AE969BA033893F5B076AEE88131_m4F8F1AF6401723741E21F3E3AC3751FC7290106F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4F374F13C9422AE969BA033893F5B076AEE88131 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339_m508C778EC3299E72EF498E4796B441D48B35C8AE_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t59E90724C756CA6F3F5F5B2D04D9E6A4FDDFC339 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC_m3BFFD02BB909CEF190F6B30584ECCED907928DC5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7CE9E7B40ACCEAB7712065D95D28EEF626D8DABC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t532FECF491646E3372F9D145FEC277E0C5089CBC_m668E265388ABD68F73AA94BC9500A11ED4B75C25_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t532FECF491646E3372F9D145FEC277E0C5089CBC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t860658A268435C0F4527823E39101F707ABCC3A3_m945DD710A4C832DE7AC3D9D76A8F22184D719B86_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t860658A268435C0F4527823E39101F707ABCC3A3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEF6BEA499CCB8C4F2AA974BD354B4E3BCFE5EC4B_m609BF6C0C1491512EFC6C3B8BA4268BB371F6048_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEF6BEA499CCB8C4F2AA974BD354B4E3BCFE5EC4B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5_m82E24B57C866F1F20C842979FF5C64D4B13C216D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6ED579DFEA7ED1704F2C549D6B01A492B6E4BEF5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3931D073D20E5270318C5CBBF20CD9B44F0047B5_m00612A22F4DA5B2C87F05215585246D9DAFCDF55_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3931D073D20E5270318C5CBBF20CD9B44F0047B5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t57FAB7B3B72CEF97C2C3195D29213CE2E994EB7E_m6C73D7AB939697786BBBAB11B679281FBDD04E9A_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t57FAB7B3B72CEF97C2C3195D29213CE2E994EB7E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6CB2C9C76B8422AA5DF5DD1E87052DD6EB445097_mC59B84A3AAD2023770416BF6A5756B6A2BA66337_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6CB2C9C76B8422AA5DF5DD1E87052DD6EB445097 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t2378BFE014F1CDD303C90E9DFC67292CCFA27725_m3510327BFCABD7600BE3473A396807C31A689664_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t2378BFE014F1CDD303C90E9DFC67292CCFA27725 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t86463E0F155AA24243B749A6C95BB3067310256B_mD28D579773F205FE8C05BBAD86996C7A9B0C82DB_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t86463E0F155AA24243B749A6C95BB3067310256B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20_m5E59915B810EE242E2C3A0D27C501614DE1D91B5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tAB4AC6D6C313741B7F6F6C4694EF22BCDEBF5B20 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDE3185C2F06F1AB3103EE59F89D5AE31F6D2AC60_m8E8CE7BAB731CF1ABF2441C1696A30C1DA9B06A1_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDE3185C2F06F1AB3103EE59F89D5AE31F6D2AC60 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7B3861A33B85B48715972326859F7104EAEFDF50_m55DFE2CE93CCE3296B0C49D1F7B3FD6C7107155D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7B3861A33B85B48715972326859F7104EAEFDF50 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t787B5926E2DAD340D81286D743DEB8AED0192C40_mFB7F685E21806EAED279E103E3BEF59F3501B05F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t787B5926E2DAD340D81286D743DEB8AED0192C40 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A_m78FC61CF97EF4821137A8F5441717A6DA166123D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFF4285DE3B86A2B349258B4BD7E12C0EE4A4B74A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA4CE377ED53530282179BE10A55FE3A4E4A5CF4E_m95678DE0AD46677655897AF4A1142A9DE06CEB16_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA4CE377ED53530282179BE10A55FE3A4E4A5CF4E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t4D5A107E6414D8B9DE012405A201C46AACFACF98_m4525A499EB167CBAE14F03976A50AA1B2F61B3A2_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t4D5A107E6414D8B9DE012405A201C46AACFACF98 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tCAA5E8C25DBDD41FDE687FAC9279F16A616DCEC6_m38A6A8F408098D9724AE6D5CFCABEF5433A43B1D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCAA5E8C25DBDD41FDE687FAC9279F16A616DCEC6 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA76B18EF78BF0132EE1736D5F5B829D890C26E5C_mF0BA4EB2D2C1A42E24A5C7EC04BB87F410018004_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA76B18EF78BF0132EE1736D5F5B829D890C26E5C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438_mE0D556598F5A308003B63FBEB0D4AF78F18AB26C_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFFDF932514D611FAE4AB69C8DDC8FA5F889B6438 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE8CF104B482ED92A3BF31C2B151BD3FEBFAF2F6F_mBBF79A0BDA569EF4E938A45670FFB0844D2C93EA_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE8CF104B482ED92A3BF31C2B151BD3FEBFAF2F6F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t575ADA8FFB2EED66C64622ACC70ED8CF7A732FFA_m501AEDD776F60C965795A09EFA26EB7EE014DB00_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t575ADA8FFB2EED66C64622ACC70ED8CF7A732FFA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t5DA42CAF95F196F03BDD802C9D4F704954B556AB_m05E8DBA8E50B11CE5842498BAEC2BA43FE99DC56_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t5DA42CAF95F196F03BDD802C9D4F704954B556AB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3D6F8281693147B14CFB23C071F35112EEE78B18_m59BDE5378C60C792108B57E44693AFA012F729B8_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3D6F8281693147B14CFB23C071F35112EEE78B18 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C_m9736C2CCF17DC4310A3D14EFD306CCF719874A47_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tF9C4D725857FFCC0AD98E4629FD00A7E064A0C1C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tDBF9A1E46F0B46762BB888B9D95070CCD059DA95_mF896BFC39C9F768EA2DE8DE2AD7B6C8F9058692C_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tDBF9A1E46F0B46762BB888B9D95070CCD059DA95 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE39771EB73DA3008BB0DF74028FF7285866C18C8_m3017D56AC2AF0D18D7653DC8D6EA902E0C6BB6F2_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE39771EB73DA3008BB0DF74028FF7285866C18C8 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tD7E15205D45D077BC3C10F2121743F8658BEC172_mB5852ADF70BF7A8999A888EAEBB57A59C870EE33_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tD7E15205D45D077BC3C10F2121743F8658BEC172 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39_m67CAFF8F487DD85F0544EAF82289F0F2E0487741_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3E9BC9EC2D9161E6078E219EF6BEE9162020CD39 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202_mA098AEB0AE8B5C1328F2043D045DAB09BC57EE53_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t1FBA063A7158A877EF3D4306E7BE0559C3A13202 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC_mF2CD865AF12B1E19DB9B7AB31DD11C62FF699AD9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCCEE77FB83F33718CFB5E786A11E06DC9D5B63CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC_m62BBDC98F25347277960A69F05C7DB25C8C0BA73_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t3C0F52ECBA65B00EBE8F10F57434B2925D38B9CC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC44036EDE3BC084F847AF870E0FA6D39AA7CF48A_m4A716AABA3163046398D8401F18BA797F90B76B0_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC44036EDE3BC084F847AF870E0FA6D39AA7CF48A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98_m4604444E87D4C6070D734B5571BC3959DE7774B4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6C6FFC8A6877137F14C5BA9B9205BADAE8258F98 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t8C80D6795974A124B4CD390BBB064C11BAD5D216_m68EB115D169E18697BB6200C2389DD320DCFF497_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t8C80D6795974A124B4CD390BBB064C11BAD5D216 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9C565819818CEE927F7310B20154140C74FF0587_m9EE309676DC229543731B8D014D938ADD5F05818_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9C565819818CEE927F7310B20154140C74FF0587 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9021423938AB6DA55D07BD536E4BD78B05F30FC2_m6AC00CCAC75B1A28B715A8D3036E2A6AECDDDC6E_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9021423938AB6DA55D07BD536E4BD78B05F30FC2 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t78A47A3F6CEEC34154BDF4FD6C3969CE5616A1B1_m4C6F7C40C2565A637D51E1AB589D2F6C601112F9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t78A47A3F6CEEC34154BDF4FD6C3969CE5616A1B1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE4247208050F1CE52403ACCE7C5BFB29A7F983CF_mF8B603B86B25A3C15FD23312F42DEAA019AF35FC_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE4247208050F1CE52403ACCE7C5BFB29A7F983CF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tB91023BECCBA53F163D91AE13E4833494B322C15_m4559D1E621E29CA044E882742D71CE15065877D9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tB91023BECCBA53F163D91AE13E4833494B322C15 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t71C45DDCCD78FD0E7AF3AF206A8A18DE08416B9A_m68EC727D65071362D5FBAB84D5CE5C7A4B4D6EF9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t71C45DDCCD78FD0E7AF3AF206A8A18DE08416B9A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tA34945A0BD5A528339B3897A712BC0B2192A62DA_mA04EB11A4460CDB4382C522C427BFF02B4F7E970_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tA34945A0BD5A528339B3897A712BC0B2192A62DA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tCD54E3E97C7119F5116132F49CC1ED41AF5757E6_mAF225A47339033450F86BC63EFE8BB9E73148B62_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tCD54E3E97C7119F5116132F49CC1ED41AF5757E6 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t0395BB83B858BE27C56AEF888748A3D53D50CA63_m2F193EA058A2A19401164BE8F063C38799A5424C_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t0395BB83B858BE27C56AEF888748A3D53D50CA63 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE8A84B93BCCEA1FC321B6098FA0DDC8449273A50_m3B14C43B248774F2EC0EA18F488BECE70B0A252F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE8A84B93BCCEA1FC321B6098FA0DDC8449273A50 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tBE79E9CAC9D7DD54B4635CEE784E7DC034A6E98B_m0CFBCF77F91DE3370F67291B2EEA314400F12C44_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tBE79E9CAC9D7DD54B4635CEE784E7DC034A6E98B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t24F25ECA3BDA03521151C33B3297BAAE878226BF_m87FF9106DC20E59911AFC26A8B8B0DF704938305_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t24F25ECA3BDA03521151C33B3297BAAE878226BF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tD8875C96F18F04DE9948C96AC2CB648E8901D064_m62E42AC4BAD2865FBD2DEA3941F0C17F935D09DC_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tD8875C96F18F04DE9948C96AC2CB648E8901D064 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164_m116EF753783F1FAB4816F77E6FE591AE81BE8606_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t7570C0657D5A1E8127DA80AE9CF398FAE7F58164 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t220AA9583FC76C1A60DB0B8C1F33ADB13276D772_mCC2F073CCE73F1DCB31A5A327100A23E7C004CDB_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t220AA9583FC76C1A60DB0B8C1F33ADB13276D772 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFD8E26AB004B4E28E573BCD8440A1F1B23F25693_m9EE78288117429492DDF60F484C47F397E690027_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFD8E26AB004B4E28E573BCD8440A1F1B23F25693 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t01E9E5E4C8A4A7369178E151EC69E96FBE005223_m700CC5996B4F590A909F81A37EE86E97697411E2_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t01E9E5E4C8A4A7369178E151EC69E96FBE005223 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC6604B503225E2D191CE25713A68DA2A5228CA1C_mF6B9C383BE12449CA2354406727BF327CEE3CD87_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC6604B503225E2D191CE25713A68DA2A5228CA1C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578_mE64040F2C104B94E317E7A66F436711EEED0C20F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t58E99ABABD435BCC040760EDD6D161FA4AFAD578 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677_m2EE7A2B9DF7A6AB98DB38FF637578D7E569DB5B1_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t2679F25F22E3E7DB5F988C82C064BA4BE59F5677 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE9F630515B2639FC32421D8BCA4A3FDA5DA81F57_mCA9717D2C4E3C6030A8BE5251700474D46FB8C60_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE9F630515B2639FC32421D8BCA4A3FDA5DA81F57 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEC1A94D2B396350073237678CBE5013D9C23336F_mA1DE66F12FC985978D5673A11AE4C4642AD4BDF9_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEC1A94D2B396350073237678CBE5013D9C23336F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t6AE26C6078FCDA8F86904D21F25FCFF5D726FAC8_m343C617AB4BAA4F172E11C2D9501422CF40AFB8A_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t6AE26C6078FCDA8F86904D21F25FCFF5D726FAC8 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEFAC589ECF730F050787AF6E5CF97CF8C3529F88_mA47B8C919C30E07907E2A46F8AA0217514C352B5_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEFAC589ECF730F050787AF6E5CF97CF8C3529F88 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715_m984E989135146A6512D9C0F7098A19A37A42EB87_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t1F21171535DEAE77D533CFCFAF0EF8C51862C715 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tFA80A0E5C486507679B91EED262F276050345D8A_m694697C78EE96FD1D3BB31E2804BB9CDF4EE4616_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tFA80A0E5C486507679B91EED262F276050345D8A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tE850363938764CC80F151D8A949A63B1588A5BF9_mA8EB5F48E674DE73F4B1F3477320D7F1D686355F_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tE850363938764CC80F151D8A949A63B1588A5BF9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t26455ABD1A40D1C764F944F6727C5F1EB14C99B9_m91BB3B4801BB5E48AB492F52ABF6D875AC0B0CA1_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t26455ABD1A40D1C764F944F6727C5F1EB14C99B9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1_m02B5485A354258838A3BEEA0CB2ACAA176B93115_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tEC2FCD90BA00C992320FFF0D4A74509526BF8CA1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E_m822199169AD39861E318806F8B5B126DB2511534_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t50EA0C1E8A8EE9E0CC561055CA772A2BF21F8A5E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB_m540F0D774D1E6689E3BA5AA00ABEE0E3808FA3B4_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tBFCAF6DF9FBB6B7CB44FAA838B615D233C134CAB ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86_m53A0C4BB8DC2DB09B3FA758257FA5E9E5525F0E7_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_tC6BA3FCE24005B80AD289EB230B5E04466EEDC86 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t9DD41777766A237ECDB0E269740F073135AB4A64_mC83DE3EF62A8240042042A79733BAC9019935E9E_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t9DD41777766A237ECDB0E269740F073135AB4A64 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisEntry_t1F47B0D124BA50EA91FF4060DA20FC0C7A7002AA_m2E495E4A49F9085DA7F2829041FA872BBDD4AE0D_gshared (RuntimeArray* __this, int32_t ___0_index, Entry_t1F47B0D124BA50EA91FF4060DA20FC0C7A7002AA ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tB07B9A8A36D288EF5A367E31BB9F960C9AFC5C84_mD39A719C643657D28D2BDFE1F76B740D65AECDB7_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tB07B9A8A36D288EF5A367E31BB9F960C9AFC5C84 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tA20B2E21CC6343B934D81EE0323E68064202DC91_m43B599232A1C3C784892FA9798E8314C7D396792_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tA20B2E21CC6343B934D81EE0323E68064202DC91 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tC0E3208384D85C2111E01E3E3643D049A5BF27C9_m67A782FEA7D6A3008ADDE50D629E9A385104B39C_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tC0E3208384D85C2111E01E3E3643D049A5BF27C9 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_tF966E1A895C9645EB70298559E8EE0DA6D25F751_m5100F4DB3EAD30DAB142F9D6FB067FD05F73B573_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_tF966E1A895C9645EB70298559E8EE0DA6D25F751 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_t49EFF075153CA828C4A70A5FC0A95BABED258EB0_m115DB3498B047515CCC3E841DE10E852F38CDCF0_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_t49EFF075153CA828C4A70A5FC0A95BABED258EB0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_t7BF3A6BF777EDF76D9E119A6B3F5263B9F81262C_m0A6E3141D3B603E4417F9E4EC52FF31B9C55011E_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_t7BF3A6BF777EDF76D9E119A6B3F5263B9F81262C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisFieldDescription_t4EF9A6B0A2CFA67ACD13432B4F72EE5DABF216F4_m6D871C1D1968D2EA2B8C0D469084C8970E8C2C15_gshared (RuntimeArray* __this, int32_t ___0_index, FieldDescription_t4EF9A6B0A2CFA67ACD13432B4F72EE5DABF216F4 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisHashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5_m2B328728BC63DD27B0950DB75028D8C9052ABFFB_gshared (RuntimeArray* __this, int32_t ___0_index, HashEntry_1_t5AE25C72F3412B2BFC157F053A4BE627685A9ED5 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKVPair_2_t289A62AF6AB4F1FD80F1977C4D6C802052A8BADC_m26A62CE4A13BA0BCBABB258809FFB7CACF64F2DF_gshared (RuntimeArray* __this, int32_t ___0_index, KVPair_2_t289A62AF6AB4F1FD80F1977C4D6C802052A8BADC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tAC0330F506B0E9163D3B28C7146DC5ACD338DC13_m979D16D2287F5E0D5A5C4CD9C12E23AAD87E797E_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tAC0330F506B0E9163D3B28C7146DC5ACD338DC13 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t3F2A3CB7BBA975883A7BEA65F8283E2D7BE1E52B_m595B525F2E49DF4FBDCD48EDE001A0AB96911223_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t3F2A3CB7BBA975883A7BEA65F8283E2D7BE1E52B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943_m1773E573D4E5825425EF3C3D5034B6EAF822582A_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t0BDDBDB473FD4F5FA590B16CF492EF13295C6943 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37_mEE42062662AA92B1975F2A9FC2AA7A584C6D7EA3_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t2C8DA491EB4B4335BCB54693DA03A350920AFB37 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE_m323D3F0B6DF5316200F030A86EFD335A208B4058_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tE7059F09DF09E24506A44E5D5FB043228D3799BE ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14_m476C66106A6409EC4D5BE8D65183F9A3A9C1E5D3_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421_m8AEABEB3BC4BD06D3221D06297BAEA3388FE75D4_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t367B869B5B9E3AC484B7F3A6A22B30D27181B421 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t75FAA8CAE789C96693485F8C6E9B4FAA2FFB8FFF_m3D817FF1EABD6907E97DB3E7E6804D57DC99587E_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t75FAA8CAE789C96693485F8C6E9B4FAA2FFB8FFF ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tF09A31A02B0B1C5470675A654E6FA428EBB7FB4E_m1963EF9A7F1ADDC2078F2F8AABC965F74BBE4DA2_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tF09A31A02B0B1C5470675A654E6FA428EBB7FB4E ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936_m4DD4A621AE7C62CCCFE0F911FB6AD9CF73B15097_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t669A5BAF37ED0ABC96A30943A6E7D0442310B936 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008_m833AC6E75CDDAA84331AF60F09A8A228B69B09E8_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t8B567619A9CCBA5161B66419D348897D6AECB008 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1_m1CB20DEA0709FCFF96E638466845FE3036592A9B_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t1F845C75952D49E12CC3AA3713F4701056F14BC1 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tCB5A489A71D852FC66BB97682513ACE12D6DA714_mBC31205478133B0445D5170EAB279D53C99CA162_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tCB5A489A71D852FC66BB97682513ACE12D6DA714 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD_m7ABBE55FEF9BCE1B3AA9CE16B251A082706BC7CF_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F_m3D9ECFDCDABF553064B3331073E94CFDA7C55A02_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t472CF116DEB4A9261996D42F3FB67E7595E0EC3F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tB999B4329040B950BC24C49C2E5CAD7574557D0B_m1548A00A20CE6E06900045E9A82A3B47A68513BB_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tB999B4329040B950BC24C49C2E5CAD7574557D0B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213_m2F129A9D6FBC97C3B36C0F7CD08899532C4A7442_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tE9D30A991F93C5CC802881BEB1E7D7627F086D79_mEDBB131C324936F18508797E5A12088B8DBC7D43_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tE9D30A991F93C5CC802881BEB1E7D7627F086D79 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t6072DB27D2EA2946956C283915DB65E059D45940_m50ACA6759AB00163C029411A019AB73212AC3809_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t6072DB27D2EA2946956C283915DB65E059D45940 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tCB001F11F43B16AB7AB558987DC896FEEC538FEC_mF8F082A069FF0386AAD2F86A1D3D7C2CE978E932_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tCB001F11F43B16AB7AB558987DC896FEEC538FEC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189_m28B877AC1B4B5B7C95C9C6805FA6D81C2E754384_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678_mD0391F225A723C54B3BCDEF38B8A3AC6BAF7DDEB_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t90B506CAD143B28FB88CA6965C9B35679F8F9678 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3_m3F0F959B82F38C785E9BAC89084C1AF279B049C2_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362_mB113914C316984BF1426E811118E4F52FDB493E9_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tC3F888EEED334B1047E7634B9B9440158BAFA362 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t891D449DA189ED572EFC0E4457FE9D980AF86555_m2FC3B3135836FCD54A86E09391C564E63D5BADD7_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t891D449DA189ED572EFC0E4457FE9D980AF86555 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tB121246E130D8B10E5EAAE733E6F683AE0FA90DD_mDFFE3C217462F85503735F6DC6B394E574CB71BC_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tB121246E130D8B10E5EAAE733E6F683AE0FA90DD ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tB80CFCE1FE63EA90A1922B957B5C34F1F5C3C606_mC640DC0CA91ECCB7DEAD9058D0DA008105973591_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tB80CFCE1FE63EA90A1922B957B5C34F1F5C3C606 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE_m57B608E2F18FCD2E953BDEE40BC686206F9197C0_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tE2ABFF555671907C54C1F6ACA927B7D1D1249AFE ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t758D218BF34F33D9F3457E619DC4B799BAE72E45_m71EBAF62EB2E6C48A4F1C7F80CAA59F5F161C953_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t758D218BF34F33D9F3457E619DC4B799BAE72E45 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t52A07580EAD838EA5B953EBA04EA6432B9CA4DAC_m0578EAC5C9404757E09D4098A62E8FC9FAA5AFC2_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t52A07580EAD838EA5B953EBA04EA6432B9CA4DAC ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tDEBC563E5C12F27FFAE83443E53D915B13B50B7F_mB488F2990B78EB388F1558E96818C218402CF45F_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tDEBC563E5C12F27FFAE83443E53D915B13B50B7F ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tC5ADF0AFF823F052499A61A1D65C6BB0A8C0342A_m4E2AC71DE98B3580D5EF2E776250DF93EC4B98D1_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tC5ADF0AFF823F052499A61A1D65C6BB0A8C0342A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t2A4EA71F94B1445F8A1862CF71334E632EFDA513_mE85D9D78D9E68F0FB1F71C26ACA993FF7C43820A_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t2A4EA71F94B1445F8A1862CF71334E632EFDA513 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A_m846098823BAA6A3D78C556BAE5CB3AF0BB14969C_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t39179BF27CE980AB00F738EC85DF2D428FAAB65A ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t7616DF3AFBD691862E103D736E4382E092597B82_m31CBD069519CF28BDB133F2206E2F4A5F5199267_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t7616DF3AFBD691862E103D736E4382E092597B82 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934_mF2DEF0FB12C0419F345AB9F5B231F139F879C777_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t763E38DF50581B1045C4F039531270BA08203934 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C_mF9B99CA3916BBA1A3B9159ACBF3803242140ECCC_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t8119C4668B01DE5BDC84EDBA81EE010B6CA16C5C ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3_mA36B0F05E3AE780BFF298F1F5DB09EEA33A84C5C_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tC032038170A998E9F4AE89CDC2DBC2E5F88F91E3 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tF73F53965CC04C7018C460F8A3C7B211797A2D4D_mA7B1D397C6FFF8A55C8894D1BCE832139ED167EF_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tF73F53965CC04C7018C460F8A3C7B211797A2D4D ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B_m4C6984C74AEC073F3869018C121082F25A79681C_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__Insert_TisKeyValuePair_2_t4FE3608051BEBD190AEB2C7B27376911D8EF25B0_m8ECA1F67B0D598816D753386620DB955BE0197EB_gshared (RuntimeArray* __this, int32_t ___0_index, KeyValuePair_2_t4FE3608051BEBD190AEB2C7B27376911D8EF25B0 ___1_item, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE609303EB41E0119BB804EB107C7CCDF29D97D5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mB4BE43D5986864F5C22B919F2957E0309F10E3B4_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var)));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		bool L_4;
		L_4 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0022:
	{
		V_2 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m419967067E76BF0381E4CD8FE14DF5ED46ACFB02_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_1, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_il2cpp_TypeInfo_var)));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_3 = V_0;
		bool L_4;
		L_4 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0022:
	{
		V_2 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_mC2596CA0F441D25DE7A9419BE66A8FA2DA355CB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)UnBox(L_1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var)));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = V_0;
		bool L_4;
		L_4 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0026;
	}

IL_0022:
	{
		V_2 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m1E4294224F7667752144BC9428406E356350CA20_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_x;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_x;
		V_0 = ((*(quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4*)UnBox(L_1, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_il2cpp_TypeInfo_var)));
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = V_0;
		bool L_3;
		L_3 = quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)__this);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_other;
		bool L_2;
		L_2 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool quaternion_Equals_m58271A16502DE355CBB7C1AA07F8F670C53850CE_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___0_x, const RuntimeMethod* method) 
{
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&__this->___value);
		float L_1 = L_0->___x;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_2 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = L_2.___value;
		float L_4 = L_3.___x;
		if ((!(((float)L_1) == ((float)L_4))))
		{
			goto IL_0061;
		}
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_5 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&__this->___value);
		float L_6 = L_5->___y;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_7 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = L_7.___value;
		float L_9 = L_8.___y;
		if ((!(((float)L_6) == ((float)L_9))))
		{
			goto IL_0061;
		}
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_10 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&__this->___value);
		float L_11 = L_10->___z;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_12 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = L_12.___value;
		float L_14 = L_13.___z;
		if ((!(((float)L_11) == ((float)L_14))))
		{
			goto IL_0061;
		}
	}
	{
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_15 = (float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)(&__this->___value);
		float L_16 = L_15->___w;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_17 = ___0_x;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18 = L_17.___value;
		float L_19 = L_18.___w;
		return (bool)((((float)L_16) == ((float)L_19))? 1 : 0);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_lhs), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_lhs), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_lhs), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_rhs), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}