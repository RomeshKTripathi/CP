// 16. WAP to copy a text file.
#include<stdio.h>
int main(){
    FILE *fp,*nfp;
    char ch;
    fp = fopen("text.txt","r");
    nfp = fopen("newFile.txt","w");
    while((ch = getc(fp))!=EOF){

        putc(ch,nfp);
    }
    fclose(fp);
    fclose(nfp);
    return 0;
}