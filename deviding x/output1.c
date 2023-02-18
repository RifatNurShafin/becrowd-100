#include<stdio.h>
int main()
{   int r=5;
    for(int i=1;i<=39;i++)
    {
        printf("-");
    }
    printf("\n");
    while(r--)
    {
    for(int i=1;i<=39;i++)
    {
        if(i==1)
        printf("|");
        else if(i==39)
        printf("|\n");
        else
        printf(" ");
    }
    }
    for(int i=1;i<=39;i++)
    {
        printf("-");
    }
    printf("\n");
}