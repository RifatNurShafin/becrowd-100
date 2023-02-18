#include<stdio.h>
int main()
{
    int x,y,s,e;
    
    while(1){
        int sum=0;
    scanf("%d%d",&x,&y); 
    if(x<=0||y<=0)
    return;
    else if(x<y)
    {
        s=x;
        e=y;
    }
    else if(x>y)
    {
        s=y;
        e=x;
    }
    
    for(int i=s;i<=e;i++)
    {   sum+=i;
        printf("%d ",i);

        
    }
     printf("Sum=%d\n",sum);
    
    
    }
   
}