#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

int flag=0;

node* newNode(int data) 
{ 

    node* node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    return(node); 
} 
  
int height(node *root)
{
	if(root==NULL)
		return 0;
	return max(height(root->left),height(root->right))+1;
}    
  
void print_level_h(node *root, int level)
{
	if(flag==1)
		return;
	if(root==NULL)
		return;
	if(level==1 )
	{
		flag=1;
		cout<<(root->data)<<" ";
		return;
	}
	print_level_h(root->left,level-1);
	print_level_h(root->right,level-1);
}  

void print_left_view(node *root)
{
	int h=height(root);
	int i;
	for(i=1;i<=h;i++)
	{
		flag=0;
		print_level_h(root,i);
	}
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
    print_left_view(root);
    return 0; 
}

