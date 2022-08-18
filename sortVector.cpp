#include<iostream>
#include<vector>
using namespace std;

void sortVector(vector<int> &vec){
	cout<<"Called";
	int vSize = vec.size()-1;
	for(int i=0;i<vSize;i++){
		auto it = vec.begin();
		for(int j=0;j<vSize-i;j++){
			if((*it) > (*(++it))){
				auto val = *it;
				*it = *(++it);
				*(++it) = val;
			}
			it++;
		}
	}
	for(auto it = vec.begin();it!=vec.end();it++)cout<<(*it)<<" ";
		cout<<"Nothing Printed...";
}

// void iterfront(vector<int> &vec){
// 	for(auto it= vec.begin();it!=vec.end();it++)cout<<(*it)<<endl;
// }
int main(){
	vector<int> vec = {6,3,4,2,6,2,1};
	sortVector(vec);
	// iterfront(vec);
}