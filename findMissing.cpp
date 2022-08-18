#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++) if(nums[i]!=i) return nums[i]-1;
        return 0;
    }
};

int main(){
    Solution obj;
    vector<int> vec={3,0,1};
    cout<<obj.missingNumber(vec);
    return 0;
}