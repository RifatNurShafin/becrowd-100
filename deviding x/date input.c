#include<stdio.h>
int main()
{
    int d,m,y;
    char ch;
    scanf("%d%c%d%c%d",&d,&ch,&m,&ch,&y);
    printf("%02d/%02d/%02d\n",m,d,y);
    printf("%02d/%02d/%02d\n",y,m,d);
    printf("%02d-%02d-%02d\n",d,m,y);

}