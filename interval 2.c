#include<stdio.h>
int main()
{
    int t,n;
    int ci=0,co=0;
    scanf("%d",&t);
    while(t--)
    {   scanf("%d",&n);
        if(n>=10&&n<=20)
        ci++;
        else
        co++;

        
    }
    printf("%d in\n",ci);
    printf("%d out\n",co);
}