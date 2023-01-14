#include <stdio.h>
#include <stdlib.h>
#include "Filas-Exercicio5.h"

int main()
{
    celula *inicio,*inicio2;
    celula *aux;

    int op = 0;

    iniciar(&inicio);
    iniciar(&aux);
    iniciar(&inicio2);
    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir elemento\n");
        printf("2-Remover elemento\n");
        printf("3-Mostrar Lista\n");
        printf("4-Calcular Mediana\n");
        printf("5-Sair\n");

        scanf("%d",&op);

        switch(op)
        {

        case 1:

            inserir(&inicio);

            break;

        case 2:

            retirar(&inicio);
            printf("\n");
            system("pause");

            break;

        case 3:

            mostrar(&inicio);
            printf("\n");
            system("pause");

            break;

        case 4:
            mediana(&inicio);

            break;

        case 5:

            return 0;
        }
    }

    return 0;
}
