#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gasolina,pagamento,total;

    printf("Digite o preco do litro de gasolina:");
    scanf("%f",&gasolina);

    printf("Digite o valor do pagamento:");
    scanf("%f",&pagamento);

    total=pagamento/gasolina;

    printf("O total de gasolina e de: %1.f L\n",total);

    return 0;
}
