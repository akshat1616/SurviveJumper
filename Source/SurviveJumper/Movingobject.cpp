// Fill out your copyright notice in the Description page of Project Settings.


#include "Movingobject.h"

// Sets default values
AMovingobject::AMovingobject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingobject::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Display, TEXT("Movingobject Beginplay first"));
	UE_LOG(LogTemp, Display, TEXT("Movingobject Beginplay second"));
	UE_LOG(LogTemp, Display, TEXT("Movingobject Beginplay third"));



	
}

// Called every frame
void AMovingobject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

