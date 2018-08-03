#include "stdafx.h"
#include "SigmoidFunction.h"

NeuroNet::SigmoidFunction::SigmoidFunction()
{
}

NeuroNet::SigmoidFunction::SigmoidFunction(double alpha)
{
	this->alpha = alpha;
}

double NeuroNet::SigmoidFunction::Function(double x)
{
	return (1 / (1 + exp(-alpha * x)));
}

double NeuroNet::SigmoidFunction::Derivative(double x)
{
	double y = Function(x);

	return (alpha * y * (1 - y));
}

double NeuroNet::SigmoidFunction::Derivative2(double x)
{
	return (alpha * x * (1 - x));
}




