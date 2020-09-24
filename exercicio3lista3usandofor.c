#include <stdio.h>
#include <stdlib.h>

int main () {
    int N,count,linhas;
    count=2;
    scanf("%d",&N);

    for (linhas=1;linhas<=N/2;linhas++){
        printf("%d^2 = %d \n",count,count*count);
        count=count+2;


    }





}
