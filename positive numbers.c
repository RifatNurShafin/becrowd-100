#include<stdio.h>
int main()
{
    float a[6];
    int pc=0;
    
    for(int i=0;i<6;i++)
    {   scanf("%f",&a[i]);
        if(a[i]>0)
        pc++;
        

    }
    printf("%d valores positivos\n",pc);
}