// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBaseActor.generated.h"

UCLASS()
class BREAKOUT_API AMyBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBaseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Collision Box")
		class UBoxComponent* Box;

	UPROPERTY(EditAnywhere, Category = "Visual")
		class UPaperSpriteComponent* Sprite;
	
	class UPrimitiveComponent* GetPhysicsComponent();
};
