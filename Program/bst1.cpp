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
	return max(height(root->left),height(root->right)+1);
}
int main()
{
	node *root;
	root=new node();
	root->data=5;
	node *temp;
	temp=new node();
	temp->data=15;
	root->left=temp;
	temp=new node();
	temp->data=21;
	root->left->left=temp;
	temp=new node();
	temp->data=20;
	root->right=temp;
	temp=new node();
	temp->data=17;
	root->right->left=temp;
	temp=new node();
	temp->data=25;
	root->right->right=temp;
	cout<<height(root);
}

