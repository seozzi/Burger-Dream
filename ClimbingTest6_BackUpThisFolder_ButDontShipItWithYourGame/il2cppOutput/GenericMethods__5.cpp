#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_2_t53AA40360DDB151AE9E6933A1F6E258903C5BD42;
struct Action_2_tA532F7C1E8AB35167568DC3B0B1B607F0E34A273;
struct Action_2_t78A13A37D807DA14C50558DE22554BDC58A90028;
struct Action_2_t3E1FDE6357E99412633F66633B2C1F49CA973AAA;
struct Action_2_t4E411B84B0CCF882C21A49680DB99245EB640614;
struct Action_2_t02865CCA7CB9B81C3E3DEFACEE60DAA4822D369A;
struct Action_2_t0A0368E2267C9BB4CF0A40C9AB0C7306D5D9CF1C;
struct ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB;
struct ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28;
struct ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D;
struct ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD;
struct ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA;
struct ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E;
struct ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158;
struct ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972;
struct ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1;
struct ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E;
struct ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1;
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F;
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716;
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE;
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335;
struct ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8;
struct ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9;
struct ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65;
struct ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD;
struct ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37;
struct ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3;
struct ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53;
struct ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D;
struct ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0;
struct ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1;
struct ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E;
struct ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C;
struct ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4;
struct ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E;
struct ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812;
struct ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D;
struct ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15;
struct Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC;
struct Dictionary_2_t3D61F3C6314B396E1252276C5242F7F6E3B0A820;
struct Dictionary_2_tBFED0BAAE99BA21C1A1F85C8EC447102D2BEC75D;
struct Dictionary_2_tFC33AED7C70246B9F3A2863877F3DBED4621B9A0;
struct Dictionary_2_t07293EB199E89308371B85D2D76648E5DCFDDE5E;
struct Dictionary_2_t27B6521F1204FBAAD6212035EEBA5E91786CAF8B;
struct Dictionary_2_t56B5C5AFC704CD07585B86FAD4BF28C5D0D3BEDC;
struct Dictionary_2_t47F7569EF6ACF53F054A513156CB8D3A7C3A2C64;
struct Dictionary_2_t40E00C7968484A24FC0C6EA319105BF0BBB1C5D8;
struct Dictionary_2_t599399EEF6D4A0BA898FB1BE70E141DE265A260C;
struct Dictionary_2_t2240EA70CB22C3FBB0F0205E4EDC23936F665B51;
struct Dictionary_2_t3A4900DEB8BEC487A28DF13A024214D7FD1F14E6;
struct Dictionary_2_tEE7DB40AD887DEC19D290939E58184BCB7911D52;
struct Dictionary_2_tE22BED043BB30D0D60743980566721F90177F78E;
struct Dictionary_2_t15B3373A7FAF540484B4BA2DC98558F69AA8C8AA;
struct Dictionary_2_tECEFA12444072B7EEBDF40AF0B53BEC6F0CE3861;
struct Dictionary_2_tDB1CE933E91CB1A1E70178F12AEFFBF0F482ED02;
struct Dictionary_2_t6A4751DC5E7CA38BF764EC64CCEAD0282E2CBBEF;
struct Dictionary_2_t94B0CA3FD23CABE9CE9412B531E11B20933FB2C0;
struct Dictionary_2_t1DED74E375D2ED02C73DABF8F1657EFD5806FF9C;
struct Dictionary_2_t5177696117A79A2D5779ECB7FD2AC63BFDAED0C3;
struct Dictionary_2_t70242BDE1FDB354FEB8D863AF3B1BF2D17AEA3C2;
struct Dictionary_2_t9C2E4757F3F81A8C8C7EE942D896FEA71985ECB1;
struct Dictionary_2_tB479E966A60E9F46A18BB8BE9BB693571A93E8A5;
struct Dictionary_2_t7A57A615B2828533A5A4B7123C6F60CC79EA1452;
struct Dictionary_2_t8DE0DD6D6DBAD09EF1A3408AB1C1C357BF2D4D70;
struct Dictionary_2_t1C25B0CAA1245AF3C5494E72780430201AEF7638;
struct Dictionary_2_t9D79DC58198A9120F8D4D8ED812F27889CDBD8EA;
struct Dictionary_2_tC4497EBA3F72AFAE0C7832B8C58E006D78E806F1;
struct Dictionary_2_t11734BDB084B9B3CF7FF66FF72AA2F3FBD7396D6;
struct Dictionary_2_t41DB6D70B3317671E6BF537D4AD34342BE6285F1;
struct Dictionary_2_tC276BEC138AEE0D3EE2577F08F3E865C1262BB66;
struct Dictionary_2_t8307FC0C8B01BB4366B660C9E32F4A07F61CBBFB;
struct Dictionary_2_t05D7CDBF9637AF1A0E82218EB3E706E8BD067759;
struct Dictionary_2_tACDA8A8895C1F7AD540D97B4E686400215D6050A;
struct Dictionary_2_t84B82385DD78BB06C5D02127E87FF85129353ACF;
struct Dictionary_2_tBC171FFCB293CBAE5949F447DAC38E20AA7676F9;
struct Dictionary_2_t8D21717563FC0E394C85580983F870001C388F92;
struct Dictionary_2_t089F00842B1CF2970B82225E22A3CDA2C46642A5;
struct Dictionary_2_t6D41BD5F1AC7C2B3352D018272300955549382DE;
struct Dictionary_2_t5F3E936CF5CCB7E49C55C8F479B5A15B14C017BF;
struct Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8;
struct Dictionary_2_t3D3B4A03A26C20738E0A30F0C6D66BEFD8054920;
struct Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4;
struct Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36;
struct GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3;
struct HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828;
struct HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4;
struct IComparer_1_tDB7A782F030D1F22435005452CBF1E29F96270E4;
struct IComparer_1_tF8C7AEFAE0CBF98861929681D75DB2435790296B;
struct IComparer_1_tAD81CDA8DBDED9A01882793DAB3FE458FBC7E63E;
struct IComparer_1_tC0AEEB7CBD1D16FC1813F8AB92E665B025CF5353;
struct IComparer_1_t911DFCCFDD6E0941039D87B13C592494A8775310;
struct IComparer_1_tB15958965A0B3C759B9531E2B07F4EC59622F297;
struct IComparer_1_t614CB45409B25389F048879A4C28FF45CA311247;
struct IComparer_1_t2D315CF5CF86081A8E1A76776A48A7A37A8331A6;
struct IComparer_1_tEB229D0B628188C2871C5C4566B1C36A654C975B;
struct IComparer_1_t0CCA4457F07876897FDF7798C077A3F8BDEBD43E;
struct IComparer_1_tCB62226FF65E7C836D79C643C9043E5EA15AB685;
struct IComparer_1_t7056DE2557FBAA4AF1EAAEC67C53580083EA6988;
struct IComparer_1_tFB0FD319B9E8EF0EC1FC77A9ED2E0259361E126E;
struct IComparer_1_t3FA52899D0A91FBF89D2AA6B7ED4862C158AE928;
struct IComparer_1_t5CD2EA70F165FCB6FC40194D89CF91B3CA8950AF;
struct IComparer_1_t0B85161F68B142616820C04AAE96C1609ECFC796;
struct IComparer_1_t98BCABD0BCDEE9EA1C3A43AD895CC0531158CCEC;
struct IComparer_1_t6CE56973B322EEBB12966CB4F68B814B3420D5F3;
struct IComparer_1_tC6507ADA9D26D274AF18D7E09099249A840C5158;
struct IComparer_1_tA76A1FFBE1224702E07C8EEF83A05EFCED823A23;
struct IComparer_1_tA8DEBBA6BA9B10930B7678F22126EC155A369204;
struct IComparer_1_t096E20F01D6F6BCA21BDF770A00F70575EC8DF54;
struct IComparer_1_tF2913E489FC95DCEA5C7C68D16F3CE55976A0057;
struct IComparer_1_t58468D1C365EFFB057C4D9D6EDC7A3A9D75E2E51;
struct IComparer_1_t1005A7C273E9FA0A8536E0A9BF3FABF5EA65CACC;
struct IComparer_1_t5E7647F436CF0BAB46EB19B0AF7B6927D2E15CDC;
struct IComparer_1_t96F02E7FDB2E91FB75204446F38DC73438F0DDF0;
struct IComparer_1_tAD4670C91ACAB3775A94CD14F527D686E749B054;
struct IComparer_1_t59B78D8DE485122F222C6E762FEBC91256883747;
struct IComparer_1_tD584F20DD3376DA8B011BB7AACF25D9AEA29405E;
struct IComparer_1_tBA0E6044D119A61B25BD06070FA1C1E29100A021;
struct IComparer_1_t3ECADC3833F9DC1206D75C59A32952F9BE103A13;
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
struct IComparer_1_t3B0F39D062C0830CA6D3DD5C771FEF9D2E6F5DEF;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IComparer_1_t01B466D62BD708A8A8BBAB6085E75DCF7678A908;
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050;
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
struct CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466;
struct CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6;
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC;
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1;
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165;
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93;
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530;
struct KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376;
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990;
struct NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320;
struct NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1;
struct NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623;
struct OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D;
struct OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E;
struct OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE;
struct OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE;
struct OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960;
struct OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE;
struct OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D;
struct OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D;
struct OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8;
struct OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831;
struct OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Assembly_t;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92;
IL2CPP_EXTERN_C String_t* _stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var;
struct Assembly_t_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F;
struct CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466;
struct CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6;
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC;
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1;
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165;
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93;
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530;
struct KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376;
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990;
struct NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320;
struct NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1;
struct NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623;
struct OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D;
struct OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E;
struct OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE;
struct OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE;
struct OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960;
struct OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE;
struct OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D;
struct OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D;
struct OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8;
struct OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831;
struct OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD  : public RuntimeObject
{
};
struct U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD  : public RuntimeObject
{
};
struct U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16  : public RuntimeObject
{
};
struct ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB  : public RuntimeObject
{
};
struct ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D  : public RuntimeObject
{
};
struct ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD  : public RuntimeObject
{
};
struct ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA  : public RuntimeObject
{
};
struct ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E  : public RuntimeObject
{
};
struct ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158  : public RuntimeObject
{
};
struct ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972  : public RuntimeObject
{
};
struct ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1  : public RuntimeObject
{
};
struct ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E  : public RuntimeObject
{
};
struct ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F  : public RuntimeObject
{
};
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716  : public RuntimeObject
{
};
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE  : public RuntimeObject
{
};
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335  : public RuntimeObject
{
};
struct ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8  : public RuntimeObject
{
};
struct ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9  : public RuntimeObject
{
};
struct ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65  : public RuntimeObject
{
};
struct ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD  : public RuntimeObject
{
};
struct ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37  : public RuntimeObject
{
};
struct ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3  : public RuntimeObject
{
};
struct ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53  : public RuntimeObject
{
};
struct ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D  : public RuntimeObject
{
};
struct ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0  : public RuntimeObject
{
};
struct ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1  : public RuntimeObject
{
};
struct ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E  : public RuntimeObject
{
};
struct ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C  : public RuntimeObject
{
};
struct ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4  : public RuntimeObject
{
};
struct ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E  : public RuntimeObject
{
};
struct ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812  : public RuntimeObject
{
};
struct ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D  : public RuntimeObject
{
};
struct ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15  : public RuntimeObject
{
};
struct ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct AndroidJNI_t531BC9A6383F7C0F76A1270297952462F52308EE  : public RuntimeObject
{
};
struct AndroidJNIHelper_t2C1AB9F6B2295C20B24108936A003F65F02D71DD  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674  : public RuntimeObject
{
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
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
struct Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E 
{
	Il2CppSharedGenericObject* ___Key;
	bool ___Value;
};
struct KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 
{
	int32_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 
{
	Il2CppSharedGenericObject* ___key;
	bool ___value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
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
struct NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D 
{
	bool ____initialized;
	Il2CppSharedGenericObject* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	RuntimeObject* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
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
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 
{
	String_t* ___AssemblyName;
	Assembly_t* ___Assembly;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Dependencies;
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_marshaled_pinvoke
{
	char* ___AssemblyName;
	Assembly_t_marshaled_pinvoke ___Assembly;
	Il2CppSafeArray* ___Dependencies;
};
struct SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_marshaled_com
{
	Il2CppChar* ___AssemblyName;
	Assembly_t_marshaled_com* ___Assembly;
	Il2CppSafeArray* ___Dependencies;
};
struct ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC 
{
	intptr_t ____value;
};
struct CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 
{
	void* ___srcCpuBuffer;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* ___dstGpuBuffer;
	NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 ___pendingGpuCopies;
};
struct CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 
{
	void* ___srcCpuBuffer;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* ___dstGpuBuffer;
	NativeSlice_1_t135E2A23AA4EBDBCA846942F90F29A5004E8ACB5 ___pendingGpuCopies;
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 
{
	Guid_t ____id;
};
struct OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 
{
	Guid_t ____id;
};
struct OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 
{
	Guid_t ____id;
};
struct OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF 
{
	Guid_t ____id;
};
struct OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B 
{
	Guid_t ____id;
};
struct OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 
{
	Guid_t ____id;
};
struct OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F 
{
	Guid_t ____id;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface;
	intptr_t ___proxyObject;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField;
	bool ___U3CIsFieldU3Ek__BackingField;
	String_t* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	char* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField;
	int32_t ___U3CIsFieldU3Ek__BackingField;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField;
	Type_t* ____attributeType;
	MemberInfo_t* ____lazyMemberInfo;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8  : public RuntimeObject
{
	bool ___m_disposed;
	intptr_t ___m_jobject;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
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
struct KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C 
{
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 
{
	ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC ____pointer;
	int32_t ____length;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
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
struct DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 
{
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___array;
	int32_t ___framesRemaining;
};
struct DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 
{
	NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___array;
	int32_t ___framesRemaining;
};
struct KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 
{
	Il2CppSharedGenericObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD_StaticFields
{
	U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__1_0;
};
struct U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD_StaticFields
{
	U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__2_0;
};
struct U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16_StaticFields
{
	U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16* ___U3CU3E9;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__3_0;
};
struct ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB_StaticFields
{
	ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28_StaticFields
{
	ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D_StaticFields
{
	ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD_StaticFields
{
	ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA_StaticFields
{
	ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E_StaticFields
{
	ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158_StaticFields
{
	ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972_StaticFields
{
	ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1_StaticFields
{
	ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E_StaticFields
{
	ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1_StaticFields
{
	ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F_StaticFields
{
	ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716_StaticFields
{
	ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE_StaticFields
{
	ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335_StaticFields
{
	ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8_StaticFields
{
	ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9_StaticFields
{
	ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65_StaticFields
{
	ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD_StaticFields
{
	ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37_StaticFields
{
	ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3_StaticFields
{
	ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53_StaticFields
{
	ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D_StaticFields
{
	ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0_StaticFields
{
	ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1_StaticFields
{
	ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E_StaticFields
{
	ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C_StaticFields
{
	ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4_StaticFields
{
	ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E_StaticFields
{
	ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812_StaticFields
{
	ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D_StaticFields
{
	ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15_StaticFields
{
	ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* ___s_defaultArraySortHelper;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_StaticFields
{
	bool ___s_alwaysFalse;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t11734BDB084B9B3CF7FF66FF72AA2F3FBD7396D6* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t05D7CDBF9637AF1A0E82218EB3E706E8BD067759* ___Sources;
	Dictionary_2_t3D61F3C6314B396E1252276C5242F7F6E3B0A820* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t40E00C7968484A24FC0C6EA319105BF0BBB1C5D8* ___ContinueWithInvokers;
	Dictionary_2_tECEFA12444072B7EEBDF40AF0B53BEC6F0CE3861* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t9C2E4757F3F81A8C8C7EE942D896FEA71985ECB1* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t53AA40360DDB151AE9E6933A1F6E258903C5BD42* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t41DB6D70B3317671E6BF537D4AD34342BE6285F1* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tACDA8A8895C1F7AD540D97B4E686400215D6050A* ___Sources;
	Dictionary_2_tBFED0BAAE99BA21C1A1F85C8EC447102D2BEC75D* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t599399EEF6D4A0BA898FB1BE70E141DE265A260C* ___ContinueWithInvokers;
	Dictionary_2_tDB1CE933E91CB1A1E70178F12AEFFBF0F482ED02* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tB479E966A60E9F46A18BB8BE9BB693571A93E8A5* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_tA532F7C1E8AB35167568DC3B0B1B607F0E34A273* ____onCombinedTaskCompleted;
};
struct OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tC276BEC138AEE0D3EE2577F08F3E865C1262BB66* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t84B82385DD78BB06C5D02127E87FF85129353ACF* ___Sources;
	Dictionary_2_tFC33AED7C70246B9F3A2863877F3DBED4621B9A0* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t2240EA70CB22C3FBB0F0205E4EDC23936F665B51* ___ContinueWithInvokers;
	Dictionary_2_t6A4751DC5E7CA38BF764EC64CCEAD0282E2CBBEF* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t7A57A615B2828533A5A4B7123C6F60CC79EA1452* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t78A13A37D807DA14C50558DE22554BDC58A90028* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t8307FC0C8B01BB4366B660C9E32F4A07F61CBBFB* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_tBC171FFCB293CBAE5949F447DAC38E20AA7676F9* ___Sources;
	Dictionary_2_t07293EB199E89308371B85D2D76648E5DCFDDE5E* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t3A4900DEB8BEC487A28DF13A024214D7FD1F14E6* ___ContinueWithInvokers;
	Dictionary_2_t94B0CA3FD23CABE9CE9412B531E11B20933FB2C0* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t8DE0DD6D6DBAD09EF1A3408AB1C1C357BF2D4D70* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t3E1FDE6357E99412633F66633B2C1F49CA973AAA* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t5F3E936CF5CCB7E49C55C8F479B5A15B14C017BF* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t8D21717563FC0E394C85580983F870001C388F92* ___Sources;
	Dictionary_2_t27B6521F1204FBAAD6212035EEBA5E91786CAF8B* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tEE7DB40AD887DEC19D290939E58184BCB7911D52* ___ContinueWithInvokers;
	Dictionary_2_t1DED74E375D2ED02C73DABF8F1657EFD5806FF9C* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t1C25B0CAA1245AF3C5494E72780430201AEF7638* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t4E411B84B0CCF882C21A49680DB99245EB640614* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_t3D3B4A03A26C20738E0A30F0C6D66BEFD8054920* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t089F00842B1CF2970B82225E22A3CDA2C46642A5* ___Sources;
	Dictionary_2_t56B5C5AFC704CD07585B86FAD4BF28C5D0D3BEDC* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_tE22BED043BB30D0D60743980566721F90177F78E* ___ContinueWithInvokers;
	Dictionary_2_t5177696117A79A2D5779ECB7FD2AC63BFDAED0C3* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_t9D79DC58198A9120F8D4D8ED812F27889CDBD8EA* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t02865CCA7CB9B81C3E3DEFACEE60DAA4822D369A* ____onCombinedTaskCompleted;
};
struct OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_StaticFields
{
	HashSet_1_tE0D78BA14B046CC2F5B3FF9664D03B65E68C00F4* ___Pending;
	Dictionary_2_tE497B39437E30C26B66677D739D0D0D1F3E855C0* ___Results;
	Dictionary_2_t2606FD409DEFE2244B623E7A657A78443DAEE7F4* ___Exceptions;
	Dictionary_2_t6D41BD5F1AC7C2B3352D018272300955549382DE* ___Sources;
	Dictionary_2_t47F7569EF6ACF53F054A513156CB8D3A7C3A2C64* ___AwaitableSources;
	Dictionary_2_tBF88CEBFC68490A55C1800916982447B97A8DFF8* ___Continuations;
	Dictionary_2_t15B3373A7FAF540484B4BA2DC98558F69AA8C8AA* ___ContinueWithInvokers;
	Dictionary_2_t70242BDE1FDB354FEB8D863AF3B1BF2D17AEA3C2* ___ContinueWithRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___ContinueWithClearers;
	Dictionary_2_tC4497EBA3F72AFAE0C7832B8C58E006D78E806F1* ___InternalDataRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___InternalDataClearers;
	Dictionary_2_t00EA7C9F9908BD985250CC3BF1033640E8B3DDBC* ___IncrementalResultSubscriberRemovers;
	HashSet_1_t095EA6937EBCEA0A5C3225D8D0D5E4CEF32D6828* ___IncrementalResultSubscriberClearers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Clear;
	Action_2_t0A0368E2267C9BB4CF0A40C9AB0C7306D5D9CF1C* ____onCombinedTaskCompleted;
};
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass;
	intptr_t ___s_HashCodeMethodID;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 m_Items[1];

	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField))->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo), (void*)NULL);
		#endif
	}
};
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F m_Items[1];

	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField), (void*)NULL);
		#endif
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
struct SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B  : public RuntimeArray
{
	ALIGN_FIELD (8) SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 m_Items[1];

	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Assembly), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Dependencies), (void*)NULL);
		#endif
	}
	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___AssemblyName), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Assembly), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Dependencies), (void*)NULL);
		#endif
	}
};
struct ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F  : public RuntimeArray
{
	ALIGN_FIELD (8) ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 m_Items[1];

	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array), (void*)NULL);
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____array), (void*)NULL);
	}
};
struct CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466  : public RuntimeArray
{
	ALIGN_FIELD (8) CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 m_Items[1];

	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
};
struct CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6  : public RuntimeArray
{
	ALIGN_FIELD (8) CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 m_Items[1];

	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dstGpuBuffer), (void*)NULL);
	}
};
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 m_Items[1];

	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 value)
	{
		m_Items[index] = value;
	}
};
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 m_Items[1];

	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 value)
	{
		m_Items[index] = value;
	}
};
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E m_Items[1];

	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 m_Items[1];

	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C m_Items[1];

	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 m_Items[1];

	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 m_Items[1];

	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
};
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 m_Items[1];

	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD m_Items[1];

	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 m_Items[1];

	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 m_Items[1];

	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B m_Items[1];

	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 m_Items[1];

	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 m_Items[1];

	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A m_Items[1];

	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 m_Items[1];

	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 m_Items[1];

	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 value)
	{
		m_Items[index] = value;
	}
};
struct OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 m_Items[1];

	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 value)
	{
		m_Items[index] = value;
	}
};
struct OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 m_Items[1];

	inline OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 value)
	{
		m_Items[index] = value;
	}
};
struct OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 m_Items[1];

	inline OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 value)
	{
		m_Items[index] = value;
	}
};
struct OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D m_Items[1];

	inline OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
	}
	inline OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
	}
};
struct OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 m_Items[1];

	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 m_Items[1];

	inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 m_Items[1];

	inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF m_Items[1];

	inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B m_Items[1];

	inline OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 m_Items[1];

	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 value)
	{
		m_Items[index] = value;
	}
};
struct OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F m_Items[1];

	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m12D84F2785E18896BB0140A2891444E8ED5E130F_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4_gshared (intptr_t ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC0E521D3EDABAB41239FC893CB531240374C662A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Get_TisIl2CppSharedGenericObject_m3FBD43AC7986C7B2DAE4F575360C5B6A7DBDE4AB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m88491724077754D1F68A138997C5FAAE91935663_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Get_TisIl2CppSharedGenericObject_mD7317316E4D5BBE57FE9495B6E117EEFFA6F149E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580_gshared (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, int32_t ___2_length, uint64_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppSharedGenericObject_m6D8A1F3C8EDCAAF226FE8B32CBB649F099D8C16B_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppSharedGenericObject* ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601_gshared (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* ___0_array, int32_t ___1_index, int32_t ___2_length, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0_gshared (ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* __this, ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___0_array, int32_t ___1_index, int32_t ___2_length, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993_gshared (ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* __this, CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF_gshared (ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* __this, CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0_gshared (ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* __this, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0_gshared (ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* __this, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152_gshared (ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* __this, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* ArraySortHelper_1_get_Default_mC7864229E2E47DF631AFF1BE852CB1769F53B5B2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m31719B73F9A5AE1DA03483D98D94782930AD130E_gshared (ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* ArraySortHelper_1_get_Default_m253436ED33703ACAAEE2E476BF48D338EDDB7B8B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m4B67DB60DA75EECF6467CF0EC10F8A859AA9D48C_gshared (ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* ArraySortHelper_1_get_Default_m063DC7C2C33296547D7C0CBBDE76955CE5C40087_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m526FD8916E743A3E97DA4DE585DB39A337C9E662_gshared (ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079_gshared (ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364_gshared (ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC_gshared (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64_gshared (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B_gshared (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819_gshared (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5_gshared (ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F_gshared (ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* __this, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E_gshared (ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* __this, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* ArraySortHelper_1_get_Default_mA20F628C53BFBDDBFB99A085DACC7FAFF0843BCE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mE38408B0AFFE06694DD52CCB3C93D68A156A79E3_gshared (ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* __this, NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* ArraySortHelper_1_get_Default_m1019F09C99CCF827A426B8F24AB3AAA5E321A26A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m2747668F5DB1059FC52DBC77A94DA5F4D7AE5AFE_gshared (ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* __this, NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* ArraySortHelper_1_get_Default_m95EE70AE5E84E3EED9BE5223F9AC379989B99C2D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m1E22B9C74EA0E3D1339828C719253A39405A4967_gshared (ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* __this, NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* ArraySortHelper_1_get_Default_m1FEC46FCF4D9460C22D92A5B7E1CF1FA1F12AD4A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m67C53CD4D4057B7ED55471EFD5E00EBA6D1915E7_gshared (ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* __this, OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* ArraySortHelper_1_get_Default_m0DFBABE196763BA85C7DA7FAB2B318E703EF078A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m7B6C177AE816C51D35B46F03DC633B2C8F0547B6_gshared (ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* __this, OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* ArraySortHelper_1_get_Default_m4B51BA55E73EDFF24ABD51B3F6B15FE657B3588F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mC7D257BDB80CD0AB65020F48AC231BAA24C99F94_gshared (ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* __this, OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* ArraySortHelper_1_get_Default_m04058493907A954B7040598BFD9FC175CA7AE1EA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m35650C331A58FD9733BF657178A3322ACE34FDDD_gshared (ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* __this, OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* ArraySortHelper_1_get_Default_mBC40BA76501105F7B2541811F66593DC01CD1A07_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m751DD395F162E342D498D099B3CB5511C6C76B53_gshared (ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* ArraySortHelper_1_get_Default_m3B38FF3B2E0C3261C994D54E5601A600AC6907E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mE34E14BF023BADF1C2A37F70DE4D79EA9854130B_gshared (ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* __this, OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* ArraySortHelper_1_get_Default_m748DA2E40CC2732DCAD3DC9B41130A844ED5B950_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mD6741AD3335B454DF719C2A989F7194CC2103474_gshared (ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* __this, OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* ArraySortHelper_1_get_Default_mDF0EFA512AFEC0F8505D37267906CE3EFEDDBA8B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m1D48CEB77EFFCD3FC6D43524AC4AD07775A76ECE_gshared (ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* __this, OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* ArraySortHelper_1_get_Default_mAB72EC39DD2F4F33455825F5448A54D824A8056F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_mCF573DAB4097559D43CF2F88758E44CF8F808190_gshared (ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* __this, OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* ArraySortHelper_1_get_Default_m23C542744E3EBEC78EF0DB122AC6D40BC5B82BCC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m540D4E44DE1C47FBBF82AA3256833692BBFAF2EE_gshared (ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* __this, OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* ArraySortHelper_1_get_Default_m9F55F00989997B009A195CEC144FBC3FF6E6EF69_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArraySortHelper_1_BinarySearch_m1645BCF46DB34123B4674B344C5AD97625FD9ED9_gshared (ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* __this, OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;

inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107 (uint8_t* ___0_buffer, int64_t ___1_capacity, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared_inline)(___0_nativeArray, method);
}
inline bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared)(___0_array, method);
}
inline Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared)(___0_array, method);
}
inline double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared)(___0_array, method);
}
inline int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared)(___0_array, method);
}
inline int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared)(___0_array, method);
}
inline int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared)(___0_array, method);
}
inline int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared)(___0_array, method);
}
inline float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared)(___0_array, method);
}
inline Il2CppSharedGenericObject* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444_gshared)(___0_array, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m12D84F2785E18896BB0140A2891444E8ED5E130F (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m12D84F2785E18896BB0140A2891444E8ED5E130F_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))_AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared)(__this, ___0_methodName, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
inline bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared)(___0_array, method);
}
inline Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared)(___0_array, method);
}
inline double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared)(___0_array, method);
}
inline int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared)(___0_array, method);
}
inline int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared)(___0_array, method);
}
inline int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared)(___0_array, method);
}
inline int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared)(___0_array, method);
}
inline float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared)(___0_array, method);
}
inline Il2CppSharedGenericObject* AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4 (intptr_t ___0_array, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared)(__this, ___0_fieldName, method);
}
inline int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC0E521D3EDABAB41239FC893CB531240374C662A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC0E521D3EDABAB41239FC893CB531240374C662A_gshared)(__this, ___0_fieldName, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__Get_TisIl2CppSharedGenericObject_m3FBD43AC7986C7B2DAE4F575360C5B6A7DBDE4AB (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__Get_TisIl2CppSharedGenericObject_m3FBD43AC7986C7B2DAE4F575360C5B6A7DBDE4AB_gshared)(__this, ___0_fieldName, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B_gshared)(__this, ___0_fieldName, method);
}
inline void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7*, const RuntimeMethod*))Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6 (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF (intptr_t ___0_obj, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6 (Type_t* ___0_t, Type_t* ___1_from, const RuntimeMethod* method) ;
inline bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  bool (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared)(___0_jobject, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  double (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int16_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175 (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int8_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  float (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B_gshared)(___0_jclass, ___1_methodName, ___2_args, ___3_isStatic, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387 (intptr_t ___0_clazz, intptr_t ___1_methodID, Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 ___2_args, const RuntimeMethod* method) ;
inline bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared)(__this, ___0_methodID, ___1_args, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B_gshared)(__this, ___0_methodID, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  int64_t (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m88491724077754D1F68A138997C5FAAE91935663 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m88491724077754D1F68A138997C5FAAE91935663_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F (intptr_t ___0_jclass, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C (intptr_t ___0_jobject, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284 (intptr_t ___0_jobject, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (intptr_t, const RuntimeMethod*))AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284_gshared)(___0_jobject, method);
}
inline intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589 (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589_gshared)(___0_jclass, ___1_fieldName, ___2_isStatic, method);
}
inline Il2CppSharedGenericObject* AndroidJavaObject__Get_TisIl2CppSharedGenericObject_mD7317316E4D5BBE57FE9495B6E117EEFFA6F149E (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__Get_TisIl2CppSharedGenericObject_mD7317316E4D5BBE57FE9495B6E117EEFFA6F149E_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, intptr_t, const RuntimeMethod*))AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17_gshared)(__this, ___0_fieldID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96 (intptr_t ___0_clazz, intptr_t ___1_fieldID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetIntField_mD238DA37BA1B3D7693484237951A6EFEA9C62120 (intptr_t ___0_obj, intptr_t ___1_fieldID, int32_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetBooleanField_m5279EA41B214699E79733DC6C93259CC9DCA1D9E (intptr_t ___0_obj, intptr_t ___1_fieldID, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33 (intptr_t ___0_obj, intptr_t ___1_fieldID, int8_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetShortField_mF95E569C142DEDD604CE8BA7617328B3EDDD2F0D (intptr_t ___0_obj, intptr_t ___1_fieldID, int16_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetLongField_m13905547F5CDC7E01AB0D8C787BF98DC2870EC35 (intptr_t ___0_obj, intptr_t ___1_fieldID, int64_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetFloatField_m589CA6B8DD2BFD4515C5AEAE3772782B293F02C3 (intptr_t ___0_obj, intptr_t ___1_fieldID, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetDoubleField_mE93D0C5EC2019A1B657BD32970FE6EFC9B005A58 (intptr_t ___0_obj, intptr_t ___1_fieldID, double ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetCharField_m69D09A6A2CEA55D84B240FE32D90300AAB1334F9 (intptr_t ___0_obj, intptr_t ___1_fieldID, Il2CppChar ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStringField_m649363D4E87763D6A9760359EAFB29802E90B409 (intptr_t ___0_obj, intptr_t ___1_fieldID, String_t* ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA (intptr_t ___0_obj, intptr_t ___1_fieldID, intptr_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13 (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticIntField_m1E20F6C72260CAFBF73207DCEC1816B2816EEBE1 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int32_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticBooleanField_mBE4E40DA1B07A29D356AEEE6CB9519F2B3621AC9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int8_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticShortField_m92534AAA86D7E1055E12936C8A7BD6B865B7DB81 (intptr_t ___0_clazz, intptr_t ___1_fieldID, int16_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticLongField_m299AAC2DE8B6747B0B5E109BABB2F3A4FC1F486E (intptr_t ___0_clazz, intptr_t ___1_fieldID, int64_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticFloatField_mB2EDDE632AB2088CD12F1FD12174FB86990BCBEE (intptr_t ___0_clazz, intptr_t ___1_fieldID, float ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticDoubleField_mA0253927D476917D2158A9CE29F1BF535485B956 (intptr_t ___0_clazz, intptr_t ___1_fieldID, double ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticCharField_m2B8245275C36525798C869B7B1088B25BA663613 (intptr_t ___0_clazz, intptr_t ___1_fieldID, Il2CppChar ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticStringField_m445D977B2374056C6E4607FAEDB7E99A1353E2EE (intptr_t ___0_clazz, intptr_t ___1_fieldID, String_t* ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721 (intptr_t ___0_clazz, intptr_t ___1_fieldID, intptr_t ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AotHelper_Ensure_mFA71C3A8B26E91F0E3E900B26993147991B571E5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2 (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580 (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* __this, RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580_gshared)(__this, ___0_list, method);
}
inline int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, int32_t ___1_index, int32_t ___2_length, uint64_t ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t, int32_t, uint64_t, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Array_BinarySearch_TisIl2CppSharedGenericObject_m6D8A1F3C8EDCAAF226FE8B32CBB649F099D8C16B (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppSharedGenericObject* ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, int32_t, Il2CppSharedGenericObject*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisIl2CppSharedGenericObject_m6D8A1F3C8EDCAAF226FE8B32CBB649F099D8C16B_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601 (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* ___0_array, int32_t ___1_index, int32_t ___2_length, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B*, int32_t, int32_t, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0 (ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* __this, ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___0_array, int32_t ___1_index, int32_t ___2_length, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB*, ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F*, int32_t, int32_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993 (ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* __this, CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28*, CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466*, int32_t, int32_t, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF (ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* __this, CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D*, CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6*, int32_t, int32_t, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0 (ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* __this, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD*, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC*, int32_t, int32_t, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0 (ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* __this, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA*, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1*, int32_t, int32_t, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152 (ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* __this, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E*, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165*, int32_t, int32_t, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* ArraySortHelper_1_get_Default_mC7864229E2E47DF631AFF1BE852CB1769F53B5B2_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mC7864229E2E47DF631AFF1BE852CB1769F53B5B2_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m31719B73F9A5AE1DA03483D98D94782930AD130E (ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158*, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*, int32_t, int32_t, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m31719B73F9A5AE1DA03483D98D94782930AD130E_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* ArraySortHelper_1_get_Default_m253436ED33703ACAAEE2E476BF48D338EDDB7B8B_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m253436ED33703ACAAEE2E476BF48D338EDDB7B8B_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m4B67DB60DA75EECF6467CF0EC10F8A859AA9D48C (ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972*, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*, int32_t, int32_t, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m4B67DB60DA75EECF6467CF0EC10F8A859AA9D48C_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* ArraySortHelper_1_get_Default_m063DC7C2C33296547D7C0CBBDE76955CE5C40087_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m063DC7C2C33296547D7C0CBBDE76955CE5C40087_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m526FD8916E743A3E97DA4DE585DB39A337C9E662 (ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* __this, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1*, KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE*, int32_t, int32_t, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m526FD8916E743A3E97DA4DE585DB39A337C9E662_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079 (ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E*, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, int32_t, int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364 (ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1*, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*, int32_t, int32_t, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F*, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3*, int32_t, int32_t, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64 (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716*, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D*, int32_t, int32_t, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE*, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4*, int32_t, int32_t, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819 (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335*, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61*, int32_t, int32_t, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5 (ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8*, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD*, int32_t, int32_t, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F (ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* __this, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9*, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376*, int32_t, int32_t, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E (ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* __this, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65*, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990*, int32_t, int32_t, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* ArraySortHelper_1_get_Default_mA20F628C53BFBDDBFB99A085DACC7FAFF0843BCE_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mA20F628C53BFBDDBFB99A085DACC7FAFF0843BCE_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mE38408B0AFFE06694DD52CCB3C93D68A156A79E3 (ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* __this, NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD*, NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320*, int32_t, int32_t, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mE38408B0AFFE06694DD52CCB3C93D68A156A79E3_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* ArraySortHelper_1_get_Default_m1019F09C99CCF827A426B8F24AB3AAA5E321A26A_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m1019F09C99CCF827A426B8F24AB3AAA5E321A26A_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m2747668F5DB1059FC52DBC77A94DA5F4D7AE5AFE (ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* __this, NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37*, NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1*, int32_t, int32_t, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m2747668F5DB1059FC52DBC77A94DA5F4D7AE5AFE_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* ArraySortHelper_1_get_Default_m95EE70AE5E84E3EED9BE5223F9AC379989B99C2D_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m95EE70AE5E84E3EED9BE5223F9AC379989B99C2D_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m1E22B9C74EA0E3D1339828C719253A39405A4967 (ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* __this, NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3*, NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623*, int32_t, int32_t, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m1E22B9C74EA0E3D1339828C719253A39405A4967_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* ArraySortHelper_1_get_Default_m1FEC46FCF4D9460C22D92A5B7E1CF1FA1F12AD4A_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m1FEC46FCF4D9460C22D92A5B7E1CF1FA1F12AD4A_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m67C53CD4D4057B7ED55471EFD5E00EBA6D1915E7 (ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* __this, OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53*, OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D*, int32_t, int32_t, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m67C53CD4D4057B7ED55471EFD5E00EBA6D1915E7_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* ArraySortHelper_1_get_Default_m0DFBABE196763BA85C7DA7FAB2B318E703EF078A_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m0DFBABE196763BA85C7DA7FAB2B318E703EF078A_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m7B6C177AE816C51D35B46F03DC633B2C8F0547B6 (ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* __this, OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D*, OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E*, int32_t, int32_t, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m7B6C177AE816C51D35B46F03DC633B2C8F0547B6_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* ArraySortHelper_1_get_Default_m4B51BA55E73EDFF24ABD51B3F6B15FE657B3588F_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m4B51BA55E73EDFF24ABD51B3F6B15FE657B3588F_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mC7D257BDB80CD0AB65020F48AC231BAA24C99F94 (ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* __this, OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0*, OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE*, int32_t, int32_t, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mC7D257BDB80CD0AB65020F48AC231BAA24C99F94_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* ArraySortHelper_1_get_Default_m04058493907A954B7040598BFD9FC175CA7AE1EA_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m04058493907A954B7040598BFD9FC175CA7AE1EA_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m35650C331A58FD9733BF657178A3322ACE34FDDD (ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* __this, OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1*, OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE*, int32_t, int32_t, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m35650C331A58FD9733BF657178A3322ACE34FDDD_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* ArraySortHelper_1_get_Default_mBC40BA76501105F7B2541811F66593DC01CD1A07_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mBC40BA76501105F7B2541811F66593DC01CD1A07_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m751DD395F162E342D498D099B3CB5511C6C76B53 (ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* __this, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E*, OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960*, int32_t, int32_t, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m751DD395F162E342D498D099B3CB5511C6C76B53_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* ArraySortHelper_1_get_Default_m3B38FF3B2E0C3261C994D54E5601A600AC6907E0_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m3B38FF3B2E0C3261C994D54E5601A600AC6907E0_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mE34E14BF023BADF1C2A37F70DE4D79EA9854130B (ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* __this, OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C*, OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE*, int32_t, int32_t, OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mE34E14BF023BADF1C2A37F70DE4D79EA9854130B_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* ArraySortHelper_1_get_Default_m748DA2E40CC2732DCAD3DC9B41130A844ED5B950_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m748DA2E40CC2732DCAD3DC9B41130A844ED5B950_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mD6741AD3335B454DF719C2A989F7194CC2103474 (ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* __this, OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4*, OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D*, int32_t, int32_t, OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mD6741AD3335B454DF719C2A989F7194CC2103474_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* ArraySortHelper_1_get_Default_mDF0EFA512AFEC0F8505D37267906CE3EFEDDBA8B_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mDF0EFA512AFEC0F8505D37267906CE3EFEDDBA8B_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m1D48CEB77EFFCD3FC6D43524AC4AD07775A76ECE (ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* __this, OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E*, OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D*, int32_t, int32_t, OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m1D48CEB77EFFCD3FC6D43524AC4AD07775A76ECE_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* ArraySortHelper_1_get_Default_mAB72EC39DD2F4F33455825F5448A54D824A8056F_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_mAB72EC39DD2F4F33455825F5448A54D824A8056F_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_mCF573DAB4097559D43CF2F88758E44CF8F808190 (ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* __this, OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812*, OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8*, int32_t, int32_t, OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_mCF573DAB4097559D43CF2F88758E44CF8F808190_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* ArraySortHelper_1_get_Default_m23C542744E3EBEC78EF0DB122AC6D40BC5B82BCC_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m23C542744E3EBEC78EF0DB122AC6D40BC5B82BCC_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m540D4E44DE1C47FBBF82AA3256833692BBFAF2EE (ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* __this, OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D*, OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831*, int32_t, int32_t, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m540D4E44DE1C47FBBF82AA3256833692BBFAF2EE_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* ArraySortHelper_1_get_Default_m9F55F00989997B009A195CEC144FBC3FF6E6EF69_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m9F55F00989997B009A195CEC144FBC3FF6E6EF69_gshared_inline)(method);
}
inline int32_t ArraySortHelper_1_BinarySearch_m1645BCF46DB34123B4674B344C5AD97625FD9ED9 (ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* __this, OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15*, OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F*, int32_t, int32_t, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_BinarySearch_m1645BCF46DB34123B4674B344C5AD97625FD9ED9_gshared)(__this, ___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// Method Definition Index: 120277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CA9D512889E4FD11E06BC83A1E6FE316CD1BC0F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0019:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = ___0_buffer;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_3, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 120277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB9A49EBBCCE6CE5AF7544594285D5F56E7EF279C_gshared (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_inline((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0019:
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_2 = ___0_buffer;
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_buffer))->___m_Length);
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_3, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 120277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewDirectByteBufferFromNativeArray_TisIl2CppFullySharedGenericStruct_mBA315BD28FAF24143A02065102FEC37584F134D1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_buffer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0019:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_buffer;
		void* L_3;
		L_3 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___0_buffer), il2cpp_rgctx_method(method->rgctx_data, 3));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		intptr_t L_6;
		L_6 = AndroidJNI_NewDirectByteBuffer_m17389ED6D98CC0364180BAB43F2747B48FFDB107((uint8_t*)L_3, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4_gshared (intptr_t ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		Il2CppSharedGenericObject* L_1;
		L_1 = _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_mAD2432704589B67F3F93D55DF8B948DCBEBA4444(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mE2FE04F1AE05E31AFCB6C62A0D8015274310BBE7_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_array;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_ArrayType_t33FA9A7F66F041B4E2878FF619DA2A8FCDD39085);
		return;
	}
}
// Method Definition Index: 120024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 120024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m88491724077754D1F68A138997C5FAAE91935663_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m12D84F2785E18896BB0140A2891444E8ED5E130F(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 120024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = _AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mC4E70171E726BFD2EDF128963FAD90873B0289C5(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 120024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_mD4DFA0128576804E9AE4FF17BD3D1398F2196069_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		bool L_2 = ___2_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = _AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_mFEAB91A44B644CE56BB6182931D1065B679E0B3A(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mEB124826B537513D20B0E11A265E04D0612E1CE8_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		bool L_3 = ___3_isStatic;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
// Method Definition Index: 120025
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m4D04F21DE5CB13BC4E2A08505DA57AC729F3BA70_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		il2cpp_codegen_runtime_class_init_inline(_AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE43BB2CCE4BEBFBF19C2E7C22F4E07A52002E80C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppChar L_2;
		L_2 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		double L_2;
		L_2 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE0567B52AC481152BD742506C5AB912185B2C345_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int16_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int64_t L_2;
		L_2 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m517389999DF08FDB831BB7337DE4FA8D8158AF7B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int8_t L_2;
		L_2 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC6CF02CBA2C4A23EF8CD0BF612F5759B8C26DFF1_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		float L_2;
		L_2 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_Call_TisIl2CppSharedGenericObject_m8DEE2A0D06B4978C5E5000815E66E6484606D138_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppSharedGenericObject* L_2;
		L_2 = AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mC798093D4EE507666B4D04C1237E82DFBBACE706_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t7ECE3320BEFB3505409302EC3AA6B828AE7E1DB5);
		return;
	}
}
// Method Definition Index: 120470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t7C9CEFF53F7F785E3B0A2AA52BF0599DB9E4C7A7);
		return;
	}
}
// Method Definition Index: 120450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mDA393DFB3EA03B230F3982EC0F62EED04C1B755E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m2126160FB635069207535BD0E700C3605FDB3308(__this, L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 120449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mF7CDE80510F82B3C335324838828B788E1F0FAD4_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__Call_m4C4D7D7287030773175BDF47681EA018DFA4DF1A(__this, L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 120469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE94FE031A180D9514AA8E28338270133654A7412_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_tE77199CFC11B9237A747C8E23BCDA97324CD4769);
		return;
	}
}
// Method Definition Index: 120468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m584BD08D664D1371FF995E37EDD37FD6AA861406_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_t6A981EFC55AACA8DB2914A6B9C24AF2C1F0D86E3);
		return;
	}
}
// Method Definition Index: 120474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		bool L_2;
		L_2 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		int32_t L_2;
		L_2 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_CallStatic_TisIl2CppSharedGenericObject_mF6EA4A6FC668EA46C5309B3E3A5ABB83600F50F6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		Il2CppSharedGenericObject* L_2;
		L_2 = AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 120475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m98714A38A15645388BE9EE530213C7EDB49C34AF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t955BFF9AB851C80203957B433FC00E2046696241);
		return;
	}
}
// Method Definition Index: 120474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m7843D14A0537A1190C739261EF49C05B1FF2ED90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t94E13999E45FF70AA5DA5E427955FC4E439412B2);
		return;
	}
}
// Method Definition Index: 120454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_m9E915D63BD1F4FB05B49296EEFE25B86C30EA692_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mE917E474DB9801610FB7ABE5BE749DF84CEFD48A(__this, L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 120453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_mB35C0A4F3C829AF99001B27BC0E99CD64736EE1A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		AndroidJavaObject__CallStatic_mD63902D30CD5626DAEAD1D6484AF7A9ACA85590E(__this, L_0, L_2, NULL);
		return;
	}
}
// Method Definition Index: 120473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4C097E550C3D8A103BE65545A8CB9E688DCE341E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_methodID;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_t3F35C7C5E6E91ECEB1E553CA45292DBBEC6E5501);
		return;
	}
}
// Method Definition Index: 120472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9E8D43F22F21BB581F9478C8CF9B3A8059B3B8CD_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_args;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		InvokerActionInvoker3< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, L_2, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_ReturnType_t41223B870DEBD9DC66C7F3F6FDDF2CF6D061E4EB);
		return;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		bool L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0207DDD0AB7EE1136083B85289D4F16FD9A64ECC(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	Il2CppChar V_0 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		Il2CppChar L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		Il2CppChar L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m51DC292506277213F541434A51F81430E11E7226(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	double V_0 = 0.0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(double));
		double L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		double L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF6AF89E7365D44A201C5A2C86C49EF49E2D6ADAD(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int16_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
		int16_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int16_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6FCB78A4CF7C2FB0375E88C31C70458F55F422C(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int32_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int64_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int8_t V_0 = 0x0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
		int8_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		int8_t L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2BD2E924FBD117B44A2D5E741144FD7B1FCE918E(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		float L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m93BCF3156F5C823F8C2B005523A618966B0A6DBB(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		Il2CppSharedGenericObject* L_4;
		L_4 = AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// Method Definition Index: 120502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArray_TisIl2CppFullySharedGenericAny_m4D8E7ACD1BBB7E3FEC7BA69AF6C620E70D8BBC3E_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	memset(V_0, 0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		return;
	}

IL_0017:
	{
		intptr_t L_3 = ___0_jobject;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_box_unbox(L_4, L_5, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC, il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_data(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_ReturnType_t2602EED81B2B6E4946933FD7A1734F95B3DD02CC);
		return;
	}
}
// Method Definition Index: 120501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_3, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_4 = ___0_jobject;
			int32_t L_5;
			L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m02707C23958FF03FA0345C2A17F66EE379A1468C(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_0 = L_5;
			goto IL_0032;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 120501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int64_t V_0 = 0;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		int64_t L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_3, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_4 = ___0_jobject;
			int64_t L_5;
			L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m0CADE835010213386C1C07E63F70E55498142C20(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_0 = L_5;
			goto IL_0032;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		int64_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 120501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284_gshared (intptr_t ___0_jobject, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return L_2;
	}

IL_0017:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_3, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_4 = ___0_jobject;
			Il2CppSharedGenericObject* L_5;
			L_5 = AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppSharedGenericObject_m6F1CD10E4BE61A7211FB87DA1D7D92C7FE85F8E4(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
			V_0 = L_5;
			goto IL_0032;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 120501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppFullySharedGenericAny_m5BC2B7B267EBFB3D33E1D15F5F5DFEF99AB48E84_gshared (intptr_t ___0_jobject, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	memset(V_0, 0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
	{
		intptr_t L_0 = ___0_jobject;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}

IL_0017:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = ___0_jobject;
				AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_3, NULL);
				return;
			}
		});
		try
		{
			intptr_t L_4 = ___0_jobject;
			InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, (Il2CppFullySharedGenericAny*)L_5);
			il2cpp_codegen_box_unbox(L_5, L_6, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9, il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_data(method->rgctx_data, 0));
			il2cpp_codegen_memcpy(V_0, L_6, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
			goto IL_0032;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_ReturnType_t7F4379E8D6E3B3545F3D77660B8E3F6DA1DC4DB9);
		return;
	}
}
// Method Definition Index: 120457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1C9D9590B9F7212AAD6D9BFFF3F2762BD090BCAB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		int32_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m01A8921E749471F6C977F5D16D18A076F5EB3244_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		int64_t L_1;
		L_1 = AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC0E521D3EDABAB41239FC893CB531240374C662A(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_Get_TisIl2CppSharedGenericObject_m6C4DE572279A608E1FF6AA0F9B421D0BB2870F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		Il2CppSharedGenericObject* L_1;
		L_1 = AndroidJavaObject__Get_TisIl2CppSharedGenericObject_m3FBD43AC7986C7B2DAE4F575360C5B6A7DBDE4AB(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m0921C141B8FD194E4F423401D827FCB547354135_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_t3D88A0B7A2BB1C07E18A9AA7AB32582B0FB37337);
		return;
	}
}
// Method Definition Index: 120457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Get_TisIl2CppFullySharedGenericAny_m390E9396B06E7DB37AB22F9F94EF31B456F01185_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_tE541E61DC1EE486A3DDC10DCA2A2DD9A2A3BADE8);
		return;
	}
}
// Method Definition Index: 120461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject_GetStatic_TisIl2CppSharedGenericObject_mB51F8378DA3B0F5FFE061D86A20FA87349F98740_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		Il2CppSharedGenericObject* L_1;
		L_1 = AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 120462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_m7E7CB28FD389C5D15A289C22C10EEBB9E64567B9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_fieldID;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_t4E8B4431DA3B0620A6961D0830B049CE0FA25BB3);
		return;
	}
}
// Method Definition Index: 120461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_FieldType_tBB418E296327456981AAF34C2BEB510AEC3C4E4D);
		return;
	}
}
// Method Definition Index: 120460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_mEB42AA9151144DAA56A324FBF5A564C71A65D35E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD083F29D6E32E63E26B83C297746967559FB5289);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 120459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisIl2CppFullySharedGenericAny_m7286B3F15DA02D0B999CE939F20412740B22945E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t5C6F84F3CFFB0874A4DA0D1C58053A25B835551E);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 120464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mFB380E32D4FBFB41D3870427D3227A38E72F3D7C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_tD9FB37412CCB11866A06B8D683ACBBD34ED06C6B);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 120463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_SetStatic_TisIl2CppFullySharedGenericAny_mF354DBF45CBF7D251BCCAB27BAB86047439CC292_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
	//<source_info:<no-source>:1>
	{
		String_t* L_0 = ___0_fieldName;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_val : &___1_val), SizeOf_FieldType_t6076CC06F19BCC0301AE8C734F26CA429D2DB469);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool G_B30_0 = false;
	bool G_B35_0 = false;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				bool L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(bool), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jobject;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				bool L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(bool), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				bool L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(bool), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				bool L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(bool), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				bool L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(bool), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				bool L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(bool), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				bool L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(bool), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				bool L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(bool), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(bool*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(bool*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(bool*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				bool L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		bool L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m72E1F5D2CE435E45651E8B970A73B9F5E3E03815_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m73D49A76D8F24AD1815CF94E87F1EF4683A38EA6(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppChar V_5 = 0x0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppChar G_B30_0 = 0x0;
	Il2CppChar G_B35_0 = 0x0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				Il2CppChar L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(Il2CppChar), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				Il2CppChar L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(Il2CppChar), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				Il2CppChar L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(Il2CppChar), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				Il2CppChar L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(Il2CppChar), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				Il2CppChar L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(Il2CppChar), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				Il2CppChar L_62;
				il2cpp_codegen_box_unbox((&L_61), (&L_62), sizeof(Il2CppChar), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_62;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				Il2CppChar L_69;
				il2cpp_codegen_box_unbox((&L_68), (&L_69), sizeof(Il2CppChar), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_69;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_71, L_72, L_73, NULL);
				double L_75 = L_74;
				Il2CppChar L_76;
				il2cpp_codegen_box_unbox((&L_75), (&L_76), sizeof(Il2CppChar), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_76;
				goto IL_03ea;
			}

IL_0246_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				Il2CppChar L_81;
				L_81 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_78, L_79, L_80, NULL);
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppChar));
				Il2CppChar L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(Il2CppChar*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppChar));
				Il2CppChar L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				Il2CppChar L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m18459EC016E866EF307EC4D9442CD86FD9BC28B4(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppChar));
				Il2CppChar L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		Il2CppChar L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m22710813CDD982DC5F88C2A4067FBFE1D57A3065_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m791647AA6EAD3B88467418F51CF53F5755AB38BA(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppChar L_7;
		L_7 = AndroidJavaObject__Call_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8B3C7C06394410B77DB9953832CB9F8C29C28E89(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	double V_3 = 0.0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	double V_5 = 0.0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	double G_B30_0 = 0.0;
	double G_B35_0 = 0.0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				double L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(double), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				double L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(double), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				double L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(double), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				double L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(double), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				double L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(double), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				double L_62;
				il2cpp_codegen_box_unbox((&L_61), (&L_62), sizeof(double), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_62;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				double L_69;
				il2cpp_codegen_box_unbox((&L_68), (&L_69), sizeof(double), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_69;
				goto IL_03ea;
			}

IL_0209_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_71, L_72, L_73, NULL);
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				double L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(double), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(double*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(double*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(double));
				double L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(double*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(double));
				double L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				double L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3CAD187DEBCBD88D94604015E86A37B8944847BC(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(double));
				double L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		double L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m946CEC22A94586DE93BE0725E5F25E04589F69DE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m44C60AAE64EE97BFD5D9D302E7BE5BE20E6862B3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		double L_7;
		L_7 = AndroidJavaObject__Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0BA90472306DF5C3A1491FC3EB052DD58FA468C3(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int16_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int16_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int16_t G_B30_0 = 0;
	int16_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int16_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int16_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int16_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int16_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int16_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int16_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				int16_t L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(int16_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int16_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int16_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int16_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int16_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int16_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int16_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int16_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int16_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int16_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int16_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int16_t));
				int16_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int16_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int16_t));
				int16_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int16_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m62441E1DA5798B8F585F5EF18386C4FB739BFFC8(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int16_t));
				int16_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int16_t L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m08A0CE3C4BDDA756095A0A816C659587814F649E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3B57915B048BD436E00741CD146D62AC775E7BA3(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int16_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA616697346ABF4A696B8F63B5F85AA92777EA400(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B30_0 = 0;
	int32_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				V_3 = L_24;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jobject;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				bool L_29;
				L_29 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_26, L_27, L_28, NULL);
				bool L_30 = L_29;
				int32_t L_31;
				il2cpp_codegen_box_unbox((&L_30), (&L_31), sizeof(int32_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jobject;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				int32_t L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(int32_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				int32_t L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int32_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				int32_t L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(int32_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int32_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int32_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int32_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int32_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int32_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int32_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int32_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int32_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int32_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int32_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int32_t L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1BFF486C91846170C07AAF27EF84971FF0596B90_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0D60BAB951F2C313123D62CAB81EEA263F2F0750(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int64_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int64_t G_B30_0 = 0;
	int64_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int64_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int64_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int64_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int64_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int64_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int64_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				int64_t L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(int64_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				int64_t L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(int64_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int64_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int64_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int64_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int64_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int64_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int64_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int64_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int64_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int64_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m6A8E0C87ADD6FC1CA3F936C0CC0AC4AB379A8422(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int64_t));
				int64_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int64_t L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC6DBECDD44973120E0A56068ABE886D9A7016F5C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9665934CC08FD80EB16882C4EA6FDBC5D9C3A175(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int64_t L_7;
		L_7 = AndroidJavaObject__Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B925872A7B673BC9981AB72E3A229BBE0E1119E(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int8_t V_3 = 0x0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int8_t V_5 = 0x0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int8_t G_B30_0 = 0x0;
	int8_t G_B35_0 = 0x0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				int8_t L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(int8_t), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				int8_t L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(int8_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				int8_t L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(int8_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				int8_t L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(int8_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int8_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int8_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int8_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int8_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int8_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int8_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int8_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int8_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(int8_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int8_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
				int8_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int8_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
				int8_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				int8_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB474FE99696A6DEB269E0F1C3C7DA32CD8854410(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
				int8_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int8_t L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAE2F0D59E0CE54D36BB86C53218704FA72DC0350_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF6ACD1C6C5237E0446DB9DBDAC40BA2660849BB(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int8_t L_7;
		L_7 = AndroidJavaObject__Call_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA3300F1D8CC0B110426EAE23F5FB7F27FD8AE76B(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	float G_B30_0 = 0.0f;
	float G_B35_0 = 0.0f;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				float L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(float), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				float L_33;
				il2cpp_codegen_box_unbox((&L_32), (&L_33), sizeof(float), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_33;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				float L_41;
				il2cpp_codegen_box_unbox((&L_40), (&L_41), sizeof(float), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_41;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				float L_48;
				il2cpp_codegen_box_unbox((&L_47), (&L_48), sizeof(float), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_48;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				float L_55;
				il2cpp_codegen_box_unbox((&L_54), (&L_55), sizeof(float), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_55;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				float L_62;
				il2cpp_codegen_box_unbox((&L_61), (&L_62), sizeof(float), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_62;
				goto IL_03ea;
			}

IL_01cc_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				float L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(float), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				float L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(float), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jobject;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_83, L_84, L_85, NULL);
				V_3 = ((*(float*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(float*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(float));
				float L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jobject;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(float*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(float));
				float L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jobject;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_113, L_114, L_115, NULL);
				float L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD5A794B10305822230E288BE2D72329A6EE0C8A4(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(float));
				float L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		float L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71549B5031FEE0FBB78A9CE02EDADD14DBFFB56D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA3FFDC6948922BEFC787A297D5483BA277EEFF0C(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		float L_7;
		L_7 = AndroidJavaObject__Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8EDEAF89FE2C5B65277B0FC57FAD4FA9253E1140(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppSharedGenericObject* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* G_B30_0 = NULL;
	Il2CppSharedGenericObject* G_B35_0 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jobject;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jobject;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				RuntimeObject* L_33 = Box(il2cpp_defaults.boolean_class, &L_32);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jobject;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				RuntimeObject* L_41 = Box(il2cpp_defaults.byte_class, &L_40);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jobject;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				RuntimeObject* L_48 = Box(il2cpp_defaults.sbyte_class, &L_47);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jobject;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				RuntimeObject* L_55 = Box(il2cpp_defaults.int16_class, &L_54);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jobject;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				RuntimeObject* L_62 = Box(il2cpp_defaults.int64_class, &L_61);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_62, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jobject;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				RuntimeObject* L_69 = Box(il2cpp_defaults.single_class, &L_68);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_69, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_71, L_72, L_73, NULL);
				double L_75 = L_74;
				RuntimeObject* L_76 = Box(il2cpp_defaults.double_class, &L_75);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_76, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jobject;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				Il2CppChar L_81;
				L_81 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_78, L_79, L_80, NULL);
				Il2CppChar L_82 = L_81;
				RuntimeObject* L_83 = Box(il2cpp_defaults.char_class, &L_82);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_84 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_84)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_85 = __this->___m_jobject;
				intptr_t L_86;
				L_86 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_85, NULL);
				intptr_t L_87 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_88 = V_0;
				String_t* L_89;
				L_89 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_86, L_87, L_88, NULL);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_90 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_90)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jobject;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				intptr_t L_95;
				L_95 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_92, L_93, L_94, NULL);
				V_4 = L_95;
				intptr_t L_96 = V_4;
				bool L_97;
				L_97 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_96, 0, NULL);
				if (L_97)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_98 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_99 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_99, L_98, NULL);
				G_B30_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_100 = V_5;
				G_B30_0 = L_100;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_101 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jobject;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_103, L_104, L_105, NULL);
				V_6 = L_106;
				intptr_t L_107 = V_6;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_109 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_110 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_110, L_109, NULL);
				G_B35_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_111 = V_5;
				G_B35_0 = L_111;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_115;
				L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_116;
				L_116 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_113, L_115, NULL);
				if (!L_116)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jobject;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				intptr_t L_121;
				L_121 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_118, L_119, L_120, NULL);
				Il2CppSharedGenericObject* L_122;
				L_122 = AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF(L_121, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_122;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				Type_t* L_125 = L_124;
				if (L_125)
				{
					G_B40_0 = L_125;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_125;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_126;
				L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_126;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_127;
				L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_129 = V_5;
				V_3 = L_129;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		Il2CppSharedGenericObject* L_130 = V_3;
		return L_130;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m39A1E2B88CD5364F83417EFB65F1C296656D2F62_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppSharedGenericObject* L_7;
		L_7 = AndroidJavaObject__Call_TisIl2CppSharedGenericObject_m34A45129A0AA339AC2E31492EF928112EDECC197(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_m4720E88EC57849809AFC4A771495414E75120D8F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	const Il2CppFullySharedGenericAny L_35 = L_27;
	const Il2CppFullySharedGenericAny L_44 = L_27;
	const Il2CppFullySharedGenericAny L_52 = L_27;
	const Il2CppFullySharedGenericAny L_60 = L_27;
	const Il2CppFullySharedGenericAny L_68 = L_27;
	const Il2CppFullySharedGenericAny L_76 = L_27;
	const Il2CppFullySharedGenericAny L_84 = L_27;
	const Il2CppFullySharedGenericAny L_92 = L_27;
	const Il2CppFullySharedGenericAny L_99 = L_27;
	const Il2CppFullySharedGenericAny L_111 = L_27;
	const Il2CppFullySharedGenericAny L_113 = L_27;
	const Il2CppFullySharedGenericAny L_124 = L_27;
	const Il2CppFullySharedGenericAny L_126 = L_27;
	const Il2CppFullySharedGenericAny L_137 = L_27;
	const Il2CppFullySharedGenericAny L_144 = L_27;
	const Il2CppFullySharedGenericAny L_145 = L_27;
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_3, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(V_5, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppFullySharedGenericAny G_B30_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B30_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Il2CppFullySharedGenericAny G_B35_0 = alloca(SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	memset(G_B35_0, 0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				bool L_20 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_20)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = __this->___m_jobject;
				intptr_t L_22;
				L_22 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_21, NULL);
				intptr_t L_23 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_24 = V_0;
				int32_t L_25;
				L_25 = AndroidJNISafe_CallIntMethod_m60318205A7EAD0C5CC0643106A7044F1563DCC0E(L_22, L_23, L_24, NULL);
				int32_t L_26 = L_25;
				il2cpp_codegen_box_unbox((&L_26), L_27, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_27, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0090_1:
			{
				bool L_28 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_28)
				{
					goto IL_00cd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jobject;
				intptr_t L_30;
				L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
				intptr_t L_31 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_32 = V_0;
				bool L_33;
				L_33 = AndroidJNISafe_CallBooleanMethod_m2F5824C9EA5D1586C7E555F9F8DE01D84757D972(L_30, L_31, L_32, NULL);
				bool L_34 = L_33;
				il2cpp_codegen_box_unbox((&L_34), L_35, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_35, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_00cd_1:
			{
				bool L_36 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_36)
				{
					goto IL_0115_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_37 = __this->___m_jobject;
				intptr_t L_38;
				L_38 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_37, NULL);
				intptr_t L_39 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_40 = V_0;
				int8_t L_41;
				L_41 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_38, L_39, L_40, NULL);
				uint8_t L_42 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_41,NULL));
				uint8_t L_43 = L_42;
				il2cpp_codegen_box_unbox((&L_43), L_44, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_44, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0115_1:
			{
				bool L_45 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_45)
				{
					goto IL_0152_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jobject;
				intptr_t L_47;
				L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_46, NULL);
				intptr_t L_48 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_49 = V_0;
				int8_t L_50;
				L_50 = AndroidJNISafe_CallSByteMethod_m03F9BD1288769A14F5CE8477DACDD62F6D0B77E7(L_47, L_48, L_49, NULL);
				int8_t L_51 = L_50;
				il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_52, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0152_1:
			{
				bool L_53 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_53)
				{
					goto IL_018f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int16_t L_58;
				L_58 = AndroidJNISafe_CallShortMethod_m7C82D811B75161D4567651B0D85E5F7A2ED83A97(L_55, L_56, L_57, NULL);
				int16_t L_59 = L_58;
				il2cpp_codegen_box_unbox((&L_59), L_60, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_60, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_018f_1:
			{
				bool L_61 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_61)
				{
					goto IL_01cc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_62 = __this->___m_jobject;
				intptr_t L_63;
				L_63 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_62, NULL);
				intptr_t L_64 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_65 = V_0;
				int64_t L_66;
				L_66 = AndroidJNISafe_CallLongMethod_mD04CC840004334A567747BD526F88A813CB833B6(L_63, L_64, L_65, NULL);
				int64_t L_67 = L_66;
				il2cpp_codegen_box_unbox((&L_67), L_68, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_68, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_01cc_1:
			{
				bool L_69 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_69)
				{
					goto IL_0209_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jobject;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				float L_74;
				L_74 = AndroidJNISafe_CallFloatMethod_m7437E60E0985885D721F1592E4DACF8246F69BBE(L_71, L_72, L_73, NULL);
				float L_75 = L_74;
				il2cpp_codegen_box_unbox((&L_75), L_76, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_76, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0209_1:
			{
				bool L_77 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_77)
				{
					goto IL_0246_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jobject;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				double L_82;
				L_82 = AndroidJNISafe_CallDoubleMethod_m01B318F7CA4F90C54D689CF0CD84DF312E68CB5E(L_79, L_80, L_81, NULL);
				double L_83 = L_82;
				il2cpp_codegen_box_unbox((&L_83), L_84, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_84, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0246_1:
			{
				bool L_85 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_85)
				{
					goto IL_03d1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_86 = __this->___m_jobject;
				intptr_t L_87;
				L_87 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_86, NULL);
				intptr_t L_88 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_89 = V_0;
				Il2CppChar L_90;
				L_90 = AndroidJNISafe_CallCharMethod_mB777FAF5E9D1BFF480B7EDD5AA5352F30797E1DD(L_87, L_88, L_89, NULL);
				Il2CppChar L_91 = L_90;
				il2cpp_codegen_box_unbox((&L_91), L_92, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_92, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_93 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_93)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jobject;
				intptr_t L_95;
				L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_94, NULL);
				intptr_t L_96 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_97 = V_0;
				String_t* L_98;
				L_98 = AndroidJNISafe_CallStringMethod_m4E40DA54A224C0C10A8C600CAC1C2C838B69264C(L_95, L_96, L_97, NULL);
				void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
				il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_100)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_101 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jobject;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_103, L_104, L_105, NULL);
				V_4 = L_106;
				intptr_t L_107 = V_4;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_109 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_110 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_110, L_109, NULL);
				void* L_112 = UnBox_Any((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1), L_111);
				il2cpp_codegen_memcpy(G_B30_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_113, V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B30_0, L_113, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_0313_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B30_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_114 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_114)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_115 = __this->___m_jobject;
				intptr_t L_116;
				L_116 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_115, NULL);
				intptr_t L_117 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_118 = V_0;
				intptr_t L_119;
				L_119 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_116, L_117, L_118, NULL);
				V_6 = L_119;
				intptr_t L_120 = V_6;
				bool L_121;
				L_121 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_120, 0, NULL);
				if (L_121)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_122 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_123 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_123, L_122, NULL);
				void* L_125 = UnBox_Any((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 1), L_124);
				il2cpp_codegen_memcpy(G_B35_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_125)), SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_126, V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(G_B35_0, L_126, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
			}

IL_036e_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B35_0, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_128;
				L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_130;
				L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_131;
				L_131 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_128, L_130, NULL);
				if (!L_131)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_132 = __this->___m_jobject;
				intptr_t L_133;
				L_133 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_132, NULL);
				intptr_t L_134 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_135 = V_0;
				intptr_t L_136;
				L_136 = AndroidJNISafe_CallObjectMethod_m12F882542956F2920187AADCD0295D4E32124BEF(L_133, L_134, L_135, NULL);
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_136, (Il2CppFullySharedGenericAny*)L_137);
				il2cpp_codegen_memcpy(V_3, L_137, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				Type_t* L_140 = L_139;
				if (L_140)
				{
					G_B40_0 = L_140;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_140;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_141;
				L_141 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_141;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_142;
				L_142 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_143 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_143, L_142, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(L_144, V_5, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				il2cpp_codegen_memcpy(V_3, L_144, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		il2cpp_codegen_memcpy(L_145, V_3, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		il2cpp_codegen_memcpy(il2cppRetVal, L_145, SizeOf_ReturnType_t79ECD6DB4ABC339D39F04EE50C832B65A84F5147);
		return;
	}
}
// Method Definition Index: 120485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Call_TisIl2CppFullySharedGenericAny_mA1A866611778FF72A2067F7E30B32913C4EB4904_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_ReturnType_t0FD1385ACD92B5652F803E183304929EDB7632D9);
		return;
	}
}
// Method Definition Index: 120494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool G_B30_0 = false;
	bool G_B35_0 = false;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				bool L_26;
				il2cpp_codegen_box_unbox((&L_25), (&L_26), sizeof(bool), il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_26;
				goto IL_03ea;
			}

IL_0090_1:
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jclass;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_28, L_29, L_30, NULL);
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jclass;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				bool L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(bool), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				bool L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(bool), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				bool L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(bool), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				bool L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(bool), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				bool L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(bool), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				bool L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(bool), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				bool L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(bool), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_83, L_84, L_85, NULL);
				V_3 = ((*(bool*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(bool*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jclass;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(bool*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jclass;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_113, L_114, L_115, NULL);
				bool L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA1CB7EC9473B0674763C89AC566EC664159108E9(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(bool));
				bool L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		bool L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m41529A6A47CC3B57286AC8F9C6388E54918DF450_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE3914411BE312CBBA869835158E535A06CD3EEB4(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		bool L_7;
		L_7 = AndroidJavaObject__CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9EDC162A865064239ADA4058CD2A81B1A2CF6D0F(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B30_0 = 0;
	int32_t G_B35_0 = 0;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				V_3 = L_24;
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_25 = __this->___m_jclass;
				intptr_t L_26;
				L_26 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_25, NULL);
				intptr_t L_27 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_28 = V_0;
				bool L_29;
				L_29 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_26, L_27, L_28, NULL);
				bool L_30 = L_29;
				int32_t L_31;
				il2cpp_codegen_box_unbox((&L_30), (&L_31), sizeof(int32_t), il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_31;
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_32 = __this->___m_jclass;
				intptr_t L_33;
				L_33 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_32, NULL);
				intptr_t L_34 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_35 = V_0;
				int8_t L_36;
				L_36 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_33, L_34, L_35, NULL);
				uint8_t L_37 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_36,NULL));
				uint8_t L_38 = L_37;
				int32_t L_39;
				il2cpp_codegen_box_unbox((&L_38), (&L_39), sizeof(int32_t), il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_39;
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
				intptr_t L_41;
				L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
				intptr_t L_42 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_43 = V_0;
				int8_t L_44;
				L_44 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_41, L_42, L_43, NULL);
				int8_t L_45 = L_44;
				int32_t L_46;
				il2cpp_codegen_box_unbox((&L_45), (&L_46), sizeof(int32_t), il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_46;
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
				intptr_t L_48;
				L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
				intptr_t L_49 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_50 = V_0;
				int16_t L_51;
				L_51 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_48, L_49, L_50, NULL);
				int16_t L_52 = L_51;
				int32_t L_53;
				il2cpp_codegen_box_unbox((&L_52), (&L_53), sizeof(int32_t), il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_53;
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int64_t L_58;
				L_58 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_55, L_56, L_57, NULL);
				int64_t L_59 = L_58;
				int32_t L_60;
				il2cpp_codegen_box_unbox((&L_59), (&L_60), sizeof(int32_t), il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_60;
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
				intptr_t L_62;
				L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
				intptr_t L_63 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_64 = V_0;
				float L_65;
				L_65 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_62, L_63, L_64, NULL);
				float L_66 = L_65;
				int32_t L_67;
				il2cpp_codegen_box_unbox((&L_66), (&L_67), sizeof(int32_t), il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_67;
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
				intptr_t L_69;
				L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
				intptr_t L_70 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_71 = V_0;
				double L_72;
				L_72 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_69, L_70, L_71, NULL);
				double L_73 = L_72;
				int32_t L_74;
				il2cpp_codegen_box_unbox((&L_73), (&L_74), sizeof(int32_t), il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_74;
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
				intptr_t L_76;
				L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
				intptr_t L_77 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_78 = V_0;
				Il2CppChar L_79;
				L_79 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_76, L_77, L_78, NULL);
				Il2CppChar L_80 = L_79;
				int32_t L_81;
				il2cpp_codegen_box_unbox((&L_80), (&L_81), sizeof(int32_t), il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				V_3 = L_81;
				goto IL_03ea;
			}

IL_0286_1:
			{
				goto IL_02be_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = __this->___m_jclass;
				intptr_t L_83;
				L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
				intptr_t L_84 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_85 = V_0;
				String_t* L_86;
				L_86 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_83, L_84, L_85, NULL);
				V_3 = ((*(int32_t*)UnBox((RuntimeObject*)L_86, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_03ea;
			}

IL_02be_1:
			{
				goto IL_0319_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
				intptr_t L_88;
				L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
				intptr_t L_89 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_90 = V_0;
				intptr_t L_91;
				L_91 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_88, L_89, L_90, NULL);
				V_4 = L_91;
				intptr_t L_92 = V_4;
				bool L_93;
				L_93 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_92, 0, NULL);
				if (L_93)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_94 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_95 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_95, L_94, NULL);
				G_B30_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_96 = V_5;
				G_B30_0 = L_96;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				goto IL_0371_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_97 = __this->___m_jclass;
				intptr_t L_98;
				L_98 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_97, NULL);
				intptr_t L_99 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_100 = V_0;
				intptr_t L_101;
				L_101 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_98, L_99, L_100, NULL);
				V_6 = L_101;
				intptr_t L_102 = V_6;
				bool L_103;
				L_103 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_102, 0, NULL);
				if (L_103)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_104 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_105 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_105, L_104, NULL);
				G_B35_0 = ((*(int32_t*)UnBox((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 1))));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_106 = V_5;
				G_B35_0 = L_106;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_108;
				L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_111;
				L_111 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_108, L_110, NULL);
				if (!L_111)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_112 = __this->___m_jclass;
				intptr_t L_113;
				L_113 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_112, NULL);
				intptr_t L_114 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_115 = V_0;
				intptr_t L_116;
				L_116 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_113, L_114, L_115, NULL);
				int32_t L_117;
				L_117 = AndroidJavaObject_FromJavaArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC1390BDE8BF42FAA78215DFE076A25F7AEA674D7(L_116, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_117;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_119;
				L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
				Type_t* L_120 = L_119;
				if (L_120)
				{
					G_B40_0 = L_120;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_120;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_121;
				L_121 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_121;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_122;
				L_122 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_123 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_123, L_122, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_123, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
				int32_t L_124 = V_5;
				V_3 = L_124;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		int32_t L_125 = V_3;
		return L_125;
	}
}
// Method Definition Index: 120493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEE64E87A5A2BC0F38910643A9B91032AF38D882C_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF87CC238DDBB3C90C35846E626548847CC7E319D(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		int32_t L_7;
		L_7 = AndroidJavaObject__CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4F31B91D2F03C3068A4BE95DB368B6DF715CE316(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppSharedGenericObject* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppSharedGenericObject* G_B30_0 = NULL;
	Il2CppSharedGenericObject* G_B35_0 = NULL;
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				goto IL_0090_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_20 = __this->___m_jclass;
				intptr_t L_21;
				L_21 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_20, NULL);
				intptr_t L_22 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_23 = V_0;
				int32_t L_24;
				L_24 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_21, L_22, L_23, NULL);
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(il2cpp_defaults.int32_class, &L_25);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0090_1:
			{
				goto IL_00cd_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_27 = __this->___m_jclass;
				intptr_t L_28;
				L_28 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_27, NULL);
				intptr_t L_29 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_30 = V_0;
				bool L_31;
				L_31 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_28, L_29, L_30, NULL);
				bool L_32 = L_31;
				RuntimeObject* L_33 = Box(il2cpp_defaults.boolean_class, &L_32);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_00cd_1:
			{
				goto IL_0115_1;
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_34 = __this->___m_jclass;
				intptr_t L_35;
				L_35 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_34, NULL);
				intptr_t L_36 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_37 = V_0;
				int8_t L_38;
				L_38 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_35, L_36, L_37, NULL);
				uint8_t L_39 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_38,NULL));
				uint8_t L_40 = L_39;
				RuntimeObject* L_41 = Box(il2cpp_defaults.byte_class, &L_40);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0115_1:
			{
				goto IL_0152_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_42 = __this->___m_jclass;
				intptr_t L_43;
				L_43 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_42, NULL);
				intptr_t L_44 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_45 = V_0;
				int8_t L_46;
				L_46 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_43, L_44, L_45, NULL);
				int8_t L_47 = L_46;
				RuntimeObject* L_48 = Box(il2cpp_defaults.sbyte_class, &L_47);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0152_1:
			{
				goto IL_018f_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_49 = __this->___m_jclass;
				intptr_t L_50;
				L_50 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_49, NULL);
				intptr_t L_51 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_52 = V_0;
				int16_t L_53;
				L_53 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_50, L_51, L_52, NULL);
				int16_t L_54 = L_53;
				RuntimeObject* L_55 = Box(il2cpp_defaults.int16_class, &L_54);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_55, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_018f_1:
			{
				goto IL_01cc_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_56 = __this->___m_jclass;
				intptr_t L_57;
				L_57 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_56, NULL);
				intptr_t L_58 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_59 = V_0;
				int64_t L_60;
				L_60 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_57, L_58, L_59, NULL);
				int64_t L_61 = L_60;
				RuntimeObject* L_62 = Box(il2cpp_defaults.int64_class, &L_61);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_62, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_01cc_1:
			{
				goto IL_0209_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_63 = __this->___m_jclass;
				intptr_t L_64;
				L_64 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_63, NULL);
				intptr_t L_65 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_66 = V_0;
				float L_67;
				L_67 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_64, L_65, L_66, NULL);
				float L_68 = L_67;
				RuntimeObject* L_69 = Box(il2cpp_defaults.single_class, &L_68);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_69, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0209_1:
			{
				goto IL_0246_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				double L_74;
				L_74 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_71, L_72, L_73, NULL);
				double L_75 = L_74;
				RuntimeObject* L_76 = Box(il2cpp_defaults.double_class, &L_75);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_76, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0246_1:
			{
				goto IL_03d1_1;
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_77 = __this->___m_jclass;
				intptr_t L_78;
				L_78 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_77, NULL);
				intptr_t L_79 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_80 = V_0;
				Il2CppChar L_81;
				L_81 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_78, L_79, L_80, NULL);
				Il2CppChar L_82 = L_81;
				RuntimeObject* L_83 = Box(il2cpp_defaults.char_class, &L_82);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_84 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_84)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_85 = __this->___m_jclass;
				intptr_t L_86;
				L_86 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_85, NULL);
				intptr_t L_87 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_88 = V_0;
				String_t* L_89;
				L_89 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_86, L_87, L_88, NULL);
				V_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_90 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_90)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_91 = __this->___m_jclass;
				intptr_t L_92;
				L_92 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_91, NULL);
				intptr_t L_93 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_94 = V_0;
				intptr_t L_95;
				L_95 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_92, L_93, L_94, NULL);
				V_4 = L_95;
				intptr_t L_96 = V_4;
				bool L_97;
				L_97 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_96, 0, NULL);
				if (L_97)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_98 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_99 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_99, L_98, NULL);
				G_B30_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_100 = V_5;
				G_B30_0 = L_100;
			}

IL_0313_1:
			{
				V_3 = G_B30_0;
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_101 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jclass;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_103, L_104, L_105, NULL);
				V_6 = L_106;
				intptr_t L_107 = V_6;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_109 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_110 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_110, L_109, NULL);
				G_B35_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_111 = V_5;
				G_B35_0 = L_111;
			}

IL_036e_1:
			{
				V_3 = G_B35_0;
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_113;
				L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_115;
				L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_116;
				L_116 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_113, L_115, NULL);
				if (!L_116)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_117 = __this->___m_jclass;
				intptr_t L_118;
				L_118 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_117, NULL);
				intptr_t L_119 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_120 = V_0;
				intptr_t L_121;
				L_121 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_118, L_119, L_120, NULL);
				Il2CppSharedGenericObject* L_122;
				L_122 = AndroidJavaObject_FromJavaArray_TisIl2CppSharedGenericObject_m22D9898503E929D77563392822CD11A056613AFF(L_121, il2cpp_rgctx_method(method->rgctx_data, 2));
				V_3 = L_122;
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_124;
				L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
				Type_t* L_125 = L_124;
				if (L_125)
				{
					G_B40_0 = L_125;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_125;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_126;
				L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_126;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_127;
				L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
				Il2CppSharedGenericObject* L_129 = V_5;
				V_3 = L_129;
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		Il2CppSharedGenericObject* L_130 = V_3;
		return L_130;
	}
}
// Method Definition Index: 120493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_m8E1513A9554AAA1822CA51D0A816DCF16775AA37_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = AndroidJNIHelper_GetMethodID_TisIl2CppSharedGenericObject_m95122CB55DFAF463B14CBBA51C2B0811790DB90B(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		Il2CppSharedGenericObject* L_7;
		L_7 = AndroidJavaObject__CallStatic_TisIl2CppSharedGenericObject_mF9D318147E29742DAA4B5C033BFC68D29CC1123B(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
// Method Definition Index: 120494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_m8D1EB1F6B7C8D0B7D54EF55F42BCE6B7576E0953_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_methodID, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	const Il2CppFullySharedGenericAny L_35 = L_27;
	const Il2CppFullySharedGenericAny L_44 = L_27;
	const Il2CppFullySharedGenericAny L_52 = L_27;
	const Il2CppFullySharedGenericAny L_60 = L_27;
	const Il2CppFullySharedGenericAny L_68 = L_27;
	const Il2CppFullySharedGenericAny L_76 = L_27;
	const Il2CppFullySharedGenericAny L_84 = L_27;
	const Il2CppFullySharedGenericAny L_92 = L_27;
	const Il2CppFullySharedGenericAny L_99 = L_27;
	const Il2CppFullySharedGenericAny L_111 = L_27;
	const Il2CppFullySharedGenericAny L_113 = L_27;
	const Il2CppFullySharedGenericAny L_124 = L_27;
	const Il2CppFullySharedGenericAny L_126 = L_27;
	const Il2CppFullySharedGenericAny L_137 = L_27;
	const Il2CppFullySharedGenericAny L_144 = L_27;
	const Il2CppFullySharedGenericAny L_145 = L_27;
	//<source_info:<no-source>:1>
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_3, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(V_5, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	Il2CppFullySharedGenericAny G_B30_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B30_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Il2CppFullySharedGenericAny G_B35_0 = alloca(SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	memset(G_B35_0, 0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7));
		goto IL_0027;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_2 = L_3;
		int32_t L_4 = V_2;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = sizeof(jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225);
		if ((uintptr_t)L_5 * (uintptr_t)L_6 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_7 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)L_5, (int32_t)L_6));
		int8_t* L_8;
		if (L_7 == 0)
		{
			L_8 = NULL;
		}
		else
		{
			L_8 = (int8_t*)alloca(L_7);
			memset(L_8, 0, L_7);
		}
		int32_t L_9 = V_2;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_inline((&L_10), (void*)L_8, L_9, Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_RuntimeMethod_var);
		V_1 = L_10;
	}

IL_0027:
	{
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_11 = V_1;
		V_0 = L_11;
		int32_t L_12;
		L_12 = Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_inline((&V_0), Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_RuntimeMethod_var);
		int32_t L_13;
		L_13 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_15 = V_0;
		AndroidJNIHelper_CreateJNIArgArray_mD8E0CA2404E31F155EDE1A028EC686C17B17730F(L_14, L_15, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03de:
			{
				intptr_t L_16;
				L_16 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(0, NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_18, NULL);
				if (!L_19)
				{
					goto IL_0286_1;
				}
			}
			{
				bool L_20 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_20)
				{
					goto IL_0090_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_21 = __this->___m_jclass;
				intptr_t L_22;
				L_22 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_21, NULL);
				intptr_t L_23 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_24 = V_0;
				int32_t L_25;
				L_25 = AndroidJNISafe_CallStaticIntMethod_m915549FA8FD7FB93B57A9708AD759488EA64418C(L_22, L_23, L_24, NULL);
				int32_t L_26 = L_25;
				il2cpp_codegen_box_unbox((&L_26), L_27, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_27, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0090_1:
			{
				bool L_28 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_28)
				{
					goto IL_00cd_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jclass;
				intptr_t L_30;
				L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
				intptr_t L_31 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_32 = V_0;
				bool L_33;
				L_33 = AndroidJNISafe_CallStaticBooleanMethod_m652685AC18F590965249C0F9B107C00C142595BB(L_30, L_31, L_32, NULL);
				bool L_34 = L_33;
				il2cpp_codegen_box_unbox((&L_34), L_35, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_35, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_00cd_1:
			{
				bool L_36 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_36)
				{
					goto IL_0115_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteralBBA88D18E0EF50828EC393CF2F0ADD9E557A1A9E, NULL);
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_37 = __this->___m_jclass;
				intptr_t L_38;
				L_38 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_37, NULL);
				intptr_t L_39 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_40 = V_0;
				int8_t L_41;
				L_41 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_38, L_39, L_40, NULL);
				uint8_t L_42 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_41,NULL));
				uint8_t L_43 = L_42;
				il2cpp_codegen_box_unbox((&L_43), L_44, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_44, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0115_1:
			{
				bool L_45 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_45)
				{
					goto IL_0152_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_46 = __this->___m_jclass;
				intptr_t L_47;
				L_47 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_46, NULL);
				intptr_t L_48 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_49 = V_0;
				int8_t L_50;
				L_50 = AndroidJNISafe_CallStaticSByteMethod_m3E1F75978A2D686BC32DBF5A2F1F70F0D746C2B7(L_47, L_48, L_49, NULL);
				int8_t L_51 = L_50;
				il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_52, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0152_1:
			{
				bool L_53 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_53)
				{
					goto IL_018f_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
				intptr_t L_55;
				L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
				intptr_t L_56 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_57 = V_0;
				int16_t L_58;
				L_58 = AndroidJNISafe_CallStaticShortMethod_m8330383670ECCD7E24CDD68C419745E486FA6426(L_55, L_56, L_57, NULL);
				int16_t L_59 = L_58;
				il2cpp_codegen_box_unbox((&L_59), L_60, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_60, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_018f_1:
			{
				bool L_61 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_61)
				{
					goto IL_01cc_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_62 = __this->___m_jclass;
				intptr_t L_63;
				L_63 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_62, NULL);
				intptr_t L_64 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_65 = V_0;
				int64_t L_66;
				L_66 = AndroidJNISafe_CallStaticLongMethod_mDDE01239BEFCF007ECE05E51A249B3EB5BB61234(L_63, L_64, L_65, NULL);
				int64_t L_67 = L_66;
				il2cpp_codegen_box_unbox((&L_67), L_68, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_68, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_01cc_1:
			{
				bool L_69 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_69)
				{
					goto IL_0209_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_70 = __this->___m_jclass;
				intptr_t L_71;
				L_71 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_70, NULL);
				intptr_t L_72 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_73 = V_0;
				float L_74;
				L_74 = AndroidJNISafe_CallStaticFloatMethod_m3F5419A10B9DF599352938B2BAD8866F8F112364(L_71, L_72, L_73, NULL);
				float L_75 = L_74;
				il2cpp_codegen_box_unbox((&L_75), L_76, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_76, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0209_1:
			{
				bool L_77 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_77)
				{
					goto IL_0246_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_78 = __this->___m_jclass;
				intptr_t L_79;
				L_79 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_78, NULL);
				intptr_t L_80 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_81 = V_0;
				double L_82;
				L_82 = AndroidJNISafe_CallStaticDoubleMethod_m73F1D51601D6849EE480389B4E43AED68C42B2B5(L_79, L_80, L_81, NULL);
				double L_83 = L_82;
				il2cpp_codegen_box_unbox((&L_83), L_84, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_84, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0246_1:
			{
				bool L_85 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_85)
				{
					goto IL_03d1_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_86 = __this->___m_jclass;
				intptr_t L_87;
				L_87 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_86, NULL);
				intptr_t L_88 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_89 = V_0;
				Il2CppChar L_90;
				L_90 = AndroidJNISafe_CallStaticCharMethod_mC4B40190CE095728E823AB8B724ECDC8F4B36155(L_87, L_88, L_89, NULL);
				Il2CppChar L_91 = L_90;
				il2cpp_codegen_box_unbox((&L_91), L_92, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
				il2cpp_codegen_memcpy(V_3, L_92, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0286_1:
			{
				bool L_93 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_93)
				{
					goto IL_02be_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_94 = __this->___m_jclass;
				intptr_t L_95;
				L_95 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_94, NULL);
				intptr_t L_96 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_97 = V_0;
				String_t* L_98;
				L_98 = AndroidJNISafe_CallStaticStringMethod_m4E150E34CC6DBF27A955F8DAEE5941D6E10879C0(L_95, L_96, L_97, NULL);
				void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
				il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_100)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_02be_1:
			{
				bool L_101 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_101)
				{
					goto IL_0319_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_102 = __this->___m_jclass;
				intptr_t L_103;
				L_103 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_102, NULL);
				intptr_t L_104 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_105 = V_0;
				intptr_t L_106;
				L_106 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_103, L_104, L_105, NULL);
				V_4 = L_106;
				intptr_t L_107 = V_4;
				bool L_108;
				L_108 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_107, 0, NULL);
				if (L_108)
				{
					goto IL_0309_1;
				}
			}
			{
				intptr_t L_109 = V_4;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_110 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
				AndroidJavaClass__ctor_mB206D3CB990755BD56E308F61CD43BB9EA4421D0(L_110, L_109, NULL);
				void* L_112 = UnBox_Any((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 1), L_111);
				il2cpp_codegen_memcpy(G_B30_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_112)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_0313_1;
			}

IL_0309_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_113, V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B30_0, L_113, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_0313_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B30_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0319_1:
			{
				bool L_114 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
				if (!L_114)
				{
					goto IL_0371_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_115 = __this->___m_jclass;
				intptr_t L_116;
				L_116 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_115, NULL);
				intptr_t L_117 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_118 = V_0;
				intptr_t L_119;
				L_119 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_116, L_117, L_118, NULL);
				V_6 = L_119;
				intptr_t L_120 = V_6;
				bool L_121;
				L_121 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_120, 0, NULL);
				if (L_121)
				{
					goto IL_0364_1;
				}
			}
			{
				intptr_t L_122 = V_6;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_123 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
				AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_123, L_122, NULL);
				void* L_125 = UnBox_Any((RuntimeObject*)L_123, il2cpp_rgctx_data(method->rgctx_data, 1), L_124);
				il2cpp_codegen_memcpy(G_B35_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_125)), SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_036e_1;
			}

IL_0364_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_126, V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(G_B35_0, L_126, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
			}

IL_036e_1:
			{
				il2cpp_codegen_memcpy(V_3, G_B35_0, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_0371_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_128;
				L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				Type_t* L_130;
				L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
				il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
				bool L_131;
				L_131 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_128, L_130, NULL);
				if (!L_131)
				{
					goto IL_03a6_1;
				}
			}
			{
				GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_132 = __this->___m_jclass;
				intptr_t L_133;
				L_133 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_132, NULL);
				intptr_t L_134 = ___0_methodID;
				Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7 L_135 = V_0;
				intptr_t L_136;
				L_136 = AndroidJNISafe_CallStaticObjectMethod_m3171BFAEF780EEF400AD592B6F040E7BE87C2387(L_133, L_134, L_135, NULL);
				InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_136, (Il2CppFullySharedGenericAny*)L_137);
				il2cpp_codegen_memcpy(V_3, L_137, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}

IL_03a6_1:
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				Type_t* L_140 = L_139;
				if (L_140)
				{
					G_B40_0 = L_140;
					G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
					goto IL_03bc_1;
				}
				G_B39_0 = L_140;
				G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89F6478390C0E72E54E8EB2729A4BBC7009F43D));
			}
			{
				G_B41_0 = ((String_t*)(NULL));
				G_B41_1 = G_B39_1;
				goto IL_03c1_1;
			}

IL_03bc_1:
			{
				NullCheck((RuntimeObject*)G_B40_0);
				String_t* L_141;
				L_141 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
				G_B41_0 = L_141;
				G_B41_1 = G_B40_1;
			}

IL_03c1_1:
			{
				String_t* L_142;
				L_142 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
				Exception_t* L_143 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_143, L_142, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
			}

IL_03d1_1:
			{
				il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(L_144, V_5, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				il2cpp_codegen_memcpy(V_3, L_144, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
				goto IL_03ea;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03ea:
	{
		il2cpp_codegen_memcpy(L_145, V_3, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_145, SizeOf_ReturnType_tB840B385B71FF8E350FF799B5A7DF58E03C1A69B);
		return;
	}
}
// Method Definition Index: 120493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__CallStatic_TisIl2CppFullySharedGenericAny_mA069934E49E8EFEB980CA5EED2B1DE810C150A68_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		intptr_t L_4;
		L_4 = ((  intptr_t (*) (intptr_t, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		intptr_t L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___1_args;
		InvokerActionInvoker3< intptr_t, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_ReturnType_t2DAB0875DF34A21B532F695F9B7329A0B5BBCB27);
		return;
	}
}
// Method Definition Index: 120488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = __this->___m_jobject;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_3, NULL);
		intptr_t L_5 = ___0_fieldID;
		int32_t L_6;
		L_6 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_4, L_5, NULL);
		return L_6;
	}

IL_0211:
	{
		goto IL_0243;
	}

IL_0243:
	{
		goto IL_0293;
	}

IL_0293:
	{
		goto IL_02e3;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_12 = __this->___m_jobject;
		intptr_t L_13;
		L_13 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_12, NULL);
		intptr_t L_14 = ___0_fieldID;
		intptr_t L_15;
		L_15 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_13, L_14, NULL);
		int32_t L_16;
		L_16 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m61DD76EF7E812BC3ED41BBA0D0DA1B430EC61256(L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		Type_t* L_19 = L_18;
		if (L_19)
		{
			G_B33_0 = L_19;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_19;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_20;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
	IL2CPP_UNREACHABLE;
	int32_t ret = 0;
	return ret;
}
// Method Definition Index: 120487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDED207A2CABEE9D78BEC022F1D4338A5091DCC50_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1B394DCE5ED40DFA09EB18874BA2FFC3B5E50B2E(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		int32_t L_5;
		L_5 = AndroidJavaObject__Get_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB506BB319D4A193AE597F3C3166DDB165593D4D6(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
// Method Definition Index: 120488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		goto IL_0082;
	}

IL_0082:
	{
		goto IL_00c4;
	}

IL_00c4:
	{
		goto IL_00fb;
	}

IL_00fb:
	{
		goto IL_0132;
	}

IL_0132:
	{
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_3 = __this->___m_jobject;
		intptr_t L_4;
		L_4 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_3, NULL);
		intptr_t L_5 = ___0_fieldID;
		int64_t L_6;
		L_6 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_4, L_5, NULL);
		return L_6;
	}

