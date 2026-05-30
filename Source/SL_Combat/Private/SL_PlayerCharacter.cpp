// Fill out your copyright notice in the Description page of Project Settings.


#include "SL_PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ASL_PlayerCharacter::ASL_PlayerCharacter()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	
	if (GetMesh()) {
		SpringArm->SetupAttachment(GetMesh(), "head");
	}
	else {
		SpringArm->SetupAttachment(RootComponent);
	}
	
	SpringArm->TargetArmLength = 450.0f;
	SpringArm->bUsePawnControlRotation = true;
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FollowCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
}

void ASL_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ASL_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}