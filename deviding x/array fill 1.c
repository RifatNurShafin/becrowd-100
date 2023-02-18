#include<stdio.h>
int main()
{
    int a[10];
    
    for(int i=0;i<10;i++)
    {   if(i==0)
        scanf("%d",&a[0]);
        else
        a[i]=a[i-1]*2;
        printf("N[%d] = %d\n",i,a[i]);
    }
    
}