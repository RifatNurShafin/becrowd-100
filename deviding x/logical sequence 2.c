#include<stdio.h>
int main()
{
    int x,y,c=0;
    scanf("%d%d",&x,&y);
    for(int r=1;r<=y;r++)
    {
        if(c!=x-1)
        {
            printf("%d ",r);
            c++;
        }
        else if(c==x-1)
        {
            printf("%d",r);
            c++;
        }
        if(c==x)
        {
            printf("\n");
            c=0;
        }
    }
    
}