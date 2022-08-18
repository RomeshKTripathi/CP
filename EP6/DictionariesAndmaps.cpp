#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    map<string,long> dict;
    map<string,long>::iterator it;

    long int num;
    string name;
    cin>>n;
    while(n--){
        cin>>name>>num;
        dict.insert({name,num});
    }
    string query;
    while(cin>>query){
            if(dict[query]!=0)cout<<query<<"="<<dict[query]<<endl;
            else cout<<"Not found"<<endl;
    }
    return 0;
}


