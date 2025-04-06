// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "trackburn_projPawn.h"
#include "trackburn_projSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class TRACKBURN_PROJ_API Atrackburn_projSportsCar : public Atrackburn_projPawn
{
	GENERATED_BODY()
	
public:

	Atrackburn_projSportsCar();
};
