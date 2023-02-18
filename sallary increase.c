#include<stdio.h>
int main()
{
    float fsl,ins,sl;
    scanf("%f",&sl);
    if(sl>=0&&sl<=400)
    {
        fsl=sl+((sl*15)/100);
        ins=fsl-sl;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",fsl,ins);
    }
    else if(sl>=400.01&&sl<=800)
    {
        fsl=sl+((sl*12)/100);
        ins=fsl-sl;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",fsl,ins);
    }
    else if(sl>=800.01&&sl<=1200)
    {
        fsl=sl+((sl*10)/100);
        ins=fsl-sl;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",fsl,ins);
    }
    else if(sl>=1200.01&&sl<=2000)
    {
        fsl=sl+((sl*7)/100);
        ins=fsl-sl;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",fsl,ins);
    }
    else if(sl>2000)
    {
        fsl=sl+((sl*4)/100);
        ins=fsl-sl;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",fsl,ins);
    }
    

    

}