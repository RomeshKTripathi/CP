#include<iostream>
using namespace std;
int myInt(string &nums,string &num){
	int value = 0;
	for(int i=0;i<num.length();i++){
		value = value*10 + nums.find(num[i]);
	}
	return value;
}
int main(){
	string str;
	int sum;
	string nums = "0123456789";
	getline(cin,str);
	string num;
	for(int i=0;i<str.length();i++){
		if(nums.find(str[i]) != string::npos){
			num+=str[i];
		}else{
			sum+= myInt(nums,num);
			num = "0";
		}
	}
	cout<< " Sum = "<<sum;
	return 0;
}