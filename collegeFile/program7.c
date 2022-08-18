// 7. WAP to add two matrics.
#include<stdio.h>
int main(){
    int m1[3][3],m2[3][3],m3[3][3],i,j,k;
    printf("Enter first 3*3 matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nEnter Second 3*3 Matrix:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    //Addition
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    //Print Result Matrics;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%3d",m3[i][j]);
        printf("\n");
    }
    return 0;
}