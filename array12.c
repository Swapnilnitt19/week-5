/*Given an array of integers of size N, find the first non-repeating element in this array.
Examples:
Input: {-1, 2, -1, 3, 0}
Output: 2*/
#include<stdio.h>
int main()
{
      int n,i,j,flag=0;
     printf("enter the number of element\n");
    scanf("%d",&n);
      int a[n];
      printf("enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      {
        if(flag==1)
        break;
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
            break;
         else
          { 
            printf("%d",a[i]);
            flag++;
           break;
           }
        }
      }
      return 0;


}