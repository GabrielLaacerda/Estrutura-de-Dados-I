#include <stdio.h>
#include <stdlib.h>
#include "Listas-Exercicio2.h"

int main()
{
    celula *inicio;

    int op = 0;

    iniciar(&inicio);

    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir nome\n");
        printf("2-Mostrar Lista de Nomes\n");
        printf("3-Sair\n");

        scanf("%d",&op);

        switch(op)
        {

        case 1:

            inserir(&inicio);

            break;

        case 2:
            mostrar(&inicio);
            printf("\n");
            system("pause");

            break;

        case 3:
            return 0;

        }
    }

    return 0;
}

