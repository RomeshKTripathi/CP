#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> m;
	unordered_map<int,int>::iterator it;
	int n;
	cin>>n;
	int num,index=1;
	while(n--){
		cin>>num;
		m[num]=index;
		index++;
	}
	int q;
	cin>>q;
	while(q--){
		cin>>num;
		if(m[num]!=0){
			cout<<"Yes "<<m[num]<<endl;
		}
		else{

		}
	}
	return 0;
}