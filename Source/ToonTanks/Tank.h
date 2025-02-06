// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
public:
	ATank();
	void HandleDestruction();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	APlayerController* GetTankPlayerController() const {return TankPlayerController;};

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Components", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank Details", meta = (AllowPrivateAccess = "true"))
	float Speed = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank Details", meta = (AllowPrivateAccess = "true"))
	float TurnSpeed = 200;

	void Move(float Value);
	void Turn(float Value);
	
	APlayerController* TankPlayerController;

};
