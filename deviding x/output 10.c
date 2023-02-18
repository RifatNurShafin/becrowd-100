#include<stdio.h>
int main()
{     
    long long int x,y;
    scanf("%lld%lld",&x,&y);
    long long int s=0;
      s=((y*(y+1))-(x*(x-1)))/2;
      printf("%lld\n",s);
}