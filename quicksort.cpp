#include<stdio.h>
int partition(int a[],int s,int e)
{
	int i,j,pivot,temp;
	if(s<e)
	{
		i = s;
	    pivot = s;
		j = e;
		while(i<j)
		{
		while(a[i]<=a[pivot])
		i++;
		while(a[j]>a[pivot])
		j--;
		if(i<j)
		{
			temp = a[i];a[i] = a[j];a[j] = temp;
		}
        }
     temp = a[pivot];
     a[pivot] = a[j];
     a[j] = temp;
     partition(a,s,j-1);
     partition(a,j+1,e);
}
}
int main()
{
	int n,a[100],i,s=0,e;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
//	s=0;
	e=n-1;
	partition(a,s,e);
	printf("after sorting of array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
