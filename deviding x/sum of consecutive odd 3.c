#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {  int sum=0;
       scanf("%d%d",&x,&y);
       for(int i=x;y!=0;i++)
       {
         if(i%2!=0)
         {
            sum+=i;
            y--;
         }
         
       }
       printf("%d\n",sum);
    }

}