#include<iostream>
using namespace std;

int GCD(int x,int y){
	int small = (x<y)?x:y;
	if(small == 0) return small;

	for(int i=small;i>0;i--){
		if(x%i==0 and y%i==0) return i;
	}
}
void rotate(int Arr[],int n,int b){//infinite looping 
	int b_size;//block size;
	b_size = GCD(n,b);
	if(b_size == 0) return;
	for(int i = 0; i<b_size; i++){
		int j = i;
		int temp = Arr[i];
		while(true){
			int k = j+b;
			if(k>=n){
				k = k-n;
			}if(k==i)break;

			Arr[j] = Arr[k];
			j = k;
		}
		Arr[j] = temp;
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	for(int i = 0; i<12; i++) cout << arr[i] <<" ";
	cout<<"\n";
	rotate(arr,12,2);
	for(int i = 0; i<12; i++) cout << arr[i] <<" ";
}