#include <stdio.h>
#include <stdlib.h>
void main()
{
    int unit;
    printf("Enter the number of units consumed:");
    scanf("%d",&unit);
    printf("\nElectricity bill is:");
    if(unit<=100)
        printf("%d",unit*10);
    else if(unit<=200)
        printf("%d",(100*10)+(unit-100)*15);
    else if(unit<=300)
        printf("%d",(100*10)+(100*15)+(unit-200)*20);
    else if(unit>300)
        printf("%d",(100*10)+(100*15)+(100*20)+(unit-300)*25);
    else
        printf("No value");
}
