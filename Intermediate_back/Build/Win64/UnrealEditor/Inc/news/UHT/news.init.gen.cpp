// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenews_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_news;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_news()
	{
		if (!Z_Registration_Info_UPackage__Script_news.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/news",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x24F7F87F,
				0x7A45DEF3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_news.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_news.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_news(Z_Construct_UPackage__Script_news, TEXT("/Script/news"), Z_Registration_Info_UPackage__Script_news, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x24F7F87F, 0x7A45DEF3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
