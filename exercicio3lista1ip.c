#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double raio, altura, areat, pi;
    scanf("%lf",&raio);
    scanf("%lf",&altura);

    pi=3.14159;
    areat=(2*pi*raio*raio) + (2*pi*raio*altura);

    printf("O VALOR DO CUSTO E = %.2lf \n", areat*100);



}
