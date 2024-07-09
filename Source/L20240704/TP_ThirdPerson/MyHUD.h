// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class L20240704_API AMyHUD : public AHUD
{
	GENERATED_BODY()
public:

	AMyHUD();

	virtual void BeginPlay() override;

	virtual void DrawHUD() override;

	int32 CenterX;

	int32 CenterY;

	int32 CrosshairHalfSize;

	int32 CrosshairMaxOpen;

	int32 CrosshairOpen;

	int32 OneUnit;

};
