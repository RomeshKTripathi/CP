#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int amount;
    double balance;
    cin>>amount>>balance;
    if((amount>2000) || (balance>2000) || (amount>=balance))cout<<setprecision(2)<<balance<<endl;
    else{
        balance = balance-(float(amount)+0.5);
        cout<<amount<< " "<<setprecision(2)<<fixed<<balance;
    }
    return 0;
}


//Not accepted by codechef