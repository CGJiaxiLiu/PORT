// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChBodyComponent.h"
#include "ChBody_SphereComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CHRONOPHYSICS_API UChBody_SphereComponent : public UChBodyComponent
{
	GENERATED_BODY()
	
public:
	virtual void PhysicsObjectConstruct() override;
};
