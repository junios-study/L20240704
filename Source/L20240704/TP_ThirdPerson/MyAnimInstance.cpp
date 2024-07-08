// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	ACharacter* Pawn = Cast<ACharacter>(TryGetPawnOwner());
	if (IsValid(Pawn))
	{
		Speed = Pawn->GetCharacterMovement()->Velocity.Size2D();
		//UE_LOG(LogTemp, Warning, TEXT("%f"), Speed);
		bIsMoveingOnGround = Pawn->GetCharacterMovement()->IsMovingOnGround();
		bIsDead = false;
		bIsCrouched = Pawn->bIsCrouched;
		
		Direction = CalculateDirection(Pawn->GetCharacterMovement()->Velocity,
			Pawn->GetActorRotation());
	}
}

void UMyAnimInstance::AnimNotify_ReloadEnd()
{
	UE_LOG(LogTemp, Warning, TEXT("Relaod Completed."));

}
