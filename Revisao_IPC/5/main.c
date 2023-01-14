#include <stdio.h>
#include <stdlib.h>

int main()
{

    int frangos;
    float total;

    printf("Digite a quantidade de frangos:");
    scanf("%d",&frangos);

    total=(frangos*4)+((frangos*3.5)*2);

    printf("O valor gasto sera de: %.1f\n",total);

    return 0;
}
