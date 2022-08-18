// Program to Print Pattern:
//     *
//   * * *
// * * * * * 
//   * * * 
//     *


#include<stdio.h>
int main(){
    int i,j,counter = 1;
    for(i = 1;i<=5 || i<0;i+=2){
      
        for(j = 1;j<= (5-i);j++)printf(" ");
        for(j = 1;j<=i;j++) printf("* ");
        printf("\n");
    }
    for(i = 3;i>=1;i-=2){
        for(j = 1;j<= (5-i);j++)printf(" ");
        for(j = 1;j<=i;j++) printf("* ");
        printf("\n");
    }
    return  0;
}