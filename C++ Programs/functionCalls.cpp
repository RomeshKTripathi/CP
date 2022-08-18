#include<iostream>
using namespace std;
//function prototypes
void swapv(int ,int);
void swapr(int &,int &);
void swapa(int*,int*);
int main(){
    int a=10,b=20;
    swapv(a,b);
    swapr(a,b);
    swapa(&a,&b);
    return 0;
}

void swapv(int a,int b){
    int temp;
    temp = a;
    a= b;
    b=temp;
    cout << a<<"\t"<<b<<endl;

}
void swapr(int &a,int &b){
    int temp;
    temp = a;
    a= b;
    b= temp;
    cout<<a<<"\t"<<b<<endl;
}
void swapa(int* a,int* b){
    int temp;
    temp = *a;
    *a= *b;
    *b=temp;
    cout<<a<<"\t"<<b<<endl;
}