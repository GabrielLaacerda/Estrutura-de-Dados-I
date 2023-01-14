#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char nome[50];
    char sexo;
    char profissao[50];
} p;

int main()
{
    p p1;

    printf("Digite o seu nome:");
    fgets(p1.nome,50,stdin);
    printf("Tecle M para masculino ou F para feminino:");
    scanf("%c",&p1.sexo);
    fflush(stdin);
    printf("Digite a sua profissao:");
    fgets(p1.profissao,50,stdin);

    printf("\nNome: %s",p1.nome);

    if(p1.sexo == 'm'|| p1.sexo == 'M')
    {
        printf("\Sexo: Masculino\n");
    }
    else if(p1.sexo == 'f'|| p1.sexo == 'F')
    {
        printf("Sexo: Feminino\n");
    }
    else
    {
        printf("Sexo: Invalido\n");
    }

    printf("Profissao:%s\n",p1.profissao);



    return 0;
}
