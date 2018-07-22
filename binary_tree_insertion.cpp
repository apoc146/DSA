#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node* Node;

void inorder(Node root){
	if(root){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}


Node add_node(Node root,int k){
	Node temp;
	temp=(Node)malloc(sizeof(struct node));
	temp->left=0;
	temp->right=0;
	temp->data=k;
	
	if(root==0){
		root=temp;
		return root;
	}

	queue<Node>q;
	q.push(root);

	while(!q.empty()){
		Node temp2=q.front();
		q.pop();
		if(!temp2->left){
			temp2->left=temp;
			return root;
			break;
		}
		else{
			q.push(temp2->left);
		}
		if(temp2->right)
			q.push(temp2->right);
		else{
			temp2->right=temp;
			return root;
			break;
		}
	}
	

}

int main(){
	ios_base::sync_with_stdio(0);
	int a[6]={1,3,6,5,9,8};
	Node root=0;
	for(int i=0;i<6;i++){
		root=add_node(root,a[i]);
	}

	inorder(root);
}
