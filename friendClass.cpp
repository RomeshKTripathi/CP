#include<iostream>
using namespace std;

class Monitor;
class Printer{
private:
	int val = 20;
public:
	void printValue(const Monitor &obj);
};

class Monitor{
private:
	int my_value = 50;
public:
	friend class Printer;

};

void Printer::printValue(const Monitor &obj){
	cout<<"Private value of Monitor is: "<<obj.my_value;
}

int main(){
	Monitor m;
	Printer p;
	p.printValue(m);
	return 0;
}