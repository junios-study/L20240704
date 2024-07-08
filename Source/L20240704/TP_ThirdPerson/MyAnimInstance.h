// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class L20240704_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	float Speed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	uint8 bIsMoveingOnGround : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	uint8 bIsDead : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	float Direction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Status")
	uint8 bIsCrouched : 1;


	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

};