IL_0211:
	{
		goto IL_0243;
	}

IL_0243:
	{
		goto IL_0293;
	}

IL_0293:
	{
		goto IL_02e3;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_12 = __this->___m_jobject;
		intptr_t L_13;
		L_13 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_12, NULL);
		intptr_t L_14 = ___0_fieldID;
		intptr_t L_15;
		L_15 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_13, L_14, NULL);
		int64_t L_16;
		L_16 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m4B845873BD6FD656DD1436DAA38DA58638EBA1C9(L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		Type_t* L_19 = L_18;
		if (L_19)
		{
			G_B33_0 = L_19;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_19;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_20;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
	IL2CPP_UNREACHABLE;
	int64_t ret = 0;
	return ret;
}
// Method Definition Index: 120487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC0E521D3EDABAB41239FC893CB531240374C662A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m88491724077754D1F68A138997C5FAAE91935663(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		int64_t L_5;
		L_5 = AndroidJavaObject__Get_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m147B52D1C45E325818122755D2CCB85A738F9E1F(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
// Method Definition Index: 120488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Get_TisIl2CppSharedGenericObject_mD7317316E4D5BBE57FE9495B6E117EEFFA6F149E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		goto IL_0082;
	}

IL_0082:
	{
		goto IL_00c4;
	}

IL_00c4:
	{
		goto IL_00fb;
	}

IL_00fb:
	{
		goto IL_0132;
	}

IL_0132:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_01d7;
	}

