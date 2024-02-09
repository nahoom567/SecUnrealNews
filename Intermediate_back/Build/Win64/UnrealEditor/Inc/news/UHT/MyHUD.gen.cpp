// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "news/MyHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	NEWS_API UClass* Z_Construct_UClass_AMyHUD();
	NEWS_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_news();
// End Cross Module References
	DEFINE_FUNCTION(AMyHUD::execGetCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvas**)Z_Param__Result=P_THIS->GetCanvas();
		P_NATIVE_END;
	}
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
		UClass* Class = AMyHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanvas", &AMyHUD::execGetCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyHUD_GetCanvas_Statics
	{
		struct MyHUD_eventGetCanvas_Parms
		{
			UCanvas* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyHUD_eventGetCanvas_Parms, ReturnValue), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas" },
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "GetCanvas", nullptr, nullptr, Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::MyHUD_eventGetCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::MyHUD_eventGetCanvas_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyHUD_GetCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyHUD_GetCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyHUD);
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_news,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyHUD_GetCanvas, "GetCanvas" }, // 369432675
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
		&AMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyHUD()
	{
		if (!Z_Registration_Info_UClass_AMyHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyHUD.OuterSingleton, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyHUD.OuterSingleton;
	}
	template<> NEWS_API UClass* StaticClass<AMyHUD>()
	{
		return AMyHUD::StaticClass();
	}
	AMyHUD::AMyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
	AMyHUD::~AMyHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_MyHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_MyHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyHUD, AMyHUD::StaticClass, TEXT("AMyHUD"), &Z_Registration_Info_UClass_AMyHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyHUD), 892477785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_MyHUD_h_1138103396(TEXT("/Script/news"),
		Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_MyHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_MyHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
