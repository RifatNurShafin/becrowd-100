#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    if(s=="vertebrado")
    {
        
        if(s1=="ave")
        {
           if(s2=="carnivoro")
           printf("aguia\n") ;
           else
           printf("pomba\n"); 
        }
        else 
        {
           if(s2=="onivoro")
           printf("homem\n") ;
           else 
           printf("vaca\n"); 
          

        }
    }
    else 
    {
        
        if(s1=="inseto")
        {
           
           if(s2=="hematofago")
           printf("pulga\n") ;
           else
           printf("lagarta\n"); 
        }
        else
        {
          if(s1=="anelideo")
          {
           
           if(s2=="onivoro")
           printf("minhoca\n") ;
           else
           printf("sanguessuga\n"); 
          }

        }
    }
    
    
    

}