
#include<stdio.h>
void insertion_sort(int a[],int n)
{
	int i,j,x;
	for(j=1;i<n;j++)
	{
		x=a[j];
		i=j-1;
		while(i>=0 && a[i]>x)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=x;
	}
	printf("Elements in sorted order:");
	for(i=0;i<n;i++)
	{
		printf(" %d\t",a[i]);
	}
}
int main()
{
	int a[100],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	
}
