#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
	Node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};
Node* InBST(Node *root,int val)
{
	if(root==NULL)
	{
		return new Node(val);
	}
	if(val< root ->data){
		root->left=InBST(root->left,val);
	}
	else{
		root->right=InBST(root->right,val);
	}
	return root;
};

void Inorder(Node *root)
{
	if(root==NULL) return;

	Inorder(root->left);
	cout<<root->data<<" -> ";
	Inorder(root->right);
}


int main()
{
 Node *root=NULL;
root=InBST(root,5);
InBST(root,2);
InBST(root,1);
InBST(root,6);
InBST(root,4);

Inorder(root);
 return 0;
}