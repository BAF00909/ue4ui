// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Tankogeddon.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	if (NewGameBtn)
	{
		NewGameBtn->OnPressed.AddDynamic(this, &ThisClass::OnNewGameClicked);
	}
}

void UMainMenuWidget::OnNewGameClicked()
{
	UE_LOG(LogTankogeddon, Error, TEXT("New Game"));
}
