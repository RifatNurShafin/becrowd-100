#include<stdio.h>
int main()
{   int x[15];
    int par[5],impar[5];
    for(int i=0;i<15;i++)
    {
        scanf("%d",&x[i]);
        
    }
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(x[i]%2==0)
            {
                par[j]=x[i];
                printf("par[%d] = %d\n",j,par[j]);
            }
            else
            {
            impar[j]=x[i];
            printf("imparpar[%d] = %d\n",j,impar[j]);
            }
            
        }
        
    }
}