#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> v{10,5,3,20,100};
	int res = count_if(v.begin(),v.end(),
		[](int x){return x>=10;});
	cout<<res;	
	return 0;
}