#include <stdio.h>
#include <stdlib.h>

int main () {
    int ano, resto4, resto100, resto400;
    scanf("%d", &ano);

    resto4=ano%4;
    resto100=ano%100;
    resto400=ano%400;

    if ((ano>1582)){
        if ((resto4==0) && (resto100!=0)){
        printf("ANO BISSEXTO");
    }
        else if((resto4==0) && (resto100==0)&& (resto400==0)){
        printf("ANO BISSEXTO");
        }

        else if ((resto100==0) && (resto400!=0)) {
        printf("ANO NAO BISSEXTO");
    }
    else printf("ANO NAO BISSEXTO");
    }

    else {
        printf("ANO NAO BISSEXTO");
    }

}
