#include <cstring>
#include "Node.h"
#include "Student.h"

int main() {
  Student* studentA = new Student();
  strcpy(studentA->name, "Gavin Parker");
  studentA->id = 472779;
  studentA->gpa = 3.0;
  
  Student* studentB = new Student();
  strcpy(studentB->name, "Ava Parker");
  studentB->id = 123456;
  studentB->gpa = 4.0;
  
  Node* head = new Node(studentA);
  Node* next = new Node(studentB);

  head->getNext();
  head->setNext(next);
  head->getNext();
  head->getStudent();
    
  return 1;
}
