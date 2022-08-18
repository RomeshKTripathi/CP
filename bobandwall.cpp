// Bob and Walls
// Send Feedback
// Bob the builder has constructed some walls of various length in a line. Now, he wants to count the total number of walls constructed and report that number to his boss. But the report that Bob made was wrong because he counted the total number of walls by standing on the leftmost side of the first wall. So he was only able to see some walls and not all because others were hidden behind. Can you predict the number of walls counted by Bob.
// Input Format :
// - First line contains N denoting the actual no of walls.
// - Second line contains N integers (A1...An) denoting the height of each walls.
// Output Format :
//  Print a single integer denoting the total no of walls as counted by Bob each in a new line.
// Constraints :
// 1<=N<=100000
// 1<=Ai<=10000
// Sample Input :
// 5
// 1 3 2 5 4
// Sample Output :
// 3
// Explanation :
// Bob would only be able to see the wall 1,3 and 5

#include<iostream>
using namespace std;
int main(){
    int N,count=0,tw=0;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]>tw){
            count++;
            tw= arr[i];
        }
    }
    cout<<"Bob can see only "<<count<<" Walls.";
    return 0;
}