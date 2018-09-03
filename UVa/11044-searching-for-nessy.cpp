#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
	int T,x,y;
	cin>>T;
	while((T--)!=0){
		cin>>x>>y;
		x--;
		y--;
		int r,c;
		if(x%3==0)
			r=x/3;
		else
			r=x/3+1;
		if(y%3==0)
			c=y/3;
		else
			c=y/3+1;
		cout<<r*c<<endl;
	}
}
