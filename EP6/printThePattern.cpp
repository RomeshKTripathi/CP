#include<iostream>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	int inc =1, dec = row-1, num= 0;
	for(int i=1;i<=row;i++){
		num=i;
		cout<<i<<" ";
		for(int j=1;j<=col;j++){
			if(j%2==0){
				cout<<(num+inc)<<" ";
				num+=inc;
			}
			else{		
				cout<<(num+dec)<<" ";
				num+=dec;
			}
		}
		dec-=2;
		inc+=2;
		cout<<endl;
	}
	return 0;
}