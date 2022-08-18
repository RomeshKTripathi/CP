#include<stdio.h>
#include<conio.h>

int main(){
    int num,i,flag =0;
    while(1){
        printf("Please enter a number to check it is Prime or not : enter 0 to exit:");
        scanf("%d",&num);
        if(num!=0){
            for(i=2;i<num;i++){
                if(num%i == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag) {
                printf("Number is not Prime\n");
                flag = 0;
                }
            else printf("Number is Prime\n");
        }else{
            break;
        }
    }
    getch();
    return 0;
}