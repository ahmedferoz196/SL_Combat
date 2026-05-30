// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SL_BaseCharacter.h"
#include "SL_PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SL_COMBAT_API ASL_PlayerCharacter : public ASL_BaseCharacter
{
	GENERATED_BODY()

public: 
	//Constructor
	ASL_PlayerCharacter();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class UCameraComponent* FollowCamera;

	virtual void BeginPlay() override;

public:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
