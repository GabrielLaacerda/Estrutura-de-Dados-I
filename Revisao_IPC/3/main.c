#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco,desconto,dist,total;

    printf("Digite o custo de fabrica:");
    scanf("%f",&preco);

    desconto=preco*0.28;
    dist=preco*0.45;
    total=desconto+dist+preco;

    printf("O preco final e: %f\n",total);

    return 0;
}
