#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> v{100,1,20,4,200,1};
	auto it = find_if(v.begin(),v.end(),
		[](int x){return x<10;});
	cout<<(*it);
	return 0;
}