#include <stdio.h>
int M,N;
void displayMatrix(int matrix[][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
   
}
int main()
{
    int i,j,l;
    printf("enter the size of the matrix");
    scanf("%d%d",&N, &M);
    int matrix[N][M];
    printf("Enter the matrix elements");
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }
    printf("The given matrix is\n");
    displayMatrix(matrix);
    int temp[M];
    int k;
    printf( "Number of rotations : ");
    scanf("%d",&k);
    for(l=0;l<k;l++)
    {
        for(i=0;i<N;i++)
        {
            int temp=matrix[i][0];
            for(j=0;j<M-1;j++)
            {
                matrix[i][j]=matrix[i][j+1];
            }
            matrix[i][j]=temp;
        }
    }
    printf("\nThe rotated matrix is\n");
    displayMatrix(matrix);
    return 0;
}
