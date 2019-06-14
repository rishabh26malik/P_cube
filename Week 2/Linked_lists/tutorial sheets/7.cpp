#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};


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

void singly_2_circular(node **head)
{
	node *tmp=*head;
	while(tmp->next != NULL)
		tmp=tmp->next;
	tmp->next=*head;
}

void check_circular(node *head)
{
	node *tmp=head;
	while(tmp != NULL)
	{
		if(tmp->next==head)
		{
			cout<<"circular"<<endl;
			return;
		}
		tmp=tmp->next;
	}
	cout<<"not circular"<<endl;
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
	singly_2_circular(&head);
	check_circular(head);
	return 0;
}
