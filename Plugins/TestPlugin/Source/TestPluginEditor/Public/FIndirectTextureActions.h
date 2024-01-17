// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AssetTypeActions_Base.h"

class FIndirectTextureActions : public FAssetTypeActions_Base
{
public:

    virtual FText GetName() const override;
    virtual UClass* GetSupportedClass() const override;
    virtual uint32 GetCategories() override;
    virtual FColor GetTypeColor() const override;
};