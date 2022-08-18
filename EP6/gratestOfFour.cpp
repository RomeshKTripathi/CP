#include<bits/stdc++.h>
using namespace std;
int max_of_four(int a, int b, int c, int d){
	a=(a>b)?a:b;
	c=(c>d)?c:d;
	a=(a>c)?a:c;
	return a;
}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max_of_four(a,b,c,d);
	return 0;
}