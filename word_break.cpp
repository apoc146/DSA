#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

vector<string> dict{"mobile","samsung","sam","sung","man","mango","icecream","and","go","i","like","ice","cream"};

bool belongs(string s){
	if(find(dict.begin(),dict.end(),s)!=dict.end())
		return true;
	else
		return false;
}

bool func(string str){

	if(str.size()==0)
		return true;
	
	int size=str.size();
	for(int i=1;i<=size;i++){
		if(belongs(str.substr(0,i))&&func(str.substr(i,size-i)))
			return func(str.substr(i,size-i));
	}
	return false;
}

int main(){
	string s1("like");
	string s2("samsungandmangok");

	if(func(s1))
		cout<<"YES ";
	else 
		cout<<"NO ";

	if(func(s2))
		cout<<"YES ";
	else
		cout<<"NO ";
	
}
