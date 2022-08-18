#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int>> &arr){
	int swap;
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			if(i<j){
				swap = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = swap;
			}
		}
	}
}//function to Transpose a given Matrix .
void print(vector<vector<int>> &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<'\n';
	}
}//function to print a given Matrix
int main(){
	vector<vector<int>> arr;
	int m=3,n=3;
	for(int i=0;i<m;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			v.push_back(i);
		}
		arr.push_back(v);
	}
	transpose(arr);
	print(arr);
	return 0;
}