#include<stdio.h>
int main()
{
    int s,e,sum=0,temp;
    scanf("%d%d",&s,&e);
    if(s>e)
    {
        temp=s;
        s=e;
        e=temp;
    }
    for(int i=s;i<=e;i++)
    {
          if(i%13!=0)
          {
            sum+=i;
          }
    }
    printf("%d\n",sum);

}