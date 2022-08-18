#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x=0;
	void fun();
	while(x!=10){
		fun();
		++x;
	}
	
}
void fun(){
	static int count=0;
	cout<< ++count<<endl;

}