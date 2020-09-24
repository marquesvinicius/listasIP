#include <stdio.h>
#include <stdlib.h>

int main () {
    double nota;
    char conceito, A, B, C, D;

    scanf("%lf",&nota);

    if ((nota>=0.0) && (nota<6.0)){
    conceito='D';

    }
    else if ((nota>=6.0) && (nota<7.5)) {
        conceito='C';
    }
    else if ((nota>=7.5) && (nota<9.0)){
        conceito='B';
    }
    else if ((nota>=9.0) && (nota<=10.0)) {
        conceito='A';
    }

    printf("NOTA = %.1lf CONCEITO = %c \n", nota, conceito);
}

