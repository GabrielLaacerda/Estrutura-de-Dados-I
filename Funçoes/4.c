#include <stdio.h>
#include <stdlib.h>

int calcular(int anos, int meses, int dias){

    int tot = (anos * 365) + (meses * 30) + dias;

    return tot;

}

int main()
{
    int anos, meses,dias;

    printf("Digite sua idade em anos/meses/dias:\n");
    scanf("%d",&anos);
    scanf("%d",&meses);
    scanf("%d",&dias);

    int total = calcular(anos,meses,dias);

    printf("O total em dias eh %d\n",total);


    return 0;
}