IL_01d7:
	{
		goto IL_0340;
	}

IL_0211:
	{
		bool L_3 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jobject;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		String_t* L_7;
		L_7 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_5, L_6, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0243:
	{
		bool L_8 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_8)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = __this->___m_jobject;
		intptr_t L_10;
		L_10 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_9, NULL);
		intptr_t L_11 = ___0_fieldID;
		intptr_t L_12;
		L_12 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_10, L_11, NULL);
		V_0 = L_12;
		intptr_t L_13 = V_0;
		bool L_14;
		L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_13, 0, NULL);
		if (L_14)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_15 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16;
		L_16 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_15, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0289:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_17 = V_1;
		return L_17;
	}

IL_0293:
	{
		bool L_18 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_18)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_19 = __this->___m_jobject;
		intptr_t L_20;
		L_20 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_19, NULL);
		intptr_t L_21 = ___0_fieldID;
		intptr_t L_22;
		L_22 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_20, L_21, NULL);
		V_2 = L_22;
		intptr_t L_23 = V_2;
		bool L_24;
		L_24 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_23, 0, NULL);
		if (L_24)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_25 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26;
		L_26 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_25, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_27 = V_1;
		return L_27;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jobject;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		intptr_t L_36;
		L_36 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_34, L_35, NULL);
		Il2CppSharedGenericObject* L_37;
		L_37 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284(L_36, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_37;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40 = L_39;
		if (L_40)
		{
			G_B33_0 = L_40;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_40;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_41;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_42;
		L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_43 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_43, L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_44 = V_1;
		return L_44;
	}
}
// Method Definition Index: 120487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__Get_TisIl2CppSharedGenericObject_m3FBD43AC7986C7B2DAE4F575360C5B6A7DBDE4AB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5;
		L_5 = AndroidJavaObject__Get_TisIl2CppSharedGenericObject_mD7317316E4D5BBE57FE9495B6E117EEFFA6F149E(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
// Method Definition Index: 120488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m16AE597DA478C33ABF978BB8131126B5C7360D09_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	const Il2CppFullySharedGenericAny L_16 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_31 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_45 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_72 = L_9;
	const Il2CppFullySharedGenericAny L_83 = L_9;
	const Il2CppFullySharedGenericAny L_85 = L_9;
	const Il2CppFullySharedGenericAny L_95 = L_9;
	const Il2CppFullySharedGenericAny L_97 = L_9;
	const Il2CppFullySharedGenericAny L_107 = L_9;
	const Il2CppFullySharedGenericAny L_114 = L_9;
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	memset(V_1, 0, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jobject;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		int32_t L_7;
		L_7 = AndroidJNISafe_GetIntField_mBD983688B73063DE5C55D320F60F266443FAC97C(L_5, L_6, NULL);
		int32_t L_8 = L_7;
		il2cpp_codegen_box_unbox((&L_8), L_9, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_004b:
	{
		bool L_10 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_11 = __this->___m_jobject;
		intptr_t L_12;
		L_12 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_11, NULL);
		intptr_t L_13 = ___0_fieldID;
		bool L_14;
		L_14 = AndroidJNISafe_GetBooleanField_m34F37B560A6AEC81B9061FB3B72698C84720435D(L_12, L_13, NULL);
		bool L_15 = L_14;
		il2cpp_codegen_box_unbox((&L_15), L_16, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0082:
	{
		bool L_17 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_18 = __this->___m_jobject;
		intptr_t L_19;
		L_19 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_18, NULL);
		intptr_t L_20 = ___0_fieldID;
		int8_t L_21;
		L_21 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_19, L_20, NULL);
		uint8_t L_22 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_21,NULL));
		uint8_t L_23 = L_22;
		il2cpp_codegen_box_unbox((&L_23), L_24, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_24, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_00c4:
	{
		bool L_25 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_25)
		{
			goto IL_00fb;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jobject;
		intptr_t L_27;
		L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_26, NULL);
		intptr_t L_28 = ___0_fieldID;
		int8_t L_29;
		L_29 = AndroidJNISafe_GetSByteField_mAD3B08AA8A97F77CAE17DD25B0F389AFAC2023B1(L_27, L_28, NULL);
		int8_t L_30 = L_29;
		il2cpp_codegen_box_unbox((&L_30), L_31, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_31, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_00fb:
	{
		bool L_32 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jobject;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		int16_t L_36;
		L_36 = AndroidJNISafe_GetShortField_m5D21E87061C1DAC89DF58671C53432D0361F0C6E(L_34, L_35, NULL);
		int16_t L_37 = L_36;
		il2cpp_codegen_box_unbox((&L_37), L_38, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0132:
	{
		bool L_39 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_39)
		{
			goto IL_0169;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jobject;
		intptr_t L_41;
		L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
		intptr_t L_42 = ___0_fieldID;
		int64_t L_43;
		L_43 = AndroidJNISafe_GetLongField_m7DD751358D10BB276D8A95D413B9DFB1E8EE81D8(L_41, L_42, NULL);
		int64_t L_44 = L_43;
		il2cpp_codegen_box_unbox((&L_44), L_45, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_45, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0169:
	{
		bool L_46 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01a0;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		float L_50;
		L_50 = AndroidJNISafe_GetFloatField_m1EAA1ED33002BBA28CA2B630521D6BF1B7D3A2E7(L_48, L_49, NULL);
		float L_51 = L_50;
		il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_52, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_01a0:
	{
		bool L_53 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_53)
		{
			goto IL_01d7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jobject;
		intptr_t L_55;
		L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
		intptr_t L_56 = ___0_fieldID;
		double L_57;
		L_57 = AndroidJNISafe_GetDoubleField_mBCBD5E80223EDECC06FA783F34149E3625219074(L_55, L_56, NULL);
		double L_58 = L_57;
		il2cpp_codegen_box_unbox((&L_58), L_59, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_59, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_01d7:
	{
		bool L_60 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_60)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jobject;
		intptr_t L_62;
		L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
		intptr_t L_63 = ___0_fieldID;
		Il2CppChar L_64;
		L_64 = AndroidJNISafe_GetCharField_m8301FA96B40E27C032590FE3F8E84A777A4739C3(L_62, L_63, NULL);
		Il2CppChar L_65 = L_64;
		il2cpp_codegen_box_unbox((&L_65), L_66, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_66, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0211:
	{
		bool L_67 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_67)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jobject;
		intptr_t L_69;
		L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
		intptr_t L_70 = ___0_fieldID;
		String_t* L_71;
		L_71 = AndroidJNISafe_GetStringField_mADFCA05D6DE790600B57E90B20F2E75AFC036B0F(L_69, L_70, NULL);
		void* L_73 = UnBox_Any((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0243:
	{
		bool L_74 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		intptr_t L_78;
		L_78 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_76, L_77, NULL);
		V_0 = L_78;
		intptr_t L_79 = V_0;
		bool L_80;
		L_80 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_79, 0, NULL);
		if (L_80)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_81 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_82;
		L_82 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_81, NULL);
		void* L_84 = UnBox_Any((RuntimeObject*)L_82, il2cpp_rgctx_data(method->rgctx_data, 1), L_83);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_84)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0289:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_85, V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_85, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0293:
	{
		bool L_86 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_86)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jobject;
		intptr_t L_88;
		L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
		intptr_t L_89 = ___0_fieldID;
		intptr_t L_90;
		L_90 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_88, L_89, NULL);
		V_2 = L_90;
		intptr_t L_91 = V_2;
		bool L_92;
		L_92 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_91, 0, NULL);
		if (L_92)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_93 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94;
		L_94 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_93, NULL);
		void* L_96 = UnBox_Any((RuntimeObject*)L_94, il2cpp_rgctx_data(method->rgctx_data, 1), L_95);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_96)), SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_97, V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_97, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_99, L_101, NULL);
		if (!L_102)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jobject;
		intptr_t L_104;
		L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_103, NULL);
		intptr_t L_105 = ___0_fieldID;
		intptr_t L_106;
		L_106 = AndroidJNISafe_GetObjectField_mCF3BB1C38718D6F55081126BC7F6C286B382B275(L_104, L_105, NULL);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_106, (Il2CppFullySharedGenericAny*)L_107);
		il2cpp_codegen_memcpy(il2cppRetVal, L_107, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		Type_t* L_110 = L_109;
		if (L_110)
		{
			G_B33_0 = L_110;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_110;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_111;
		L_111 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_111;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_112;
		L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_113 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_113, L_112, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(L_114, V_1, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		il2cpp_codegen_memcpy(il2cppRetVal, L_114, SizeOf_FieldType_t1266B1AF802837275B234C725395054CAC857D29);
		return;
	}
}
// Method Definition Index: 120487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Get_TisIl2CppFullySharedGenericAny_m6AA7C8A5BE069836640026CB6EDA5D93B3246683_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_FieldType_tBD81DD51AB3076BC0134BD255EBBAC34E341C535);
		return;
	}
}
// Method Definition Index: 120496
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		goto IL_0082;
	}

