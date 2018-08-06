//hacker rank powersum question
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int powerSum(int X, int N,int base=1) {
    if(pow(base,N)<X)
        return powerSum(X-pow(base,N),N,base+1) + powerSum(X,N,base+1);
    if(pow(base,N)==X)
        return 1;
    return 0;
}

int main(){
	cout<<powerSum(100,2);

}
