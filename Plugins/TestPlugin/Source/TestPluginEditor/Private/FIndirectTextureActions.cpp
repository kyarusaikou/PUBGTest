// Fill out your copyright notice in the Description page of Project Settings.


#include "FIndirectTextureActions.h"
#include "IndirectTexture.h"

FText FIndirectTextureActions::GetName() const
{
    return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_TestPlugin", "Indirect Texture");
}

UClass* FIndirectTextureActions::GetSupportedClass() const
{
    return UIndirectTexture::StaticClass();
}

uint32 FIndirectTextureActions::GetCategories()
{
    return EAssetTypeCategories::MaterialsAndTextures;
}

FColor FIndirectTextureActions::GetTypeColor() const
{
    return FColor::White;
}