#include <stdio.h>
int main() 
{ 
    int M,N;
    printf("enter the size of the array\n");
    scanf("%d%d",&M,&N);
    int arr[M][N];
    printf("enter the array\n");
    for (int i = 0; i < M; i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            scanf("%d",&arr[i][j]);
        } 
        printf("\n"); 
    } 
    for (int i = 0; i < M; i++) 
    { 
        int k=0;
        for(int j=N-1;j>=N/2;j--)
        {
            int temp=arr[i][k];
            arr[i][k]=arr[i][j];
            arr[i][j]=temp;
            k++;
        } 
    }
    printf("array after reversing is\n");
    for (int i = 0; i < M; i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            printf("%d ",arr[i][j]);
        } 
        printf("\n"); 
    }
    return 0; 
}
