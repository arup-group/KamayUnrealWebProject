// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <math.h> 
#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Blueprint/UserWidget.h"

#include "MyChar.generated.h"

UCLASS()
class FIRSTPERSON_API AMyChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyChar();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, Category = "UI HUD")
		TSubclassOf<UUserWidget> PlayerDistanceClass;
	UUserWidget* PlayerDistance;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
		FString distmeter;

	int middle_value;
	float dist;

	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		USoundCue* propellerAudioCue;

	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		USoundCue* propellerStartupCue;

	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		UAudioComponent* propellerAudioComponent;


	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		USoundCue* seaAudioCue;

	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		USoundCue* seaStartupCue;

	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		UAudioComponent* seaAudioComponent;



	void MoveForward(float Axis);
	void MoveRight(float Axis);

	float volume_control;
	FVector MyCharacter;
	FVector FerryAudio = FVector::FVector(38485.898438f, -90470.828125f, 510.0f);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void PostInitializeComponents() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
