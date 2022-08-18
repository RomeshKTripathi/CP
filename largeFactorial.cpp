#include<stdio.h>
#include<conio.h>
// using namespace std;
int main(){
	int fact[500];
	int i,j,n,k,carry=0,size=1;
	int temp;
	scanf("%d",&n);
	fact[0]=1;
	k=2;
	// n+=1;
	while(k<=n){
		for(i=0;i<size;i++){
			temp = (fact[i]*k + carry);
			carry = temp/10;
			fact[i] = temp%10;
		}

		while(carry){
			fact[size] = carry%10;
			carry/=10;
			i++;
			size++;
		}

		k++;
	}	
	for(i=size-1;i>=0;i--)printf("%d",fact[i]);
}