#include<stdio.h>
int main()
{
    int I=1,J=7,c=0;
    while(I<=9)
    {
        if(c<3)
        {
            if(c==0)
            {
                printf("I=%d J=%d\n",I,J);
                c++;
            }
            else if(c==1)
            {
                printf("I=%d J=%d\n",I,J-1);
                c++;
            }
            else if(c==2)
            {
                printf("I=%d J=%d\n",I,J-2);
                c++;
            }
        }
        else
        {
            I=I+2;
            c=0;
            J=J+2;
        }
    }
}