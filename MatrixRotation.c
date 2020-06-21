#include <stdio.h> 
#include<stdlib.h>
int N;
void antirotate(int mat[N][N]) 
{ 
    for (int i = 0; i < N / 2; i++) { 
        for (int j = i; j < N - i - 1; j++) { 
            int temp = mat[i][j]; 
            mat[i][j] = mat[j][N - 1 - i]; 
            mat[j][N - 1 - i] = mat[N - 1 - i][N - 1 - j]; 
            mat[N - 1 - i][N - 1 - j] = mat[N - 1 - j][i]; 
            mat[N - 1 - j][i] = temp; 
        } 
    } 
} 
void rotate(int mat[N][N])
{
    for (int i = 0; i < N / 2; i++) { 
        for (int j = i; j < N - i - 1; j++) { 
            int temp = mat[i][j]; 
            mat[i][j] = mat[N - 1 - j][i]; 
            mat[N - 1 - j][i] = mat[N - 1 - i][N - 1 - j]; 
            mat[N - 1 - i][N - 1 - j] = mat[j][N - 1 - i]; 
            mat[j][N - 1 - i] = temp; 
        } 
    } 
}
void displayMatrix(int mat[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf("%2d ", mat[i][j]); 
  
        printf("\n"); 
    } 
    printf("\n"); 
} 
int main() 
{ 
    int choice;
    printf("enter the size of the square matrix:");
    scanf("%d",&N);
    int mat[N][N];
    printf("\nenter the matrix:");
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    while(1)
    {
        printf("\n1.rotate clockwise\n2.rotate anti-clockwise\n3.exit\nenter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nmatrice before rotation\n");
                    displayMatrix(mat); 
                    rotate(mat);
                    displayMatrix(mat); 
                    break;
            case 2: printf("\nmatrice before rotation\n");
                    displayMatrix(mat); 
                    antirotate(mat);
                    displayMatrix(mat); 
                    break;
            case 3: exit(0);
                    break;
            default:printf("invalid choice\n");
        }
    }
}
