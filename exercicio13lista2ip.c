#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int cc, dr, rt;
    scanf("%u",&cc);
    scanf("%u",&dr);
    scanf("%u",&rt);

    if(cc<7 && dr>50 && rt>80000){
       printf("ACO DE GRAU = 10\n");
}
    else if(cc<7 && dr>50 && rt<=80000){
        printf("ACO DE GRAU = 9\n");
    }
    else if(cc<7 && dr<=50 && rt<=80000){
        printf("ACO DE GRAU = 8\n");
    }
    else printf("ACO DE GRAU = 7\n");
}
