#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int r=0;r<n;r++)
    {
        for(int c=(r*4+1);c<=n*4;c++)
        {
            if(c%4==0)
            {
                printf("PUM\n");
                break;
            
            }
            else 
            printf("%d ",c);
        }
    }
}