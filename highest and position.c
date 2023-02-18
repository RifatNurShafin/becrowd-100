#include<stdio.h>
int main()
{
    int a[100],p=0;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<100;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            p=i;
        }
    }
    printf("%d\n%d\n",max,p+1);
}