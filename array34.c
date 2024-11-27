/*Given an array of even size, task is to find minimum value that can be added to an element so that array become balanced. 
An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.
N = 6, a={1 2 1 2 1 3}
Output: 2
Explanation: Suppose, we have an array 1 2 1 2 1 3. The Sum of first three elements is 1 + 2 + 1 = 4 and
 sum of last three elements is 2 + 1 + 3 = 6 So this is unbalanced, to make it balanced 
 the minimum number we can add is 2 to any element in first half*/
 #include<stdio.h>
int main()
{
    int n,i,sum=0,sum2=0;
    printf("enter the number of element\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n/2;i++){
    sum+=a[i];
    printf("%d\t",a[i]);}
    for(i=n/2;i<n;i++){
    sum2+=a[i];
    printf("%d\t",a[i]);}
    if(sum!=sum2)
    {
        printf("the array is unbalanced\n");
        if(sum2>sum)
        { int k=sum2-sum;
         printf("the minimum number we can add is %d to any element in first half\n",k);
        }
        else
        {
           int s=sum-sum2;
            printf("the minimum number we can add is %d to any element in second half\n",s);
        }
      }
      else 
      printf("the array is balanced\n");
      return 0;
}
