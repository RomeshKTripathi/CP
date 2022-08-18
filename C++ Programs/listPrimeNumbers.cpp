#include<iostream>
#include<cmath>
using namespace std;

class Numbers{
    private:
    int num1,num2;
    public:
    void printPrimes(int num1,int num2){
        for(int i = num1;i<=num2;i++){
            if(isPrime(i))cout<<i<<" is Prime"<<endl;
            }

    }
    void printArmstrong(int num){
        if(isArmstrong(num))cout<<num<<" is Armstrong"<<endl;
        else cout<<num<<" is Not a Armstrong number";
    }
        bool isPrime(int num){
        bool flag=true;
        for (int i = 2; i<num;i++)
        {
            if(num%i==0) flag=false;
        }
        return flag;
    } // isPrime() function ends here

    bool isArmstrong(int num){
        int counter=0,modulo;
        int copyNumber = num;
        while(num!=0) {
            num=num/10;
            counter+=1;
        };
        int armstrong=0;
        num=copyNumber;
        do{
            modulo = num%10;
            armstrong=armstrong+ pow(modulo,counter);
            num/=10;        
        }while(num!=0);

        if(armstrong==copyNumber) return true;
        else return false;
    } //isArmstrong() function ends here
};

int main(){
    Numbers obj;
    obj.printArmstrong(153);
}