// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFactory.h"
#include "IndirectTexture.h"

UMyFactory::UMyFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UIndirectTexture::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UMyFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
	EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UIndirectTexture>(InParent, InClass, InName, Flags);
}

bool UMyFactory::ShouldShowInNewMenu() const
{
	return true;
}