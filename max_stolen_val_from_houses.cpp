//geeksforgeeks    maximum stolen value from houses
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int func(int a[],int l,int h){
	//int mx=INT_MIN;
	if(l>h)
		return 0;
	int x=a[l]+func(a,l+2,h);
	int y=func(a,l+1,h);
	int mx=max(x,y);
	return mx;	
}

int main(){
	int a[5]={5,3,4,11,2};
	cout<<func(a,0,4);

}
