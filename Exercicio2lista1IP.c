#include <stdio.h>
#include <stdlib.h>

int main () {
    double f, c, pol, mm;
    scanf ("%lf",&f);
    scanf ("%lf",&pol);
    c=(5*(f-32))/9;
    mm=(25.4*pol);
    printf("O VALOR EM CELSIUS = %.2lf \n",c);
    printf("A QUANTIDADE DE CHUVA E = %.2lf \n",mm);

}



