// Copyright Epic Games, Inc. All Rights Reserved.

#include "trackburn_projWheelRear.h"
#include "UObject/ConstructorHelpers.h"

Utrackburn_projWheelRear::Utrackburn_projWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}