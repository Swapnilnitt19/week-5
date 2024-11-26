
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of element:\n");
    scanf("%d",&n);
      int a[n];
      int b[26]={0};
      printf("Enter the elements:\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      b[a[i]]++;
      
      for(i=0;i<n;i++)
      {
        if(b[i]!=0){
        printf("The frequency of %d is %d\n",i,b[i]);}
      }
      return 0;
}

