#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int N[1000];
    int c=0;
    for(int i=0;i<1000;i++)
    {   
           if(c<n)
           {
            N[i]=c;
            c++;
           }
           if(c==n)
           c=0;

    }
    for(int i=0;i<1000;i++)
    {
           printf("N[%d] = %d\n",i,N[i]);

    }
    
}