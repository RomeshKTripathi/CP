#include<iostream>
using namespace std;

int main(){

	int round;
	int p1,p2,p1l=0,p2l=0;
	cin>>round;
	while(round--){
		cin>>p1>>p2;
		if(p1>p2) p1l+=p1-p2;
		else if(p2>p1) p2l+=p2-p1;
	}	
	if(p1l>p2l)cout<<"1 "<<p1l;
	else cout<<"2 "<<p2l;
	return 0;
}