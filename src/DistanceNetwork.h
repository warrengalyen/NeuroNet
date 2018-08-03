#pragma once
#include "Network.h"

namespace NeuroNet
{
	class DistanceNetwork : public Network
	{
	public:
		DistanceNetwork(int inputsCount, int neuronsCount);
		~DistanceNetwork();

		int GetWinner();
	};
}