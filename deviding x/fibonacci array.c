#include<stdio.h>
int main()
{
    long long int t,x;
    scanf("%lld",&t);
    long long int a[61]; 
    a[0]=0;
    a[1]=1;
    for(long long int i=2;i<=60;i++)
    { 
       a[i]=a[i-1]+a[i-2];
    }
    while(t--)
    {   
        scanf("%lld",&x);
        printf("Fib(%lld) = %lld\n",x,a[x]);
        
    }

}