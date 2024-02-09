// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "news/newsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenewsGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NEWS_API UClass* Z_Construct_UClass_AnewsGameMode();
	NEWS_API UClass* Z_Construct_UClass_AnewsGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_news();
// End Cross Module References
	void AnewsGameMode::StaticRegisterNativesAnewsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AnewsGameMode);
	UClass* Z_Construct_UClass_AnewsGameMode_NoRegister()
	{
		return AnewsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AnewsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AnewsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_news,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AnewsGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AnewsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "newsGameMode.h" },
		{ "ModuleRelativePath", "newsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AnewsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AnewsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AnewsGameMode_Statics::ClassParams = {
		&AnewsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AnewsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AnewsGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AnewsGameMode()
	{
		if (!Z_Registration_Info_UClass_AnewsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AnewsGameMode.OuterSingleton, Z_Construct_UClass_AnewsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AnewsGameMode.OuterSingleton;
	}
	template<> NEWS_API UClass* StaticClass<AnewsGameMode>()
	{
		return AnewsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AnewsGameMode);
	AnewsGameMode::~AnewsGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_newsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_newsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AnewsGameMode, AnewsGameMode::StaticClass, TEXT("AnewsGameMode"), &Z_Registration_Info_UClass_AnewsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AnewsGameMode), 223146198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_newsGameMode_h_3123580071(TEXT("/Script/news"),
		Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_newsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Itai_Documents_Unreal_Projects_news_Source_news_newsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
