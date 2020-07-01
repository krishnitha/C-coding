# include<stdio.h> 
# include<stdlib.h> 
int maxDivide(int a, int b) 
{ 
  while (a%b == 0) 
   a = a/b;  
  return a; 
}    
int isUgly(int no) 
{ 
  no = maxDivide(no, 2); 
  no = maxDivide(no, 3); 
  no = maxDivide(no, 5); 
    
  return (no == 1)? 1 : 0; 
}  
int main() 
{ 
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (isUgly(n))
        printf("%d is the Ugly number",n);
    else
        printf("%d is not the Ugly number",n);
    return 0; 
}
