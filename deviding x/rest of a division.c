#include<stdio.h>
int main()
{
    int s,e,temp;
    scanf("%d%d",&s,&e);
    if(s>e)
    {
        temp=s;
        s=e;
        e=temp;
    }
    for(int i=s+1;i<e;i++)
    {
        if(i%5==2||i%5==3)
        printf("%d\n",i);
    }

}