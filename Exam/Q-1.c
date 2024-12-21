#include<stdio.h>
void main()
{
    int i=0,remind,num,reve=0;

    printf("Enter the number :- ");
    scanf("%d",&num);

    while (num!=0)
    {
        remind = num % 10;
        reve = reve * 10 + remind;
        num /=10;

    }
        printf("Reversed number :- %d ",reve);
    
}