#include<iostream>
using namespace std;

class Complex{
	int real,imag;
public:
	Complex(int r=0,int i=0):real(r),imag(i){}
	Complex operator + (Complex const obj){
		Complex res;
		res.real = real+ obj.real;
		res.imag = imag+ obj.imag;
		return res;
	}
	void print(){
		cout<<real<<"+i"<<imag<<endl;
	}
};

int main(){
	Complex ob(4,5);
	Complex ob1(6,8);
	ob.print();
	ob1.print();
	Complex obj;
	obj = ob+ob1;

	obj.print();
	return 0;

}