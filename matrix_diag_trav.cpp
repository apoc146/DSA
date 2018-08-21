//leetcode 498

class Solution {
public:
    map<int,vector<int>> m;
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        
        vector<int> res;        //answer vector
        
        if(matrix.empty())
            return res;
        
        int n=matrix.size();
        int m1=matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m1;j++){
                m[i+j].push_back(matrix[i][j]);
            }
        }
        res.push_back(m[0][0]);
        map<int,vector<int>>::iterator it;
        int flag=1;
        it=m.begin();
        it++;
        for(;it!=m.end();it++){
            if(flag==1){
                res.insert(res.end(),(it->second).begin(),(it->second).end());
            }
            else{
                reverse((it->second).begin(),(it->second).end());
                res.insert(res.end(),(it->second).begin(),(it->second).end());        
            }
            flag=~flag;
        }
        return res;
    }
};
