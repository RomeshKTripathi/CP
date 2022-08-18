#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int getUnique(vector<int>&);
};

int Solution::getUnique(vector<int>& ar){
    int temp = 0;
    for(int i=0;i<ar.size();i++){
        temp = temp ^ ar[i];
    }
    return temp;
}

int main(){
    Solution obj;
    vector<int> vec = {1,2,3,4,4,3,2,1,9};
    cout<< obj.getUnique(vec);
    return 0;
}