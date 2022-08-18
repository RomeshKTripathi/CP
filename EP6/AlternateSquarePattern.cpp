#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cin>>n;
	if(n>200)return 0;
	for(int j=1;j<=n;j++){
		if(j%2==0){
			//loop for numbers in decreasing order
			int limit=i-5;
			for(i;i>limit;--i){
				cout<<i<<" ";
			}
			cout<<endl; i+=6;
		}
		else{
			int limit=i+5;
			//loop for numbers in increasing order
			for(i;i<limit;i++){
				cout<<i<<" ";
			} 
			cout<<endl;i+=4;
		}
	}
	return 0;
}