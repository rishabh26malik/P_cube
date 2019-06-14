#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

node *del=NULL;

void printList(node *head)
{
	while(head!=NULL)
	{
		//cout<<"1"<<endl;
		cout<<(head->data)<<" ";
		head=head->next;
	}
	cout<<endl;
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

int find_max(node *head)
{
	int max1=INT_MIN;
	while(head != NULL)
	{
		if(max1 < head->data)
			max1=head->data;
		head=head->next;
	}
	return max1;
}


void delete_greater_nodes_on_right(node *head)
{
	node *current=head, *tmp;
	int val=INT_MIN;
	while(current->next != NULL)
	{
		val=find_max(current->next);
		if(val > current->data )
		{
			//cout<<"in"<<endl;
			insert_at_end(&del,current->data);
		}
		//cout<<"val  : "<<val<<endl;
		current=current->next;
	}
	//cout<<"---"<<endl;
	
}


int main()
{
	node *head=NULL,*new_list=NULL;
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
	delete_greater_nodes_on_right(head);
	printList(del);
	return 0;
}
