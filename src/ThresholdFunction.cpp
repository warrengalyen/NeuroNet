#include "stdafx.h"
#include "ThresholdFunction.h"

double NeuroNet::ThresholdFunction::Function(double x)
{
	return (x >= 0) ? 1 : 0;
}

double NeuroNet::ThresholdFunction::Derivative(double x)
{
	return 0.0;
}

double NeuroNet::ThresholdFunction::Derivative2(double x)
{
	return 0.0;
}


