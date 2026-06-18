//REVERSE AN ARRAY ANTICLOCKWISE

#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    int temp[n];
    k=k%n;
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=a[i];
    }
    printf("rotated array\n");
    for (int i=0;i<n;i++)
    {
        printf("%d",temp[i]);
 
    }
    return 0;
}
 /*OUTPUT
rotated array
5671234*/
