#include <stdio.h>
#include <stdlib.h>

int main(){
    double total, fab, pd, pi;
    scanf("%lf",&fab);
    scanf("%lf",&pd);
    scanf("%lf",&pi);

    total= fab + ((fab*pd)/100) + ((fab*pi)/100);

    printf("O VALOR DO CARRO E = %.2lf \n",total);




}
