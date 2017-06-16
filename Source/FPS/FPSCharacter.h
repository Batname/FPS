// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPS_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(float Value);


	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void StopJump();

	/** FPS camera */
	UPROPERTY(VisibleAnywhere)
	UCameraComponent *FPSCameraComponent;

	/** FPS arm mesh */
	UPROPERTY(VisibleAnywhere, Category = Mesh)
	USkeletalMeshComponent *FPSMesh;

	UFUNCTION()
	void Fire();

	/** Gun muzzle's offset the camera location */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gameplay)
	FVector MuzzleOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class AFPSProjectile> ProjectileClass;
};
