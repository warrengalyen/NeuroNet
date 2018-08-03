#pragma once
#include "IActivationFunction.h"

namespace NeuroNet
{
	class ThresholdFunction : public IActivationFunction
	{
	public:
		virtual double Function(double x);
		virtual double Derivative(double x);
		virtual double Derivative2(double x);
	};
}