#include<iostream>
using namespace std;

int main(){
    cout<<"Enter The Size of Array";
    int size;
    cin>>size;
    int arr[size];
    cout<<"\nEnter "<<size<<" Elements in Ascending/Descending order";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"Enter Key value to search in Array :";
    int key,position;
    cin>>key;
    int min=0,max=size;
    //Algorithm for Binary Search.
    while(min<max){
        position = (min+max)/2;
        if(arr[position]==key){
            break;
        }
        else if (key> arr[position])
        {
            min = position;
        }else max = position;

        position = -1;
        
    }
    if(position!= -1) cout<<"Element found at "<<position+1<<" index.";
    else cout<<"Element not found.";
    return 0;
}