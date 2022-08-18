#include<iostream>

int main(){
	int size;
	bool isSorted = true;
	std::cin>>size;
	int arr[size];
	for(int i=0;i<size;i++) std::cin>>arr[i];
	int max = arr[0];
	for(int i = 1;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}else{
			isSorted = false;
			break;
		}
	}
	if(isSorted) std::cout<<"Array is Sorted";
	else std::cout<<"Array is not Sorted";
	return 0;
}