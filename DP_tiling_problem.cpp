//GFG DP tiling problem
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
int func_1(int n){
	if(n==2)
		return 2;
	if(n==1)
		return 1;
	if(n==0)
		return 0;

	return func(n-1)+func(n-2);
}
*/

//DP implementation down
int func_2(int n){
	int memo[n+1];
	
	memo[0]=0;
	memo[1]=1;
	memo[2]=2;
	for(int i=3;i<=n;i++)
		memo[i]=memo[i-1]+memo[i-2];
		
	return memo[n];

}
int main(){
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
	cout<<func_2(n);
}
