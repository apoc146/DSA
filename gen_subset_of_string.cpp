#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void func(string s,int index=0,string cur=""){
	int n=s.size();
	if(n==index){
		cout<<cur<<endl;
		return ;
	}

	func(s,index+1,cur+s[index]);
	func(s,index+1,cur);
}

int main(){
	string s="apoc";
	int index=0;
	string cur="";
	func(s);
}
