//Write a program in C to separate odd and even integers in separate arrays. Input one array of both odd and even integers and move them to two separate new arrays.//

#include<stdio.h>
int main()
{
    int n,i,j,k=0,d=0;
    printf("enter the number of element\n");
    scanf("%d",&n);
      int a[n];
      int b[8];
      int c[8];
      printf("enter the elements\n");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);

      for(i=0;i<n;i++)
      {
        if(a[i]%2==0)
       { b[k]=a[i];
        k++;
        }
        else
        { c[d]=a[i]; 
        d++;}
       }

       for(i=0;i<8;i++)
       printf("%s",b[i]);
       for(i=0;i<8;i++)
       printf("%s",c[i]);

       return 0;

      
}