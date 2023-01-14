#include <stdio.h>
#include <stdlib.h>

void dobrar(int *pont){

    *pont = *pont * 2;

}

int main()
{
    int x;
    int *pont;

    printf("Digite um valor:");
    scanf("%d",&x);

    pont = &x;

    dobrar(pont);

    printf("Dobro: %d\n",*pont);


    return 0;
}
