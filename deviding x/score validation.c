#include<stdio.h>
int main()
{
    float x,c=0,s=0,avg;
    while(1)
    {   scanf("%f",&x);
        if(x>=0&&x<=10)
        {
           if(c<=2)
           {
            s+=x;
            c++;
           }
           if(c==2)
           {
            avg=s/2;
            printf("media = %.2f\n",avg);
            break;
           }
           
        }
        else
        printf("nota invalida\n");
    }
}