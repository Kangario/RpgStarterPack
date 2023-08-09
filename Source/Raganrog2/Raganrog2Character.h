// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "FileWorker.h"
#include "Stat.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Raganrog2Character.generated.h"


UCLASS(config=Game)
class ARaganrog2Character : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, Category = Speed)
		float defaultWalkSpeed;

	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Name;
	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Force;
	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Dexterity;
	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Intelligence;
	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Constitution;
	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Wisdom;
	UPROPERTY(VisibleAnywhere, Category = Stats)
		FString Charisma;
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

public:
	ARaganrog2Character();
	void AddStatsToFiled();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

