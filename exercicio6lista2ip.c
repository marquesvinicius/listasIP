#include <stdio.h>
#include <stdlib.h>

int main () {
    double s1, sr;
    scanf("%lf",&s1);

    if (s1<=300.0){
        sr=s1+(0.5*s1);
    }
    else
        sr=s1+(0.3*s1);


    printf("SALARIO COM REAJUSTE = %.2lf \n",sr);

}
