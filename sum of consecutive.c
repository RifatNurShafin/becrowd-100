#include<stdio.h>
int main()
{
    int x,y,s,e,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
       s=y;
       e=x; 
    }
    else if(x<y)
    {
        s=x;
        e=y;
    }
    if(x!=y)
    {
    for(int i=s+1;i<e;i++)
    {
        if(i%2!=0)
        sum+=i;
        
    }
    }
    printf("%d",sum);

}