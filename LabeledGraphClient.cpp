#include <iostream>
#include "LabeledGraph.h"
using namespace std;

int main()
{
    LabeledGraph andrewlinlabeledgraph;
    andrewlinlabeledgraph.add_vertex("Avatar");
    andrewlinlabeledgraph.add_vertex("Zoe Saldana");
    andrewlinlabeledgraph.add_vertex("Sam Worthington");
    andrewlinlabeledgraph.add_vertex("Michelle Rodriguez");
    andrewlinlabeledgraph.add_vertex("Guardians of the Galaxy");
    andrewlinlabeledgraph.add_vertex("Chris Pratt");
    andrewlinlabeledgraph.add_vertex("Vin Diesel");
    andrewlinlabeledgraph.add_vertex("The Fate of the Furious");
    andrewlinlabeledgraph.add_edge("Chris Pratt", "Guardians of the Galaxy");
    andrewlinlabeledgraph.add_edge("Guardians of the Galaxy", "Zoe Saldana");
    andrewlinlabeledgraph.add_edge("Guardians of the Galaxy", "Vin Diesel");
    andrewlinlabeledgraph.add_edge("Zoe Saldana", "Avatar");
    andrewlinlabeledgraph.add_edge("Avatar", "Zoe Saldana");
    andrewlinlabeledgraph.add_edge("Avatar", "Sam Worthington");
    andrewlinlabeledgraph.add_edge("Avatar", "Michelle Rodriguez");
    andrewlinlabeledgraph.add_edge("Michelle Rodriguez", "Avatar");
    andrewlinlabeledgraph.add_edge("Michelle Rodriguez", "The Fate of the Furious");
    andrewlinlabeledgraph.add_edge("The Fate of the Furious", "Michelle Rodriguez");
    andrewlinlabeledgraph.add_edge("The Fate of the Furious", "Vin Diesel");
    andrewlinlabeledgraph.add_edge("Vin Diesel", "Guardians of the Galaxy");
    andrewlinlabeledgraph.add_edge("Vin Diesel", "The Fate of the Furious");
    cout << andrewlinlabeledgraph;
    return 0;
}