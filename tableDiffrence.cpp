#include<iostream>

int main(){
	int n1,n2;
	std::cin>>n1>>n2;

	for(int i=1;i<=10;i++){
		std::cout<<((n1*i)-(n2*i))<<" ";
	}
	return 0;
}