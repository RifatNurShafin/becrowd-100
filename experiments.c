#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int tt=0,ct=0,rt=0,st=0;
    float cp,rp,sp;
    while(t--)
    {
        int n;
        char ch;
        fflush(stdin);
        scanf("%d %c",&n,&ch);
        tt+=n;
        if(ch==67)
        ct+=n;
        else if(ch==82)
        rt+=n;
        else if(ch==83)
        st+=n;
    }
    cp=(ct/(float)tt)*100;
    rp=(rt/(float)tt)*100;
    sp=(st/(float)tt)*100;
    printf("Total: %d cobaias\n",tt);
    printf("Total de coelhos: %d\n",ct);
    printf("Total de ratos: %d\n",rt);
    printf("Total de sapos: %d\n",st);
    printf("Percentual de coelhos: %.2f %%\n",cp);
    printf("Percentual de ratos: %.2f %%\n",rp);
    printf("Percentual de sapos: %.2f %%\n",sp);
    
}   