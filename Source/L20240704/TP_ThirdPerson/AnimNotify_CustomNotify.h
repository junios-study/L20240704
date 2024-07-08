// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CustomNotify.generated.h"

/**
 * 
 */
UCLASS()
class L20240704_API UAnimNotify_CustomNotify : public UAnimNotify
{
	GENERATED_BODY()
	
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	int32 A;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
	int32 B;

};
