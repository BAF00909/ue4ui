// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "ActorHealthBar.generated.h"

/**
 * 
 */
UCLASS()
class TANKOGEDDON_API UActorHealthBar : public UUserWidget
{
	GENERATED_BODY()

	protected:
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UProgressBar* HealthBar;
	
	public:
	void NativeConstruct() override;
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	void SetPawn(class ATankPawn* Tank);
	
	UPROPERTY(BlueprintReadOnly)
	class ATankPawn* OwnerWidget;
	
	UFUNCTION()
	void CalculateCurrentHealth(float Damage);
};
