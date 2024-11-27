/*Given an array of integers arr[], The task is to find the index of first repeating element in it i.e. the element that occurs more than once and whose index of the first occurrence is the smallest.
Examples: Input: arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 5 (Explanation: 5 is the first element that repeats)
Input: arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
Output: 6 (Explanation: 6 is the first element that repeats)*/


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

      for(i=0;i<n;i++){
      if(flag==1)
      break;
       for(j=i+1;j<n;j++)
        {
          if(a[i]==a[j])
          { 
            printf("%d",a[i]);
            flag++;
             break;
          }
        }
      }
      
      return 0;
 
}