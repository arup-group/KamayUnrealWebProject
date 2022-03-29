// Fill out your copyright notice in the Description page of Project Settings.


#include "MyChar.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyChar::AMyChar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 21.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;


	static ConstructorHelpers::FObjectFinder<USoundCue> FerryCue(TEXT("'SoundCue'/Game/FirstPersonBP/audioCharBp/FerrySound.FerrySound''"));
	
	propellerAudioCue = FerryCue.Object;
	propellerAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PropellerAudioComp"));
	propellerAudioComponent->bAutoActivate = false; // don't play the sound immediately.
	// I want the sound to follow the pawn around, so I attach it to the Pawns root.
	propellerAudioComponent->SetupAttachment(RootComponent);
	propellerAudioComponent->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));


	static ConstructorHelpers::FObjectFinder<USoundCue> SeaCue(TEXT("SoundCue'/Game/FirstPersonBP/audioCharBp/SeaSound.SeaSound'"));

	seaAudioCue = SeaCue.Object;
	seaAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SeaAudioComp"));
	seaAudioComponent->bAutoActivate = false; // don't play the sound immediately.
	// I want the sound to follow the pawn around, so I attach it to the Pawns root.
	seaAudioComponent->SetupAttachment(RootComponent);
	seaAudioComponent->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));

	distmeter = "None";
}

void AMyChar::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (propellerAudioCue->IsValidLowLevelFast()) {
		propellerAudioComponent->SetSound(propellerAudioCue);
	}

	if (seaAudioCue->IsValidLowLevelFast()) {
		seaAudioComponent->SetSound(seaAudioCue);
	}

}

// Called when the game starts or when spawned
void AMyChar::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerDistanceClass != nullptr) {
		PlayerDistance = CreateWidget(GetWorld(), PlayerDistanceClass);
		PlayerDistance->AddToViewport();
	}

	float startTime = 0.f;
	float volume = 1.0f;
	float fadeTime = 1.0f;
	propellerAudioComponent->FadeIn(fadeTime, volume, startTime);

	
	seaAudioComponent->FadeIn(1.0f, 1.0f, 0.0f);


}

// Called every frame
void AMyChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	MyCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	dist = FVector::Distance(MyCharacter, FerryAudio);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::SanitizeFloat(float(dist)));

	middle_value = dist;

	distmeter = FString::SanitizeFloat(float(int(middle_value / 100.0f)), 2);
	distmeter.Append(" m");
	if (dist <= 10000) {
		volume_control = 0.5;
	}
	else {
		if (dist >= 20000) {
			volume_control = 0;
		}
		else {
			volume_control = - (dist-10000.0f)/20000.0f+0.5f;
		}
	}

	propellerAudioComponent->SetFloatParameter(FName("FerryVolume"), volume_control);
}

// Called to bind functionality to input
void AMyChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyChar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyChar::MoveRight);
}



void AMyChar::MoveForward(float Axis)
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);

}

void AMyChar::MoveRight(float Axis)
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);


}
