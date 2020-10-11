#include "Coloured_Graph.h"

void Coloured_Graph::Algorithm()
{
}

bool Coloured_Graph::is_legal()
{
    int n = this->get_size();
    for (int i = 0; i < n; i++)
    {
        if (colours.at(i) == -1) return false; //Wierzcho�ek nie pokolorowany
        for (auto edge : this->get_adjacent(i))
        {
            if (colours.at(i) == colours.at(edge)) return false; //S�siednie wierzcho�ki maj� ten sam kolor.
        }
    }
    return true;
}