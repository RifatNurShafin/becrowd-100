#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {   int s=0;
        scanf("%d",&x);
        for(int i=1;i<=(x/2);i++)
        {
            if(x%i==0)
             s+=i;
        }
        if(s==x)
        printf("%d eh perfeito\n",x);
        else
        printf("%d nao eh perfeito\n",x);

    }
}