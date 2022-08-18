// 23. WAP to show the example of call by value and call by reference functions.
#include<stdio.h>

void CBVswap(int x,int y){
    int z;
    z = x;
    x = y;
    y = z;
}
void CBRswap(int *x,int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int main(){
    int x =5,y = 6;
    CBVswap(x,y);
    printf("After CBVswap x = %d, y = %d\n",x,y);
    CBRswap(&x,&y);
    printf("After CBRswap x = %d, y = %d",x,y);
    return 0;
}