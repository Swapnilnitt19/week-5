/*Write a program in C to insert New value in the array (unsorted list)
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Input List:
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10?*/

#include<stdio.h>
int main()
{
     int n,i,value,position;
     printf("enter the number of element\n");
    scanf("%d",&n);
    printf("enter the number inserted\n");
    scanf("%d",&value );
    printf("enter the postion\n");
    scanf("%d",&position);
    int a[(n)];
    printf("enter the elements\n");
     for(i=0;i<n-1;i++)
    scanf("%d",&a[i]);

    for(i=n;i>=position;i--)
    a[i]=a[i-1];

    a[position]=value;
    printf("Updated array:\n");
    for (int i = 0;i<n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}






