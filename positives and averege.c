#include<stdio.h>
int main()
{
    float a[6],sum=0;
    int pc=0;
    
    for(int i=0;i<6;i++)
    {   scanf("%f",&a[i]);
        if(a[i]>0)
        {
            pc++;
            sum+=a[i];
        }

    }
    printf("%d valores positivos\n%.1f\n",pc,(sum/pc));
}