// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify_CustomNotify.h"

void UAnimNotify_CustomNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	UE_LOG(LogTemp, Warning, TEXT("Sum : %d"), (A + B));

}
