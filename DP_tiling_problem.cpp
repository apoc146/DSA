//GFG DP tiling problem
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int func(int n){
	if(n==2)
		return 2;
	if(n==1)
		return 1;
	if(n==0)
		return 0;

	return func(n-1)+func(n-2);
}
int main(){
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<func(n);
}
