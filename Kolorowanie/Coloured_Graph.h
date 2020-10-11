#pragma once
#include "Graph.h"

class Coloured_Graph : public Graph
{
private:
	std::vector<int> colours; //Wektor indeks�w kolor�w odpowiednich wierzcho�k�w.

public:
	Coloured_Graph(Graph G) : Graph(G)
	{
		colours.resize(this->get_size(), -1);
	};

	void Algorithm();
	bool is_legal();
};