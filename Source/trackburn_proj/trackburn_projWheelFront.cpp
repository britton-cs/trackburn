// Copyright Epic Games, Inc. All Rights Reserved.

#include "trackburn_projWheelFront.h"
#include "UObject/ConstructorHelpers.h"

Utrackburn_projWheelFront::Utrackburn_projWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}