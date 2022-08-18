#include<iostream>
#include<string>
using namespace std;

void fun(int &&x,string &&name){
	cout<<x<<name;
}
int main(){
	int x = 8;
	fun(5,"Gopal");
	return 0;
}