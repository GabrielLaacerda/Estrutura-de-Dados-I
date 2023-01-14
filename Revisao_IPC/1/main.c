#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos,meses,dias,total;

    printf("Digite sua idade em anos, meses e dias:\n");
    scanf("%d",&anos);
    scanf("%d",&meses);
    scanf("%d",&dias);

    total=(anos*365)+(meses*30)+dias;

    printf("O total de dias e:%d\n",total);

    return 0;
}
