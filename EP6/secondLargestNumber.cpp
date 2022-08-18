#include<iostream>
using namespace std;
int main(){
	int a,b,c,temp;
	cin>>a>>b>>c;
	if(a<b || a<c){
		if(a<b){
			temp = a;
			a=b;
			b=temp;
		}
		if(a<c)
		{
			temp=a;
			a=c;
			c=temp;
		}
	}
	if(b>c)cout<<b;
	else cout<<c;

	return 0;
}