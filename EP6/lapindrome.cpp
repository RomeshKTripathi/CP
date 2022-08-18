#include<bits/stdc++.h>
using namespace std;
void makeZero(int left[],int right[]){
	for(int i=0;i<26;i++)	left[i]=right[i]=0;
}
int main(){
	int t;
	cin>>t;
	int left[26],right[26];
	makeZero(left,right);
	
	while(t--){
	string s;
	cin>>s;
	bool flag=false;
	int size,index,mid;
	size = s.size();
	mid=size/2;

	for(int i=0;i<mid;i++){
		index = (s[i]-'a');
		left[index]++;
	}


	if(size%2!=0)mid+=1;
	for(int j=mid;j<s.size();j++){
		index = (s[j]-'a');
		right[index]++;
	}

	for(int i=0;i<26;i++){
		if(left[i]!=right[i]){
			flag= true;
			break;
		}
	}


	if(!flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	makeZero(left,right);
	}
	return 0;
}