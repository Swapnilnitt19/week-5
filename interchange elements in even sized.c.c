#include<stdio.h>
int main()
{
	int n , i , j , t = 0;
	printf("number of elements  :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i+=2)
    {
    	t = arr[i];
    	arr[i]=arr[i+1];
    	arr[i+1]=t;
	}
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0 ;
}
