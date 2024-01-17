// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IndirectTexture.generated.h"

/**
 * 
 */
UCLASS()
class TESTPLUGIN_API UIndirectTexture : public UObject
{
	GENERATED_BODY()

public:
	UIndirectTexture(const FObjectInitializer& ObjectInitializer);

	UTexture2D* GetTileSet();
	UTexture2D* GetIndirectTexture();
	int32 GetTileCount();
	FIntPoint GetResolution();
	int32 GetTileSize();
	FIntPoint GetTileSetResolution();

	void CreateTexture();

private:
	UPROPERTY(EditAnywhere)
	UTexture2D* TileSet;

	UPROPERTY(EditAnywhere)
	int32 TilesCount;

	UPROPERTY(EditAnywhere)
	FIntPoint Resolution;

	UPROPERTY(EditAnywhere)
	int32 TileSize;

	UPROPERTY()
	UTexture2D* Texture;
};
