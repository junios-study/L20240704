// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotifyState_SpeedChange.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UAnimNotifyState_SpeedChange::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	UE_LOG(LogTemp, Warning, TEXT("NotifyBegin"));
	ACharacter* Pawn = Cast<ACharacter>(MeshComp->GetOwner());
	if (Pawn)
	{
		Total = 0;
		Pawn->GetCharacterMovement()->MaxWalkSpeed = 100;
	}
}

void UAnimNotifyState_SpeedChange::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	UE_LOG(LogTemp, Warning, TEXT("NotifyTick"));
	Total += FrameDeltaTime;
	ACharacter* Pawn = Cast<ACharacter>(MeshComp->GetOwner());
	if (Pawn)
	{
		Pawn->GetCharacterMovement()->MaxWalkSpeed = 100 * Total * 10.0f ;
	}
}

void UAnimNotifyState_SpeedChange::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	UE_LOG(LogTemp, Warning, TEXT("NotifyEnd"));
	ACharacter* Pawn = Cast<ACharacter>(MeshComp->GetOwner());
	if (Pawn)
	{
		Pawn->GetCharacterMovement()->MaxWalkSpeed = 600;
	}
}
