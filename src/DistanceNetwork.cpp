#include "stdafx.h"
#include "DistanceNetwork.h"
#include "DistanceLayer.h"

NeuroNet::DistanceNetwork::DistanceNetwork(int inputsCount, int neuronsCount) : Network(inputsCount, 1)
{
	this->layers[0] = new DistanceLayer(neuronsCount, inputsCount);
}

NeuroNet::DistanceNetwork::~DistanceNetwork()
{
	delete this->layers[0];
}

int NeuroNet::DistanceNetwork::GetWinner()
{
	double min = output[0];
	int minIndex = 0;

	for (int i = 1, n = sizeof(output) / sizeof(double); i < n; i++)
	{
		if (output[i] < min)
		{
			min = output[i];
			minIndex = i;
		}
	}

	return minIndex;
}


