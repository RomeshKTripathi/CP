#include<iostream>
using namespace std;
int main(){
	int n,key,ct=0;
	long a;
	cin>>n>>key;
	while(n--){
		cin>>a;
		if(a%key==0)ct++;
	}
	cout<<ct;
	return 0;
}