#include <iostream>
using namespace std;

class BinaryDecimal{
    private:
    int decimalValue;
    static int binaryValue[32];
    public:
    void decimalToBinary(int decimalValue){
        int i=0;
        do{
            binaryValue[i]=decimalValue%2;
            decimalValue/=2;
            i++;
        }while(decimalValue!=0);
    cout<<"Value in Binary is:"<<endl;
    for(i;i>=0;i--){
        cout<<binaryValue[i];
    }
    }//this function converts the decimal value into binary digits
};


int main(){
    BinaryDecimal object;
    object.decimalToBinary(10);
    return 0;
}