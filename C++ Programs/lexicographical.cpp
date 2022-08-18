#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>

using namespace std;

string sortString(string str){
    int temp[str.length()];
    string res;
    for(int i = 0;i<str.length();i++){
        temp[i] = str[i]-'a';
    }
    sort(temp,temp+str.length());
    for(int i=0;i<str.length();i++){
        res+=(temp[i]+'a');
    }
    return res;
}
int main(){
    string instr;

    string vstr;
    string cstr;
    getline(cin,instr);
    for(int i=0;i<instr.length();i++){
        if(instr[i] == 'a' || instr[i] == 'e' || instr[i]=='i' || instr[i] == 'o' || instr[i]=='u'){
            vstr+=instr[i];
        }else if(instr[i]!=' '){
            cstr+=instr[i];
        }
    }
    string vvstr = sortString(vstr);
    string ccstr= sortString(cstr);
    if(vvstr.length()==0){
        vvstr = "NA-1";
    }
    else{
        int index;
        for(int i = 0;i<instr.length();i++){
            if(vvstr[0] == instr[i]){
                index = i;
                break;
            }
        }
        ostringstream tmp;
        tmp<<index;
        vvstr+=tmp.str();
    }
    if(ccstr.length()==0){
        ccstr="NA-1";
    }
    else{
        int index;
        int n = cstr.length()-1;
        for(int i = instr.length()-1;i>=0;i--){
            if(ccstr[n] == instr[i]){
                index = i;
                break;
            }
        }
        ostringstream tmp;
        tmp<<index;
        ccstr+=tmp.str();
    }

        

    cout<<vvstr<<ccstr;

    
    return 0;
}