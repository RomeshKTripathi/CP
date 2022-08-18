#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        
        vector<int> res;
        int temp = 0,carry = 1;
        
        for(int i = n; i>=0;i--){
            temp = digits[i];
          digits[i] = (temp+carry)%10;
            carry = (carry + temp)/10;
            // if(carry == 0) return digits;
        }
        if(carry>0){
            res.push_back(carry);
            for(int i = 0;i<=n;i++)
                res.push_back(digits[i]);
            return res;
        }
        else;
        res = digits;
        return res;
    }
};

int main(){
    Solution obj;
    vector<int> v1 = {9,9,9,8,9,8,9};
    for(int i = 0; i< v1.size();i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    vector<int> result = obj.plusOne(v1);
    for(int i = 0; i< result.size();i++)
    cout<<result[i]<<" ";

    return 0;
}