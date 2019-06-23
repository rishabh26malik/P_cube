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


void printLast_k(node *head, int k)
{
	int count=0;
	stack <int>s;
	node *tmp=head;
	while(tmp != NULL)
	{
		s.push(tmp->data);
		tmp=tmp->next;
		count++;	
	}
	if(k<=count)
	{	
		while(k--)
		{
			cout<<s.top()<<" ";
			s.pop();
		}
	}
}

int main()
{
	node *head=NULL;
	int n,k;
	cout<<"enter numbers to insert into list, -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		insert_at_end(&head,n);
	}
	cout<<"enter k : ";
	cin>>k;
	printList(head);
	printLast_k(head,k);
	return 0;
}
