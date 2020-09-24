#include <stdio.h>
#include <stdlib.h>

int main () {
    double d3, d2, d1;
    scanf("%lf", &d3);
    scanf("%lf", &d2);
    scanf("%lf", &d1);

    if((d3<=d2) && (d2<=d1)){
        printf("%.2lf, %.2lf, %.2lf",d3,d2,d1);
    }
    else if ((d3<=d2) && (d1<=d2)){
        printf("%.2lf, %.2lf, %.2lf",d3,d1,d2);
    }
    else if ((d2<=d3) && (d3<=d1)){
        printf("%.2lf, %.2lf, %.2lf",d2,d3,d1);
    }
    else if ((d2<=d1) && (d1<=d3)){
        printf("%.2lf, %.2lf, %.2lf",d2,d1,d3);
    }
    else if ((d1<=d3)&& (d3<=d2)){
        printf("%.2lf, %.2lf, %.2lf",d1,d3,d2);
    }
    else if ((d1<=d2) && (d2<=d3)){
        printf("%.2lf, %.2lf, %.2lf",d1,d2,d3);
    }


}
