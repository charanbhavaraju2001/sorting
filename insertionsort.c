#include<stdio.h>

void insertionsort(int a[] , int n)
{
	int i,j,temp ;
	for(i=1;i<n;i++){
		temp = a[i];
		j = i-1;
		while ( j>=0 && a[j] > temp ){
				a[j+1] = a[j];
				j--;
		}
		a[j+1] = temp;
		}
}



int main(int argc, char const *argv[])
{
	int a[9] = {7,1,5,8,2,6,3,4,9} , n = 9 ,i=0;
	insertionsort(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
