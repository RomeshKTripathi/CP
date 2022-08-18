// 1. WAP to find number is prime or not.
#include<math.h>
#include<stdio.h>
int isPrime(int num){
    int i;
    if(num == 1 || num==0) return 0;
    for(i=2;i<sqrt(num);i++){
        if(num%i==0)return 0;
    }
    return 1;
}
int main(){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);
    if(isPrime(num)) printf("Number is Prime");
    else printf("Number is not prime");
    return 0;
}