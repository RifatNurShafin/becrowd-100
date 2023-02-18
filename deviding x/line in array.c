#include<stdio.h>
int main()
{
    float a[12][12],s=0;
    int r;
    scanf("%d",&r);
    char ch[2];
    scanf("%s",&ch);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
           scanf("%f",&a[i][j]);
        }
    }
    for(int i=0;i<12;i++)
    {
        
        s+=a[r][i];


    }
    if(ch[0]=='S')
    printf("%.1f\n",s);
    else if(ch[0]=='M')
    printf("%.1f\n",s/12);
}