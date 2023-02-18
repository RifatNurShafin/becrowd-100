#include<stdio.h>
int main()
{
    int a,n,s=0;
    scanf("%d",&a);
    while(1)
    {
        scanf("%d",&n);
        if(n>0)
        break;
        
    }
    for(int i=a;n!=0;i++)
    {
        s+=i;
        n--;
    }
    printf("%d\n",s);
}