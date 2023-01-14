#include <stdio.h>
#include <stdlib.h>
#include "Listas-Exercicio3.h"

int main()
{
    celula *inicio;

    int op = 0;
    int ex,pos;

    iniciar(&inicio);

    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir elemento\n");
        printf("2-Remover elemento\n");
        printf("3-Mostrar i-esimo elemento da lista\n");
        printf("4-Sair\n");

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

            printf("\nDigite a posicao desejada: ");
            scanf("%d",&pos);

            if(pos<1)
            {
                printf("\n**DIGITE UMA POSICAO VALIDA**\n\n");
                system("pause");
                break;
            }

            //Verificamos se o indice ja esta preenchido
            ex = existe(&inicio,pos);

            if(ex == -1)
            {
                printf("\nPosicao nao preenchida\n");
            }
            else
            {
               mostrar(&inicio,pos);
            }

            printf("\n");
            system("pause");

            break;

        case 4:

            return 0;

        }

    }

    return 0;
}
