#include<stdio.h>
#include<math.h>
int main()
{
    float s=0,j=0;
    
    for(int i=1;i<=39;i++)
    {  
        if(i%2!=0)
        {
            s+=(i/pow(2,j));
            j++;
        }
    }
    printf("%.2f\n",s);
    
}