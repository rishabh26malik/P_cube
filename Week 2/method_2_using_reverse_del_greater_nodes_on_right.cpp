#include<iostream>
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


void reverse(node **head)
{
	node *current=*head, *right=(*head)->next, *prev=NULL;
	while(current != NULL)
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=right;
	}
	*head=prev;
}	

void del_greater_nodes_on_right(node *head)
{
	int max1=head->data;
	insert_at_end(&del,head->data);
	head=head->next;	
	while(head!=NULL)
	{
		if(max1 < head->data)
			{max1=head->data;
		//else
			insert_at_end(&del,head->data);}
		head=head->next;
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
	reverse(&head);
	del_greater_nodes_on_right(head);
	reverse(&del);
	printList(del);
	
	return 0;
}
