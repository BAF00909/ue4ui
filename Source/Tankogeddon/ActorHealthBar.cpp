// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorHealthBar.h"

#include "TankPawn.h"
#include "Engine/World.h"

void UActorHealthBar::CalculateCurrentHealth(float Damage)
{
	HealthBar->SetPercent(Damage);
}

void UActorHealthBar::NativeConstruct()
{
	Super::NativeConstruct();

	if(!OwnerWidget) return;

	CalculateCurrentHealth(OwnerWidget->GetCurrentHealth());
}

void UActorHealthBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(!OwnerWidget) return;
	CalculateCurrentHealth(OwnerWidget->GetCurrentHealth());
}

void UActorHealthBar::SetPawn(class ATankPawn* Tank)
{
	OwnerWidget = Tank;
}

