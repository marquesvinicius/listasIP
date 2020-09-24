#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,contador;
    double ing, renda, pop, geral, arq, cad;
    scanf ("%d",&n);
    contador=1;
    while (contador <= n) {
        scanf ("%lf %lf %lf %lf %lf", &ing, &pop, &geral, &arq, &cad);

        pop= ing*(pop/100);
        geral=ing*(geral/100);
        arq=ing*(arq/100);
        cad=ing*(cad/100);
        renda= (pop*1) + (geral*5) + (arq*10) + (cad*20);
        printf("A RENDA DO JOGO N. %d E = %.2lf \n", contador, renda);

        contador++;
    }


    }


