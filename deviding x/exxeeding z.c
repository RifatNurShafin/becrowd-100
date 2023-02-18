#include<stdio.h>
int main()
{
    int x,z,max=0,s=0,c=0;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&z);
        if(z>x)
        {
            break;
        }
        else if(x>z)
        {
            if(x>max)
            max=x;
        }
    }
    for(int i=max;s<=z;i++)
    {
        s+=i;
        c++;
    }
    printf("%d\n",c);
    
}