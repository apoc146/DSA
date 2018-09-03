#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int func(string s){
	int sum=0;
	int count=0;
	
	for(int i=0;i<s.size();i++){
		if(s[i]=='X')
			count=0;
		else
			count++;
		sum+=count;
	}
	return sum;
}
int main(){
	int T;
	string s;
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>s;
		cout<<func(s)<<endl;
	}
}
