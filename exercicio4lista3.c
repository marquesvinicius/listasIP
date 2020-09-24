#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, y, resto, cont;
    scanf("%d %d",&x, &y);
    cont=1;
    resto=x%2;

    if(resto!=0) {
        printf("O PRIMEIRO NUMERO NAO E PAR \n");

    }
    else while (cont<=y) {
        printf("%d ",x);
        x=x+2;
        cont=cont+1;


    }

    printf("\n");



}
