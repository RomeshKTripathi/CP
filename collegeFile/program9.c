// 9. WAP to sort an integer Array.
#include<stdio.h>
int main(){
    int arr[] = {6,3,4,1,2,0,56,3,4};
    int i,j,n=9;//n is size of array;
    for(i = 0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
    for(i = 0;i<n;i++) printf("%3d",arr[i]);
    return 0;
}