#include<iostream>
#include<vector>

using namespace std;
void clearAll(vector<int> &vec){
	vec.clear();
}
void eraseAt(vector<int> &vec,int pos){
	vec.erase(vec.begin()+5-1);
}
void eraseInRange(vector<int> &vec,int start,int end){
	for(int i = start-1;i<end;i++){
		vec.erase(vec.begin()+start-1);
	}
}
int main(){
	vector<int> vec = {8,5,3,5,2,3,4};
	// clearAll(vec);
	// eraseAt(vec,5);
	eraseInRange(vec,4,6);
	for(auto x:vec)cout<<x<<" ";
	return 0;
}