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
  
int count_leaves(node *root)
{
	if(root==NULL)
		return 0;
	if(root->left ==NULL && root->right ==NULL)
		return 1;
	return count_leaves(root->left) + count_leaves(root->right);
}  

int main() 
{ 
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
    cout<<count_leaves(root)<<endl;
    return 0; 
}

