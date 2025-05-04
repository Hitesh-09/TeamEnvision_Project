// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
// HouseBayActor.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HouseBayActor.generated.h"

UCLASS()
class BeachProject01_API AHouseBayActor : public AActor
{
    GENERATED_BODY()
	
public:	
    AHouseBayActor();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;
};