#include<stdio.h>
void main()
{
    int i,num;

    printf("Enter the number :- ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d ",num,i,num*i);
    }
}