#include<iostream>
#include<algorithm>
#include<vector>
int merge(int a[],int l,int m,int h){
	int i=l;
	int j=m+1;
	int aux[h-l];
	int k=0;
	int count=0;

	while(i<=m && j<=h){
		if(a[i]<a[h]){
			aux[k++]=a[i++];
		}
		else{	
			count+=m-i+1;
			aux[k++]=a[j++];
		}
	}
	while(i<=m)
		aux[k++]=a[i++];
	while(j<=h)
		aux[k++]=a[j++];

	for(int i=h;i>=l;i--)
		a[i]=aux[--k];

	return count;
	

}
int merge_sort(int a[],int l,int h){
	int count=0;
	if(l<h){
		int m=(l+h)/2;
		count=merge_sort(a,l,m);
		count+=merge_sort(a,m+1,h);
		count+=merge(a,l,m,h);
	}
	return count;
}

int main(){
	int a[5]={1,20,6,4,5};
	std::cout<<merge_sort(a,0,4);
}
