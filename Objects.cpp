#include<iostream>
using namespace std;
class MyClass{
	int i = 40;
	string name = "Romesh Kumar Tripathi";
};
class MyClassOne{
	int i= 40;
	string name = "jsldjfl  aslfkjlkasd flk lksadjfklsjdklf sdkflksd fklasjd klfslkd fksdlkfjsadlkf";
};

int main(){
	MyClassOne obj;
	MyClass obj1;
	cout<<sizeof(obj)<<" "<<sizeof(obj1)<<" "<<sizeof(string);
	return 0;
}