// Fill out your copyright notice in the Description page of Project Settings.

#include "FPS.h"
#include "FPSGameModeBase.h"


void AFPSGameModeBase::StartPlay()
{
    Super::StartPlay();

    FString MyLog("Hello world, this is FSP game mode");

    UE_LOG(LogTemp, Warning, TEXT("%s"), *MyLog);

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello world, this is FSP game mode"));
    }
}

