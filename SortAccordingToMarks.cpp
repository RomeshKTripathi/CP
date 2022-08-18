#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int myCmp(pair<int,int> p1,pair<int, int> p2){
	return p1.second>p2.second;
}
void sortAndPrint(vector<int> &roll, vector<int> &marks){
	vector<pair<int,int>> result;
	for(auto r=roll.begin(),m=marks.begin();m!=marks.end() && r!=roll.end(); m++,r++){
		result.push_back(make_pair(*m,*r));
	}
	sort(result.begin(),result.end(),greater<pair<int,int>>());

	for(auto it = result.begin();it!=result.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
}

int main(){
	vector<int> roll = {101,108,103,105};
	vector<int> marks = {70,80,40,90};
	sortAndPrint(roll,marks);

}