#include<iostream>
using namespace std;

void merge(int *A, int p, int q,int r){
	int n1= (q-p)+1;
	int n2 = (r-q);
	int L[n1],R[n2],i=0,j=0;
	for(int k=p;k<=q;k++){
		L[i] = A[k];
		i++;
	}
	L[i] = 10000;
	for(int k=q+1;k<=r;k++){
		R[j] = A[k];
		j++;
	}
	R[j] = 10000;

	i=j=0;
	for(int k=p;k<=r;k++){
		if(L[i]<=R[j]){
			A[k] = L[i];
			i++;
		}else{
			A[k] = R[j];
			j++;
		}
	}
}

void mergeSort(int *A,int p, int r){
	if(p<r){
		int q = (p+r)/2;
		mergeSort(A,p,q);
		mergeSort(A,q+1,r);
		merge(A,p,q,r);
	}
}

int main(){
	int A[] = {3,41,52,26,38,57,9,49};
	mergeSort(A,0,7);
	for(int i=0;i<8;i++) cout<<A[i]<<" ";
	return 0;
}