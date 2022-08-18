#include<iostream>
using namespace std;

class Base{
public:
	virtual void print(){
		cout<<"Printed in Base Class\n";
	}
};
class Derived:public Base{
public:
	void print(){
		cout<<"Printed in Derived Class\n";
	}
};

int main(){
	Base b;
	Derived d;
	b.print();
	d.print();
	Base *ptr = &d;
	ptr->print();
	return 0;
}