#include<stdio.h>
int main()
{
    char s[100],s1[100],s2[100];
    
    scanf("%s",s);
    if(s=='vertebrado')
    {
        scanf("%s",s1);
        if(s1=='ave')
        {
           scanf("%s",s2);
           if(s2=='carnivoro')
           printf("aguia\n") ;
           else
           printf("pomba\n"); 
        }
        else if(s1=='mamifero')
        {
           scanf("%s",s2);
           if(s2=='onivoro')
           printf("homem\n") ;
           else if(s2=='herbivoro')
           printf("vaca\n"); 
          

        }
    }
    else 
    {
        scanf("%s",s1);
        if(s1=='inseto')
        {
           scanf("%s",s2);
           if(s2=='hematofago')
           printf("pulga\n") ;
           else
           printf("lagarta\n"); 
        }
        else
        {
          if(s1=='anelideo')
          {
           scanf("%s",s2);
           if(s2=='onivoro')
           printf("minhoca\n") ;
           else
           printf("sanguessuga\n"); 
          }

        }
    }
    
}