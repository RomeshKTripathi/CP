#include<iostream>
#define MAX 200
using namespace std;
int multiply(int arr[], int x, int size){
	int carry = 0;
	
	for(int i=0;i<size;i++){
		int prod = arr[i]*x+carry;
		arr[i]= prod%10;
		carry = prod/10;
	}
	while(carry){
		arr[size] = carry%10;
		carry/=10;
		size++;
	}
		return size;
}

void factorial(int num){
	int arr[MAX];
	arr[0]=1;
	int size=1;
	for(int i=1;i<=num;i++){
		size = multiply(arr,i,size);
	}
	for(int x =size-1;x>=0;x--)cout<<arr[x];
		cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		factorial(n);
	}
	return 0;
}