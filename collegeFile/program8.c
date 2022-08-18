// 8. WAP to calculate factorial of a number using Recursion.
#include<stdio.h>
int fact(int n){
    if( n == 0 ||n == 1) return 1;
    return n*fact(n-1);
}
int main(){
    int num;
    printf("Enter number to calculate factorial:");
    scanf("%d",&num);
    printf("factorial: %d",fact(num));
    return 0;
}