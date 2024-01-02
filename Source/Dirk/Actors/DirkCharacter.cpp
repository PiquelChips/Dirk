// Copyright Epic Games, Inc. All Rights Reserved.

#include "DirkCharacter.h"

#include "DirkItem.h"

// Constructer, blocks creation of mesh component
ADirkCharacter::ADirkCharacter(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer.DoNotCreateDefaultSubobject(ACharacter::MeshComponentName))
{
	// Character doesnt have a Item at start
	bHasItem = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	// Position the camera
	CameraComponent->SetRelativeLocation(RelativeCameraLocation);
	CameraComponent->bUsePawnControlRotation = true;
	

	// Mesh Component
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	MeshComponent->SetupAttachment(CameraComponent);
	MeshComponent->SetRelativeRotation(FRotator(2.5f, 5.f, 5.f));
	MeshComponent->SetRelativeLocation(FVector(-30.f, -15.f, -150.f));

	// Set Air Control
	UCharacterMovementComponent* DirkCharacterMovement = GetCharacterMovement();
	DirkCharacterMovement->AirControl = 0.4f;
}

// Begin play, sets up input
void ADirkCharacter::BeginPlay()
{
	// Call the base class
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PawnMappingContext, 0);
		}
	}
}

// Input and movement

// Setup input
void ADirkCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADirkCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADirkCharacter::Look);
	}
}

// Move the chaeacter
void ADirkCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

// Move the camera around
void ADirkCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

// Character item

// Sets the characters item
bool ADirkCharacter::SetItem(ADirkItem* Item)
{
	using enum EDirkCharacterAnimStatus;
	// Assign param to class variable
	DirkItem = Item;
	// Check if the there is an item
	if (DirkItem)
	{
		// Sets AnimStatus based on the type of the Item
		switch (DirkItem->GetItemType())
		{
			case EDirkItemType::BLADE_WEAPON:
				AnimStatus = BLADE_WEAPON_ITEM;
				break;
			case EDirkItemType::PROJECTILE_WEAPON:
				AnimStatus = PROJECTILE_WEAPON_ITEM;
				break;
			default:
				AnimStatus = DEFAULT;
				break;
		}

		return true;
	}
	else 
	{
		// Set the animation status to its default value
		AnimStatus = DEFAULT;
		return false;
	}
}