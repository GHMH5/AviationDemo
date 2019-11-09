// Fill out your copyright notice in the Description page of Project Settings.

#include "FloatingTarget.h"


// Sets default values
AFloatingTarget::AFloatingTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 50.0f;       //Scale our height
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);


}

