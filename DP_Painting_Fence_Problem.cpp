#include<iostream>
#include<algorithm>
using namespace std;
int func(int n,int k){
	int diff[n+1];
	int same[n+1];
	int total[n+1];

	//for n==1
	
	same[1]=0;
	diff[1]=k;
	total[1]=k;

	for(int i=2;i<=n;i++){
		same[i]=diff[i-1];
		diff[i]=(same[i-1]+diff[i-1])*(k-1);
		total[i]=same[i]+diff[i];
	}
	
	return total[n];

}
int main(){
	ios_base::sync_with_stdio(0);
	int n;
	int k;
	cin>>n;
	cin>>k;
	cout<<func(n,k);
}


