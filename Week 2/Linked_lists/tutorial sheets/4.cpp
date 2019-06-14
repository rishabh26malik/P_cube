#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

node *new_list=NULL;

void printList(node *head)
{
	while(head!=NULL)
	{
		cout<<(head->data)<<" ";
		head=head->next;
	}
	cout<<endl;
}


void insert_at_front(node **head, int value)
{
	node *tmp=new node();
	tmp->data=value;
	tmp->next=*head;
	*head=tmp;
}


void insert_at_end(node **head, int value)
{
	node *tmp=new node();
	tmp->data=value;
	tmp->next=NULL;
	if(*head==NULL)
	{
		*head=tmp;
		return ;
	}	
	node *ptr=*head;
	while(ptr->next != NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=tmp;
	return ;
}


void delete_alternate_nodes(node *head)
{
	while(head!=NULL)
	{
		insert_at_end(&new_list,head->data);
		if(head->next ==NULL)
			return;
		head=head->next->next;
	}
}

int main()
{
	node *head=NULL;
	int n;
	cout<<"enter numbers to insert into list, -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		insert_at_end(&head,n);
	}
	printList(head);
	delete_alternate_nodes(head);
	printList(new_list);
	return 0;
}
