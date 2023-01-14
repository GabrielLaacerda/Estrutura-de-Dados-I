#include <stdio.h>
#include <stdlib.h>
#include <string.h>

   struct ficha{
        char endereco[100];
        char nome[100];
        char telefone[100];
    };

int main()
{

    struct ficha cadastro[5];

    for(int i=0;i<5;i++){

        printf("\nCadastro %d:\n\n",i+1);
        printf("Digite seu nome:");
        scanf("%s",&cadastro[i].nome);
        fflush(stdin);
        printf("Digite seu endereco:");
        scanf("%s",&cadastro[i].endereco);
        fflush(stdin);
        printf("Digite seu telefone:");
        scanf("%s",&cadastro[i].telefone);

    }
    for(int i=0;i<5;i++){
        printf("Cadastro %d:\n",i);

        printf("%s\n",cadastro[i].nome);
        printf("%s\n",cadastro[i].endereco);
        printf("%s\n",cadastro[i].telefone);
        printf("\n");

        }

    return 0;
}
