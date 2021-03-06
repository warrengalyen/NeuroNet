#pragma once
#include "Layer.h"

namespace NeuroNet
{
	
	class IActivationFunction;
	class ActivationNeuron;

	class ActivationLayer : public Layer
	{
	public:
		ActivationLayer(int neuronCount, int inputCount, IActivationFunction *activationFunction);
		~ActivationLayer();

		ActivationNeuron *operator[] (const int index);
	};
}
