#pragma once
#include <vector>

class Graph
{
private:
	int verticies_numer; //Liczba wierzcho�k�w
	std::vector<std::vector<int>> edges; // Ka�demu wierzcho�kowi odpowiada wektor indeks�w wierzcho�k�w kt�re s� z nim po��czone.

	void randomize_edges(int p);

public:
	Graph(int n, double p) : verticies_numer(n)
	{
		edges.resize(n);
		randomize_edges(p*100);
	};

	bool are_connected(int a, int b);
	int get_size() const;
	std::vector<int> get_adjacent(int a) const;
};