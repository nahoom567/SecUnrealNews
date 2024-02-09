// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "news/CopyPixels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopyPixels() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NEWS_API UClass* Z_Construct_UClass_ACopyPixels();
	NEWS_API UClass* Z_Construct_UClass_ACopyPixels_NoRegister();
	UPackage* Z_Construct_UPackage__Script_news();
// End Cross Module References
	void ACopyPixels::StaticRegisterNativesACopyPixels()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACopyPixels);
	UClass* Z_Construct_UClass_ACopyPixels_NoRegister()
	{
		return ACopyPixels::StaticClass();
	}
	struct Z_Construct_UClass_ACopyPixels_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACopyPixels_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_news,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACopyPixels_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACopyPixels_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CopyPixels.h" },
		{ "ModuleRelativePath", "CopyPixels.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACopyPixels_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACopyPixels>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACopyPixels_Statics::ClassParams = {
		&ACopyPixels::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACopyPixels_Statics::Class_MetaDataParams), Z_Construct_UClass_ACopyPixels_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACopyPixels()
	{
		if (!Z_Registration_Info_UClass_ACopyPixels.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACopyPixels.OuterSingleton, Z_Construct_UClass_ACopyPixels_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACopyPixels.OuterSingleton;
	}
	template<> NEWS_API UClass* StaticClass<ACopyPixels>()
	{
		return ACopyPixels::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACopyPixels);
	ACopyPixels::~ACopyPixels() {}
	struct Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyPixels_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyPixels_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACopyPixels, ACopyPixels::StaticClass, TEXT("ACopyPixels"), &Z_Registration_Info_UClass_ACopyPixels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACopyPixels), 2677553135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyPixels_h_2214062659(TEXT("/Script/news"),
		Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyPixels_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyPixels_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
