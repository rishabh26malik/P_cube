#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

int delete_key(node **head, int key)
{
	node *tmp=*head;
	if(tmp->data == key)
	{
		*head=(*head)->next;
		delete(tmp);
		return 1;
	}
	node *prev=tmp;
	while(tmp!=NULL && tmp->data != key)
	{
		prev=tmp;
		tmp=tmp->next;
	}
	if(tmp==NULL)
		return 0;
	
	prev->next=tmp->next;
	delete(tmp);
	return 1;
}

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

int main()
{
	node *head=NULL;
	int n,res;
	cout<<"enter numbers to insert into list, -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		insert_at_front(&head,n);
	}
	printList(head);
	cout<<"enter key to delete : ";
	cin>>n;
	res=delete_key(&head, n);	
	if(res)
	{
		cout<<"deleted"<<endl;
		printList(head);
	}
	else
		cout<<"key not found"<<endl;
	return 0;
}
