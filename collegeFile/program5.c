// 5. WAP to sum of digits of a given number.

#include<stdio.h>
int main(){

    int num,sum=0;
    printf("Enter Number");
    scanf("%d",&num);

    do{
        sum+=num%10;
        num/=10;
    }while(num!=0);
    printf("Sum of Digits: %d",sum);
    return 0;
}