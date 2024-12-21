#include<stdio.h>
void main()
{
    int f;
    float c;

    printf("Enter the number of Fahrenheitre :- ");
    scanf("%d",&f);

    c= (f-32)/1.8;

    printf("Celsius :- %.2f",c);
}