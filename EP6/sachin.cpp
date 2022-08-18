#include "iostream"
using namespace std;
main(){
	int i=2,small=0,large=0,b;
	cout<<"Num 1 = ";
	int a;
	cin>>a;
	small= a;large= a;
	while(i<=10){
		cout<<"Num "<<i<<" = ";
		cin>>b;
		if(b<=small)small=b;
		if(b>=large)large=b;
		i++;
	}
	cout<<"large = "<<large<<"\n"<<"small = "<<small;
}