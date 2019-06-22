#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node *left,*right;
};
int height(node *root)
{
	if(root==NULL)
		return 0;
	if(root->left)
		return (height(root->left)+1);
}
int height1(node *root)
{
	if(root==NULL)
		return 0;
	if(root->right)	
		return (height(root->right)+1);
}


int main()
{
	int h,h1;
	node *root;
	root=new node();
	root->data=1;
	node *temp;
	temp=new node();
	temp->data=2;
	root->left=temp;
	temp=new node();
	temp->data=4;
	root->left->left=temp;
	//temp=new node();
	//temp->data=5;
	//root->left->right=temp;
	temp=new node();
	temp->data=3;
	root->right=temp;
	temp=new node();
	temp->data=6;
	root->right->left=temp;
//	temp=new node();
//	temp->data=7;
//	root->right->right=temp;
	
	h=height(root);
	cout<<h<<endl;
	h1=height1(root);
	cout<<h1<<endl;
	if(h==h1)
		cout<<"Balanced";
	else
		cout<<"Not balanced";
}

