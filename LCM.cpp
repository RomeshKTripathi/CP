#include<iostream>
int main(){
	int n1,n2;
	std::cin>>n1>>n2;
	int l,u;
	l = (n1<n2)?n1:n2;
	u = (n1>n2)?n1:n2;
	for(int i=1; i<u;i++){
		if(i%10 ==0){
			if((u*i)%l==0) {
				std::cout<<u*i;
				break;	
			}
		}else{
			if((l*i)%u==0){
				std::cout<<l*i;
				break;
			}
		}
	}
}