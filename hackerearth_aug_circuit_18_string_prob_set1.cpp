//https://www.hackerearth.com/challenge/competitive/august-circuits-18/problems/
/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    string s="";
    cin>>s;

    map<char,int> hashmap;
    for(int i=0;i<s.size();i++){
        hashmap[s[i]]++;
    }
    
    int max_val=-10000;
    char char_max;
    map<char,int>::iterator it;
    for(it=hashmap.begin();it!=hashmap.end();it++){
        if(it->second >max_val){
            char_max=it->first;
            max_val=it->second;
        }
    }
    
    cout<<n-max_val;
    
}
