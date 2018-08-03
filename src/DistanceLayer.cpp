#include "stdafx.h"
#include "DistanceLayer.h"
#include "DistanceNeuron.h"

NeuroNet::DistanceLayer::DistanceLayer(int neuronCount, int inputCount) : Layer(neuronCount, inputCount)
{
	for (int x = 0; x < this->neuronCount; x++)
	{
		this->neurons[x] = new DistanceNeuron(inputCount);
	}
}

NeuroNet::DistanceLayer::~DistanceLayer()
{
	for (int x = 0; x < this->neuronCount; x++)
	{
		delete this->neurons[x];
	}
}

NeuroNet::DistanceNeuron* NeuroNet::DistanceLayer::operator[](const int index)
{
	return (DistanceNeuron *)this->neurons[index];
}


