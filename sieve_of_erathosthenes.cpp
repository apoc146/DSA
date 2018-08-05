#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void func(int n){
	bool a[n+1];
	memset(a,false,sizeof(a));
	for(int i=2;i<=n;i++){
		for(int j=i*2;j<=n;j+=i){
			if(a[j]==false){
				a[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(a[i]==false)
			cout<<i<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	func(n);
}
