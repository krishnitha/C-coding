#include <stdio.h>
int M,N;
void displayMatrix(int matrix[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j <N; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter M (Rows) and N (Columns):");
    scanf("%d%d",&M, &N);
    int matrix[M][N];
    printf("Enter the Elements:");
    for(int i = 0 ; i < M ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }
    printf( "The Input Matrix is:\n");
    displayMatrix(matrix);
    int temp[M*N], sum=0, count=0;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==0||i==M-1)
            {
                temp[count++]=matrix[i][j];
                sum=sum+matrix[i][j];
            }
            else
            {
                if(j==0||j==N-1)
                {
                    temp[count++]=matrix[i][j];
                    sum=sum+matrix[i][j];
                }
            }
        }
    }
    printf("The Boundary Elements are:");
    for(int i=0;i<count;i++)
    {
        printf("%d ",temp[i]);
    }
    printf("\nThe Sum of Boundary elements of the Matrix is:");
    printf("%d",sum);
    return 0;
}
