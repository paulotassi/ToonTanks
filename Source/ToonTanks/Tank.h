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

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank Components", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	void Move(float Value);

	void Turn(float Value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank Details", meta = (AllowPrivateAccess = "true"))
	float Speed = 200;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tank Details", meta = (AllowPrivateAccess = "true"))
	float TurnSpeed = 200;



};
