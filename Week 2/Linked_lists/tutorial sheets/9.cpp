#include<iostream>
#include<bits/stdc++.h>
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

float cal_polynomial(node *poly, int x)
{
	float val=0;
	while(poly != NULL)
	{
		val+=poly->coeff * pow(x,poly->power);
		poly=poly->next;
	}
	return val;
}


int main()
{
	node *head1=NULL;
	int coef,exp,n;
	float x;
	cout<<"enter no. of terms in 1st polynomial :  ";
	cin>>n;
	cout<<"enter 1st polynomial : ";
	while(n--)
	{
		cin>>coef>>exp;
		insert_at_end(&head1,coef,exp);
	}
	printList(head1);
	cout<<"enter value of x : "<<endl;
	cin>>x;
	cout<<cal_polynomial(head1,x)<<endl;
	
	return 0;
}
