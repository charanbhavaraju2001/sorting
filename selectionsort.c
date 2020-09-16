/* C program to sort array elements using selection sort algorithm */

#include <stdio.h>
void selectionsort(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
	/*swap*/
		temp = a[i];
		a[i]=a[min];
		a[min]=temp;
	}
    printarr(a,n);
}
void printarr(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main(int argc, char const *argv[])
{
	int a[9] = {7,1,3,2,8,5,9,6,4};
	int n = 9;
	selectionsort(a,n);
	return 0;
}
