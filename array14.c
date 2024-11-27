/*Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and return true. Else return false.
Examples:
Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
Output: 12, 3, 9
Explanation: There is a triplet (12, 3 and 9) present
in the array whose sum is 24.
Input: array = {1, 2, 3, 4, 5}, sum = 9
Output: 5, 3, 1
Explanation: There is a triplet (5, 3 and 1) present
in the array whose sum is 9.*/
#include<stdio.h>
int main()
{
    int n,i,j,k,sum;
    printf("enter the sum\n");
    scanf("%d",&sum);
     printf("enter the number of element\n");
    scanf("%d",&n);
      int a[n];
      printf("enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);

      for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
            if(a[i]+a[j]+a[k]==sum)
           printf("(%d,%d,%d)\t",a[i],a[j],a[k]);
        }
        }
     }
      return 0;
}



