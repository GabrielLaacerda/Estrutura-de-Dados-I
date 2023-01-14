#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <string.h>

int main()
{
    float n;
    char name[50];
    int j = 0;

    celula *inicio;
    criar_lista(&inicio);

    do
    {

        system("cls");
        printf("----------------------CADASTRO DE ALUNOS-----------------------\n");
        printf("**Digite uma nota negativa para encerrar o cadastro de alunos**\n\n");

        printf("->Digite a nota do aluno: ");
        scanf("%f",&n);
        setbuf(stdin, NULL);

        if(n >= 0.0)
        {
            printf("->Digite o nome completo do aluno: ");
            fgets(name,50,stdin);
            setbuf(stdin, NULL);

            system("cls");
            inserir_lista(&inicio,n,name);
            j++;
        }

    }
    while(n >= 0.0);

    int total = quant(inicio);

    aprovados(inicio,total);





    return 0;
}
