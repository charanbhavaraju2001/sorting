#include<stdio.h>
int b[9] ;

void mergesort(int low,int high,int a[]){
	if(low<high){
	    int mid;
		mid = (low + high)/2;
		mergesort(low,mid,a);
		mergesort(mid+1,high,a);
		merge(low,mid,high,a);
	}

}

void merge(int  low,int mid , int high , int a[]){
	int i = low , j = mid + 1 , k = low;
	while (i <= mid && j<= high){
		if(a[i] <= a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i > mid){
		while(j<=high){
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{
		while(i<=mid){
			b[k]=a[i];
			k++;
			i++;
		}
	}
	for(k=0;k<=high;k++){
		a[k]=b[k];
	}
}

int main()
{
	int a[9] = {1,8,9,4,2,5,7,3,6} , n = 9 , low = 0 , high = 8 , mid ,i;
	mergesort(low,high,a);
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}

	return 0;
}
