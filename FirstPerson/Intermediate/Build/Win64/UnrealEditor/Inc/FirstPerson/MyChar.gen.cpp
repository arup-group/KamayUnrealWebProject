// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPerson/MyChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyChar() {}
// Cross Module References
	FIRSTPERSON_API UClass* Z_Construct_UClass_AMyChar_NoRegister();
	FIRSTPERSON_API UClass* Z_Construct_UClass_AMyChar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FirstPerson();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AMyChar::StaticRegisterNativesAMyChar()
	{
	}
	UClass* Z_Construct_UClass_AMyChar_NoRegister()
	{
		return AMyChar::StaticClass();
	}
	struct Z_Construct_UClass_AMyChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDistanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerDistanceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distmeter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_distmeter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propellerAudioCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_propellerAudioCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propellerStartupCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_propellerStartupCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propellerAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_propellerAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seaAudioCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_seaAudioCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seaStartupCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_seaStartupCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seaAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_seaAudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPerson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyChar.h" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_PlayerDistanceClass_MetaData[] = {
		{ "Category", "UI HUD" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_PlayerDistanceClass = { "PlayerDistanceClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, PlayerDistanceClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_PlayerDistanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_PlayerDistanceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_distmeter_MetaData[] = {
		{ "Category", "MyChar" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_distmeter = { "distmeter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, distmeter), METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_distmeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_distmeter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioCue = { "propellerAudioCue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, propellerAudioCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_propellerStartupCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_propellerStartupCue = { "propellerStartupCue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, propellerStartupCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_propellerStartupCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_propellerStartupCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioComponent = { "propellerAudioComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, propellerAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioCue = { "seaAudioCue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, seaAudioCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_seaStartupCue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_seaStartupCue = { "seaStartupCue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, seaStartupCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_seaStartupCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_seaStartupCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioComponent = { "seaAudioComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyChar, seaAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_PlayerDistanceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_distmeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_propellerStartupCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_propellerAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_seaStartupCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyChar_Statics::NewProp_seaAudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyChar_Statics::ClassParams = {
		&AMyChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyChar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyChar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyChar, 1701675335);
	template<> FIRSTPERSON_API UClass* StaticClass<AMyChar>()
	{
		return AMyChar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyChar(Z_Construct_UClass_AMyChar, &AMyChar::StaticClass, TEXT("/Script/FirstPerson"), TEXT("AMyChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
