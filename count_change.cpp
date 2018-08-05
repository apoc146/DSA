#include<iostream>
#include<algorithm>
using namespace std;

long getWays(int n, int c_count,int c[]){
    
        if(n==0)
            return 1;
        if(n<0)
            return 0;
        if(c_count<=0 && n>0)
            return 0;
        return getWays(n,c_count-1,c)+getWays(n-c[c_count-1],c_count,c);

}

int main(){
	
	int n;
	int sum;
	
	cin>>sum>>n;
	int a[100];
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		a[i]=ele;
	}


	long ans=getWays(n,sum,a);
	cout<<ans;
}

