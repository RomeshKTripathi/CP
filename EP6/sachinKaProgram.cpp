#include<bits/stdc++.h>
using namespace std;
int main(){
	int t=10;
	int min,max;
	cin>>min>>max;
	if(min>max)
		swap(min,max);
	t-=2;
	while(t--){
		int n;
		cin>>n;
		if(n>max)max=n;
		else if(n<min)min=n;
	}
	cout<<"Min ="<<min;
	cout<<endl<<"Max ="<<max;
	return 0;

}