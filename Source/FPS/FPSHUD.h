// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

protected:

    /** Draw into center of screen */
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* CrosshairTexture;
public:
    /** Draw call for the HUD */
    virtual void DrawHUD() override;
};
