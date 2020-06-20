#include <stdio.h>
int main() 
{
    int i, n, k, j, temp=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nenter the number of rotation:");
    scanf("%d",&k);
    for (i = 0; i < k; i++) 
    {
        int x=arr[n-1];
        for(j=n-1;j>=0;j--)
        {
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        arr[0]=x;
    }
    for (i = 0; i <n; i++) 
    {
        printf("\nElement at index %d:%d\n",i,arr[i]); 
    }
}
