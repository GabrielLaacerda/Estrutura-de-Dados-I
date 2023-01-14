#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    int opcao;
    int valor;

    celula *inicio;

    criar_lista(&inicio);

    do
    {
        system("cls");

        opcao = menu();

        switch(opcao)
        {

        case 1:

            printf("Digite um numero: ");
            scanf("%d",&valor);

            inserir_lista(&inicio,valor);

            system("pause");

            break;

        case 2:

            remove_lista(&inicio);
            system("pause");

            break;

        case 3:

            listar(inicio);
            system("pause");

            break;

        case 4:

            return 0;

        }

    }
    while(opcao!=4);


    return 0;
}
