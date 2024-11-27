/*Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. 
For example, A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.*/
#include<stdio.h>
int main()
{
    int n,i,m,sum1=0,sum2=0,total;
    printf("enter the elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the elements in second array\n");
    scanf("%d",&m);
    int b[m];
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    sum1=10*sum1 +a[i];
    for(i=0;i<m;i++)
    sum2=10*sum2 +b[i];
   
   printf("total of the number is %d",sum1+sum2);

   return 0;
    
}