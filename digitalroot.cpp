#include<iostream>

int digitalRoot(int num){
	int sum=0;
	do{
		sum+=num%10;
		num/=10;
	}while(num!=0);
	if(sum<10 and sum>0)return sum;
	else digitalRoot(sum);
}

int main(){
	int n;
	std::cin>>n;
	std::cout<<digitalRoot(n);
	return 0;

}