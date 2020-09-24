#include <stdio.h>
#include <stdlib.h>

int main(){
    double vm, vk, m, s, w, t,a;
    scanf("%lf",&m); //toneladas
    scanf("%lf",&a); //metro por segundo
    scanf("%lf",&t); //segundos

    vm=(a*t);
    vk=(3.6*vm);
    s=(a*t*t)/2;
    w=((m*1000)*vm*vm)/2;

    printf("VELOCIDADE = %.2lf \n",vk);
    printf("ESPACO PERCORRIDO = %.2lf \n",s);
    printf("TRABALHO REALIZADO = %.2lf \n",w);





}
