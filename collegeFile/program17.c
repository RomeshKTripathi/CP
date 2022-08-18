// 17. WAP to convert decimal digits in binary.
#include<stdio.h>
int main(){
    int bin[16] = {0};//to store 16 bit signed integer range is -32,768 to 32,767
    
    int i = 0,num,temp;
    printf("Enter Number to convert in binary");
    scanf("%d",&num);
    if(num>32767 || num<-32768){
        printf("Not in range of 16 Bit Integer:");
        return 0;
    }
    if(num<0){
    num*= -1;
    bin[15] = 1;
    }
    while(num!=0){
        temp = num;
        bin[i] = temp & 1;
        num = num>>1;
        printf("%d\n",num);
        i++;
    }

    for(i = 15;i>=0;i--) printf("%d",bin[i]);
    return 0;
}