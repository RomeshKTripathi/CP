// 2. WAP to find prime numbers from 1 to 100

#include<stdio.h>
#include<math.h>
int main(){
    int i,j,arr[101] = {0};
    for(i=2;i<101;i++) arr[i] = 1;
    for(i=2;i*i<=100;i++){
        for(j=2;j*i<=100;j++){
            arr[j*i] = 0;
        }
    }

    for(int i=0;i<=100;i++)
        if(arr[i]) printf("%d\n",i);
    return 0;
}