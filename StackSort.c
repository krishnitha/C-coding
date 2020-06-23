#include <stdio.h>
int top1=-1, top2=-1,stack1[10000],stack2[10000];
void stack1push(int num)
{
    stack1[++top1]=num;
}
void stack1pop(void)
{
    top1--;
}
void stack2push(int num)
{
    stack2[++top2]=num;
}
void stack2pop(void)
{
    top2--;
}
int main()
{
    int n;
    printf("\nEnter the number of elements to be pushed to the stack : ");
    scanf("%d",&n);
    printf("\nEnter the stack elements : ");
    for(; top1 < n-1 ;)
    {
        int data;
        scanf("%d",&data);
        stack1[++top1]=data;
    }
    while(top1!=-1)
    {
        int temp = stack1[top1];
        stack1pop();
        while(top2!=-1 && stack2[top2] > temp)
        {
            stack1push(stack2[top2]);
            stack2pop();
        }
        stack2push(temp);
    }
    printf("\nSorted Stack : ");
    for(int i=top2;i!=-1;i--)
    {
        printf("%d",stack2[i]);
    }
    return 0;
}
