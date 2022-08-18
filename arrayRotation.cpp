#include<iostream>
using namespace std;

void rotateArray(int Arr[], int size, int blocks){
	int temp[blocks];
	for(int i=0;i<blocks;i++){
		temp[i] = Arr[i];
	}
	for(int i = 0;i<size-blocks;i++){
		Arr[i] = Arr[i+blocks];
	}
	for(int i=0;i<blocks;i++){
		Arr[(size-blocks)+i] = temp[i];
	}

}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	
	for(int i=0;i<12;i++)cout<<arr[i]<<",";
	rotateArray(arr,12,7);
cout<<"\n";
	for(int i=0;i<12;i++)cout<<arr[i]<<",";

	return 0;
}