/*Write a program in C to find the ceiling in a sorted array.
Note: Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x.
Example:
Input: X value is 5, The given array is : 1 3 4 7 8 9 9 10
Output: The ceiling of 5 is: 7*/
#include<stdio.h>
int main()
{
    int n,i,k,cnt=0;
    printf("enter the elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the x value\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
   {  
    if(cnt==1)
    break;
     if(a[i]>k)
    {
        printf("the celling off %d is %d",k,a[i]);
        cnt++;
    }
}
}