#pragma once

#include "Neuron.h"

namespace NeuroNet
{
	class DistanceNeuron : public Neuron
	{
	public:
		DistanceNeuron(int inputCount) : Neuron(inputCount) { }

		virtual double Compute(double* input);
		
	};
}



