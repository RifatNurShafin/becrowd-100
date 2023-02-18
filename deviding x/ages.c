#include<stdio.h>
int main()
{
    int a,sum=0;
    float c=0;
    while(1)
    {
        scanf("%d",&a);
        if(a>=0)
        {
            sum+=a;
            c++;
        }
        else 
        break;
    }
    float avg=(sum/c);
    printf("%.2f\n",avg);
}