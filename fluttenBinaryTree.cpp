// narmal binary tree in flatten

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left,*right;
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};

void Flatten(Node* root){

	if(root==NULL|| (root->left==NULL && root->right==NULL)){
		return;
	}

	if(root->left!=NULL){
		Flatten(root->left);

		Node* temp=root->right;
		root->right=root->left;
		root->left=NULL;

		Node *t=root->right;
		while(t->right!=NULL){
			t=t->right;
		}
		t->right=temp;
	}
Flatten(root->right);
}

void Inorder(Node* root){

	if(root==NULL){return;}
	Inorder(root->left);
	cout<<root->data<<" -> ";
	Inorder(root->right);
}

int main()
{
	Node *root=new Node(3);
	root->left=new Node(4);
	root->right=new Node(5);
	root->left->left=new Node(6);
	root->left->right=new Node(8);
	root->right->left=new Node(7);
	root->right->right=new Node(9);

	Flatten(root);
	Inorder(root);
	cout<<endl;
	return 0;
}