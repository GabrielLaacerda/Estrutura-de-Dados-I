#include <stdio.h>
#include <stdlib.h>

#include "calcular.h"

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("\nQuadrado de %d: %d\n",num,quadrado(num));
    printf("Cubo de %d: %d\n",num,cubo(num));

    printf("Valor da constante PI: %f\n",PI);


    return 0;
}
