// 24. WAP to swap two variables by using pointers, without using third variable.  
#include<stdio.h>
void swap(int* x,int* y){
    *x = (*x) + (*y);
    *y = (*x) - (*y);
    *x = (*x) - (*y);
}
int main(){
    int x=5,y=6;
    swap(&x,&y);
    printf("x = %d, Y= %d",x,y);
    return 0;
}