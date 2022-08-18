#include<iostream>

using namespace std;
int main(){
	string str="GeeksforGeeks";

	int res = str.find("for");
	if(res == string::npos){
		cout<<"not found  !"<<endl;
	}
	else cout<<"String Found at "<<res<<" Position "<<endl;
	return 0;
}