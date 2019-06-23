#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

//abdfffdbacegggeca

node* newNode(int data) 
{ 

    node* node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return(node); 
} 
  /*
void printLeft(node *root,int level)
{
	if(root->left==NULL)
	{
		for(int i=1;i<=level;i++)
			cout<<(root->data)<<" ";
		return;
	}
	cout<<(root->data)<<" ";
	printLeft(root->left,level+1);
	for(int i=1;i<=level;i++)
		cout<<(root->data)<<" ";
}  


void printRight(node *root,int level)
{
	if(root==NULL)
		return;
	for(int i=1;i<=level;i++)
		cout<<(root->data)<<" ";
	printRight(root->right,level+1);
	if(root->right)
		cout<<(root->data)<<" ";
}  
*/
void printPattern(node *root)
{
	if(root==NULL)
		return;
	if(root->left == NULL && root->right ==NULL){
		cout<<(root->data)<<" "<<(root->data)<<" "<<(root->data)<<" ";
		return;
	}
	cout<<(root->data)<<" ";
	printPattern(root->left);
	printPattern(root->right);
	if(root->left || root->right)
		cout<<(root->data)<<" ";
	
	//cout<<(root->data)<<" ";
}

int main() 
{ 
    node *root = newNode(1);   
    root->left        = newNode(2); 
    root->right       = newNode(3); 
    root->left->left  = newNode(4); 

  /*  
           1 
       /     \ 
      2       3 
    /          \ 
   4            5 
     
abdfffdbacegggeca

*/

	root->right->right=newNode(5);
	printPattern(root);
    return 0; 
}

