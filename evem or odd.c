#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            if(n>0)
            printf("EVEN POSITIVE\n");
            else if(n<0)
            printf("EVEN NEGATIVE\n");
            else if(n==0)
            printf("NULL\n");
        }
        else if(n%2!=0)
        {
            if(n>0)
            printf("ODD POSITIVE\n");
            else if(n<0)
            printf("ODD NEGATIVE\n");

        }

    }
}