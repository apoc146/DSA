#include <iostream>
using namespace std;
int bs_mod(int a[],int l,int h){
    if(l<=h){
        int mid = l+(h-l)/2;
        if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1])
            return a[mid];
    
        int l=bs_mod(a,l,mid-1);
        int r=bs_mod(a,mid+1,h);
        if(!l)
            return l;
        else
            return r;
            
    }
    return 0;
}
int main() {
	//code
	int arr[6]={1,1,3,2,4,2};
	int ans1=bs_mod(arr,0,5);
	int ans2=arr[0];
	for(int i=1;i<6;i++){
		if(arr[i]!=ans1){
			ans2=ans2^arr[i];
		}
	}
	cout<<ans1<<" "<<ans2;
	return 0;
}
