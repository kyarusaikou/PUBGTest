// Fill out your copyright notice in the Description page of Project Settings.


#include "IndirectTexture.h"
#include "ImageUtils.h"

UIndirectTexture::UIndirectTexture(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> TileSetRef(TEXT("Texture2D'/Game/PUBG_Test_Tileset_01.PUBG_Test_Tileset_01'"));
	if (TileSetRef.Object)
	{
		TileSet = TileSetRef.Object;
	}

	TilesCount = 8;
	Resolution.X = 16;
	Resolution.Y = 16;
	TileSize = 32;
}

UTexture2D* UIndirectTexture::GetTileSet()
{
	return TileSet;
}

UTexture2D* UIndirectTexture::GetIndirectTexture()
{
	return Texture;
}

int32 UIndirectTexture::GetTileCount()
{
	return TilesCount;
}

FIntPoint UIndirectTexture::GetResolution()
{
	return Resolution;
}

int32 UIndirectTexture::GetTileSize()
{
	return TileSize;
}

FIntPoint UIndirectTexture::GetTileSetResolution()
{
	FIntPoint Res;
	Res.X = TileSet->GetSizeX();
	Res.Y = TileSet->GetSizeY();

	return Res;
}

void UIndirectTexture::CreateTexture()
{
	TArray<FColor> SrcData;

	int32 Num = Resolution.X * Resolution.Y;
	for (int i = 0; i < Num; ++i)
	{
		SrcData.Emplace(FColor(FMath::RandRange(0, TilesCount - 1), 0, 0, 255));
	}

	Texture = FImageUtils::CreateTexture2D(Resolution.X, Resolution.Y,
		SrcData, this, TEXT("NAME_IndriectTexture"), EObjectFlags::RF_Public | EObjectFlags::RF_Transient, FCreateTexture2DParameters());
}
