#include <stdio.h>
int N,M;
void change(int a[N])
{
    for(int i=0;i<N;i++)
    {
        if(a[i]==-1)
        {
            if(i==0)
            {
                a[i]=(a[i+1]-1+M)%M;
            }
            else 
            {
                a[i]=(a[i-1]+1)%M;
            }
        }
    }
}
int main(void) {
	printf("Enter the size of the array:");
	scanf("%d",&N);
	int a[N];
	printf("\nEnter the array elements:");
	for(int i=0;i<N;i++)
	{
	    scanf("%d\t",&a[i]);
	}
	printf("\nEnter the M value");
	scanf("%d",&M);
	change(a);
	printf("\nArray is:");
	for(int i=0;i<N;i++)
	{
	    printf("%d\t",a[i]);
	}
	return 0;
}
