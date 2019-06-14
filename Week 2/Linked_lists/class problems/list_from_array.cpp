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

int main()
{
	node *head=NULL;
	int n;
	cout<<"enter array size : ";
	cin>>n;
	int arr[n],i;
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)		// N SQUARE IMPLEMENTATION
	{
		insert_at_end(&head,arr[i]);
	}
	printList(head);
	
	head=NULL;
	
	for(i=n-1;i>=0;i--)		// order N  IMPLEMENTATION
	{
		insert_at_front(&head,arr[i]);
	}
	printList(head);
	return 0;
}
