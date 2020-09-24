#include <stdio.h>
#include <stdlib.h>

int main () {
    int horas, resto;
    double valor;

    scanf("%d",&horas);

    if (horas<3) {
        valor=horas*5;

    }
    else if (horas>3) {
        resto=(horas%3)*5;
        valor= ((horas/3)*10) + resto;
    }
    else if (horas==3) {
        valor=10;
    }

    printf("O VALOR A PAGAR E = %.2lf \n", valor);
}
