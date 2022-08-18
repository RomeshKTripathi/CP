#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	int solve(vector<int>&, int);
};

int Solution::solve(vector<int> &A, int B) {
    int count = 0;
    int sum=0,max=0;
    for(auto it = A.begin();count!=B;it++){
    	sum+= (*it);
    	count++;
    }
    if()
}

int main()
{
	vector<int> v = {4,2,3,6,5,3};
	Solution obj;
	int len = obj.solve(v,4);
	return 0;
}

