#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double a, b, c, delta, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta=(b*b)- (4*a*c);
    if (delta>0) {
        x1= ((-b) - (sqrt(delta)))/(2*a);
        x2= ((-b) + (sqrt(delta)))/(2*a);
        printf("RAIZES DISTINTAS \nX1 = %.2lf \nX2 = %.2lf", x1, x2);
    }
    else if (delta==0){
        x1=(-b)/(2*a);
        printf("RAIZ UNICA \nX1 = %.2lf",x1);
    }
    else if (delta<0) {
        printf("RAIZES IMAGINARIAS");
    }


}
