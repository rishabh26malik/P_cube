#include<iostream>
using namespace std;

class node
{
	public:
	int data,flag=0;
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


void detect_y(node *head1, node *head2)
{
	node *tmp=head1;
	while(tmp != NULL)
	{
		tmp -> flag =1;
		tmp=tmp->next;
	}
	tmp=head2;
	while(tmp != NULL)
	{
		if(tmp->flag == 1)
		{
			cout<<"y detected"<<endl;
			return;
		}
		tmp=tmp->next;
	}
	cout<<" y not found"<<endl;
}


int main()
{
	node *head1=NULL, *head2=NULL,*tmp;
	int n;
	cout<<"enter numbers to insert into list 1, -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		insert_at_end(&head1,n);
	}
	printList(head1);

	cout<<"enter numbers to insert into list 2, -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		insert_at_end(&head2,n);
	}
	printList(head2);
	tmp=head1;
	while(tmp->next != NULL)
	{
		tmp=tmp->next;
	}
	tmp->next=head2->next->next;
	detect_y(head1, head2);
	return 0;
}
