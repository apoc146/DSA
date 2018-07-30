#include<iostream>
#include<algorithm>
using namespace std;
void sort(int a[],int l,int m,int h){
		int aux[h-l+1];
		int k=0;
		int i=l;
		int j=m+1;

		while(i<=m && j<=h){
			if(a[i]<a[j]){
				aux[k++]=a[i];
				i++;
			}

			else{
				aux[k++]=a[j];
				j++;
			}
		}

		while(i<=m){
			aux[k++]=a[i++];
		}

		while(j<=h){
			aux[k++]=a[j++];
		}
		for(int i=h;i>=l;i--){
			a[i]=aux[--k];
		}

}

void merge_sort(int a[],int l,int h){
	
	if(l<h){
		int m=(l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		sort(a,l,m,h);
	}	
}

int main(){
	int a[5]={4,2,5,3,1};
	merge_sort(a,0,4);
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
}
