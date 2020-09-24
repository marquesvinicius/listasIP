#include <stdio.h>
#include <stdlib.h>

int main() {
    int vezes, count;
    double fahr, celsius;
    scanf("%d", &vezes); // ler a qtd de vezes de conversao
    count=1; // count = 1, pois a primeira conversao e a conversao n.1
    while (count<=vezes) { //enquanto o numero da conversao for menor ou igual a qtd de vezes inserida, o programa ira fazer
        scanf("%lf", &fahr); // ler o valor em fahrenheit
        celsius=(5*(fahr-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS \n", fahr, celsius);
        count++;


        }





    }












