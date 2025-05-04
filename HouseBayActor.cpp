// HouseBayActor.cpp

#include "HouseBayActor.h"
#include "Engine/Engine.h" // Needed for GEngine->AddOnScreenDebugMessage

AHouseBayActor::AHouseBayActor()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AHouseBayActor::BeginPlay()
{
    Super::BeginPlay();

    // Display "House Bay" message on screen for 5 seconds
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("House Bay"));
    }
}

void AHouseBayActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}