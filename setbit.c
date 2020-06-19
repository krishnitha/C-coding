#include <stdio.h>
unsigned int countSetBitsUtil(unsigned int x); 
unsigned int countSetBits(unsigned int n) 
{ 
    int bitCount = 0;
    for (int i = 1; i <= n; i++) 
        bitCount += countSetBitsUtil(i); 
    return bitCount; 
} 
unsigned int countSetBitsUtil(unsigned int x) 
{ 
    if (x <= 0) 
        return 0; 
    return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2); 
} 
int main() 
{ 
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("\nTotal set bit count is %d :", countSetBits(n)); 
    return 0; 
}
