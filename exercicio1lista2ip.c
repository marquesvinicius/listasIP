#include <stdio.h>
#include <stdlib.h>

int main(){
    double n1, n2, n3, x;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    x=(n1+n2+n3)/3;

    if(x>=6){
    printf("MEDIA = %.2lf \n",x);
    printf("APROVADO \n");

    }
    else {
    printf("MEDIA = %.2lf \n",x);
    printf("REPROVADO \n");

    }





}
