#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<string,int>> dict;
	int t;
	
		string name;
		int num;
		long int number;
		cin>>num;
		for(int i=0;i<num;i++){
			cin>>name;
			cin>>number;
			dict.push_back(make_pair(name,number));
		}
		for(int i=0;i<num;i++){
			cout<<dict[i].first<<" = "<<dict[i].second<<endl;
		}
	
	return 0;
}