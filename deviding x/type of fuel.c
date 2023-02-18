#include<stdio.h>
int main()
{
    int f,a=0,g=0,d=0;
    while(1)
    {    
        scanf("%d",&f);
        if(f>=1&&f<=4)
        {
           if(f==1)
           a++;
           else if(f==2)
           g++;
           else if(f==3)
           d++;
           else if(f==4)
           break;
           else
           continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);

}