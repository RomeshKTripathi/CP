// 9. WAP to sort an integer Array.
#include<stdio.h>
int main(){
    int arr[] = {5,2,4,9,6,
                 3,8,5,7,1};
                
    int i,key,pos=-1,n=10;//n is size of array:
    printf("Enter Number to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key == arr[i]) {
            pos=i;
            break;
        }
    }
    if(pos != -1 ) printf("Value found at: %d index",pos+1);
    else printf("Not found");
    return 0;
}