IL_0082:
	{
		goto IL_00c4;
	}

IL_00c4:
	{
		goto IL_00fb;
	}

IL_00fb:
	{
		goto IL_0132;
	}

IL_0132:
	{
		goto IL_0169;
	}

IL_0169:
	{
		goto IL_01a0;
	}

IL_01a0:
	{
		goto IL_01d7;
	}

IL_01d7:
	{
		goto IL_0340;
	}

IL_0211:
	{
		bool L_3 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jclass;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		String_t* L_7;
		L_7 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_5, L_6, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0243:
	{
		bool L_8 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_8)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_9 = __this->___m_jclass;
		intptr_t L_10;
		L_10 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_9, NULL);
		intptr_t L_11 = ___0_fieldID;
		intptr_t L_12;
		L_12 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_10, L_11, NULL);
		V_0 = L_12;
		intptr_t L_13 = V_0;
		bool L_14;
		L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_13, 0, NULL);
		if (L_14)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_15 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16;
		L_16 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_15, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_16, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0289:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_17 = V_1;
		return L_17;
	}

IL_0293:
	{
		bool L_18 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_18)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_19 = __this->___m_jclass;
		intptr_t L_20;
		L_20 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_19, NULL);
		intptr_t L_21 = ___0_fieldID;
		intptr_t L_22;
		L_22 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_20, L_21, NULL);
		V_2 = L_22;
		intptr_t L_23 = V_2;
		bool L_24;
		L_24 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_23, 0, NULL);
		if (L_24)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_25 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26;
		L_26 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_25, NULL);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_27 = V_1;
		return L_27;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jclass;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		intptr_t L_36;
		L_36 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_34, L_35, NULL);
		Il2CppSharedGenericObject* L_37;
		L_37 = AndroidJavaObject_FromJavaArrayDeleteLocalRef_TisIl2CppSharedGenericObject_mB1CEFE624E92B82D234C1982AA2A7DF6AC5FD284(L_36, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_37;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		Type_t* L_40 = L_39;
		if (L_40)
		{
			G_B33_0 = L_40;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_40;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_41;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_42;
		L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_43 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_43, L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_44 = V_1;
		return L_44;
	}
}
// Method Definition Index: 120495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_m177F1A057E8F5EF05D9158BA272E890C6210044B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = AndroidJNIHelper_GetFieldID_TisIl2CppSharedGenericObject_mDFF491584A820BE0629A47ED3B790A199050D589(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		Il2CppSharedGenericObject* L_5;
		L_5 = AndroidJavaObject__GetStatic_TisIl2CppSharedGenericObject_mF12B3A136CBDB98DF0876DF1FC47EA4A14D98A17(__this, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
// Method Definition Index: 120496
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m265EB43F18C8FB22DCD571C5E50A76642369551D_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	const Il2CppFullySharedGenericAny L_16 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_31 = L_9;
	const Il2CppFullySharedGenericAny L_38 = L_9;
	const Il2CppFullySharedGenericAny L_45 = L_9;
	const Il2CppFullySharedGenericAny L_52 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_66 = L_9;
	const Il2CppFullySharedGenericAny L_72 = L_9;
	const Il2CppFullySharedGenericAny L_83 = L_9;
	const Il2CppFullySharedGenericAny L_85 = L_9;
	const Il2CppFullySharedGenericAny L_95 = L_9;
	const Il2CppFullySharedGenericAny L_97 = L_9;
	const Il2CppFullySharedGenericAny L_107 = L_9;
	const Il2CppFullySharedGenericAny L_114 = L_9;
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	memset(V_1, 0, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	String_t* G_B34_0 = NULL;
	String_t* G_B34_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_0211;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jclass;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		int32_t L_7;
		L_7 = AndroidJNISafe_GetStaticIntField_m0698D50C44E490A009E8388C7321630DED5973BD(L_5, L_6, NULL);
		int32_t L_8 = L_7;
		il2cpp_codegen_box_unbox((&L_8), L_9, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.int32_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_004b:
	{
		bool L_10 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_11 = __this->___m_jclass;
		intptr_t L_12;
		L_12 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_11, NULL);
		intptr_t L_13 = ___0_fieldID;
		bool L_14;
		L_14 = AndroidJNISafe_GetStaticBooleanField_m172BEAA3F0AB6754EA5F1AD30C36DAA0D3D7C666(L_12, L_13, NULL);
		bool L_15 = L_14;
		il2cpp_codegen_box_unbox((&L_15), L_16, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.boolean_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0082:
	{
		bool L_17 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral50E02893F5B6939534A49C535241D6B7BAFCF599, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_18 = __this->___m_jclass;
		intptr_t L_19;
		L_19 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_18, NULL);
		intptr_t L_20 = ___0_fieldID;
		int8_t L_21;
		L_21 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_19, L_20, NULL);
		uint8_t L_22 = (il2cpp_codegen_conv<uint8_t,int8_t,int32_t,false,false>(L_21,NULL));
		uint8_t L_23 = L_22;
		il2cpp_codegen_box_unbox((&L_23), L_24, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.byte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_24, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_00c4:
	{
		bool L_25 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_25)
		{
			goto IL_00fb;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_26 = __this->___m_jclass;
		intptr_t L_27;
		L_27 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_26, NULL);
		intptr_t L_28 = ___0_fieldID;
		int8_t L_29;
		L_29 = AndroidJNISafe_GetStaticSByteField_m77596E5B1AE58DAFF39268AC954CAD53974A688D(L_27, L_28, NULL);
		int8_t L_30 = L_29;
		il2cpp_codegen_box_unbox((&L_30), L_31, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.sbyte_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_31, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_00fb:
	{
		bool L_32 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_33 = __this->___m_jclass;
		intptr_t L_34;
		L_34 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_33, NULL);
		intptr_t L_35 = ___0_fieldID;
		int16_t L_36;
		L_36 = AndroidJNISafe_GetStaticShortField_m83716D4D85B30F26803F866AC47D5C04AAB5D320(L_34, L_35, NULL);
		int16_t L_37 = L_36;
		il2cpp_codegen_box_unbox((&L_37), L_38, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.int16_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_38, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0132:
	{
		bool L_39 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_39)
		{
			goto IL_0169;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_40 = __this->___m_jclass;
		intptr_t L_41;
		L_41 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_40, NULL);
		intptr_t L_42 = ___0_fieldID;
		int64_t L_43;
		L_43 = AndroidJNISafe_GetStaticLongField_mABC2B933CEB757E3FAF1FD6C60AA0C4D38E9C49D(L_41, L_42, NULL);
		int64_t L_44 = L_43;
		il2cpp_codegen_box_unbox((&L_44), L_45, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.int64_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_45, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0169:
	{
		bool L_46 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01a0;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		float L_50;
		L_50 = AndroidJNISafe_GetStaticFloatField_mD1456B729026959309A839C2647279C0B6541356(L_48, L_49, NULL);
		float L_51 = L_50;
		il2cpp_codegen_box_unbox((&L_51), L_52, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.single_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_52, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_01a0:
	{
		bool L_53 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_53)
		{
			goto IL_01d7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_54 = __this->___m_jclass;
		intptr_t L_55;
		L_55 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_54, NULL);
		intptr_t L_56 = ___0_fieldID;
		double L_57;
		L_57 = AndroidJNISafe_GetStaticDoubleField_mEB86F2CE1F3879AAA9DEDA4B496F882C0E1DCBC2(L_55, L_56, NULL);
		double L_58 = L_57;
		il2cpp_codegen_box_unbox((&L_58), L_59, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.double_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_59, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_01d7:
	{
		bool L_60 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_60)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_61 = __this->___m_jclass;
		intptr_t L_62;
		L_62 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_61, NULL);
		intptr_t L_63 = ___0_fieldID;
		Il2CppChar L_64;
		L_64 = AndroidJNISafe_GetStaticCharField_mF70F6D197261364AF2A9E875D84DDDA35BD0ED96(L_62, L_63, NULL);
		Il2CppChar L_65 = L_64;
		il2cpp_codegen_box_unbox((&L_65), L_66, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3, il2cpp_defaults.char_class, il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_66, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0211:
	{
		bool L_67 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_67)
		{
			goto IL_0243;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_68 = __this->___m_jclass;
		intptr_t L_69;
		L_69 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_68, NULL);
		intptr_t L_70 = ___0_fieldID;
		String_t* L_71;
		L_71 = AndroidJNISafe_GetStaticStringField_mB3D1325B08A38C7DAF1FA3E6CB52F6D8E0A2CB47(L_69, L_70, NULL);
		void* L_73 = UnBox_Any((RuntimeObject*)L_71, il2cpp_rgctx_data(method->rgctx_data, 1), L_72);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_73)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0243:
	{
		bool L_74 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_0293;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		intptr_t L_78;
		L_78 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_76, L_77, NULL);
		V_0 = L_78;
		intptr_t L_79 = V_0;
		bool L_80;
		L_80 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_79, 0, NULL);
		if (L_80)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_81 = V_0;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_82;
		L_82 = AndroidJavaObject_AndroidJavaClassDeleteLocalRef_m56C84D7516BCB51A84E8AFDB3FCA46BAF494548F(L_81, NULL);
		void* L_84 = UnBox_Any((RuntimeObject*)L_82, il2cpp_rgctx_data(method->rgctx_data, 1), L_83);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_84)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0289:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_85, V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_85, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0293:
	{
		bool L_86 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_86)
		{
			goto IL_02e3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_87 = __this->___m_jclass;
		intptr_t L_88;
		L_88 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_87, NULL);
		intptr_t L_89 = ___0_fieldID;
		intptr_t L_90;
		L_90 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_88, L_89, NULL);
		V_2 = L_90;
		intptr_t L_91 = V_2;
		bool L_92;
		L_92 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_91, 0, NULL);
		if (L_92)
		{
			goto IL_02d9;
		}
	}
	{
		intptr_t L_93 = V_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_94;
		L_94 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m2ECEEAF6389ABB9D6B963B8A98568ECD9413DF3C(L_93, NULL);
		void* L_96 = UnBox_Any((RuntimeObject*)L_94, il2cpp_rgctx_data(method->rgctx_data, 1), L_95);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_96)), SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_02d9:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_97, V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_97, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_02e3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_99, L_101, NULL);
		if (!L_102)
		{
			goto IL_0315;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_103 = __this->___m_jclass;
		intptr_t L_104;
		L_104 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_103, NULL);
		intptr_t L_105 = ___0_fieldID;
		intptr_t L_106;
		L_106 = AndroidJNISafe_GetStaticObjectField_mB6B9A9EB2619DFDF1DA56300BF9FEC19BF883867(L_104, L_105, NULL);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_106, (Il2CppFullySharedGenericAny*)L_107);
		il2cpp_codegen_memcpy(il2cppRetVal, L_107, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}

IL_0315:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		Type_t* L_110 = L_109;
		if (L_110)
		{
			G_B33_0 = L_110;
			G_B33_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_032b;
		}
		G_B32_0 = L_110;
		G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B34_0 = ((String_t*)(NULL));
		G_B34_1 = G_B32_1;
		goto IL_0330;
	}

