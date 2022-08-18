// 3. WAP to check the number is Palindrome or not.
#include<stdio.h>
int main(){
    int num,rev=0,mod,copy;
    printf("Enter Number to check it is palindrome or not:");
    scanf("%d",&num);
    copy = num;
    do{
        mod = num%10;
        rev = (rev*10)+mod;
        num/=10;
    }while(num!=0);
    if(rev == copy) printf("Number is Palindrome");
    else printf("Number is not palindrome");
    return 0;
}