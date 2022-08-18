#include<bits/stdc++.h>
using namespace std;
int findMoves(int minPos,int maxPos,int n){
	int moves,great=0,bothSide=0,rightSide=0,leftSide=0;
	
	if(minPos>maxPos){
		swap(minPos,maxPos);
	}
	{
		bothSide = ((minPos)<(n-maxPos))?((minPos)+((n-maxPos)-(minPos))):((n-maxPos)+((minPos)-(n-maxPos)));
	}//both side calculation;
	leftSide=maxPos+1;
	rightSide = n-(minPos);
	moves= max(leftSide,rightSide);
	moves= max(moves,bothSide);

	return moves;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		int max=arr[0],min=arr[0],minPos=0,maxPos=0;
		for(int i=0;i<n;i++){
			if(arr[i]>max){
				max=arr[i];
				maxPos = i;
			}
			if(arr[i]<min){
				min = arr[i];
				minPos=i;
			}
		}//finding the minimum and maximum element in the array

		cout<<findMoves(minPos,maxPos,n+1)<<endl;
		// cout<<"Min= "<<min<<" at "<<minPos<<endl;
		// cout<<"Max= "<<max<<" at "<<maxPos<<endl;

		
	}
	return 0;
}