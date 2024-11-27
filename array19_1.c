#include<stdio.h>
int main(){
    int i,j,k,t,n,flag=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Input the value to be inserted: ");
    scanf("%d",&k);
    
    int a[n+1];
    printf("Enter the elements: ");
    
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i =0;i<n-1;i++) {
        for(j=0;j<n-1-i;j++) {
            if(a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for(i=0;i<n;i++) {
        if(a[i] < k) {
            a[i] = a[i];
            flag++;
        } else {
            break;
        }
    }
    for(i=n;i>flag;i--) {
        a[i] = a[i-1];
    }
    a[flag] = k;

 printf("Array after insertion: ");
    for(i =0;i<n+1;i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
             
