// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "MyPlayerCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class L20240704_API AMyPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	
public:
	virtual void UpdateCamera(float DeltaTime) override;

};
