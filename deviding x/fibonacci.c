#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    
    for(int i=0;i<n;i++)
    {   if(i==0)
        a[i]=0;
        else if(i==1)
        a[i]=1;
        else
        a[i]=a[i-1]+a[i-2];
        
    }
    for(int i=0;i<=n;i++)
    {   if(i!=n-1&&i!=n)
        printf("%d ",a[i]);
        else if(i==n-1&&i!=n)
        printf("%d",a[i]);
        else
        printf("\n");
    }
    
}