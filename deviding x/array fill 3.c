#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double N[100];
    N[0]=x;
    for(int i=1;i<100;i++)
    {
        N[i]=N[i-1]/2;
    }
    for(int i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,N[i]);
    }
}