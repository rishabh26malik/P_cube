#include<iostream>
using namespace std;

class node
{
	public:
	int coeff,power;
	node *next;
};

node *add=NULL;

void printList(node *head)
{
	while(head!=NULL)
	{
		cout<<(head->coeff)<<"x^"<<(head->power)<<" + ";
		head=head->next;
	}
	cout<<endl;
}

void insert_at_end(node **head, int coef, int exp)
{
	node *tmp=new node();
	tmp->coeff=coef;
	tmp->power=exp;
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

void add_polynomial(node *poly1, node *poly2)
{
	while(poly1!=NULL && poly2!=NULL )
	{
		if(poly1->power > poly2->power)
		{
			insert_at_end(&add,poly1->coeff,poly1->power);
			poly1=poly1->next;
		}
		else if(poly2->power > poly1->power)
		{
			insert_at_end(&add,poly2->coeff,poly2->power);
			poly2=poly2->next;
		}	
		else
		{
			insert_at_end(&add,(poly2->coeff) + (poly1->coeff),poly2->power);
			poly2=poly2->next;
			poly1=poly1->next;
		}
	}
	while(poly1!=NULL)
	{
		insert_at_end(&add,poly1->coeff,poly1->power);
		poly1=poly1->next;
	}
	while(poly2!=NULL)
	{
		insert_at_end(&add,poly2->coeff,poly2->power);
		poly2=poly2->next;
	}
}

int main()
{
	node *head1=NULL, *head2=NULL,*tmp;
	int coef,exp,n;
	cout<<"enter no. of terms in 1st polynomial :  ";
	cin>>n;
	cout<<"enter 1st polynomial : ";
	while(n--)
	{
		cin>>coef>>exp;
		insert_at_end(&head1,coef,exp);
	}
	printList(head1);
	
	cout<<"enter no. of terms in 2nd polynomial :  ";
	cin>>n;
	cout<<"enter 2nd polynomial : ";
	while(n--)
	{
		cin>>coef>>exp;
		insert_at_end(&head2,coef,exp);
	}
	printList(head2);
	add_polynomial(head1, head2);
	printList(add);
	return 0;
}
