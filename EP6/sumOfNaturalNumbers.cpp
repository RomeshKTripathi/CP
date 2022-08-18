#include<iostream>
using namespace std;
int main(){
	int n;
	long long int value=0;
	cin>>n;
	n+=1;
	while(n--){
		value+=n;
	}; 
	cout<<value;
	return 0;
}