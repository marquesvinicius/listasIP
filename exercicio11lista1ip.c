#include <stdio.h>
#include <stdlib.h>

int main() {
    int alg, d1, d2, d3, r1, r2, saida;
    scanf("%d",&alg);

    d1=alg/100; //123/100=1 r 23
    r1=alg%100; // r 23
    d2=r1/10; // d2 = 23/10=2 r=3
    r2=r1%10; // r = 3
    d3=r2; // 3

    saida=(d3*100)+(d2*10)+(d1);

    printf("%d",saida);




}
