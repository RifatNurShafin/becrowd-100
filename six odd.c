#include<stdio.h>
int main()
{
    int n,oc=0;
    scanf("%d",&n);
    for(int i=n;i<=n+12;i++)
    {   if(oc==6)
        break;
        if(i%2!=0)
        {
            printf("%d\n",i);
            oc++;
            
        }
        
    }
}