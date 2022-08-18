// 21. WAP to Show the use of union.
#include<stdio.h>
#include<string.h>
typedef union Student{
    char name[20];
    float marks;
} Student;

int main(){
    Student st;
    printf("Name:");
    gets(st.name);
    printf("Name is: %s",st.name);
    printf("\nMarks: ");
    scanf("%f",&st.marks);
    printf("Marks : %f",st.marks);
    return 0;
}