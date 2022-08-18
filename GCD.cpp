#include<iostream>
int main(){
	int n1,n2;
	std::cin>>n1>>n2;
	int small = (n1<n2)?n1:n2;
	int smallcopy= small;
	int counter = 2;
	while(small>0){
		if(n1%small==0 and n2%small ==0)
			{
			std::cout<<small;
			break;
		}
		else {
			small =smallcopy/counter;
			counter++;
		}
	}
	
	return 0;

}