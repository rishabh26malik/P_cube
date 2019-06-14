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

void find_larger(node *head1, node *head2)
{
	int max1;
	while(head1!=NULL)
	{
		max1=max(head1->data, head2->data);
		insert_at_end(&new_list, max1);
		head1=head1->next;
		head2=head2->next;
	}
}

int main()
{
	node *head1=NULL, *head2=NULL,*tmp;
	int n,val,t;
	cout<<"enter number of nodes to insert : ";
	cin>>n;
	t=n;
	cout<<"enter numbers to insert into list 2 : ";
	while(n--)
	{
		cin>>val;
		insert_at_end(&head1,val);
	}
	printList(head1);

	cout<<"enter numbers to insert into list 2 : ";
	while(t--)
	{
		cin>>val;
		insert_at_end(&head2,val);
	}
	printList(head2);
	find_larger(head1,head2);
	printList(new_list);
	return 0;
}
