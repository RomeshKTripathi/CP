// 19. WAP to find minimum & maximum numbers in integer array.
#include<stdio.h>
int main(){
    int arr[] = {6,5,-8,56,-99,65,-4,26,68,95,15};
    int n =11;
    int i,min = arr[0], max = arr[0];
    for(i = 0;i<11;i++){
        if(arr[i] > max) max = arr[i];
        else if(arr[i] < min) min = arr[i];
    }
    printf("Max : %d\nMin : %d",max,min);
    return 0;
}