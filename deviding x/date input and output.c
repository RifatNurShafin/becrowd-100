#include<stdio.h>
int main()
{
    char d[8];
    scanf("%s",d);
    printf("%c%c/%c%c/%c%c\n",d[3],d[4],d[0],d[1],d[6],d[7]);
    printf("%c%c/%c%c/%c%c\n",d[6],d[7],d[3],d[4],d[0],d[1]);
    printf("%c%c-%c%c-%c%c\n",d[0],d[1],d[3],d[4],d[6],d[7]);
}