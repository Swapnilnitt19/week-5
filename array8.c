#include<stdio.h>
	int main()
	{
	int n,i,j,t;
	printf("no.of elements in array\n");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j+=2)
		{
		  if(i!=j)
		  {
		  	if(a[i]==a[j])
		  	{
		  	   a[j]=0;
		    }
		  }
		  else 
		  continue;
		}
	}
	for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
    	
	}
	return 0;
}
