#ifndef ADJGRAPH_H
#define ADJGRAPH_H

#include <iostream>
#include <vector>
#include <string>

class Node
{
public:
  std::string name_;
  std::vector<Node*> adjacentNodes_;// These are edges of each vertices
  Node(std::string nodeName): name_(nodeName) {};
  ~Node() = default; 
};


class GraphV1
{
private:
  // nodes_ could hold <Node> instead of <Node*> but to avoid unnecessary copy in memory we passed pointer elements to it
  std::vector<Node*> nodes_; // These are vertices
public:
  GraphV1() = default;
  ~GraphV1() = default;
  void addnewNode(std::string name);
  void printGraph();
  void addEdges(std::string node1, std::string node2);
};

#endif