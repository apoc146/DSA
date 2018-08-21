#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node* Node;

Node addnode(int k){
	Node temp=(Node)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->data=k;
	return temp;
}

void prnt_nth_node(Node root,int n){
	static int cnt=0;
	if(root==NULL)
		return;

	prnt_nth_node(root->left,n);
	prnt_nth_node(root->right,n);
	if(cnt==n-1)
		std::cout<<(root->data);
	cnt++;
}

int main(){
	Node root=NULL;
	root=addnode(1);
	root->left=addnode(2);
	root->right=addnode(3);
	root->left->left=addnode(4);
	root->left->right=addnode(5);
	root->right->left=addnode(6);
	root->right->right=addnode(7);
	prnt_nth_node(root,5);
}
