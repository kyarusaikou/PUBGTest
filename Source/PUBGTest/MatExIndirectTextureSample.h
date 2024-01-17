// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialExpressionTextureSample.h"
#include "MatExIndirectTextureSample.generated.h"

/**
 * 
 */
UCLASS()
class PUBGTEST_API UMatExIndirectTextureSample : public UMaterialExpressionTextureSample
{
	GENERATED_BODY()

public:
	UMatExIndirectTextureSample();

private:
	UPROPERTY(EditAnywhere)
	class UIndirectTexture* IndirectTexture;
};
