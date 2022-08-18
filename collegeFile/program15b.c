// 15. WAP to show the use of malloc() & calloc().
#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *link;
} Node;

int main(){
    Node *head = NULL;
    Node *temp;
    temp = (Node*) calloc(1,sizeof(Node));//Node created.
    temp->data = 12;  //data stored in Node.
    temp->link = NULL; //node address has Null part. 
    return 0;
}