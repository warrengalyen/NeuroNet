#pragma once
#include "Layer.h"

namespace NeuroNet
{
	class DistanceNeuron;

	class DistanceLayer : public Layer
	{
	public:
		
		DistanceLayer(int neuronCount, int inputCount);
		~DistanceLayer();

		DistanceNeuron *operator[] (const int index);
	};
}