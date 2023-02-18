#include<stdio.h>
int main()
{   int c=0;
    for(float i=0;i<=2.2;i=i+.2)
    {
        for(float j=1;j<=3;j++)
        {
            if(i==0)
            {
            int k=i,J=j;
            printf("I=%d J=%d\n",k,J);
            c++;
            if(j==3&&c==3)
            {
                j=1;
                c=0;
                break;            
            }
            
            }
            else if(i==1)
            {
            int k=i,J=j+1;
            printf("I=%d J=%d\n",k,J);
            c++;
            if(j==3&&c==3)
            {
                j=2;
                c=0;
                break;            
            }
            
            }
            else if(i<=2.2&&i>=2)
            {
            int k=i,J=j+2;
            printf("I=%d J=%d\n",k,J);
            c++;
            if(j==3&&c==3)
            {
                j=1;
                c=0;
                break;            
            }
            
            }
            else 
            {
            printf("I=%.1f J=%.1f\n",i,j+i);
            c++;
            if(j==3&&c==3)
            {
                j=1;
                c=0;
                break;
            }
            }
            
        }
    }
}