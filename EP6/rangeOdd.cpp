#include<iostream>
using namespace std;
int main(){
	int L,R;
	cin>>L>>R;
	if(L>R || (L>1000000) || (R>1000000)) return 0;
	for(int i=L;i<=R;i++){
		if(i%2!=0)cout<<i<<" ";
	}
	return 0;
}