// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "FHitDataStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FHitDataStruct
{
	GENERATED_BODY()


	//Member Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitData")
	float DamageAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitData")
	float PoiseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HitData")
	FVector HitDirection;

	//Constructor
	FHitDataStruct(); 
};
