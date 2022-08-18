#include<bits/stdc++.h>
#define ll long long int
#define M 1000000007
using namespace std;
ll binpow(ll a,ll b){
	ll res = 1;
	while(b>0){
		if(b&1)
			res = (res*a)%M;
		a = (a*a)%M;
		b>>=1;
	}
	return res;
}
int power(ll x,unsigned int y,int p){
	int res =1;
	x = x%p;
	if(x==0)
		return 0;
	while(y>0){
		if(y&1)
			res = (res*x)%M;
		y=y>>1;
		x=(x*x)%p;
	}
	return res;
}

int main(){
	int t;
	cin>>t;

	while(t--){
		ll n,m;
		cin>>n>>m;
		ll temp = binpow(2,n)-1;
		ll ans = power(temp,m,M);
		cout<<ans<<endl;
	}
	return 0;
}
