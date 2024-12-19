#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "Student.h"
using namespace std;

class Node {
 public:
  // constructor/destructor
  Node(Student*);
  ~Node();
  
  // node functions
  Node* getNext();
  void setNext(Node*);
  Student* getStudent();
  
 private:
  Student* student; // associated student
  Node* next; // linked node
};

#endif
