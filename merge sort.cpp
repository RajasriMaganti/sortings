#include<stdio.h>
void Merging_fun(int a[],int s,int mid,int e );
void merge_sort(int a[],int s,int e)
{   int mid;
	if(s<e){
	
	mid=(s+e)/2;
	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);
	Merging_fun(a,s,mid,e);
}
}
int main(){
	int a[100],s=0,e,n,i;
	printf("Enter size of array :");
	scanf("%d",&n);e=n-1;
	printf("Enter elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge_sort(a,s,e);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	return 0;
		
}
void Merging_fun(int a[],int s,int mid,int e)
{
	int i,j,k,b[100],x;
	i=s;j=mid+1;
	k=s;//K is for temporary array
	while(i<=mid && j<=e)
	{
		if (a[i]>a[j]){
			b[k]=a[j];
			j++;
		}
		else {
			b[k]=a[i];
			i++;
		}
		k++;
	}
	if(i>mid){
		while(j<=e){
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else {
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	}
	x=s;
	while(x<k)
	{
	    a[x]=b[x];
	    x++;
	}


}
