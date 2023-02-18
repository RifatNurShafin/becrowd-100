#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n*2][3],r,c,j;
    for(r=0,j=1;r<n*2;r=r+2,j++)
    {
        a[r][0]=j;
        a[r+1][0]=j;
    }
    for(c=0;c<3;c++)
    {
        a[1][c]=1;
    }
    for(r=0;r<n*2;r++)
    {
        for(c=0;c<3;c++)
        {
            if(r%2==0)
            {   if(c==1)
                a[r][c]=a[r][0]*a[r][0];
                else if(c==2)
                a[r][c]=a[r][0]*a[r][0]*a[r][0];
            }
            else if(r%2!=0)
            {
                if(c==1)
                a[r][c]=a[r-1][c]+1;
                else if(c==2)
                a[r][c]=a[r-1][c]+1;
            }
        }
       
       
    }
    for(r=0;r<n*2;r++)
    {
        for(c=0;c<3;c++)
        {   if(c!=2)
            printf("%d ",a[r][c]);
            else if(c==2)
            printf("%d",a[r][c]);
        }
       printf("\n");
       
    }

}