#include <stdio.h>
#include <stdlib.h>
#include "Listas-Exercicio1.h"

int main()
{
    celula *lista1,*lista2;

    int op = 0;

    iniciar(&lista1);
    iniciar(&lista2);

    for(;;)
    {
        //Menu para comparaçoes nos cases
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir elemento na lista 1\n");
        printf("2-Inserir elemento na lista 2\n");
        printf("3-Verificar se sao iguais\n");
        printf("4-Sair\n");

        scanf("%d",&op);

        switch(op)
        {

        case 1:

            inserir(&lista1);

            break;

        case 2:

            inserir(&lista2);

            break;

        case 3:

            compara_listas(&lista1,&lista2);
            printf("\n");
            system("pause");

            break;

        case 4:

            return 0;
        }
    }

    return 0;
}
