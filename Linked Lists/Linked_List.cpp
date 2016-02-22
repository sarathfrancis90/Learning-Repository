#include <iostream>
#include "stdio.h"
#include "Linked_List.h"

int main(int argc, char const *argv[]) {
  //
  Linked_List list;
  //
  // list.printList();
  // std::cout << "inserting Numbers 1 to 10" << std::endl;
  // for (int i = 10; i >= 1; i--) {
  //   list.insertAtTheEnd(i);
  // }
  // list.insertAtTheEnd(5);
  // list.insertAtTheEnd(6);
  // list.insertAtTheEnd(10);
  // list.insertAtTheEnd(1);
  // list.insertAtTheEnd(4);
  // list.insertAtTheEnd(2);
  // list.insertAtTheEnd(8);
  // list.insertAtTheEnd(1);
  // list.insertAtTheEnd(4);
  // list.insertAtTheEnd(5);
  // list.insertAtTheEnd(3);
  // list.insertAtTheEnd(5);
  // list.insertAtTheEnd(3);
  // list.insertAtTheEnd(8);
  // list.insertAtTheEnd(2);

  // list.printList();
  // list.deleteAvalue(5);
  // list.printList();
  // list.deleteAvalue(11);
  // list.printList();
  // list.insertAttheStart(0);
  // list.insertAttheStart(0);

  // list.printList();
  // list.insertAfterAnElement(4,0);
  // list.printList();
  // list.insertAfterAnElement(8,0);
  // list.printList();
  // list.insertAfterAnElement(10,0);
  // list.printList();
  // list.insertAfterAnElement(9,0);
  // list.printList();
  // list.insertAfterAnIndex(3,0);
  // list.printList();
  // list.insertAfterAnIndex(10,0);
  // list.insertAfterAnElement(10,10);
  // list.insertAfterAnElement(1,10);
  // list.insertAfterAnElement(1,10);
  // list.insertAfterAnElement(7,10);

  // list.printList();
  // std::cout << "After removing duplicates" << std::endl;
  // list.removeDupilicateswithoutBuffer();
  // list.findKthLastElement(2);
  // list.findKthLastElement(1);
  // list.findKthLastElement(10);

// Linked_List new_list;
//   list.partitionLinkedListaboutX(7, new_list);
  // list.printList();
Linked_List num1;
num1.insertAtTheEnd(7);
num1.insertAtTheEnd(1);
num1.insertAtTheEnd(6);
num1.insertAtTheEnd(8);
num1.insertAtTheEnd(9);

Linked_List num2;

num2.insertAtTheEnd(5);
num2.insertAtTheEnd(9);
num2.insertAtTheEnd(2);


  num1.printList();
  num2.printList();
  Linked_List sum_list;
  list.sumOfTwoLinkedList(num1,num2,sum_list);

  return 0;
}
