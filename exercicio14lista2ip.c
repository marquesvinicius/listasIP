#include <stdio.h>
#include <stdlib.h>

int main (){
    int matricula, dep;
    double sm, sf, tx, ib, il, res;

    scanf("%d %lf %d %lf %lf", &matricula, &sm, &dep, &sf, &tx);

    printf("MATRICULA = %d\n", matricula);

    if(sf>(12*sm)){
       ib=sf*(0.2);
       }
    else if ((sf>(5*sm))){
        ib=sf*(0.08);
    }
    else if ((sf<=(5*sm))){
        ib=sf*0;
    }
    printf("IMPOSTO BRUTO = %.2lf\n",ib);

    il=ib-(300.0*dep);
    printf("IMPOSTO LIQUIDO = %.2lf\n",il);

    res=il-(sf*(tx/100));
    printf("RESULTADO = %.2lf\n",res);

    if (res>0){
        printf("IMPOSTO A PAGAR");
    }
    else if (res==0){
        printf("IMPOSTO QUITADO");
    }
    else if (res<0){
        printf("IMPOSTO A RECEBER");
    }



}
