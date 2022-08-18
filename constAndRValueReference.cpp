#include<iostream>
#include<string>
// using namespace std;

void func(const std::string &s){ //or we can use 'R value refrencr' std::string &&s instead of it
	std::cout<<s;
}
int main(){
	std::string s= "Romesh";
	func("Romesh");
	return 0;
}