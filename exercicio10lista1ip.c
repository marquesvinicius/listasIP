#include <stdio.h>
#include <stdlib.h>

int main(){
    int alg, saida, d1, d2, d3, d4, r1, r2;
    scanf("%d",&alg);
    d1=alg/100;
    r1=alg%100;
    d2=r1/10;
    r2=r1%10;
    d3=r2;
    d4=(d1+(d2*3)+(d3*5))%7;
    saida=(d1*1000)+(d2*100)+(d3*10)+(d4);

    printf("O NOVO NUMERO E = %d", saida);








}
