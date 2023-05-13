#include<stdio.h>
void selection_sort(int a[],int n)
{
	int j,min,i,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("given data in ascending order:");
	for(i=0;i<n;i++)
	{
		printf(" %d\t",a[i]);
	}
}
int main()
{
	int a[100],n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	return 0;
}
