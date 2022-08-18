//Program to Swap Object's values using static swap function.

#include<iostream>
#include<string>
using namespace std;

class MyClass{
private:
	string name;
	int number;
	int height;
public:
	MyClass(string n,int no,int hi):name(n),number(no),height(hi){}
	static void swap(MyClass &d1,MyClass &d2){
		MyClass d3 = d1;
		d1 = d2;
		d2= d3;
	}
	void printValue(){
		cout<<name<<" "<<number<<" "<<height<<endl;
	}
};

int main(){
	MyClass d1("romesh",1234,6);
	MyClass d2("tripathi",5678,7);
	d1.printValue();
	d2.printValue();
	MyClass::swap(d1,d2);
	d1.printValue();
	d2.printValue();
	return 0;
}