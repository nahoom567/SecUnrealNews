// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "news/CopyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NEWS_API UClass* Z_Construct_UClass_ACopyActor();
	NEWS_API UClass* Z_Construct_UClass_ACopyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_news();
// End Cross Module References
	void ACopyActor::StaticRegisterNativesACopyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACopyActor);
	UClass* Z_Construct_UClass_ACopyActor_NoRegister()
	{
		return ACopyActor::StaticClass();
	}
	struct Z_Construct_UClass_ACopyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACopyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_news,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACopyActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACopyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CopyActor.h" },
		{ "ModuleRelativePath", "CopyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACopyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACopyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACopyActor_Statics::ClassParams = {
		&ACopyActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACopyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACopyActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACopyActor()
	{
		if (!Z_Registration_Info_UClass_ACopyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACopyActor.OuterSingleton, Z_Construct_UClass_ACopyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACopyActor.OuterSingleton;
	}
	template<> NEWS_API UClass* StaticClass<ACopyActor>()
	{
		return ACopyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACopyActor);
	ACopyActor::~ACopyActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACopyActor, ACopyActor::StaticClass, TEXT("ACopyActor"), &Z_Registration_Info_UClass_ACopyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACopyActor), 2312406262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyActor_h_3144968828(TEXT("/Script/news"),
		Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_CopyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
