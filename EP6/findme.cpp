#include<iostream>
using namespace std;
int main(){
	int n,k,a;
	cin>>n>>k;
	while(n--)
		{
			cin>>a;
			if(a==k) {
				cout<<"1";
				return 0;
			}
		};
		cout<<"-1";

	return 0;
}