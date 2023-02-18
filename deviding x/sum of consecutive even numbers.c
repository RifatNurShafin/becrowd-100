#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        int s=0,e=5;
        if(x!=0)
        {
            for(int i=x;e!=0;i++)
            {
                if(i%2==0)
                {
                s+=i;
                e--;
                }
            }
            printf("%d\n",s);
        }
        else if(x==0)
        break;

    }
}