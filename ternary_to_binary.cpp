#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<string>
using namespace std;
struct node{
	char c;
	struct node* left;
	struct node* right;

};
typedef struct node* Node;

Node add_node(char c){
	Node temp=(Node)malloc(sizeof(struct node));
	temp->c=c;
	temp->left=0;
	temp->right=0;
	return temp;
}

void inodr(Node root){
	
	if(root!=0){
		inodr(root->left);
		cout<<root->c<<" ";
		inodr(root->right);
	}
}

int main(){
	string s="a?b?c:d:e";
	stack<Node> st;

	st.push(add_node(s[0]));
	for(int i=1;i<s.size();i++){
		if((st.top()->c)!=':'){
			st.push(add_node(s[i]));
		}	
		else{
			Node r=add_node(s[i]);
			st.pop();
			Node l=st.top();
			st.pop();
			st.pop();
			Node top=st.top();
			st.pop();

			//Node top_n=add_node(top);
			//Node l_n=add_node(l);
			//Node r_n=add_node(r);
			top->left=l;
			top->right=r;
			st.push(top);
		}
	}

	inodr(st.top());
	cout<<endl;
	//cout<<((st.top()))->right->left->c;
	
}
