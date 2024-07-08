// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerCameraManager.h"
#include "TP_ThirdPersonCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"

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
		//CameraBoom

		FVector TargetLocation = Pawn->bIsCrouched ? Pawn->CrouchedSpringArmLocation : Pawn->NoramlSpringArmLocation;

		FVector ResultLocation = FMath::VInterpTo(
			Pawn->GetCameraBoom()->GetRelativeLocation(),
			TargetLocation,
			DeltaTime,
			15.0f
		);

		Pawn->GetCameraBoom()->SetRelativeLocation(ResultLocation);
	}
}
