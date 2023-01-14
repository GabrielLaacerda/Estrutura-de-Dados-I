#include <stdio.h>
#include <stdlib.h>
#include "Filas-Exercicio1.h"

int main()
{
    celula *inicio;

    int op = 0,pos,ex;

    iniciar(&inicio);

    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir elemento\n");
        printf("2-Remover elemento\n");
        printf("3-Mostrar Lista\n");
        printf("4-Sair\n");

        scanf("%d",&op);

        switch(op)
        {

        case 1:

            inserir(&inicio);

            break;

        case 2:

            printf("\nDigite a posicao do numero a ser removido: ");
            scanf("%d",&pos);

            if(pos < 1){
                printf("**DIGITE UMA POSICAO VALIDA**\n");
                break;
            }

            //Verifica se posição ja esta preenchida
            ex = existe(&inicio,pos);

            if(ex == -1){
                printf("\nPosicao nao foi preenchida\n");
            }else{
               retirar(&inicio,pos);
            }

            printf("\n");
            system("pause");

            break;

        case 3:

            mostrar(&inicio);
            printf("\n");
            system("pause");

            break;

        case 4:

            return 0;

        }

    }

    return 0;
}
