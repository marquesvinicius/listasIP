#include <stdio.h>
#include <stdlib.h>

int main () {
    double a, b, c, area, perimetro, mod1, mod2, mod3;
    scanf("%lf %lf %lf", &a, &b, &c);

    mod1=(b-c);
    mod2=(a-c);
    mod3=(a-b);

    if ((mod1<0)){
        mod1=(b-c)*(-1);
    }
    if ((mod2<0)){
        mod2=(a-c)*(-1);
    }
    if ((mod3<0)){
        mod3=(a-b)*(-1);
    }

    if (mod1<a && a<(b+c) && mod2<b && b<(a+c) && mod3<c && c<(a+b)) {
        perimetro=a+b+c;
        printf("Perimetro = %.1lf\n", perimetro);
    }

    else {
        area=((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }

}
