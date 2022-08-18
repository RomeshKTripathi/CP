#include<iostream>
#include<vector>
using namespace std;
int main(){

	vector<int> v ;
	cout<<v.capacity();
	v.push_back(24);
	v.push_back(24);
	v.push_back(24);
	cout<<"\n"<<v.size()<<endl<<v.capacity();
	v.push_back(24);
	v.push_back(24);
	cout<<"\n"<<v.size()<<endl<<v.capacity();
	
	return 0;
	
}