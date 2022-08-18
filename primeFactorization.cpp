#include<iostream>
bool isPrime(int n){
	for(int i= 2;i<n;++i) 
		{
			if(n%i==0)
			return false;
		}

		return true;
}

void printPrimeFactotization(int n){
	for(int i=2; i<=n;i++){
		if(isPrime(i)){
			while(n%i == 0){
				std::cout<<i<<" ";
				n/=i;
			}
		}
	}
}
int main(){
	int num ;
	std::cin>>num;
	printPrimeFactotization(num);
	return 0;

}