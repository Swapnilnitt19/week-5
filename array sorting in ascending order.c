#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("number of elements in arrays  :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
    if (arr[j]>arr[j+1])
    {
    	k = arr[j];
    	arr[j]= arr[j+1];
    	arr[j+1]=k;
	}
   
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0 ;
}
