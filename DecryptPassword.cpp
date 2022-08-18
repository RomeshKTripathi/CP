#include<bits/stdc++.h>
using namespace std;
void decryptPassword(string s) {
	for(int i = 0;i<s.length();i++){
		if(s[i]>='1' && s[i]<='9'){
			for(int j = (s.length()-1);j>=0;j--){
				if(s[j]=='0'){
					s[j]=s[i];
					s[i]='?';
					break;
				}
			}
		}else if(s[i]=='*'){
			int a= i-2; 
			int b=i-1;
			swap(s[b],s[a]);
			s[i]='?';
		}
	}
	string dec;
	for(int i=0;i<s.length();i++){
			if(s[i]!='?'){
				dec.push_back(s[i]);
			}

	}
	return dec;
    
    }

    int main(){
    	string enc = "51Pa*0Lp*0e";
    	// cout<<enc.length();
    	decryptPassword(enc);
    	return 0;
    }