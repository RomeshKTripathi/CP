#include<iostream>
using namespace std;

int mul(int x,int y){return x*y;}
int add(int x,int y){return x+y;}
int compute(int x,int y, int (*fun_ptr)(int,int)){
	return fun_ptr(x,y);
}

int main(){
	cout<<compute(6,7,add);
	cout<<endl<<compute(5,6,mul);
}