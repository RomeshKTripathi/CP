// Program to Print Pattern:

// 1
// 2 2
// 3 3 3
// 4 4 4 4 

#include<stdio.h>
int main(){
    int i,j;
    for(i = 1;i<5;i++){
        for(j = 1;j<=i;j++){
            printf("%2d ",i);
        }
        printf("\n");
    }
    return 0;
}