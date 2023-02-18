#include<stdio.h>
int main()
{
    int x,y,xin=0,xgre=0,s,grenais=1,draw=0;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        xin++;
        else if(x==y)
        draw++;
        else 
        xgre++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&s);
        if(s==2)
        break;
        else
        {
        grenais++;
        continue; 
        }
    }
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",xin);
    printf("Gremio:%d\n",xgre);
    printf("Empates:%d\n",draw);

}