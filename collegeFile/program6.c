// 15. WAP to show the use of malloc() & calloc().
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

    //Multiplication;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m3[i][j] = 0;
            for(k=0;k<3;k++){
                m3[i][j] += m1[i][k]*m2[k][j];
            }
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