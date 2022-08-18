#include<iostream>
using namespace std;
long long int sum(int x,int n){
	if(n==1)return x;
	n-=1;
	return x+sum(x+2,n);
}
int main(){
	int n;
	int even=2,odd=1;
	cin>>n;
	cout<<sum(odd,n) ;
	cout<<" ";
	cout<< sum(even,n);
	return 0;
}