#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
	int data;
	struct Node *next;
}node;


void insert(node **head, int value)
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

void delete_list(node **head)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		node *temp=*head;
		node *temp2;
		do
		{
			temp2=temp;
			free(temp);
			temp=temp2;
			temp=temp->next;
		}while(temp!=NULL);
		*head=NULL;
		printf("List is deleted\n");
	}
	return;
}


void delete_duplicates(node **head,int value)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		int count=0;

		if((*head)->data==value)
		{
			count=1;
		}
		node *temp =(*head);
		node *prev=temp;
		temp=temp->next;
		while(temp!=NULL)
		{
			if(temp->data == value)
			{
				count++;
			}
			if(temp->data==value && count>1)
			{
				node *temp2=temp;
				free(temp);
				temp=temp2;
				temp=temp->next;
				prev->next=temp;
			}
			else
			{
			temp=temp->next;
			prev=prev->next;
			}
		}
	}
	return;
}
void remove_all_duplicates(node **head)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		node *temp=(*head);
		while(temp!=NULL)
		{
			int value=temp->data;
			delete_duplicates(head,value);
			temp=temp->next;
		}
	}
}
void delete_node(node **head,int value)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{


		if((*head)->data==value)
		{
			node *temp=(*head)->next;
			free(*head);
			*head=temp;
		}
		else
		{
			node *temp=(*head);
			node *prev=temp;
			temp=temp->next;
			while(temp!=NULL)
			{
				if(temp->data==value)
				{
					node *temp2=temp;
					free(temp);
					temp=temp2;
					temp=temp->next;
					prev->next=temp;
					break;

				}
			prev=prev->next;
			temp=temp->next;
			}
		}


	}
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
			printf("%d ",temp->data);
			temp=temp->next;

		}while(temp!=NULL);
	}
	printf("\n");
	return;
}

void print_last_k_elements(node **head,int position)
{
	if(*head==NULL)
	{
		printf("List is empty\n");
	}

	else
	{
		node *temp=*head;
		node *prev;
		int curr=1;
		while(curr<=position)
		{
			temp=temp->next;
			curr++;
		}
		prev=*head;
		while(temp!=NULL)
		{
			prev=prev->next;
			temp=temp->next;
		}
		print_list(&prev);
	}
}
node *sum_linked_list_reversed(node **head1,node **head2)
{
	node *temp1=(*head1);
	node *temp2=(*head2);
	node *sum=NULL;
	if(temp1&temp2)
	{
		sum= sum_linked_list_reversed(temp1->next,temp2->next)
	}
	else if(temp1)
	{
		sum= sum_linked_list_reversed(temp1->next,temp2->next)

}

node * Sum_linked_list(node **head1, node **head2)
{
	node *temp1=(*head1);
	node *temp2=(*head2);
	node *sum=NULL;
	int sum1=0;
	int carry=0;
	int num1=0,num2=0;
	while(temp1||temp2||carry)
	{
		sum1=num1=num2=0;
		if(temp1)
		{
			num1=temp1->data;
			temp1=temp1->next;
		}
		if(temp2)
		{
			num2=temp2->data;
			temp2=temp2->next;
		}
		sum1=num1+num2+carry;
		if(sum1>=10)
		{
			sum1=sum1-10;
			insert(&sum,sum1);
			carry=1;
		}
		else
		{
			insert(&sum,sum1);
			carry=0;

		}
	}
	return sum;
}
void test()
{
	node *head=NULL;
	//print_list(&head);
	//insert(&head,10);
	//insert(&head,20);
	//print_list(&head);
	//delete_list(&head);
	//print_list(&head);
	/*insert(&head,10);
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,30);
	insert(&head,30);
	insert(&head,20);
	insert(&head,20);
	insert(&head,40);
	insert(&head,20);
	insert(&head,50);
	insert(&head,50);
	insert(&head,20);
	insert(&head,20);
	insert(&head,30);
	insert(&head,20);
	insert(&head,20);
	insert(&head,30);
	insert(&head,30);
	print_list(&head);*/
	//delete_node(&head,20);
	//print_list(&head);
	//delete_duplicates(&head,20);
	//print_list(&head);
	//remove_all_duplicates(&head);
	//print_last_k_elements(&head,4);
	//print_list(&head);

	//partition_list(&head,20);

	node *num1=NULL;
	node *num2=NULL;
	node *sum=NULL;
	insert(&num1,9);
	insert(&num1,9);
	insert(&num1,9);
	insert(&num1,9);
	print_list(&num1);
	insert(&num2,1);
	print_list(&num2);
	// sum=Sum_linked_list(&num1,&num2);
	// print_list(&sum);
	
}



void main()
{
	test();
}
