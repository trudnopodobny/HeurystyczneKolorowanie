#include "Graph.h"
#include <cstdlib>

void Graph::randomize_edges(int p)
{
	for (int a = 0; a < verticies_numer; ++a)
	{
		for (int b = 0; b < verticies_numer; ++b)
		{
			if (!are_connected(a,b) && (rand() % 100) < p) //Jezeli a i b nie s¹ s¹siadami, wygeneruj polaczenie z prawd. p
			{
				edges.at(a).push_back(b);
				edges.at(b).push_back(a);
			}
		}
	}
}

bool Graph::are_connected(int a, int b)
{
	for(auto itr = edges.at(a).begin(); itr != edges.at(a).end(); itr++)
	{
		if (*itr == b) return true;
	}
	return false;
}

int Graph::get_size() const
{
	return verticies_numer;
}

std::vector<int> Graph::get_adjacent(int a) const
{
	return edges.at(a);
}