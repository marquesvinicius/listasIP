#include <stdio.h>

int main (){
    unsigned int valor, dia, mes, ano, resto;

    //ler a variavel valor
    scanf("%u", &valor);
    //separar valor em dia, mes e ano

    dia=valor/1000000;
    resto=valor%1000000;
    mes=resto/10000;
    ano=resto%10000;
    //verificar se a data e valida
    if(dia==0 || dia>31 || mes==0 || mes>12) {
        printf("Data invalida!\n");
    }
    else{
        if( (mes==4 || mes==6 ||mes==9 || mes==11) && dia==31) {
            printf("Data invalida!\n");
        }
        else{
            if(mes==2 && dia>28){
                printf("Data invalida!\n");

        }
        else{ // A data e valida
                printf("%u de ",dia);
                if(mes==1){
                    printf("janeiro de ");
                }
                if(mes==2) {
                    printf("fevereiro de ");
                }
                if(mes==3) {
                    printf("marco de ");
                }
                if(mes==4) {
                    printf("abril de ");
                }
                if(mes==5) {
                    printf("maio de ");
                }
                if(mes==6) {
                    printf("junho de ");
                }
                if(mes==7) {
                    printf("julho de ");
                }
                if(mes==8) {
                    printf("agosto de ");
                }
                if(mes==9) {
                    printf("setembro de ");
                }
                if(mes==10) {
                    printf("outubro de ");
                }
                if(mes==11) {
                    printf("novembro de ");
                }
                if(mes==12) {
                    printf("dezembro de ");
                }
                printf("%u\n", ano);




    }


    }}}

