#include<iostream>
int main(){
    int i=10;
    int &j=i;
    std::cout<<"j= "<<j<<"  "<<" i= "<<i<<std::endl;
    j=21;
    std::cout<<"j= "<<j<<"  "<<" i= "<<i<<std::endl;
    i=45;
    std::cout<<"j= "<<j<<"  "<<" i= "<<i<<std::endl;
    std::cout<<"Address of j="<<&j<<"  Address of i = "<<&i<<std::endl;
    return 0;
}// in this program address of j and i are same