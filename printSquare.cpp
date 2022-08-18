#include<iostream>

int main(){
	int size;
	std::cin>>size;

	for(int i =1;i<=size;i++){
		for(int j= 1;j<=size;j++){
			if(i==1 || i== size || j==1 || j==size)
				std::cout<<"*";
			else std::cout<<" ";
		}
		std::cout<<"\n";
	}
	return 0;
}