	#include<stdio.h>
	int main()
	{
	int n,i,j,t;
	printf("no.of elements in array\n");
	scanf("%d",&n);
	int a[n-2];
	
	for(i=0;i<n-2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-2;j++)
		{
			if(a[j+1]>a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
    for(i=0;i<n;i++)
    {
    	if(a[i]!=(i+1))
    	printf("%d\n",i);
    }
	return 0;
}
