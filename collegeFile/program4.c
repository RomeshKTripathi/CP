// 4. WAP to check the number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main(){
    int mod,digits=0,num,arm= 0,copy;
    printf("Enter Number:");
    scanf("%d",&num);
    copy = num;
    do{
        digits++;
        num/=10;
    }while(num!=0);

    num = copy;
    do{
        mod = num%10;
        arm = arm+ pow(mod,digits);
        num/=10;
    }while(num!=0);
    if(arm == copy) printf("Number is Armstrong");
    else printf("Not a Armstrong Number");
    return 0;
}