#include <stdio.h>
#include <stdlib.h>

int main () {
    int conta;
    double m3, valor;
    char t;

    scanf("%d %lf %c", &conta, &m3, &t);

    if(t=='R') {
            valor=5+(0.05*m3);

    }
    if(t=='C') {
            if (m3>80){
                valor=500+((m3-80)*0.25);
            }
        else valor=500;
    }
    if (t=='I') {
            if (m3>100){
                valor=800+((m3-100)*0.04);
            }
        else valor=800;
    }

    printf("CONTA = %d \n",conta);
    printf("VALOR DA CONTA = %.2lf \n",valor);


}
