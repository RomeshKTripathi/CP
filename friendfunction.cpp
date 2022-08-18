#include<iostream>
using namespace std;
class Monitor;
class Printer{
private:
	int value = 5;
public:
	void printValue(const Monitor &m);
};
class Monitor{
private:
	int myValue = 1;
public:
	friend void Printer:: printValue(const Monitor &m);
	void display();
};

void Printer::printValue(const Monitor &m){
	cout<<"Value of class Monitor : "<<m.myValue;
}

int main(){
	Monitor m;
	Printer obj;
	obj.printValue(m);
	return 0;
}