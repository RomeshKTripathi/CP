#include<iostream>

int fibonacci(int n,int a=1,int b=1){
	static int count=1;
	count++;
	if(count==n) return b;
	fibonacci(n,b,(a+b));
}

int main(){
	int num;
	std::cin>>num;
	std::cout<<fibonacci(num);
	return 0;
}