#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int partition(int a[],int l,int h){
	int i=l-1;
	int j=l;
	int pivot_ele=a[h];
	for(j=l;j<=h-1;j++){
		if(a[j]<pivot_ele){
			//cout<<"into pivot\n";
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return i+1;
}

int quick_select(int a[],int l,int h,int k){
	if(l<=h){
		int p=partition(a,l,h);

		if(p==k-1)
			return a[k-1];
		if(k-1<p)
			return quick_select(a,l,p-1,k);
		
		return quick_select(a,p+1,h,k);
		
		//quick_select(a,l,p-1);
		//quick_select(a,p+1,h);
		
	}
}

int main(void){
	int a[7]={3,6,2,7,9,8,4};
	for(int i=0;i<7;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	for(int i=0;i<7;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	cout<<quick_select(a,0,6,2);
	
}
