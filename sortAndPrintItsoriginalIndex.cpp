#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> v = {20,40,30,10};
	vector<int> v1= v;
	sort(v1.begin(),v1.end());
	for(auto it = v1.begin();it!=v1.end();it++){
		cout<<(*it)<<" "<<find(v.begin(),v.end(),(*it))-v.begin()<<endl;
	}
	return 0;	
}