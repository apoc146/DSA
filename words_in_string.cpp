#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1="i   am         a bot";
	stringstream s2(s1);
	string word;
	while(s2>>word){
		cout<<word<<endl;
	}
}
