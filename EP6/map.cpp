#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> m;
	m[8]= 23;
	m[88]=2;
	m[9];
	map<int,int>::iterator it;
	for(it = m.begin();it!=m.end();it++)cout<<it->first<<" "<<it->second<<endl;
	return 0;
}