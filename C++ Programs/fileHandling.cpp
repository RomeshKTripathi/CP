#include<iostream>
#include<string>
#include<fstream>    // Libreary to operate on files .
using namespace std;

int main(){
    fstream myFile;
    myFile.open("first.txt", ios::in);
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
    myFile.close();
    }
    else{
        cout<<"Can't open file...!";
    }
    return 0;
}