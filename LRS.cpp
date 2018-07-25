//longest repeating subsequence
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
int lcr(char* x,char* y,int m,int n){
	if(m==0||n==0)
		return 0;
	if(x[m-1]==y[n-1] && m!=n)
		return 1+lcr(x,y,m-1,n-1);
	return max(lcr(x,y,m-1,n),lcr(x,y,m,n-1));
}

int main(){
	char x[4]={'a','a','b','b'};
	char y[2]={'a','a'};
	int ans=lcr(y,y,2,2);
	cout<<ans;
}
