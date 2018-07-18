//implement kadane algorithm
//********largest sub array sum**********
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

	int n,ele;
	vector<int> vec;

	ios_base::sync_with_stdio(0);
	cout<<"enter number of elements\n";
	cin>>n;
	cout<<"now enter elements\n";
	
	for(int i=0;i<n;i++){
		cin>>ele;
		vec.push_back(ele);
	}

	int global_max=INT_MIN;
	int local_max=INT_MIN;

	for(int i=0;i<vec.size();i++){
		local_max=max(vec[i],local_max+vec[i]);
		global_max=max(global_max,local_max);
	}
	cout<<"largest subarry sum="<<global_max;
}
