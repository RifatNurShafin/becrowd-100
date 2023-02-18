#include<stdio.h>
int main()
{
    int a[5],pc=0,ec=0,oc=0,mc=0;
    for(int i=0;i<5;i++)
    {   scanf("%d",&a[i]);
        if(a[i]%2==0)
        ec++;
        if(a[i]>0)
        pc++;
        else if(a[i]<0)
        mc++;
        
    }
    printf("%d valor(es) par(es)\n",ec);
    printf("%d valor(es) impar(es)\n",(5-ec));
    printf("%d valor(es) positivo(s)\n",pc);
    printf("%d valor(es) negativo(s)\n",mc);

}