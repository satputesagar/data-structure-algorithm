#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	 Node *left,*right;
	 Node(int val){
	 	data=val;
	 	left=NULL;
	 	right=NULL;
	 }
};

int sumNode(Node *root){
	if(root==NULL){
		return 0;
	}
	return sumNode(root->left)+sumNode(root->right)+(root->data);
}
int main()
{
	Node *root=new Node(4);
	root->left=new Node(2);
	root->right=new Node(5);
	root->left->left=new Node(1);
	root->left->right=new Node(10);
	root->right->left=new Node(14);
	root->right->right=new Node(19);


	cout<<sum`Node(root)<<endl;
	return 0;
}