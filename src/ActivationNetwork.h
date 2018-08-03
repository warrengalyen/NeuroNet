#pragma once

#include "Network.h"

namespace NeuroNet
{
	class IActivationFunction;

	class ActivationNetwork : public Network
	{
	public:
		ActivationNetwork(IActivationFunction *function, int inputsCount, int *neuronCounts);
		~ActivationNetwork();
	};
}