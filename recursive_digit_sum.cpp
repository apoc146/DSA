//hackerrank ques.
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int superDigit(string n, int k) {
    
    int sum=0;
    
    for(int i=0;i<k;i++){
        sum+=stoi(n)%9;
    }    
    if(sum%9!=0)
        return sum%9;
    return 9;
}

int main(){
	cout<<superDigit("123",3);
}
