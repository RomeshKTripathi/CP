#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec(numRows);
        for(int i = 0;i<numRows;i++) vec[i].push_back(1);
        if(numRows == 1) return vec;
        
        for(int i = 2;i<numRows;i++){
            for(int j = 0;j<i-1;j++){
                vec[i].push_back(vec[i-1][j]+vec[i-1][j+1]);
            }
            vec[i].push_back(1);
        }
        return vec;
    }
};

int main(){
    Solution obj;
    vector<vector<int>> triangle ;
    triangle = obj.generate(5);
    for(int i = 0;i<5;i++){
        for(int x: triangle[i]){
            cout<<x<<"  ";
        }
        cout<<endl;
    }

    return 0;
}