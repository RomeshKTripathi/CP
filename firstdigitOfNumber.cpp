#include<iostream>

int main(){
	int n;
	std::cin>>n;
	int fDigit;
	do{
		fDigit = n%10;
		n/=10;
	}while(n!=0);
	std::cout<<fDigit<<"\n";
	return 0;
}