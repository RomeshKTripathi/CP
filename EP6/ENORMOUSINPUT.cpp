#include<iostream>
using namespace std;
int main(){
	int n,k,ct=0;
	long a;
	cin>>n>>k;
	while(n--){
		cin>>a;
		if(a%k==0)ct++;
	}
	cout<<ct;
}