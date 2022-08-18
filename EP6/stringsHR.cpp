#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	cout<<a.size()<<" "<<b.size()<<endl;
	string s= a+b;
	cout<<s<<endl;
	char temp;
	temp = a[0];
	a[0]= b[0];
	b[0]=temp;
	cout<<a<<" "<<b;

	return 0;
}