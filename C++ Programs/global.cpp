#include<iostream>
int a=20;
int main(){
    int a=15;
    std::cout<<"Local a ="<<a<<std::endl<<"Global a = "<<::a<<std::endl;
    ::a=10;
    std::cout<<"Local a = "<<a<<std::endl<<"Global a = "<<::a<<std::endl;
}