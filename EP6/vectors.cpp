#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
    vector<int> ::iterator it;  
    for (int i = 1; i <= 7; i++)
        {
            int n;
            cin>>n;
            g1.push_back(n);}
    for(it = g1.begin();it< g1.end();it++) cout<<(*it)<<endl;
  
    return 0;
}