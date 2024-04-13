// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSigmaShooter/GameSigmaShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSigmaShooterGameMode() {}
// Cross Module References
	GAMESIGMASHOOTER_API UClass* Z_Construct_UClass_AGameSigmaShooterGameMode_NoRegister();
	GAMESIGMASHOOTER_API UClass* Z_Construct_UClass_AGameSigmaShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameSigmaShooter();
// End Cross Module References
	void AGameSigmaShooterGameMode::StaticRegisterNativesAGameSigmaShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameSigmaShooterGameMode_NoRegister()
	{
		return AGameSigmaShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameSigmaShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSigmaShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameSigmaShooterGameMode.h" },
		{ "ModuleRelativePath", "GameSigmaShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameSigmaShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::ClassParams = {
		&AGameSigmaShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameSigmaShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameSigmaShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameSigmaShooterGameMode, 2482954331);
	template<> GAMESIGMASHOOTER_API UClass* StaticClass<AGameSigmaShooterGameMode>()
	{
		return AGameSigmaShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameSigmaShooterGameMode(Z_Construct_UClass_AGameSigmaShooterGameMode, &AGameSigmaShooterGameMode::StaticClass, TEXT("/Script/GameSigmaShooter"), TEXT("AGameSigmaShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSigmaShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
