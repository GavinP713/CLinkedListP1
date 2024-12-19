#include "Node.h"
#include "Student.h"

Node::Node(Student* _student) {
  student = _student;
  next = NULL;
}

Node::~Node() {
  delete student;
  next = NULL;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node* node) {
  next = node;
}

Student* Node::getStudent() {
  return student;
}