IL_032b:
	{
		NullCheck((RuntimeObject*)G_B33_0);
		String_t* L_111;
		L_111 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B33_0);
		G_B34_0 = L_111;
		G_B34_1 = G_B33_1;
	}

IL_0330:
	{
		String_t* L_112;
		L_112 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B34_1, G_B34_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_113 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_113, L_112, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, method);
	}

IL_0340:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(L_114, V_1, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_114, SizeOf_FieldType_t4130D50F8DF6CBFB2A17DDF9CA62DF84750A5FF3);
		return;
	}
}
// Method Definition Index: 120495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__GetStatic_TisIl2CppFullySharedGenericAny_m5FA6F86B221B6AD76DDD71818F721187D59BFC38_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_FieldType_t31FF3BC94504224433BABB9DAD6CE4032EA80634);
		return;
	}
}
// Method Definition Index: 120490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m84E47B5A5FF416288BF85C7F79F287D6FD90356F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_26 = L_7;
	const Il2CppFullySharedGenericAny L_32 = L_7;
	const Il2CppFullySharedGenericAny L_38 = L_7;
	const Il2CppFullySharedGenericAny L_44 = L_7;
	const Il2CppFullySharedGenericAny L_50 = L_7;
	const Il2CppFullySharedGenericAny L_56 = L_7;
	const Il2CppFullySharedGenericAny L_62 = L_7;
	const Il2CppFullySharedGenericAny L_68 = L_7;
	const Il2CppFullySharedGenericAny L_70 = L_7;
	const Il2CppFullySharedGenericAny L_78 = L_7;
	const Il2CppFullySharedGenericAny L_80 = L_7;
	const Il2CppFullySharedGenericAny L_92 = L_7;
	const Il2CppFullySharedGenericAny L_94 = L_7;
	const Il2CppFullySharedGenericAny L_102 = L_7;
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	intptr_t G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B25_2;
	memset((&G_B25_2), 0, sizeof(G_B25_2));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	intptr_t G_B28_1;
	memset((&G_B28_1), 0, sizeof(G_B28_1));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B30_2;
	memset((&G_B30_2), 0, sizeof(G_B30_2));
	intptr_t G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	intptr_t G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	intptr_t G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	intptr_t G_B33_1;
	memset((&G_B33_1), 0, sizeof(G_B33_1));
	intptr_t G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	intptr_t G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	intptr_t G_B35_2;
	memset((&G_B35_2), 0, sizeof(G_B35_2));
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_021a;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jobject;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int32_t L_8;
		il2cpp_codegen_box_unbox(L_7, (&L_8), sizeof(int32_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int32_class);
		AndroidJNISafe_SetIntField_mD238DA37BA1B3D7693484237951A6EFEA9C62120(L_5, L_6, L_8, NULL);
		return;
	}

IL_004c:
	{
		bool L_9 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jobject;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_14;
		il2cpp_codegen_box_unbox(L_13, (&L_14), sizeof(bool), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.boolean_class);
		AndroidJNISafe_SetBooleanField_m5279EA41B214699E79733DC6C93259CC9DCA1D9E(L_11, L_12, L_14, NULL);
		return;
	}

IL_0084:
	{
		bool L_15 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_16 = __this->___m_jobject;
		intptr_t L_17;
		L_17 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_16, NULL);
		intptr_t L_18 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		uint8_t L_20;
		il2cpp_codegen_box_unbox(L_19, (&L_20), sizeof(uint8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.byte_class);
		int8_t L_21 = (il2cpp_codegen_conv<int8_t,uint8_t,int32_t,false,false>(L_20,NULL));
		AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33(L_17, L_18, L_21, NULL);
		return;
	}

IL_00c7:
	{
		bool L_22 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_23 = __this->___m_jobject;
		intptr_t L_24;
		L_24 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_23, NULL);
		intptr_t L_25 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int8_t L_27;
		il2cpp_codegen_box_unbox(L_26, (&L_27), sizeof(int8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.sbyte_class);
		AndroidJNISafe_SetSByteField_mB021168746571E7CAA8C0EAD7AA7F02C18B5EE33(L_24, L_25, L_27, NULL);
		return;
	}

IL_00ff:
	{
		bool L_28 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_28)
		{
			goto IL_0137;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jobject;
		intptr_t L_30;
		L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
		intptr_t L_31 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int16_t L_33;
		il2cpp_codegen_box_unbox(L_32, (&L_33), sizeof(int16_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int16_class);
		AndroidJNISafe_SetShortField_mF95E569C142DEDD604CE8BA7617328B3EDDD2F0D(L_30, L_31, L_33, NULL);
		return;
	}

IL_0137:
	{
		bool L_34 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_34)
		{
			goto IL_016f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = __this->___m_jobject;
		intptr_t L_36;
		L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_35, NULL);
		intptr_t L_37 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		int64_t L_39;
		il2cpp_codegen_box_unbox(L_38, (&L_39), sizeof(int64_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int64_class);
		AndroidJNISafe_SetLongField_m13905547F5CDC7E01AB0D8C787BF98DC2870EC35(L_36, L_37, L_39, NULL);
		return;
	}

IL_016f:
	{
		bool L_40 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_40)
		{
			goto IL_01a7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_41 = __this->___m_jobject;
		intptr_t L_42;
		L_42 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_41, NULL);
		intptr_t L_43 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		float L_45;
		il2cpp_codegen_box_unbox(L_44, (&L_45), sizeof(float), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.single_class);
		AndroidJNISafe_SetFloatField_m589CA6B8DD2BFD4515C5AEAE3772782B293F02C3(L_42, L_43, L_45, NULL);
		return;
	}

IL_01a7:
	{
		bool L_46 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01df;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jobject;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		double L_51;
		il2cpp_codegen_box_unbox(L_50, (&L_51), sizeof(double), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.double_class);
		AndroidJNISafe_SetDoubleField_mE93D0C5EC2019A1B657BD32970FE6EFC9B005A58(L_48, L_49, L_51, NULL);
		return;
	}

IL_01df:
	{
		bool L_52 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_52)
		{
			goto IL_03aa;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_53 = __this->___m_jobject;
		intptr_t L_54;
		L_54 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_53, NULL);
		intptr_t L_55 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		Il2CppChar L_57;
		il2cpp_codegen_box_unbox(L_56, (&L_57), sizeof(Il2CppChar), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.char_class);
		AndroidJNISafe_SetCharField_m69D09A6A2CEA55D84B240FE32D90300AAB1334F9(L_54, L_55, L_57, NULL);
		return;
	}

IL_021a:
	{
		bool L_58 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_58)
		{
			goto IL_0252;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_59 = __this->___m_jobject;
		intptr_t L_60;
		L_60 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_59, NULL);
		intptr_t L_61 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_62);
		AndroidJNISafe_SetStringField_m649363D4E87763D6A9760359EAFB29802E90B409(L_60, L_61, ((String_t*)CastclassSealed((RuntimeObject*)L_63, il2cpp_defaults.string_class)), NULL);
		return;
	}

