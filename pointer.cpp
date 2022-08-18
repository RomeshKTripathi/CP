#include<iostream>

int main(){
	int a=5,&b=a;
	std::cout<<"a= "<<a<<"\nb= "<<b<<"\naddress= "<<&a;
	return 0;
}