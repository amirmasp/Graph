#include "adjGraph.h"

// This file runs a simple adjacency list graph using adjGraph.h
int main() {
  
  // Creating an adjacency lists graph
  GraphV1 adjacencyListGraph;
  // Adding Nodes to the Graph list
  adjacencyListGraph.addnewNode("Belmont");
  adjacencyListGraph.addnewNode("Hillsborough");
  adjacencyListGraph.addnewNode("Livermore");
  adjacencyListGraph.addnewNode("Marin City");
  adjacencyListGraph.addnewNode("Sonoma");

  // Connecting network nodes to each other
  adjacencyListGraph.addEdges("Belmont", "Sonoma");
  adjacencyListGraph.addEdges("Belmont", "Marin City");
  adjacencyListGraph.addEdges("Hillsborough", "Marin City");
  adjacencyListGraph.addEdges("Hillsborough", "Livermore");
  adjacencyListGraph.addEdges("Hillsborough", "Sonoma");
  adjacencyListGraph.addEdges("Marin City", "Sonoma");
  adjacencyListGraph.addEdges("Livermore", "Sonoma");
  adjacencyListGraph.addEdges("Phoenix", "Sonoma");
  adjacencyListGraph.addEdges("Livermore", "Tucson");

  //Print the graph 
  adjacencyListGraph.printGraph();

  return 0;

}