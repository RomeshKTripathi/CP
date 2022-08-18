#include<iostream>
#include<vector>
using namespace std;

vector<int> makeVec(int *arr, int n){
	vector<int> res;
	for(int i=0;i<n;i++)res.push_back(arr[i]);
		return res;
}
int main(){
	vector<int> vec;
	int arr[] = {8,4,3,5,2,4};
	vec = makeVec(arr,6);
	for(auto x:vec)cout<<(x)<<" ";
}