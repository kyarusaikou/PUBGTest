// Fill out your copyright notice in the Description page of Project Settings.


#include "MatExIndirectTextureSample.h"
#include "IndirectTexture.h"
#include "ImageUtils.h"
#include "UObject\SavePackage.h"

UMatExIndirectTextureSample::UMatExIndirectTextureSample()
{
    static ConstructorHelpers::FObjectFinder<UIndirectTexture> IndirectTextureRef(TEXT("IndirectTexture'/Game/IndirectTexture.IndirectTexture'"));
    if (IndirectTextureRef.Object)
    {
        IndirectTexture = IndirectTextureRef.Object;
    }

    IndirectTexture->CreateTexture();

    int32 TileSize = IndirectTexture->GetTileSize();
    FIntPoint IndTexRes = IndirectTexture->GetResolution();
    FIntPoint TileSetRes = IndirectTexture->GetTileSetResolution();
    int32 TileCol = TileSetRes.X / TileSize;

    FIntPoint OutResolution(TileSize * IndTexRes.X, TileSize * IndTexRes.Y);

    UTexture2D* TileSetTex = IndirectTexture->GetTileSet();
    UTexture2D* IndTex = IndirectTexture->GetIndirectTexture();

    TArray<FColor> TileSetTexColors;
    TArray<FColor> IndTexColors;

    TileSetTex->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
    TileSetTex->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
    TileSetTex->SRGB = false;
    TileSetTex->UpdateResource();

    const FColor* TileSetTexData = static_cast<const FColor*>(TileSetTex->PlatformData->Mips[0].BulkData.LockReadOnly());
    for (int32 Y = 0; Y < TileSetTex->GetSizeY(); Y++)
    {
        for (int32 X = 0; X < TileSetTex->GetSizeX(); X++)
        {
            FColor PixelColor = TileSetTexData[Y * TileSetTex->GetSizeX() + X];
            TileSetTexColors.Add(PixelColor);
        }
    }
    TileSetTex->PlatformData->Mips[0].BulkData.Unlock();

    IndTex->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
    IndTex->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
    IndTex->SRGB = false;
    IndTex->UpdateResource();

    const FColor* IndTexData = static_cast<const FColor*>(IndTex->PlatformData->Mips[0].BulkData.LockReadOnly());
    for (int32 Y = 0; Y < IndTex->GetSizeY(); Y++)
    {
        for (int32 X = 0; X < IndTex->GetSizeX(); X++)
        {
            FColor PixelColor = IndTexData[Y * IndTex->GetSizeX() + X];
            IndTexColors.Add(PixelColor);
        }
    }
    IndTex->PlatformData->Mips[0].BulkData.Unlock();

    TArray<FColor> SrcData;
    SrcData.SetNum(OutResolution.X * OutResolution.Y);

    for (int32 IndTexY = 0; IndTexY < IndTexRes.Y; ++IndTexY)
    {
        for (int32 IndTexX = 0; IndTexX < IndTexRes.X; ++IndTexX)
        {
            uint8 TileIndex = IndTexColors[IndTexY * IndTexRes.X + IndTexX].R;
            int32 CoordX = TileIndex % TileCol;
            int32 CoordY = TileIndex / TileCol;

            int32 StartTextureX = IndTexX * TileSize;
            int32 StartTextureY = IndTexY * TileSize;

            int32 StartTileX = CoordX * TileSize;
            int32 StartTileY = CoordY * TileSize;

            for (int32 TileY = 0; TileY < TileSize; ++TileY)
            {
                for (int32 TileX = 0; TileX < TileSize; ++TileX)
                {
                    SrcData[(StartTextureY + TileY) * OutResolution.X + (StartTextureX + TileX)] = TileSetTexColors[(StartTileY + TileY) * TileSetRes.X + (StartTileX + TileX)];
                }
            }
        }
    }

    Texture = FImageUtils::CreateTexture2D(OutResolution.X, OutResolution.Y,
        SrcData, this, TEXT("NAME_TextureSample"), EObjectFlags::RF_Public | EObjectFlags::RF_Transient, FCreateTexture2DParameters());

}

