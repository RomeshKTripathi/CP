#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    map<string,int>::iterator it;
    string key;
    int value;
    while(n--){
        cin>>key;
        m[key]=m[key]+1;
    }
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}