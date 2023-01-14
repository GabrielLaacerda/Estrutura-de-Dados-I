#include <stdio.h>
#include <stdlib.h>

void inverter(int *pontx, int *ponty){

    int aux;

    aux = *pontx;
    *pontx = *ponty;
    *ponty = aux;

}

int main()
{
    int x,y;
    int *pontx,*ponty;

    printf("Digite um valor para X: ");
    scanf("%d",&x);

    printf("Digite um valor para Y ");
    scanf("%d",&y);

    pontx = &x;
    ponty = &y;

    printf("\nAntes: X = %d && Y = %d\n",*pontx,*ponty);

    inverter(pontx,ponty);

    printf("Depois: X = %d && Y = %d\n",*pontx,*ponty);


    return 0;
}
