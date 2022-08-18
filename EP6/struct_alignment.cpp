#include<bits/stdc++.h>
using namespace std;

struct s{
	char c1;
	char c2;
	double d1;
}__attribute__((packed));

int main(){
	s s1;
	cout<<sizeof(s);
	return 0;
}