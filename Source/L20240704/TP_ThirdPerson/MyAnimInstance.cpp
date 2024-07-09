// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "TP_ThirdPersonCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ATP_ThirdPersonCharacter* Pawn = Cast<ATP_ThirdPersonCharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{
		Speed = Pawn->GetCharacterMovement()->Velocity.Size2D();
		//UE_LOG(LogTemp, Warning, TEXT("%f"), Speed);
		bIsMoveingOnGround = Pawn->GetCharacterMovement()->IsMovingOnGround();
		bIsDead = false;
		bIsCrouched = Pawn->bIsCrouched;
		
		Direction = CalculateDirection(Pawn->GetCharacterMovement()->Velocity,
			Pawn->GetActorRotation());

		AimYaw = Pawn->GetBaseAimRotation().Yaw;
		AimPitch = Pawn->GetBaseAimRotation().Pitch;

		bIsFire = Pawn->bIsFire;
	}
}

void UMyAnimInstance::AnimNotify_ReloadEnd()
{
	UE_LOG(LogTemp, Warning, TEXT("Relaod Completed."));

}
