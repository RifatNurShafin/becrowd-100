#include<stdio.h>
int main()
{
    float ta,fta,ta1,ta2,ta3;
    scanf("%f",&ta);
    if(ta<=2000)
    printf("Isento\n");
    else if(ta>=2000.01&&ta<=3000)
    {
        ta1=ta-2000;
        fta=(ta1*8)/100;
        printf("R $ %.2f\n",fta);
    }
    else if(ta>=2000.01&&ta<=4500)
    {
       ta2=ta-3000;
       ta1=ta-(2000+ta2);
       fta=((ta1*8)/100)+((ta2*18)/100);
       printf("R $ %.2f\n",fta);
    }
    else if(ta>4500)
    {  
       ta3=ta-4500;
       ta2=ta-(3000+ta3);
       ta1=ta-(2000+ta2+ta3);
       fta=((ta1*8)/100)+((ta2*18)/100)+((ta3*28)/100);
       printf("R $ %.2f\n",fta);
    }
    
    
}