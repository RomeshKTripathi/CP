// 20. WAP to store and print the details of book.
#include<stdio.h>
#include<string.h>
typedef struct Book{
    char name[50];
    float price;
}Book;

int main(){
    Book book;
    printf("Enter the name of Book : ");
    gets(book.name);
    printf("Enter book Price : ");
    scanf("%f",&book.price);
    puts(book.name);
    printf(" Price: %.2f rs.",book.price);
    return 0;
}