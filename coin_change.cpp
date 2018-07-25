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
int main(){
	long int c[4]={2,5,3,6};
	int n=10;
	int c_count=4;
	
	cout<<"-->"<<getWays(n,c_count,c)<<"<--";
}
