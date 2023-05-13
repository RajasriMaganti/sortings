#include<stdio.h>
void bubble_sort(int a[],int n)
{
	int pass,i,temp;
	for(pass=1;pass<=n-1;pass++)
	{
		for(i=0;i<=n-1-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
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
	bubble_sort(a,n);
	return 0;
}

