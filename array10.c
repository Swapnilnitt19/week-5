/*find the duplicate elements from the given array*/
#include<stdio.h>
	int main()
	{
	int n,i,j,c=0;
	printf("no.of elements in array\n");
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(i!=j)
    		{
    		   if(a[i]==a[j])
			   	printf("%d",a[i]);
			}
		}
    
	}	
	return 0;
}
