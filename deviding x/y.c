#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        float div;
        if(y!=0)
        {
            div=x/(float)y;
            printf("%.1f\n",div);
        }
        else if(y==0)
        printf("divisao impossivel\n");

    }
}