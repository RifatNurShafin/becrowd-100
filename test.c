#include<stdio.h>
int main()
{
    int a[10],p=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            p=i;
        }
    }
    printf("%d\n%d\n",max,p+1);
}