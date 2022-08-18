#include<iostream>
using namespace std;
int main(){
	int t;
	long long int ts,js,steps;
	cin>>t;
	while(t--){
		cin>>ts;
		if(ts%2!=0){
			steps=(ts-1)/2;
			cout<<steps<<endl;
		}
		else{
			int ct=0;
			while(ts%2==0){
				ts/=2;
				ct++;
			}
			steps=(ts-1)/2;
			cout<<steps<<endl;
		}
	}
}