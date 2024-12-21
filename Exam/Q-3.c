#include<stdio.h>
void main()
{
    int i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<='F'-i;j++)
        {
            printf("%c ",j);
        }
    printf("\n");
    }
}
//A B C D E      1 2 3 4 5
//A B C D        1 2 3 4
//A B C          1 2 3
//A B            1 2
//A              1  
//(j=1;j<=6-i;j++) 
//for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=6-i;j++)
//        {
//            printf("%d ",j);
//        }
//    printf("\n");
//    }