IL_0252:
	{
		bool L_64 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_64)
		{
			goto IL_02a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jobject;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_65, NULL);
		intptr_t L_67 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_69 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_68);
		if (!L_69)
		{
			G_B24_0 = L_67;
			G_B24_1 = L_66;
			goto IL_0298;
		}
		G_B23_0 = L_67;
		G_B23_1 = L_66;
	}
	{
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_70);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_72 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass;
		intptr_t L_73;
		L_73 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_72, NULL);
		G_B25_0 = L_73;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_029d;
	}

IL_0298:
	{
		G_B25_0 = 0;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_029d:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B25_2, G_B25_1, G_B25_0, NULL);
		return;
	}

IL_02a3:
	{
		bool L_74 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_02f4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jobject;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_79 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_78);
		if (!L_79)
		{
			G_B29_0 = L_77;
			G_B29_1 = L_76;
			goto IL_02e9;
		}
		G_B28_0 = L_77;
		G_B28_1 = L_76;
	}
	{
		il2cpp_codegen_memcpy(L_80, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_81 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_80);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
		G_B30_0 = L_83;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_02ee;
	}

IL_02e9:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_02ee:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B30_2, G_B30_1, G_B30_0, NULL);
		return;
	}

IL_02f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_85, L_87, NULL);
		if (!L_88)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_89 = __this->___m_jobject;
		intptr_t L_90;
		L_90 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_89, NULL);
		intptr_t L_91 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		bool L_93 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_92);
		if (!L_93)
		{
			G_B34_0 = L_91;
			G_B34_1 = L_90;
			goto IL_0335;
		}
		G_B33_0 = L_91;
		G_B33_1 = L_90;
	}
	{
		il2cpp_codegen_memcpy(L_94, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_94);
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_96;
		L_96 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		G_B35_0 = L_96;
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		goto IL_033a;
	}

IL_0335:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
	}

IL_033a:
	{
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(G_B35_2, G_B35_1, G_B35_0, NULL);
		return;
	}

IL_0340:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_037f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_102, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tC72607BAF758371FA7A7DDA2D0873E433EE11D19);
		RuntimeObject* L_103 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_102);
		intptr_t L_104;
		L_104 = AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13(((RuntimeArray*)CastclassClass((RuntimeObject*)L_103, il2cpp_defaults.array_class)), NULL);
		V_0 = L_104;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_105 = __this->___m_jobject;
		intptr_t L_106;
		L_106 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_105, NULL);
		intptr_t L_107 = ___0_fieldID;
		intptr_t L_108 = V_0;
		AndroidJNISafe_SetObjectField_mFE500926F9C963FF106E8AA30A16F4C671BAA8CA(L_106, L_107, L_108, NULL);
		return;
	}

IL_037f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		Type_t* L_111 = L_110;
		if (L_111)
		{
			G_B40_0 = L_111;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_0395;
		}
		G_B39_0 = L_111;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_039a;
	}

IL_0395:
	{
		NullCheck((RuntimeObject*)G_B40_0);
		String_t* L_112;
		L_112 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
		G_B41_0 = L_112;
		G_B41_1 = G_B40_1;
	}

IL_039a:
	{
		String_t* L_113;
		L_113 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_114 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_114, L_113, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_114, method);
	}

IL_03aa:
	{
		return;
	}
}
// Method Definition Index: 120489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__Set_TisIl2CppFullySharedGenericAny_m1AF6344C2EF172B8799D007F4BAC3ECDC182BC22_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_t2F905C7C598CE04C35E1297452F5AE8BFD208DAE);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
// Method Definition Index: 120498
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_m07564225CF639F8502927F2D783809867A34367A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_fieldID, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
	const Il2CppFullySharedGenericAny L_13 = L_7;
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_26 = L_7;
	const Il2CppFullySharedGenericAny L_32 = L_7;
	const Il2CppFullySharedGenericAny L_38 = L_7;
	const Il2CppFullySharedGenericAny L_44 = L_7;
	const Il2CppFullySharedGenericAny L_50 = L_7;
	const Il2CppFullySharedGenericAny L_56 = L_7;
	const Il2CppFullySharedGenericAny L_62 = L_7;
	const Il2CppFullySharedGenericAny L_68 = L_7;
	const Il2CppFullySharedGenericAny L_70 = L_7;
	const Il2CppFullySharedGenericAny L_78 = L_7;
	const Il2CppFullySharedGenericAny L_80 = L_7;
	const Il2CppFullySharedGenericAny L_92 = L_7;
	const Il2CppFullySharedGenericAny L_94 = L_7;
	const Il2CppFullySharedGenericAny L_102 = L_7;
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	intptr_t G_B24_1;
	memset((&G_B24_1), 0, sizeof(G_B24_1));
	intptr_t G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	intptr_t G_B23_1;
	memset((&G_B23_1), 0, sizeof(G_B23_1));
	intptr_t G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	intptr_t G_B25_1;
	memset((&G_B25_1), 0, sizeof(G_B25_1));
	intptr_t G_B25_2;
	memset((&G_B25_2), 0, sizeof(G_B25_2));
	intptr_t G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	intptr_t G_B29_1;
	memset((&G_B29_1), 0, sizeof(G_B29_1));
	intptr_t G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	intptr_t G_B28_1;
	memset((&G_B28_1), 0, sizeof(G_B28_1));
	intptr_t G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	intptr_t G_B30_1;
	memset((&G_B30_1), 0, sizeof(G_B30_1));
	intptr_t G_B30_2;
	memset((&G_B30_2), 0, sizeof(G_B30_2));
	intptr_t G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	intptr_t G_B34_1;
	memset((&G_B34_1), 0, sizeof(G_B34_1));
	intptr_t G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	intptr_t G_B33_1;
	memset((&G_B33_1), 0, sizeof(G_B33_1));
	intptr_t G_B35_0;
	memset((&G_B35_0), 0, sizeof(G_B35_0));
	intptr_t G_B35_1;
	memset((&G_B35_1), 0, sizeof(G_B35_1));
	intptr_t G_B35_2;
	memset((&G_B35_2), 0, sizeof(G_B35_2));
	Type_t* G_B40_0 = NULL;
	String_t* G_B40_1 = NULL;
	Type_t* G_B39_0 = NULL;
	String_t* G_B39_1 = NULL;
	String_t* G_B41_0 = NULL;
	String_t* G_B41_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_1, NULL);
		if (!L_2)
		{
			goto IL_021a;
		}
	}
	{
		bool L_3 = (il2cpp_defaults.int32_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_4 = __this->___m_jclass;
		intptr_t L_5;
		L_5 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_4, NULL);
		intptr_t L_6 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int32_t L_8;
		il2cpp_codegen_box_unbox(L_7, (&L_8), sizeof(int32_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int32_class);
		AndroidJNISafe_SetStaticIntField_m1E20F6C72260CAFBF73207DCEC1816B2816EEBE1(L_5, L_6, L_8, NULL);
		return;
	}

IL_004c:
	{
		bool L_9 = (il2cpp_defaults.boolean_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_10 = __this->___m_jclass;
		intptr_t L_11;
		L_11 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_10, NULL);
		intptr_t L_12 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_14;
		il2cpp_codegen_box_unbox(L_13, (&L_14), sizeof(bool), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.boolean_class);
		AndroidJNISafe_SetStaticBooleanField_mBE4E40DA1B07A29D356AEEE6CB9519F2B3621AC9(L_11, L_12, L_14, NULL);
		return;
	}

IL_0084:
	{
		bool L_15 = (il2cpp_defaults.byte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral1D86DE1FC0445C55F712ED0F6D3E32FED0A1E724, NULL);
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_16 = __this->___m_jclass;
		intptr_t L_17;
		L_17 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_16, NULL);
		intptr_t L_18 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		uint8_t L_20;
		il2cpp_codegen_box_unbox(L_19, (&L_20), sizeof(uint8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.byte_class);
		int8_t L_21 = (il2cpp_codegen_conv<int8_t,uint8_t,int32_t,false,false>(L_20,NULL));
		AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9(L_17, L_18, L_21, NULL);
		return;
	}

IL_00c7:
	{
		bool L_22 = (il2cpp_defaults.sbyte_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_22)
		{
			goto IL_00ff;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_23 = __this->___m_jclass;
		intptr_t L_24;
		L_24 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_23, NULL);
		intptr_t L_25 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int8_t L_27;
		il2cpp_codegen_box_unbox(L_26, (&L_27), sizeof(int8_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.sbyte_class);
		AndroidJNISafe_SetStaticSByteField_m242120982A9227E1E8344FFE9F06FD74986D15E9(L_24, L_25, L_27, NULL);
		return;
	}

IL_00ff:
	{
		bool L_28 = (il2cpp_defaults.int16_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_28)
		{
			goto IL_0137;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_29 = __this->___m_jclass;
		intptr_t L_30;
		L_30 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_29, NULL);
		intptr_t L_31 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int16_t L_33;
		il2cpp_codegen_box_unbox(L_32, (&L_33), sizeof(int16_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int16_class);
		AndroidJNISafe_SetStaticShortField_m92534AAA86D7E1055E12936C8A7BD6B865B7DB81(L_30, L_31, L_33, NULL);
		return;
	}

IL_0137:
	{
		bool L_34 = (il2cpp_defaults.int64_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_34)
		{
			goto IL_016f;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_35 = __this->___m_jclass;
		intptr_t L_36;
		L_36 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_35, NULL);
		intptr_t L_37 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		int64_t L_39;
		il2cpp_codegen_box_unbox(L_38, (&L_39), sizeof(int64_t), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.int64_class);
		AndroidJNISafe_SetStaticLongField_m299AAC2DE8B6747B0B5E109BABB2F3A4FC1F486E(L_36, L_37, L_39, NULL);
		return;
	}

IL_016f:
	{
		bool L_40 = (il2cpp_defaults.single_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_40)
		{
			goto IL_01a7;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_41 = __this->___m_jclass;
		intptr_t L_42;
		L_42 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_41, NULL);
		intptr_t L_43 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		float L_45;
		il2cpp_codegen_box_unbox(L_44, (&L_45), sizeof(float), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.single_class);
		AndroidJNISafe_SetStaticFloatField_mB2EDDE632AB2088CD12F1FD12174FB86990BCBEE(L_42, L_43, L_45, NULL);
		return;
	}

IL_01a7:
	{
		bool L_46 = (il2cpp_defaults.double_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_46)
		{
			goto IL_01df;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_47 = __this->___m_jclass;
		intptr_t L_48;
		L_48 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_47, NULL);
		intptr_t L_49 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		double L_51;
		il2cpp_codegen_box_unbox(L_50, (&L_51), sizeof(double), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.double_class);
		AndroidJNISafe_SetStaticDoubleField_mA0253927D476917D2158A9CE29F1BF535485B956(L_48, L_49, L_51, NULL);
		return;
	}

IL_01df:
	{
		bool L_52 = (il2cpp_defaults.char_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_52)
		{
			goto IL_03aa;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_53 = __this->___m_jclass;
		intptr_t L_54;
		L_54 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_53, NULL);
		intptr_t L_55 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		Il2CppChar L_57;
		il2cpp_codegen_box_unbox(L_56, (&L_57), sizeof(Il2CppChar), il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_defaults.char_class);
		AndroidJNISafe_SetStaticCharField_m2B8245275C36525798C869B7B1088B25BA663613(L_54, L_55, L_57, NULL);
		return;
	}

IL_021a:
	{
		bool L_58 = (il2cpp_defaults.string_class) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_58)
		{
			goto IL_0252;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_59 = __this->___m_jclass;
		intptr_t L_60;
		L_60 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_59, NULL);
		intptr_t L_61 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_62);
		AndroidJNISafe_SetStaticStringField_m445D977B2374056C6E4607FAEDB7E99A1353E2EE(L_60, L_61, ((String_t*)CastclassSealed((RuntimeObject*)L_63, il2cpp_defaults.string_class)), NULL);
		return;
	}

IL_0252:
	{
		bool L_64 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_64)
		{
			goto IL_02a3;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_65 = __this->___m_jclass;
		intptr_t L_66;
		L_66 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_65, NULL);
		intptr_t L_67 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_68, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_69 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_68);
		if (!L_69)
		{
			G_B24_0 = L_67;
			G_B24_1 = L_66;
			goto IL_0298;
		}
		G_B23_0 = L_67;
		G_B23_1 = L_66;
	}
	{
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_70);
		NullCheck(((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_72 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)((AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)CastclassClass((RuntimeObject*)L_71, AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var)))->___m_jclass;
		intptr_t L_73;
		L_73 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_72, NULL);
		G_B25_0 = L_73;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_029d;
	}

IL_0298:
	{
		G_B25_0 = 0;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_029d:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B25_2, G_B25_1, G_B25_0, NULL);
		return;
	}

IL_02a3:
	{
		bool L_74 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		if (!L_74)
		{
			goto IL_02f4;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_75 = __this->___m_jclass;
		intptr_t L_76;
		L_76 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_75, NULL);
		intptr_t L_77 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_78, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_79 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_78);
		if (!L_79)
		{
			G_B29_0 = L_77;
			G_B29_1 = L_76;
			goto IL_02e9;
		}
		G_B28_0 = L_77;
		G_B28_1 = L_76;
	}
	{
		il2cpp_codegen_memcpy(L_80, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_81 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_80);
		NullCheck(((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var)));
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_82 = ((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)CastclassClass((RuntimeObject*)L_81, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var))->___m_jobject;
		intptr_t L_83;
		L_83 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_82, NULL);
		G_B30_0 = L_83;
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_02ee;
	}

IL_02e9:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_02ee:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B30_2, G_B30_1, G_B30_0, NULL);
		return;
	}

IL_02f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_85, L_87, NULL);
		if (!L_88)
		{
			goto IL_0340;
		}
	}
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_89 = __this->___m_jclass;
		intptr_t L_90;
		L_90 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_89, NULL);
		intptr_t L_91 = ___0_fieldID;
		il2cpp_codegen_memcpy(L_92, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		bool L_93 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_92);
		if (!L_93)
		{
			G_B34_0 = L_91;
			G_B34_1 = L_90;
			goto IL_0335;
		}
		G_B33_0 = L_91;
		G_B33_1 = L_90;
	}
	{
		il2cpp_codegen_memcpy(L_94, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_94);
		NullCheck(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)));
		intptr_t L_96;
		L_96 = AndroidJavaProxy_GetRawProxy_m685E066A4D378B596CD88385B954AE90CBF328A9(((AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D*)CastclassClass((RuntimeObject*)L_95, AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var)), NULL);
		G_B35_0 = L_96;
		G_B35_1 = G_B33_0;
		G_B35_2 = G_B33_1;
		goto IL_033a;
	}

IL_0335:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
		G_B35_2 = G_B34_1;
	}

IL_033a:
	{
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(G_B35_2, G_B35_1, G_B35_0, NULL);
		return;
	}

IL_0340:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.array_class->byval_arg) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = AndroidReflection_IsAssignableFrom_mBAE0D5121AD208959B89E9BDAF62F0E0BAB917C6(L_98, L_100, NULL);
		if (!L_101)
		{
			goto IL_037f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_102, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_tCE4037CFD91325CEB0ECC8FFA61A181595DF67F7);
		RuntimeObject* L_103 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_102);
		intptr_t L_104;
		L_104 = AndroidJNIHelper_ConvertToJNIArray_mBEAE4605FF297D19AFB8CE4E8443C9C0F87E9A13(((RuntimeArray*)CastclassClass((RuntimeObject*)L_103, il2cpp_defaults.array_class)), NULL);
		V_0 = L_104;
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_105 = __this->___m_jclass;
		intptr_t L_106;
		L_106 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_105, NULL);
		intptr_t L_107 = ___0_fieldID;
		intptr_t L_108 = V_0;
		AndroidJNISafe_SetStaticObjectField_m7757F7E30F8122DAF89F138A8AE727CB896BC721(L_106, L_107, L_108, NULL);
		return;
	}

IL_037f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		Type_t* L_111 = L_110;
		if (L_111)
		{
			G_B40_0 = L_111;
			G_B40_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
			goto IL_0395;
		}
		G_B39_0 = L_111;
		G_B39_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45BE536C9F5116AD2AF9F35AA7EF84EC0980CA92));
	}
	{
		G_B41_0 = ((String_t*)(NULL));
		G_B41_1 = G_B39_1;
		goto IL_039a;
	}

IL_0395:
	{
		NullCheck((RuntimeObject*)G_B40_0);
		String_t* L_112;
		L_112 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B40_0);
		G_B41_0 = L_112;
		G_B41_1 = G_B40_1;
	}

IL_039a:
	{
		String_t* L_113;
		L_113 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B41_1, G_B41_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_114 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_114, L_113, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_114, method);
	}

