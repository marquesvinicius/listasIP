#include <stdio.h>
int main(){
    unsigned int valor, n100, n50, n10, m1, resto; //variaveis das notas

    scanf("%u",&valor);
    n100=valor/100;
    resto=valor%100;
    n50=resto/50;
    resto=resto%50;
    n10=resto/10;
    m1=resto%10;

    printf("NOTAS DE 100 = %u\n",n100);
    printf("NOTAS DE 50 = %u\n",n50);
    printf("NOTAS DE 10 = %u\n",n10);
    printf("MOEDAS DE 1 = %u\n",m1);







}
