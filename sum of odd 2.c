#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,s,e,sum=0;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
           s=x;
           e=y;
        }
        else if(x>y)
        {
            s=y;
            e=x;
        }
        if(x!=y)
        {
        for(int i=s+1;i<e;i++)
        {
            if(i%2!=0)
            sum+=i;
        }}
        printf("%d\n",sum);
    }
}