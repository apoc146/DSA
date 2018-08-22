//leet code #95 Unique Binary Tree Search Trees ||
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<TreeNode*> func(vector<int> a,int l,int h){
        vector<TreeNode*> trees;
        if(l>h){
            trees.push_back(NULL);
            return trees;
        }
        
        for(int i=l;i<=h;i++){
            vector<TreeNode*> left=func(a,l,i-1);
            vector<TreeNode*> right=func(a,i+1,h);
            
            for(int j=0;j<left.size();j++){
                for(int k=0;k<right.size();k++){
                    
                    TreeNode* lft= left[j];
                    TreeNode* rht= right[k];
                    TreeNode* root=new TreeNode(a[i]);
                    root->left=lft;
                    root->right=rht;
                    trees.push_back(root);
                }
                
            }
        }
            return trees;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> res;
        vector<int> num;
        if(n==0){
            vector<TreeNode*> vec;
            return vec;
        }
        for(int i=1;i<=n;i++){
            num.push_back(i);
        }
        
        res=func(num,0,num.size()-1);
        return res;
        
    }
};
