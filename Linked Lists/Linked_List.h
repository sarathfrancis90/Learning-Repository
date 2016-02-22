#include "stdio.h"
#include <iostream>
#include <cmath>


class Node {


public:
  int data;
  Node *Next;

  Node (int value) : Next ( NULL ) , data (value) {}

  ~Node(void) {
    delete Next;
  }
};

class Linked_List {

  public :

  void insertAtTheEnd(int value);

  void insertAttheStart(int value);

  void insertAfterAnElement(int element, int value);

  void insertAfterAnIndex(int index, int value);

  void printList();

  void deleteAvalue(int value);

  void removeDupilicateswithoutBuffer();

  void findKthLastElement(int k);

  void partitionLinkedListaboutX(int x, Linked_List new_list);

  void sumOfTwoLinkedList(Linked_List num1, Linked_List num2, Linked_List sum_list);

private:

  Node *head = NULL;

};


void Linked_List::insertAtTheEnd(int value) {

  if(head == NULL) {
    head = new Node (value);
    return;
  }
  else {
    Node *newNode = new Node(value);
    Node *temp = head;
    while(temp->Next != NULL) {
      temp = temp->Next;
    }
    temp->Next = newNode;
  }
  return;
}
void Linked_List::insertAttheStart(int value) {
  if(head == NULL) {
    head = new Node (value);
    return;
  }
  else {
    Node *newNode = new Node(value);
    newNode ->Next = head;
    head = newNode;
    return;
  }
}

void Linked_List::insertAfterAnElement(int element, int value) {
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
    return;
  }
  else {
    Node *newNode = new Node(value);
    Node *temp = head;
    while(temp->data != element && temp->Next!= NULL) {
      temp = temp->Next;
    }
    if(temp->data == element) {
      newNode->Next = temp ->Next;
      temp->Next = newNode;
      return;
    }
    else if(temp->Next == NULL) {
      std::cout << "Element " << element << " not found in the list" << std::endl;
      return;
    }

  }
}

void Linked_List::insertAfterAnIndex(int index, int value) {
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
    return;
  }
  else {
    Node *newNode = new Node(value);
    Node *temp = head;
    int count = 1;
    while (count < index && temp->Next != NULL) {
      temp = temp -> Next;
      count++;
    }
    if(count == index) {
      newNode->Next = temp ->Next;
      temp->Next = newNode;
      return;
    }
    else if(temp -> Next == NULL) {
      std::cout << "Element not found in the list" << std::endl;
      return;
    }
  }
}
void Linked_List::deleteAvalue(int value) {
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
    return;
  }
  else {
    Node *temp = head;
    if(temp->data == value) {
      head = head ->Next;
      return;
    }
    else {
      Node *prev = head;
      temp = temp->Next;
      while (temp != NULL) {
        if(temp ->data == value) {
          prev->Next = temp->Next;
          std::cout << "Element " <<  temp->data << " is deleted from the list" <<std::endl;
          return;
        }
        temp = temp->Next;
        prev = prev->Next;
      }
      std::cout << "Element " << value << " is not found in the list" << std::endl;
    }

  }
}

void Linked_List::removeDupilicateswithoutBuffer() {
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
    return;
  }
  else {
    Node *temp = head;

    while(temp != NULL) {
      Node *runner = temp->Next;
      Node *prev_runner = temp;
      int curr_data = temp -> data;
      while(runner != NULL) {
        if(runner -> data == curr_data) {
          prev_runner->Next = runner -> Next;
          runner = runner->Next;
        }
        else {
          prev_runner = prev_runner->Next;
          runner = runner-> Next;
        }

      }
      temp = temp->Next;
    }
    return;
  }

}

void Linked_List::findKthLastElement(int k) {
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
    return;
  }
  else {
    Node *temp = head;
    Node *runner  = temp;

    for (int i = 1; i < k; i++) {
      runner = runner->Next;
    }
    while (runner->Next != NULL) {
      runner = runner->Next;
      temp  = temp  -> Next;
    }
    std::cout << k << "th last element is " << temp ->data << std::endl;
  }
}
void Linked_List::partitionLinkedListaboutX(int x, Linked_List new_list) {
  // if(head == NULL) {
  //   std::cout << "List is empty" <<std::endl;
  //   return;
  // }
  // else {
  //   Node *temp = head;
  //
  //   while(temp != NULL) {
  //       if(temp->data <= x) {
  //         temp = temp->Next;
  //       }
  //       else {
  //         Node *frontrunner = temp->Next;
  //         Node *backrunner = temp;
  //       while(backrunner -> data > x && frontrunner != NULL) {
  //         int temp_data = backrunner->data;
  //         backrunner->data = frontrunner ->data;
  //         frontrunner->data = temp_data;
  //         frontrunner = frontrunner->Next;
  //         backrunner = backrunner ->Next;
  //       }
  //       if(temp ->data <= x) {
  //         temp = temp->Next;
  //       }
  //     }
  //   }
  // }
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
    return;
  }
  else {
    new_list.insertAttheStart(x);
    Node *temp = head;
    while (temp != NULL) {
      if (temp -> data > x) {

        new_list.insertAtTheEnd(temp -> data);
      }
      else if(  temp ->data  == x) {
        new_list.insertAfterAnElement(x,temp->data);
      }
      else {
        new_list.insertAttheStart(temp ->data);
      }
      temp = temp ->Next;
    }
    new_list.deleteAvalue(x);
    new_list.printList();
  }
}

void Linked_List::sumOfTwoLinkedList(Linked_List num1, Linked_List num2, Linked_List sum_list) {

  Node *num1_runner = num1.head;
  Node *num2_runner = num2.head;
  int carry = 0;
  while(num1_runner != NULL && num2_runner != NULL) {

    int sum = num1_runner->data + num2_runner->data + carry;

    if(sum >= 10) {
      carry = trunc(sum/10);
    }
    else {
      carry  = 0;
    }
    int sumWithoutCarry = sum % 10;

    sum_list.insertAtTheEnd(sumWithoutCarry);
    std::cout << "sum = "<<sum << " sum without carry = "<<sumWithoutCarry << " carry = "<<carry << std::endl;
      num1_runner = num1_runner ->Next;
      num2_runner = num2_runner->Next;
  }
  while (num1_runner != NULL) {
    sum_list.insertAtTheEnd(num1_runner -> data);
    num1_runner = num1_runner ->Next;
  }
  while (num2_runner != NULL) {
    sum_list.insertAtTheEnd(num2_runner -> data);
  }
  sum_list.printList();

  // std::cout << head1 ->data << head2 -> data << std::endl;
}
void Linked_List::printList()  {
  if(head == NULL) {
    std::cout << "List is empty" <<std::endl;
  }
  else  {
    Node *temp = head;
    while (temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->Next;
    }
    std::cout << std::endl;
  }

}
