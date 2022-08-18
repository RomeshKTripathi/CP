#include<iostream>
using namespace std;

int main(){
	int M1[20][20],M2[20][20];
	char ch;
	int m1c,m1r,m2c,m2r;
	cin>>m1r>>m1c;
	for(int i=0;i<m1r;i++){
		for(int j=0;j<m1c;j++){
			// if(i==0) cin>>ch;
			cin>>M1[i][j];
		}
	}


	for(int i=0;i<m1r;i++){
		for(int j=0;j<m1c;j++){
			
			// if(i==0) {
			// 	char ch;
			// 	ch = M1[i][j];
			// 	cout<<ch<<"  ";
			// }
			// // else
			 cout<<M1[i][j] <<"  ";
			
		}cout<<endl;
	}
}