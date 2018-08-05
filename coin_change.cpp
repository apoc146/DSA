#include<iostream>
#include<algorithm>
using namespace std;
long getWays(long n, int c_count, long* c) {
        
        if(n==0)
                return 1;
	if(c[c_count-1]>n)
		return getWays(n,c_count-1,c);
        if(c_count<=0 && n>=1)
                return 0;
      
       
        return(getWays(n,c_count-1,c)+getWays(n-c[c_count-1],c_count,c));
}

int getWays2(int sum,int n,int a[]){
	int l[n+1][sum+1]={0};

	for(int i=0;i<=n;i++)
		l[i][0]=1;

	for(int i=0;i<=n;i++)
		for(int j=1;j<=sum;j++){
			int x=(i-1>0)?l[i-1][j]:0;
			int y=(j-a[i-1]>=0)?l[i][j-a[i-1]]:0;
			l[i][j]=x+y;
		}
	return l[n][sum];
}

int main(){
	int c[3]={1,2,3};
	//int n;
	//int c_count4;
	
	cout<<"-->"<<getWays2(4,3,c)<<"<--";
}
