#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec(numRows);
        for(int i = 0;i<numRows;i++) vec[i].push_back(1);
        if(numRows == 1) return vec;
        vec[1].push_back(1);
        for(int i = 2;i<numRows;i++){
            for(int j = 0;j<i-1;j++){
                vec[i].push_back(vec[i-1][j]+vec[i-1][j+1]);
            }
            vec[i].push_back(1);
        }
        return vec;
    }
    vector<int> getRow(int n) {
        vector<int> res;
        res.push_back(1);
        if(n == 0) return res;
        res.push_back(1);
        if(n == 1) return res;
        int counter = 2;       
        while(counter <= n){
            int prev = res[0];
            for(int i = 1; i < res.size(); i++){                
            int data = res[i] + prev;
            prev = res[i];
            res[i] = data;
            }
            res.push_back(1);
            counter++;
        }
        return res;
    }
};

int main(){
    Solution obj;
    vector<vector<int>> triangle ;
    // vector<int> res;
    // res = obj.getRow(6);
    // for(int x:res) cout<<x<<" ";
    triangle = obj.generate(12);
    for(int i = 0;i<12;i++){
        for(int x: triangle[i]){
            cout<<x<<"  ";
        }
        cout<<endl;
    }

    return 0;
}