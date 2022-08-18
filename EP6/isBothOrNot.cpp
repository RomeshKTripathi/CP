#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=1000){
		if((n%5!=0)&&(n%11!=0)) cout<<"NONE";
		else if((n%5==0)&&(n%11==0)) cout<<"BOTH";
		else cout<<"ONE";
	}
	return 0;
}