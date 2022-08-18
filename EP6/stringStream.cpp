#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> result;
    string value;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==',') str[i]=' ';
    }

    stringstream s(str);
    while(s>>value){
        stringstream a(value);
        int x;
        a>>x;
        result.push_back(x);
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}