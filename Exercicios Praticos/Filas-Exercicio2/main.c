#include <stdio.h>
#include <stdlib.h>
#include "Filas-Exercicio2.h"

int main()
{
    celula *inicio,*inicio2,*inicio3;
    int op = 0,valor;

    iniciar(&inicio);
    iniciar(&inicio2);
    iniciar(&inicio3);

    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir elemento na fila 1\n");
        printf("2-Inserir elemento na fila 2\n");
        printf("3-Intercalar Filas\n");
        printf("4-Mostrar Lista\n");
        printf("5-Sair\n");

        scanf("%d",&op);

        switch(op){

        case 1:

            printf("\nDigite o valor:" );
            scanf("%d",&valor);
            inserir(&inicio,valor);

            break;

        case 2:

            printf("\nDigite o valor:" );
            scanf("%d",&valor);
            inserir(&inicio2,valor);

            break;

        case 3:

            intercalar(&inicio,&inicio2,&inicio3);

            return 0;

        case 4:

            printf("Fila 1: ");
            mostrar(&inicio);
            printf("\nFila 2: ");
            mostrar(&inicio2);
            printf("\nFila 3: ");
            mostrar(&inicio3);
            printf("\n");
            system("pause");

            break;

        case 5:
            return 0;
        }
    }

    return 0;
}
