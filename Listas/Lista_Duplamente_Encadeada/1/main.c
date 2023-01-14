#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    celula *inicio;
    criar_lista(&inicio);

    inserir_lista(&inicio,10);
    inserir_lista(&inicio,20);
    inserir_lista(&inicio,30);
    inserir_lista(&inicio,-10);
    inserir_lista(&inicio,6);
    inserir_lista(&inicio,-3);
    inserir_lista(&inicio,-24);
    inserir_lista(&inicio,378);
    inserir_lista(&inicio,21);
    inserir_lista(&inicio,37);
    inserir_lista(&inicio,-43);
    inserir_lista(&inicio,2);
    inserir_lista(&inicio,220);
    inserir_lista(&inicio,-987);

    celula *inicio2;
    criar_lista(&inicio2);

    celula *inicio3;
    criar_lista(&inicio3);

    inserir2(&inicio,&inicio2,&inicio3);

    printf("Lista Positivos: ");
    listar(inicio2);

    printf("\nLista Negativos: ");
    listar(inicio3);



    return 0;
}
