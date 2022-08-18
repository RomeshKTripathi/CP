#include<iostream>
#include<vector>
using namespace std;

vector<int> getSmall(int* arr,int key){
	int size = 6;
	vector<int> v;

	for(int i=0;i<6;i++){
		if(arr[i]<key){
			v.push_back(arr[i]);
			// cout<<arr[i]<<" ";
		}
	}
	return v;
}

int main(){
	int arr[] = {8,100,20,40,3,7};
	std::vector<int > v;
	v = getSmall(arr,10);
	for(auto i = v.begin();i<v.end();i++){
		cout<<(*i)<<" ";
	}
}