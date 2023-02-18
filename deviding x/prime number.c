#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {   
        int c=0;
        scanf("%d",&x);
        if(x>1)
        {
        for(int i=2;i<x;i++)
        {
              if(x%i==0)
              c++;
        }
        if(c==0)
        printf("%d eh primo\n",x);
        else
        printf("%d nao eh primo\n",x);
        }
        else if(x==1)
        printf("%d nao eh primo\n",x);
    }
}