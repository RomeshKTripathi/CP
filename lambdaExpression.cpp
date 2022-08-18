#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {-20,10,-30,5};
	int n=4;
	auto mycmp = [](int a,int b){
		return abs(a)<abs(b);
	};
	sort(arr,arr+n,mycmp);
	for(auto x:arr) cout<<x;
		return 0;
}