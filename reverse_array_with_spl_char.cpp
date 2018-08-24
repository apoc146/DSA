//https://www.geeksforgeeks.org/reverse-an-array-without-affecting-special-characters/
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<ctype.h>

using namespace std;

void func(string s){
	int i=0;
	int j=s.size()-1;
	
	while(i<=j){
		if(isalpha(s[i])&&isalpha(s[j])){
			swap(s[i],s[j]);
		}
		else if(isalpha(s[i]) && !isalpha(s[j])){
			j--;
		}
		else if(!isalpha(s[i])&&isalpha(s[j])){
			i--;
		}
		i--;
		j--;
	    }
	}

int main(){
	//cout<<"enter string with special chars to reverse\n";
//	string s;
	//cin>>s;
	//getline(cin,s);
	string s="a,b$c";
	func(s);
	cout<<s;

}
