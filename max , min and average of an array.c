
#include<stdio.h>
int main()
{
	int n , i;
	printf("number of elements :");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	printf("\nEnter element number %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (i=0;i<n;i++)
    {
    	if(max<arr[i])
    	max= arr[i];
	}
	printf("The maximum of array is %d\n",max);
	int min = arr[0];
    for (i=0;i<n;i++)
    {
    	if(min > arr[i])
    	min= arr[i];
	}
	printf("The manimum of array is %d\n",min);
	float sum =0;
	for (i=0 ; i<n ; i++)
	sum+= arr[i];
	printf("The average of  array is %f\n",sum/n);
	return 0;
	
	
}
