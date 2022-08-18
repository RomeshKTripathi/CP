#include<iostream>
#include<vector>
using namespace std;
void iterfront(vector<int> &vec){
	for(auto it= vec.begin();it!=vec.end();it++)cout<<(*it)<<endl;
}
void iterback(vector<int> &vec){
	for(auto it = --vec.end();it>=vec.begin();it--)cout<<(*it)<<endl;
}
void vecSum(vector<int> &vec){
	int sum=0;
	for(auto x:vec)sum+=x;
		cout<<sum;
}

int main(){
	vector<int> vec = {1,2,3,4,5};
	vecSum(vec);
	return 0;
}