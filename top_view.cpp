/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
        
        int hd(Node* root,int key,int count=0){
                if(root==0)
                        return -100;
                        
                if((root->data)==key)
                        return count;
                
                int l_val=hd(root->left,key,count-1);
                int r_val=hd(root->right,key,count+1);
                if(l_val==-100)
                        return r_val;
                else
                        return l_val;
        }        

    void topView(Node * root) {
         map<int,vector<int>> m;
         //bfs
         queue<Node*> q;
         q.push(root);
          while(!q.empty()){
                  Node* temp=q.front();
                  q.pop();
                  m[hd(root,temp->data)].push_back(temp->data);
                  if(temp->left!=0)
                          q.push(temp->left);
                  if(temp->right!=0)
                          q.push(temp->right);                 
          }
            map<int,vector<int>>::iterator it;
            for(it=m.begin();it!=m.end();it++){
                    cout<<(((*it).second).front())<<" ";
            }

    }
