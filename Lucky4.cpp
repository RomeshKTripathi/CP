//Program name: Lucky 4
//Program Data: 22 September 2021
//Program link: https://www.codechef.com/problems/LUCKFOUR

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		int counts=0;
		cin>>n;
		{	//this block counts 4 in the number
			int rem=0;
			do{
				rem = n%10;
					if(rem==4){
					counts++;
					}
				n/=10;
			}while(n!=0);

		}
		cout<<counts<<endl;
	};

}