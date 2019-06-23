#include<bits/stdc++.h>
#include<iostream>
#include<stack>
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


node* reverse(node *head)
{
	stack <node*>s;
	node *tmp=head;
	while(tmp->next != NULL)
	{
		s.push(tmp);
		tmp=tmp->next;
	}
	head=tmp;
	while(!s.empty())
	{
		tmp->next=s.top();
		s.pop();
		tmp=tmp->next;
	}
	tmp->next=NULL;
	return head;
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
	
	node *rev=reverse(head);
	printList(rev);
	return 0;
}