IL_03aa:
	{
		return;
	}
}
// Method Definition Index: 120497
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__SetStatic_TisIl2CppFullySharedGenericAny_mA923EF05918D13946E2452B81B496229D8B952FB_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny ___1_val, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
	//<source_info:<no-source>:1>
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = __this->___m_jclass;
		intptr_t L_1;
		L_1 = GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline(L_0, NULL);
		String_t* L_2 = ___0_fieldName;
		intptr_t L_3;
		L_3 = ((  intptr_t (*) (intptr_t, String_t*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_val : &___1_val), SizeOf_FieldType_t0374C27CAE86F7DA1E32463BA4A51CE6B68D02E1);
		InvokerActionInvoker2< intptr_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5));
		return;
	}
}
// Method Definition Index: 79010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AotHelper_EnsureDictionary_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC9E7F4C38FF23079A056826221D435D3491AEC6C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__3_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16* L_2 = ((U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__3_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__3_2_t2224CCF61B67A73510709D387982A6F2D6CA1D16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__3_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		AotHelper_Ensure_mFA71C3A8B26E91F0E3E900B26993147991B571E5(G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 79009
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AotHelper_EnsureList_TisIl2CppFullySharedGenericAny_mA8919C366AD8833820513F3C67F4AB6DC495BA92_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__2_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD* L_2 = ((U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__2_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__2_1_t4D6A594FB0CA6DF78EB284B131F15B31E294D6BD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__2_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		AotHelper_Ensure_mFA71C3A8B26E91F0E3E900B26993147991B571E5(G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 79008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AotHelper_EnsureType_TisIl2CppFullySharedGenericAny_m8D94D34831BFD767668F5DE3953A46FD59601BA7_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__1_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
		G_B1_0 = L_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD* L_2 = ((U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__1_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__1_1_tAD19D38E5E45ABC49FB0296B767CE1D24018BFAD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)))->___U3CU3E9__1_0), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(AotHelper_t25AEE9B481C82E565752D5B778B28D4BD372D674_il2cpp_TypeInfo_var);
		AotHelper_Ensure_mFA71C3A8B26E91F0E3E900B26993147991B571E5(G_B2_0, NULL);
		return;
	}
}
// Method Definition Index: 3220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* Array_AsReadOnly_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mD88B0D043B3113058F0A90CB78BB75E6716BE17A_gshared (CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_2 = ___0_array;
		ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050* L_3 = (ReadOnlyCollection_1_t183E854D701353CDB0176A7146736A0BC505B050*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_m010AA1E4CD3820BCC07B77A482D6A17D5C7F14C2(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// Method Definition Index: 3220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* Array_AsReadOnly_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_mC945FB68604FAA2CFA7F469D9D420F3F2830F037_gshared (CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_2 = ___0_array;
		ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513* L_3 = (ReadOnlyCollection_1_tD22937E99FBFBC6FD85A9802376E389578922513*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_mE22404DEC336AFE9817BF78FF9F7F90E07EE4F7A(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// Method Definition Index: 3220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* Array_AsReadOnly_TisIl2CppSharedGenericObject_m3941F8A9233EDADA7E60EB1618BBBE58C11C329D_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_array;
		ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* L_3 = (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		ReadOnlyCollection_1__ctor_mC1890FAC00703F47A655C35CBCB613C74A811580(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// Method Definition Index: 3220
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* Array_AsReadOnly_TisIl2CppFullySharedGenericAny_mC6D4C312AF13E636588C50683CC2F2054B6298A4_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* L_3 = (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)il2cpp_codegen_object_new(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
		((  void (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, (RuntimeObject*)L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// Method Definition Index: 3259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCA6AA8E08561CD273B57726185CFB10006073270_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, uint64_t ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___0_array;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		uint64_t L_5 = ___1_value;
		int32_t L_6;
		L_6 = Array_BinarySearch_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0AA0BC859F6008F37B680B00508C065B098C7D9A(L_2, 0, L_4, L_5, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
// Method Definition Index: 3259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_mD7255DC86A3D47AD46661F249A70FB7D7FA0673C_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t14FAB5FC7A26C6611985105C3DFB474A16FF6AC1);
		int32_t L_6;
		L_6 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5), (RuntimeObject*)NULL);
		return L_6;
	}
}
// Method Definition Index: 3260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppSharedGenericObject_m316A42D80EC7960A5CA9F0EA2631AB6034A26CB2_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Il2CppSharedGenericObject* L_5 = ___1_value;
		RuntimeObject* L_6 = ___2_comparer;
		int32_t L_7;
		L_7 = Array_BinarySearch_TisIl2CppSharedGenericObject_m6D8A1F3C8EDCAAF226FE8B32CBB649F099D8C16B(L_2, 0, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_7;
	}
}
// Method Definition Index: 3260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m7E39322AE8312F6EB3768EE8329A0236270DB35B_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t75EC08BCC087A0780793950F3A77D634501D99B2);
		RuntimeObject* L_6 = ___2_comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_2, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_5: *(void**)L_5), L_6);
		return L_7;
	}
}
// Method Definition Index: 3260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m4EFAF15B23ECDD6CF265D9EDF30FEF23096FA1D1_gshared (SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* ___0_array, SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* L_2 = ___0_array;
		SortNodeU5BU5D_t93BC9DAFE9D4796A15C2DAEEAA4799B6D0A6179B* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		SortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53 L_5 = ___1_value;
		RuntimeObject* L_6 = ___2_comparer;
		int32_t L_7;
		L_7 = Array_BinarySearch_TisSortNode_t6A06A977B925BF3F2ECC51B7C74B7A9AE8CE5C53_m8F7822162DB61B62B083C2CD23E5F632B85BF601(L_2, 0, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_7;
	}
}
// Method Definition Index: 3261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisIl2CppFullySharedGenericAny_m41E7B9D01239068411C6C8644D275AD08C1BEBF1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___3_value : &___3_value), SizeOf_T_t718F56072021E2C1F6A1F91F772E7ABDFACEEAC0);
		int32_t L_4;
		L_4 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_3: *(void**)L_3), (RuntimeObject*)NULL);
		return L_4;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_m42970260FF15CCCFD596EF47931CFFBDCBC5AD31_gshared (ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* ___0_array, int32_t ___1_index, int32_t ___2_length, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* L_11;
		L_11 = ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		ArraySegment_1U5BU5D_tBC678C23B85C510321B1831B36907C2FECE21C3F* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mE83167A713AC87EC584811EA822E7D1CAEDCC8B0(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisCopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565_m8B18132CAF691B1212F171E486CE38EB7AD377F1_gshared (CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* L_11;
		L_11 = ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CopyInfoU5BU5D_t99CD8AF5B14252370B2B7C05032486DF882AF466* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		CopyInfo_tB2613726E308EEDC2AE910784FA68BBB0A771565 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m65877F6FF5C5E15405D3326440C99808F156B993(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisCopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744_m875EC3E709C6E48F64AFD206E917FA4A6F717F93_gshared (CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* ___0_array, int32_t ___1_index, int32_t ___2_length, CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* L_11;
		L_11 = ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CopyInfoU5BU5D_tC5EFD432382597328F5463CE3F49D3DA0CB4FCF6* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		CopyInfo_tD052D128BF5295669FA0728D8E0336E9557CE744 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m222B9857B789411237EBD6571FD5A595DCF350CF(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisDeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699_mF80C0719B18A987BBA81CF9F056001E2F9FAF08A_gshared (DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* L_11;
		L_11 = ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m362ED51C5A63CBBB451AB79931C58F32B92827C0(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisDeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819_mFED32B768E6EDE03069D8492ECD8E68CDE39B78F_gshared (DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, int32_t ___2_length, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* L_11;
		L_11 = ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m36EBD5D8B892F422D92B26CA38A1713A3215AFB0(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisItem_t7E1C074BAD45111B502C4559B0ECF73B3F52774E_m29FB9511539A9D54A0D6FCFA9BE91AACD5F2AB83_gshared (ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* L_11;
		L_11 = ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m362907D4BA915295014FAD517FC1306D05BAF152(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55_m2535B7511522F895349AC6846AC2CCF673B5D05E_gshared (KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* L_11;
		L_11 = ArraySortHelper_1_get_Default_mC7864229E2E47DF631AFF1BE852CB1769F53B5B2_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m31719B73F9A5AE1DA03483D98D94782930AD130E(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C_mFC162DED0024726682A4F54199BB87C6362C772A_gshared (KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* L_11;
		L_11 = ArraySortHelper_1_get_Default_m253436ED33703ACAAEE2E476BF48D338EDDB7B8B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m4B67DB60DA75EECF6467CF0EC10F8A859AA9D48C(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453_mE06189BECB6DCEB95F43D191E28E7F63CD311EBF_gshared (KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* L_11;
		L_11 = ArraySortHelper_1_get_Default_m063DC7C2C33296547D7C0CBBDE76955CE5C40087_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t8BE324D16F7949CCB61C579C5F4884F179B3F6FE* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_t69CD47690E0865123AE83CBCF76FBF5613F8F453 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m526FD8916E743A3E97DA4DE585DB39A337C9E662(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED3D6AE7EF88037AEF14BB25E0219A7604CAA283_gshared (KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* L_11;
		L_11 = ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mEA1A097DCE40F4262DA8843DC8C07ABB5DCD8079(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisKeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764_m842F1857619D237657BEB13754AB3C471074FA5A_gshared (KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, int32_t ___2_length, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* L_11;
		L_11 = ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m96779DEA625B1D6BD53C5A746A1A68B6CD551364(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3_m481B8E516F90C7A4C23366317AC48A4393881823_gshared (NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* L_11;
		L_11 = ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m6420104B9EA78106E4AAD6BB080600B434F014DC(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD_mF453AF278D2C23F640FB922674C075E4F077F055_gshared (NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* L_11;
		L_11 = ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m7EE2CF0D558E356F924D56602143DE9DD5ED3B64(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149_m41DCAA26B2CB6B00D46277B297CC2A4C5BC0A01F_gshared (NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* L_11;
		L_11 = ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m0BCE6EC3BE95132C034E9626C43F2A2FAED04D3B(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57_m01F500A9F142CF2C3C80D2AFEB24DD1FA38C74D9_gshared (NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* L_11;
		L_11 = ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m78AF5BD7F40C034FEB26A89F2D70FAB9F2331819(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B_m9F3575CAC103B8F7B9E551F9A8BF4EC0DEB7E1B5_gshared (NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* L_11;
		L_11 = ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m315E2B25213727CCFDEAC95743F382D00A2C66E5(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0_m63A28D9DFB48936C5DC6A9CEB3360F1D8D0BC86C_gshared (NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* L_11;
		L_11 = ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m170C45000AC2A0A34E927AE006A2CAFFD7B0399F(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882_mF72CBF312DB31821D615D5FA0CE1C9CBEA8790E5_gshared (NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* L_11;
		L_11 = ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m3C05E9A02AB4B9CDBDF6359BDC1B9376C48EC89E(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A_m2CADFB488976FC14967318EA2B9E389C7C5D8923_gshared (NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* L_11;
		L_11 = ArraySortHelper_1_get_Default_mA20F628C53BFBDDBFB99A085DACC7FAFF0843BCE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mE38408B0AFFE06694DD52CCB3C93D68A156A79E3(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2_m6EDBE943B617C1E6D13E18F90CB060E2C854E8C0_gshared (NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* L_11;
		L_11 = ArraySortHelper_1_get_Default_m1019F09C99CCF827A426B8F24AB3AAA5E321A26A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m2747668F5DB1059FC52DBC77A94DA5F4D7AE5AFE(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisNativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9_m037881737D8381F774E362FD743A0D360DE313B0_gshared (NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* ___0_array, int32_t ___1_index, int32_t ___2_length, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* L_11;
		L_11 = ArraySortHelper_1_get_Default_m95EE70AE5E84E3EED9BE5223F9AC379989B99C2D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m1E22B9C74EA0E3D1339828C719253A39405A4967(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9_m9A5034E61BB16CC3B6F3834043859388FD52812E_gshared (OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* L_11;
		L_11 = ArraySortHelper_1_get_Default_m1FEC46FCF4D9460C22D92A5B7E1CF1FA1F12AD4A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m67C53CD4D4057B7ED55471EFD5E00EBA6D1915E7(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387_m66ACBF02B02EF28DF1B9081D81771FA56B55F15D_gshared (OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* L_11;
		L_11 = ArraySortHelper_1_get_Default_m0DFBABE196763BA85C7DA7FAB2B318E703EF078A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRResult_2U5BU5D_t7A114E9554F9B990CFA9FCBDC117B89491F3156E* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m7B6C177AE816C51D35B46F03DC633B2C8F0547B6(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8_mCFE8221E3E5F1B2ABF1B8662B13DC2E25BA12691_gshared (OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* L_11;
		L_11 = ArraySortHelper_1_get_Default_m4B51BA55E73EDFF24ABD51B3F6B15FE657B3588F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRResult_2U5BU5D_t871199487EE769BC345D330C107E267D6F34E6DE* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mC7D257BDB80CD0AB65020F48AC231BAA24C99F94(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D_m35EC3A71B68488B22543184B06F2B409F87B9EF8_gshared (OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* L_11;
		L_11 = ArraySortHelper_1_get_Default_m04058493907A954B7040598BFD9FC175CA7AE1EA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRResult_2U5BU5D_t62DC53596AB7F73DC6CF9B246658D58562A41CBE* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m35650C331A58FD9733BF657178A3322ACE34FDDD(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46_m7180E5D2AA30DF3F6C1B834414B2AE6B1062FE52_gshared (OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* L_11;
		L_11 = ArraySortHelper_1_get_Default_mBC40BA76501105F7B2541811F66593DC01CD1A07_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_t17D69B7EB6C61FF73A943D0C03AAE79BBC0D0960* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_t88347DEA0099E0F47329E97CE8875F91D2F09D46 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m751DD395F162E342D498D099B3CB5511C6C76B53(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949_mDF0F7E0065676FB3DFA42C4F33C40C06F9382DBF_gshared (OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* L_11;
		L_11 = ArraySortHelper_1_get_Default_m3B38FF3B2E0C3261C994D54E5601A600AC6907E0_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_tC00576CAD02E9D6E3D1E408DFBA5A565FEDBF0DE* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_t4686029C8B073ABDDD6E12ADC3AC17A78BB4E949 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mE34E14BF023BADF1C2A37F70DE4D79EA9854130B(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21_m1353403BB3EDA288F9B329ACFBF094A61017D9BE_gshared (OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* L_11;
		L_11 = ArraySortHelper_1_get_Default_m748DA2E40CC2732DCAD3DC9B41130A844ED5B950_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_t7EABD62E94405467114920104CAF75C7ABEB1D6D* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_t4ED7A55B51843EF9A6EBABD3015872287464FA21 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mD6741AD3335B454DF719C2A989F7194CC2103474(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF_m39353475ECC680C27E0189DA9D26B6B4F1D49F11_gshared (OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* L_11;
		L_11 = ArraySortHelper_1_get_Default_mDF0EFA512AFEC0F8505D37267906CE3EFEDDBA8B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_t59C3439C36FFF07C3F566D67704C714E12479D4D* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_tAC673AF1222FA88E735D81F536FA72E5986A8CBF L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m1D48CEB77EFFCD3FC6D43524AC4AD07775A76ECE(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B_m6B86CC3435F230DC30F41DDE25E172376E13CC3F_gshared (OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* L_11;
		L_11 = ArraySortHelper_1_get_Default_mAB72EC39DD2F4F33455825F5448A54D824A8056F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_t836948FDAA1C98F2D1469DC34F6ED064D2E116C8* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_tC6910C3FD8F2502548964AC28387602A9C05515B L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_mCF573DAB4097559D43CF2F88758E44CF8F808190(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9_m5E25259C0C4B611223243B49AADD76E8C0BF81EF_gshared (OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* L_11;
		L_11 = ArraySortHelper_1_get_Default_m23C542744E3EBEC78EF0DB122AC6D40BC5B82BCC_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_tBA56B5E07336ECB1C395415DFCA367ADF5D2B831* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_tAF5413F2901FDD0987C924E6A3573C1FFEC4AFB9 L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m540D4E44DE1C47FBBF82AA3256833692BBFAF2EE(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisOVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F_m0DBACDFDC634A46656A4CDEF53112F7DBBF01817_gshared (OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* ___0_array, int32_t ___1_index, int32_t ___2_length, OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	String_t* G_B7_0 = NULL;
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___1_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
		ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* L_11;
		L_11 = ArraySortHelper_1_get_Default_m9F55F00989997B009A195CEC144FBC3FF6E6EF69_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		OVRTask_1U5BU5D_tF5A9D2554289153924834E1CF8A537CE98FDAD0F* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_length;
		OVRTask_1_tD95805799307F688305061F3B1C7C000D165A02F L_15 = ___3_value;
		RuntimeObject* L_16 = ___4_comparer;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = ArraySortHelper_1_BinarySearch_m1645BCF46DB34123B4674B344C5AD97625FD9ED9(L_11, L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_17;
	}
}
// Method Definition Index: 4010
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 120423
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GlobalJavaObjectRef_op_Implicit_m444B263750F9B778C87C30EA918CDC0B62271F24_inline (GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___m_jobject;
		return L_1;
	}
}
// Method Definition Index: 68709
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 68808
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 68709
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF1154ABCB79F43B3A71BFA8DCB85ACBDFA2838D5_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 68808
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCD832837FF5CE235B506272835BA049D56968E2F_gshared_inline (NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 ___0_nativeArray, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeArray_1_tC3AFDC9012293850DE671F2A1E55484968716190 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 2509
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA426411A0F5450BCD564C621BB663B1273773B99_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* L_2;
		L_2 = il2cpp_unsafe_as_ref<jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225>((uint8_t*)L_1);
		ByReference_1_tE0748F88701C64E729013351521FC3EED28DE1DC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2523
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m9C7E8DECAA7368617C319A866C6A9E960F140BF7_gshared_inline (Span_1_t968992D6F95715A2C7F64EDDA83CD37C8C7CBCD7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* ArraySortHelper_1_get_Default_m793ED004D10C3E4206A9842B97196F3A5A9FB439_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB* L_0 = ((ArraySortHelper_1_t83FBC0B3C3E21EADF36CC1B97DCBAC268CE8FFAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* ArraySortHelper_1_get_Default_m9357CBDC001EFB2BA8D065940A5C9FEFED3CC036_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28* L_0 = ((ArraySortHelper_1_tEC109463DA70EE9C9096D4971D34412677570D28_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* ArraySortHelper_1_get_Default_mDEB3C8BCE73E4F1B555F5E570D0FEC50F21918AD_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D* L_0 = ((ArraySortHelper_1_t3533F5404321426857F56650163B6A6729E7158D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* ArraySortHelper_1_get_Default_m4C980850260F2DD83C4793EF022AA5C44DC609FC_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD* L_0 = ((ArraySortHelper_1_t7737E5D659C96F9001D7F147BCD524DC66D0D4DD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* ArraySortHelper_1_get_Default_m431D2BBDE6BA5D8061FE8B743A0C610A257B15AB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA* L_0 = ((ArraySortHelper_1_t333E7CEAC391412941D21F2FCAFBEC610B5324AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* ArraySortHelper_1_get_Default_m4A2EA7195ED54D741C8FD211DDCA870F60C73CDB_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E* L_0 = ((ArraySortHelper_1_tA6EE6D66AFBD4037261CC901C43D4945B05C117E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* ArraySortHelper_1_get_Default_mC7864229E2E47DF631AFF1BE852CB1769F53B5B2_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158* L_0 = ((ArraySortHelper_1_t0CDAA0BFDEFAAFB701E2D62F4E9416820E29F158_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* ArraySortHelper_1_get_Default_m253436ED33703ACAAEE2E476BF48D338EDDB7B8B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972* L_0 = ((ArraySortHelper_1_t84826F04F34668ECC887711A6B82901319BCD972_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* ArraySortHelper_1_get_Default_m063DC7C2C33296547D7C0CBBDE76955CE5C40087_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1* L_0 = ((ArraySortHelper_1_tFF7ACFFC6B151DE3882B1C05226A0F2200932FB1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* ArraySortHelper_1_get_Default_m8E3181F1B97294ACC3B83B9CED5928D0AAED8641_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E* L_0 = ((ArraySortHelper_1_t9D5988695D0E27FC2C660482823CD24E7867C57E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* ArraySortHelper_1_get_Default_mF58F40BA487C82790A3D15624F0C4722003CF30E_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1* L_0 = ((ArraySortHelper_1_t1C05FD7083D194EB20ECE9BF364EE61BA5DFE1B1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* ArraySortHelper_1_get_Default_mFF5E22B327C79CD5A9B2FC7D57F5DD2CFC795A15_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F* L_0 = ((ArraySortHelper_1_t3161D1D2810FDADCBA98BC302546D9CF98CFA41F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* ArraySortHelper_1_get_Default_m3A24E760984C85C32CE96D3EBD6D9F5FC399D2C5_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716* L_0 = ((ArraySortHelper_1_tCF4AD90F61645344CEE07FF96E146A134CF88716_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* ArraySortHelper_1_get_Default_m1803D8B61C090CD23F49C4B6730024AD91F23510_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE* L_0 = ((ArraySortHelper_1_t9AC8E0CAF25D5AA0127EDCAF3968B41697DFDDDE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* ArraySortHelper_1_get_Default_m3BB42B2BA14872290CDCAD41EAF53ABA1AA9543C_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335* L_0 = ((ArraySortHelper_1_t999CC4B5DBE0626519030FE7B005516753FB7335_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* ArraySortHelper_1_get_Default_m3C99088C7E3F44792FDF1C3E3EE710D759CE75D0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8* L_0 = ((ArraySortHelper_1_tAC19D793140E1E20E38470F5AB392B81FB369BD8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* ArraySortHelper_1_get_Default_mDF92E9BE70E9F7344FAE59957B955C4508A9FF64_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9* L_0 = ((ArraySortHelper_1_tA67EC029AC1A34C6CF6F14DD9408D1DC8EE196A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* ArraySortHelper_1_get_Default_mCA800553DA9DDDBAA07748294E8100E0A1E2D571_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65* L_0 = ((ArraySortHelper_1_t3DAE023E6EA39C020D8EDF53FFA76E0F63612B65_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* ArraySortHelper_1_get_Default_mA20F628C53BFBDDBFB99A085DACC7FAFF0843BCE_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD* L_0 = ((ArraySortHelper_1_t611D822766A2AAF6F2F4E09E1FC9DE2B58DAD4CD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* ArraySortHelper_1_get_Default_m1019F09C99CCF827A426B8F24AB3AAA5E321A26A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37* L_0 = ((ArraySortHelper_1_tB29DE207ACAF960F756749FE552D12922A3CFD37_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* ArraySortHelper_1_get_Default_m95EE70AE5E84E3EED9BE5223F9AC379989B99C2D_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3* L_0 = ((ArraySortHelper_1_t046444A692EB7B59D103821AD34285138EDA6BB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* ArraySortHelper_1_get_Default_m1FEC46FCF4D9460C22D92A5B7E1CF1FA1F12AD4A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53* L_0 = ((ArraySortHelper_1_t7E756FACEF9FBD3BD6D7505B076C509FA1127F53_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* ArraySortHelper_1_get_Default_m0DFBABE196763BA85C7DA7FAB2B318E703EF078A_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D* L_0 = ((ArraySortHelper_1_t8B89B3BBA7C1A78874F1CAA5932D4295929FF81D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* ArraySortHelper_1_get_Default_m4B51BA55E73EDFF24ABD51B3F6B15FE657B3588F_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0* L_0 = ((ArraySortHelper_1_tD62E8E1FF89D6A319CA405ADC5A544DCF38588F0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* ArraySortHelper_1_get_Default_m04058493907A954B7040598BFD9FC175CA7AE1EA_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1* L_0 = ((ArraySortHelper_1_t900CC1E7DAEF90B417A9C49C4C18F7D27A4511D1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* ArraySortHelper_1_get_Default_mBC40BA76501105F7B2541811F66593DC01CD1A07_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E* L_0 = ((ArraySortHelper_1_t430C30DB8E25F8C8190A996B3BE4FF6277B2827E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* ArraySortHelper_1_get_Default_m3B38FF3B2E0C3261C994D54E5601A600AC6907E0_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C* L_0 = ((ArraySortHelper_1_tA31148DB5738A3D3C82732660E0BDEE1F7D35D7C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* ArraySortHelper_1_get_Default_m748DA2E40CC2732DCAD3DC9B41130A844ED5B950_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4* L_0 = ((ArraySortHelper_1_t62ABB64D60139BC806DA6BDF093F4B80C6EE27A4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* ArraySortHelper_1_get_Default_mDF0EFA512AFEC0F8505D37267906CE3EFEDDBA8B_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E* L_0 = ((ArraySortHelper_1_t6CF8D86861D38F26C5E7B5D2E2F09FBEEDB48E7E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* ArraySortHelper_1_get_Default_mAB72EC39DD2F4F33455825F5448A54D824A8056F_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812* L_0 = ((ArraySortHelper_1_t44624EE141DAB88A7FC9EAA0287D20E34BE39812_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* ArraySortHelper_1_get_Default_m23C542744E3EBEC78EF0DB122AC6D40BC5B82BCC_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D* L_0 = ((ArraySortHelper_1_t955F7E44AC5A03E37B0D03B54295EBC3203CA24D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11978
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* ArraySortHelper_1_get_Default_m9F55F00989997B009A195CEC144FBC3FF6E6EF69_gshared_inline (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15* L_0 = ((ArraySortHelper_1_tF7A09F8FF38668B1F31846DE19203EA002C7CF15_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
