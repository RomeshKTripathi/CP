#include<iostream>
using namespace std;
int sumOfDigits(int num){
	int mod,result=0;
	result+= num%10;
	do{
		mod=num%10;
		num/=10;

	}while(num!=0);
	return (result+mod);
}

int main(){
	int t,n;
	cin>>t;
	if(t>1000) return 0;
	while(t--){
		cin>>n;
		cout<< sumOfDigits(n)<<endl;
	}
	return 0;
}