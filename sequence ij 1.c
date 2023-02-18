#include<stdio.h>
int main()
{
    int I=1,J=60,ii=3,jj=5;
    for(int i=0;i<=12;i++)
    {
    printf("I=%d J=%d\n",((i*ii)+I),(J-(i*jj)));
    }
}