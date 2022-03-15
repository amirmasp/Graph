#include "adjGraph.h"

void GraphV1::addnewNode(std::string name) {
  Node* V = new Node(name);// Allocates a memory to hold Node object and returns a pointer to that memory address
  // After allocation constructure of this Node object will be called by passing name argument to it
  this->nodes_.push_back(V);  
}

void GraphV1::printGraph() {
  std::cout << "Adjacency List Graph:" << std::endl;
  for (Node* node: this->nodes_) {
    std::cout << "\tVertex' " << node->name_ << "' has " << node->adjacentNodes_.size() << " edges, ";
    for (Node* adjNode: node->adjacentNodes_) {
      std::cout << "  ->  " << adjNode->name_;
    }
    std::cout << std::endl;
  }
}

void GraphV1::addEdges(std::string node1Name, std::string node2Name) {
  bool arg1Exists = false;
  bool arg2Exists = false;
  for (Node* n1: this->nodes_) {
    if (n1->name_ == node1Name) {
      arg1Exists = true;
      for (Node* n2: this->nodes_) {
        if (n2->name_ == node2Name) {
          arg2Exists = true;
          n1->adjacentNodes_.push_back(n2);
          n2->adjacentNodes_.push_back(n1);
          break;
        }
      }
    break;
    }
  }
  if(!arg1Exists) {
    std::cout << "Vertex '" << node1Name << "' does not belong to this graph!\n";
  }
  else {
    if(!arg2Exists) {
      std::cout << "Vertex '" << node2Name << "' does not belong to this graph!\n";
    }
  }
}