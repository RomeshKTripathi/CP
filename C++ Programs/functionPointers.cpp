#include<stdio.h>


int add(int x,int y){return x+y;}
int multiply(int x,int y){return x*y;}
int compute(int x,int y, int (*fun_ptr)(int,int)){
    return fun_ptr(x,y);
}
int main(){
    int addition,multiplication;
    addition = compute(10,20,add);
    multiplication = compute(10,20,multiply);
    printf("%d\n%d",addition,multiplication);
    return 0;
}