#include<stdio.h>
int main()
{
    double a[12][12],s=0;
    int r=1;
    char ch[2];
    scanf("%s",&ch);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
           scanf("%lf",&a[i][j]);
        }
    }
    for(int i=0;i<12;i++)
    {
        
        for(int j=r;j<12;j++)
        {
          
            s=s+a[i][j];
            
           
        }
r++;

    }
    if(ch[0]=='S')
    printf("%.1lf\n",s);
    else if(ch[0]=='M')
    printf("%.1lf\n",s/66);
}