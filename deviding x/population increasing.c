#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,i;
        double g1,g2;
        scanf("%d %d %lf %lf",&a,&b,&g1,&g2);
        int c=0;
        for(i=1;a<=b;i++)
        {   if(g2!=0)
            {
            a=a+(a*(g1/100));
            b=b+(b*(g2/100));
            c++;
            if(c>100)
            break;
            }
            else if(g2==0)
            {
            a=a+(a*(g1/100));
            c++;
            if(c>100)
            break;
            
            }
        }
        if(c<=100)
        printf("%d anos.\n",c);
        else if(c>100)
        printf("Mais de 1 seculo.\n");

    }
}