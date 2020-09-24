#include <stdio.h>
#include <stdlib.h>


int main(){
    double salario,consumo,kw,qtd;

    scanf("%lf",&salario);
    scanf("%lf",&qtd);

    kw=(salario/1000) * 7;
    consumo=(qtd * kw);

    printf("Custo por kW: R$ %.2lf \n",kw);
    printf("Custo do consumo: R$ %.2lf \n",consumo);
    printf("Custo com desconto: R$ %.2lf \n",consumo/10 * 9);

}
