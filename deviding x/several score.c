#include <stdio.h>
#include<stdbool.h>
int main()
{
    double x,s = 0,c = 0;
    while (true)
    {
        int t;
        while (true)
        {
            double media;
            scanf("%lf", &x);
            if (x < 0 || x > 10)
                printf("nota invalida\n");
            else if (x >= 0 && x <= 10)
            {
                if (c <= 2)
                {
                    s = s + x;
                    c++;
                    if (c == 2)
                    {
                        media = s / 2;
                        printf("media = %.2lf\n", media);
                        c = 0;
                        s = 0;
                        media=0;
                        printf("novo calculo (1-sim 2-nao)\n");
                        break;
                    }
                }
            }
        }
        new:
        scanf("%d", &t);
        if (t != 2 && t != 1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            goto new;
        }
        else if (t == 2)
            break;
    }   
}
