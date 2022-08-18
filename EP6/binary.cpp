#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	int value=0;
	for(int i= num;i>=0;--i){
		if(((num>>i)&1) == 1)value+=1;


			}
			cout<<value-1;
}