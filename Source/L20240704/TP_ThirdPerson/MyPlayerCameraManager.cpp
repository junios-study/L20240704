// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerCameraManager.h"
#include "TP_ThirdPersonCharacter.h"

void AMyPlayerCameraManager::UpdateCamera(float DeltaTime)
{
	Super::UpdateCamera(DeltaTime);

	ATP_ThirdPersonCharacter* Pawn = Cast<ATP_ThirdPersonCharacter>(	 GetOwningPlayerController()->GetPawn());
	if (Pawn)
	{
		float TargetFOV = Pawn->bIsZoom ? 60.0f : 90.0f;

		float ResultFOV = FMath::FInterpTo(GetFOVAngle(), TargetFOV, DeltaTime, 20.0f);

		SetFOV(ResultFOV);

		//Camera 높이 조절

	}
}
