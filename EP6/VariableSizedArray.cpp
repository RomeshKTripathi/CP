#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int** Array = new int*[n];
	for(int i=0;i<n;i++){
		int k;
		cin>>k;

		Array[i]=new int[k];
		for(int j=0;j<k;j++) cin>>Array[i][j];
	}
	while(q-- >0){
		int i1,i2;
		cin>>i1>>i2;
		cout<<Array[i1][i2]<<endl;
	};

	return 0;
}