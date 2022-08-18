#include<iostream>
using namespace std;

class Base{
public:
	virtual void print(){
		cout<<"Base Class\n";
	}
};

class Derived:public Base{
public:
	void prin() override{
		cout<<"Derived Class\n";
	}
};

int main(){
	Base *ptr = new Derived();
	ptr->print();
	return 0;
}