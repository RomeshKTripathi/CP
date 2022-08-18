#include<iostream>
int main(){
    int p= 50;
    int *a = &p;
    std::cout<<"Value of p = "<<p<<" & of p = "<<&p<<" v of *a = "<<*a<<" &of *a = "<<a<<std::endl;
    return 0;
}