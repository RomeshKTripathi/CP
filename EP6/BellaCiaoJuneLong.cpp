#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int  D,d,P,Q,a,total=0;
		cin>>D>>d>>P>>Q;
		a=D/d;
		if(a%2==0) total=d*((a/2)*(2*P+(a-1)*Q));
		else total=d*(a*(P+((a-1)/2)*Q));
		total+=(D%d)*(P+(a)*Q);
		cout<<total<<endl;
	}
	return 0;
}