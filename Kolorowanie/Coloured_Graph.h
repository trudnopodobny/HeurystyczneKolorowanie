#pragma once
#include "Graph.h"

class Coloured_Graph : public Graph
{
private:
	std::vector<int> colours; //Wektor indeksów kolorów odpowiednich wierzcho³ków.

public:
	Coloured_Graph(Graph G) : Graph(G)
	{
		colours.resize(this->get_size(), -1);
	};

	void Algorithm();
	bool is_legal();
};