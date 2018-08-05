#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int solve(vector<int> &A) {
    long long mul;
    for(int i=0;i<A.size();i++)
        mul*=A[i];
    
    long long n=mul;
    long long n2=n;
    vector<long long> vec;
    long long i;
    
    for(i=2;i<=sqrt(n2) && n!=1;i++){
        while(n%i==0){
            vec.push_back(i);
            n=n/i;
        }
    }
    
    vector<long long>::iterator it;
    it=unique(vec.begin(),vec.end());
    int count=it-vec.begin();
	cout<<   
    return count;
    
}

int main(){
	vector<int> A{1,2,3};
	
	int ans=solve(A);
	cout<<"vector size"<<A.size();

}
