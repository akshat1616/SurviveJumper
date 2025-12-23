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
	
	UE_LOG(LogTemp, Display, TEXT("Movingobject BeginPlay first"));
	UE_LOG(LogTemp, Display, TEXT("Movingobject BeginPlay second"));
	UE_LOG(LogTemp, Display, TEXT("Movingobject BeginPlay third"));
	int MyInt = 100;
	MyInt = 50;
	
	bool MyBoolValue = false;
	MyBoolValue = true;

	float Mybool = false;
	char MyChar = true;

	float MyFloat = 12.34F;
	char Mychar = 'a';

	FString MyString = "Hello World";

}

// Called every frame
void AMovingobject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

