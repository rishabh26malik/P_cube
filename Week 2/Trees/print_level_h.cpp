#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};



node* newNode(int data) 
{ 

    node* node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return(node); 
} 
  
void print_level_h(node *root, int level)
{
	if(root==NULL)
		return;
	if(level==1)
	{
		cout<<(root->data)<<" ";
		return;
	}
	print_level_h(root->left,level-1);
	print_level_h(root->right,level-1);
}  

int main() 
{ 
	int h;
    node *root = newNode(1);   
    root->left        = newNode(2); 
    root->right       = newNode(3); 
    root->left->left  = newNode(4); 
  /*  
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   4    5      6    7 
 
*/
	root->left->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	cout<<"enter level : ";
	cin>>h;
    print_level_h(root,h);
    return 0; 
}

