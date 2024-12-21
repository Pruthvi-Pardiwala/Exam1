#include<stdio.h>

void cube(int num)
{
    printf("Cube of the number :- %d ",num*num);
}

void main()
{
    int num;
    printf("Enter the number :- ");
    scanf("%d",&num);
    cube(num);
}