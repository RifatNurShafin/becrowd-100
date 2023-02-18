#include<stdio.h>
int main(){
    float CGPA;//int na float type data nibi tai float likbi
    scanf("%f",&CGPA);
if(CGPA>=3.75)
{
    printf("90%% waiver\n");
}
else if(CGPA>=3.50 && CGPA<3.75)
{
    printf("50%% waiver\n");
}

else if(CGPA>=3.25 && CGPA<3.50)
{
    printf("25%% waiver\n");
}
else
{
    printf(" No waiver\n");
}
return 0;
}