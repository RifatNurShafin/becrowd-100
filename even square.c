#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(long long int i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("%d^2 = %d\n",i,(i*i));
    }
}