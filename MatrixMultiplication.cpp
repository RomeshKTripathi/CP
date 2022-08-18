#include<iostream>
#include<vector>
using namespace std;

void multiplyMatrix(vector<vector<int>> &mat1, vector<vector<int>> &mat2, vector<vector<int>> &res){
	if(mat1.size() != mat2[0].size()){
		cout<<"Multiplication is Not Possible...!";

	}
	else{
			for(int i=0;i<mat1.size();i++){
				vector<int> v;
				for(int j=0; j<mat2[i].size();j++)
				{	
					int value=0;
					for(int k=0;k<mat2[i].size();k++){
						value+= mat1[i][k]*mat2[k][i];
					}
					v.push_back(value);
				}
				res.push_back(v);
			}
	}
}

int main(){
	vector<vector<int>> mat1,mat2;
	int mat1r,mat1c,mat2r,mat2c;
	cin>>mat1r>>mat1c;

	for(int i=0;i<mat1r;i++){
		vector<int> v;
			for(int j=0;j<mat1c;j++)
			{
				int value;
				cin>>value;
				v.push_back(value);
			}	
			mat1.push_back(v);
		}
	cin>>mat2r>>mat2c;

	for(int i=0;i<mat2r;i++){
		vector<int> v;
		for(int j=0;j<mat2c;j++)
			{
				int value;
				cin>>value;
				v.push_back(value);
			}
			mat2.push_back(v);
		}
	vector<vector<int>> result;
	multiplyMatrix(mat1,mat2,result);
	for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j];

		}
		cout<<'\n';
	}
	return 0;
}