#include<stdio.h>
int main()
{
    int ih,im,fh,fm,dm;
    scanf("%d%d%d%d",&ih,&im,&fh,&fm);
    if(im>fm)
    {
        dm=(fm+60)-im;
        if(ih==fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-1),dm);
        else if(ih<fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh-ih-1),dm);
        else if(ih>fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh+24-ih-1),dm);
    }
    else if(im<fm)
    {   
        dm=(fm-im);
        
        if(ih==fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh-ih),dm);
        else if(ih<fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh-ih),dm);
        else if(ih>fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh+24-ih),dm);
    }
    else 
    {
        dm=0;
        if(ih==fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,dm);
        else if(ih<fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh-ih),dm);
        else if(ih>fh)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(fh+24-ih),dm);

    
    
    }

   
}