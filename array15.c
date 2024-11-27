/*Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
Examples :
Input : {3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size.*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of element\n");
    scanf("%d",&n);
      int a[n];
      int b[26]={0};
      printf("enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      for(i=0;i<n;i++)
      b[a[i]]++;
      for(i=0;i<n;i++)
      if(b[i]>=(n/2))
      printf("The frequency of %d is %d which is greater than the half of the size of the array size\n",i,b[i]);

      return 0;


      

}

