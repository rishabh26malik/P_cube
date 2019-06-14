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


int cal_sum(node *head)
{
	int sum=0,first_node=head->data;
	if(head->next->next == NULL)
	{
		if(head->data > head->next->data)
			sum=head->data;
		else
			sum=head->next->data;
		return sum;
	}
	while(head->next != NULL)
	{
		if(head->data > head->next->data)
			sum+=head->data;
		head=head->next;
	}
	if(head->data > first_node)
		sum+=head->data;
	return sum;
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
	cout<<cal_sum(head)<<endl;
	return 0;
}
