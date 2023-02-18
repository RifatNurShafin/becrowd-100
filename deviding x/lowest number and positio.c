#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0],posi;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        posi=i;
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,posi);


}