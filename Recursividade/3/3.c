#include <stdio.h>
#include <stdlib.h>

int cont = 0;

int dig(int num)
{


    if(num!=0)
    {
        cont++;
        dig(num/10);
    }

    return cont;
}

int main()
{
    int num,cont;

    printf("Insira um numero: ");
    scanf("%d",&num);

    cont = dig(num);

    printf("Quantidade: %d\n",cont);


    return 0;
}
