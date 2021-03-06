#include "stdafx.h"
#include "Network.h"
#include "Layer.h"

NeuroNet::Network::Network(int inputsCount, int layersCount)
{
	this->inputCount = MAX(1, inputsCount);
	this->layerCount = MAX(1, layersCount);

	this->layers = new Layer*[this->layerCount];
}

NeuroNet::Network::~Network()
{
	delete this->layers;
}

double *NeuroNet::Network::Compute(double *input)
{
	output = input;

	for (int x = 0; x < this->layerCount; x++)
	{
		output = this->layers[x]->Compute(output);
	}

	return output;
}

void NeuroNet::Network::Randomize()
{
	for (int x = 0; x < this->layerCount; x++)
	{
		this->layers[x]->Randomize();
	}
}

NeuroNet::Layer *NeuroNet::Network::Layers(const int index)
{
	return this->layers[index];
}




