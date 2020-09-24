#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, m, s, stotal;
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);

    stotal=(h*3600)+(m*60)+s;

    printf("O TEMPO EM SEGUNDOS E = %d",stotal);



}
