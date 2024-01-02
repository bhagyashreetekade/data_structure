#include<iostream>
using namespace std;

void merge(int a[],int lb,int mid,int ub){
	
	int i=lb;
	int j=mid+1;
	int k=lb;
	int b[ub+1];
	
	while(i<=mid && j<=ub){
		if(a[i]<a[j]){
			a[k]=a[i];
			i++;
		}
		else{
			a[k]=a[j];
			j++;
		}
		k++;
	}
	
	if(i>mid){
		while(j<=ub){
			a[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<mid){
			a[k]=a[i];
			i++;
			k++;
		}
	}
	
	for(int i=0;i<=ub;i++){
		a[i]=b[i];
	}
}

void mergesort(int a[],int lb,int ub){
	
	if(lb<ub){
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

void printarr(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int a[5]={5,8,2,1,9};
	mergesort(a,0,4);
	printarr(a,5);
	
}