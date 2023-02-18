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
    {   if(r==4)
        {
        if(i==1)
        printf("|");
        else if(i==10)
        printf("Roberto");
        else if(i==39)
        printf("|\n");
        else if(i<10||i>16)
        printf(" ");
        }
        else if(r==2)
        {
           if(i==1)
        printf("|");
        else if(i==10)
        printf("5786");
        else if(i==39)
        printf("|\n");
        else if(i<10||i>13)
        printf(" "); 
        }
        else if(r==0)
        {
            if(i==1)
        printf("|");
        else if(i==10)
        printf("UNIFEI");
        else if(i==39)
        printf("|\n");
        else if(i<10||i>15)
        printf(" "); 

        }
        else
        {
            if(i==1)
        printf("|");
        else if(i==39)
        printf("|\n");
        else
        printf(" ");
        }
    }
    }
    for(int i=1;i<=39;i++)
    {
        printf("-");
    }
    printf("\n");
}