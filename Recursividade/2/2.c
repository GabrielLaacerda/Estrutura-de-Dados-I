#include <stdio.h>
#include <stdlib.h>

int somatoria(int numero){

    int total = numero;

    if(numero == 0)
    {
        return 1;

    }

    else
    {
        total = total + somatoria(numero - 1);
    }

    return total;

}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    int total = somatoria(num) - 1;

    printf("A somatoria eh: %d\n",total);

    return 0;
}
