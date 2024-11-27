/*Given an array and a value, find if there is a pair in array whose sum is equal to the given value. If there is such a pair present in array, then print the pair and return true. Else return false. (Note: There might be multiple pairs, print the any one pair)
Example:
Input: array = {12, 3, 4, 1, 6,
 9}, sum = 13;
Output: 12, 1 or 4, 9 */

#include<stdio.h>
int main()
{
    int n,i,j,sum;
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
           if(a[i]+a[j]==sum)
           printf("%d,%d\t",a[i],a[j]);
        }
        
      }
      return 0;
}