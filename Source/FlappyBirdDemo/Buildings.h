// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Buildings.generated.h"

UCLASS()
class FLAPPYBIRDDEMO_API ABuildings : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	TArray<UStaticMeshComponent*> Pillars;

	UPROPERTY(EditAnywhere)
	int numOfPillars = 10;

	UPROPERTY(EditAnywhere)
	float pillarGap = 100.f;

	UPROPERTY(EditDefaultsOnly)
	UStaticMesh* pillarMesh;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* Root;

	UFUNCTION(BlueprintCallable)
	void SpawnPillars();
	
public:	
	// Sets default values for this actor's properties
	ABuildings();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
