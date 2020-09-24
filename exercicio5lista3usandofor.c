#include <stdio.h>
#include <stdio.h>

int main () {
    int a1, r, n, count,soma, an, limite;
    scanf("%d %d %d",&a1,&r,&n);
    limite=n;
    soma=0;
    n=1;

    for(count=1;count<=limite;count++){
        an =a1+((count-1)*r);
        soma=soma+an;
        n=n+1;

    }
    printf("%d \n",soma);








}
