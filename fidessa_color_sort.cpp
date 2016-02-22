#include <iostream>
#include "stdio.h"
#include <string>
#include <vector>
#include <algorithm>


typedef struct Node
{
	std::string data;
	struct Node *next;
}node;


void insert(node **head, std::string value)
{
	node *New_node;
	New_node=(node *)malloc(sizeof(node));
	New_node->data=value;
	New_node->next=NULL;

	if(*head==NULL)
	{
		*head=New_node;
	}
	else
	{
		node *temp=*head;

		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=New_node;
	}
	return;
}

void print_list(node **head)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
	}

	else
	{
		node *temp=*head;
		do
		{
      std::cout << temp->data + " ";
			temp=temp->next;

		}while(temp!=NULL);
	}
  std::cout<< std::endl;
	return;
}

void color_sort(Node **head1, Node **head2, Node **head3, std::vector<std::string> color) {

  std::vector<std::string>::iterator it1;
  std::vector<std::string>::iterator it2;

  Node *temp1 = *head1;
  Node *temp2 = *head2;

  while (temp1 != NULL && temp2 !=NULL) {
    it1 = find (color.begin(),color.end(),temp1->data);
    int pos1 =  distance(color.begin(), it1);
    it2 = find (color.begin(),color.end(),temp2->data);
    int pos2 =  distance(color.begin(), it2);

    if(pos1 < pos2) {
        insert(head3,temp1->data);
        temp1 = temp1->next;
    }
    else if ( pos2 < pos1) {
      insert(head3,temp2->data);
      temp2 = temp2->next;
    }
    else {
      insert(head3,temp2->data);
      insert(head3,temp1->data);
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
  }
  while (temp1 != NULL) {
    insert(head3, temp1->data);
    temp1 = temp1->next;
  }
  while (temp2 != NULL) {
    insert(head3, temp2->data);
    temp2 = temp2->next;
  }
  print_list(head1);
  print_list(head2);
  print_list(head3);
}

void test() {

  Node *head1 = NULL ;
  insert(&head1, "red");
  insert(&head1, "red");
  insert(&head1, "orange");
  insert(&head1, "green");
  insert(&head1, "black");

  Node *head2 = NULL;
  insert(&head2, "red");
  insert(&head2, "blue");
  insert(&head2, "purple");
  insert(&head2, "green");
  insert(&head2, "yellow");
  Node *head3 = NULL;

  std::vector<std::string> color = {"red", "blue", "orange","purple", "green", "black", "yellow"};

  color_sort(&head1,&head2, &head3,color);

}

int main(int argc, char const *argv[]) {

  test();

  return 0;
}
