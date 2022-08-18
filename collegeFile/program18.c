// 18. WAP to print fibbonacci series.
#include<stdio.h>
int main(){
    int temp,i,a=1,b=0;
    for(i=0;i<10;i++) {
        printf("%d  ",a+b);
        temp = a;
        a= b;
        b +=temp;
    }
    return 0;

}