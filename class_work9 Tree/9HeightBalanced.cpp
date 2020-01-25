//USING STACK
#include<bits/stdc++.h>
using namespace std;
class node{
	
	public:
	int data;
	node *left,*right;
	
	node(int data)
	{
		this->left=NULL;
		this->right=NULL;
		this->data=data;
	}
};

stack<int> s;

int height(node *root)
{
	if(root==NULL) return 0;
	return max(height(root->left),height(root->right))+1;
}


int  isbalanced(node *root)
{
	if(root==NULL)		return 1;
	  
	int left=height(root->left);
	cout<<left<<" ";
	int right=height(root->right);
	cout<<right<<" ";

	if(abs(left-right)<=1&&isbalanced(root->left)&&isbalanced(root->right))
	{
		return 1;
	}
	return 0;
}

int main()
{
	node *root=new node(1);
	node *temp= new node(2);
	root->left=temp;
	temp= new node(4);
	root->left->left=temp;
	temp= new node(3);
	root->right=temp;
	temp= new node(6);
	root->right->right=temp;
	temp= new node(5);
	root->right->left=temp;
	temp= new node(6);
	root->right->right->right=temp;
	temp= new node(6);
	root->right->right->right->right=temp;

	cout<<isbalanced(root);
	
		
	
}
