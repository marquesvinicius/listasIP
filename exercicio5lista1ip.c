#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
    double v, ab, h, a;
    scanf("%lf",&h);
    scanf("%lf",&a);

    ab=(3*a*a)*(sqrt(3))/2;
    v=(ab*h)/3;
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS \n",v);


}
