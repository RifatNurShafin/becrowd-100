#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int r=1;r<=n;r++)
    {   
        for(int c=r;c<=(r*r*r);c++)
        {   if(c==r)
            printf("%d %d %d\n",c,c*c,c*c*c);

            
        }
        
    }
}