#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[7]={0,1,2,3,4,5,6};
	int* p1=&a[2];
	int* p2=&a[5];
	printf("%d",p2-p1);
	return 0;
}
