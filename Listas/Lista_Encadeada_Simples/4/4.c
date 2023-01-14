#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celulaLista
{
    char nome[100];
    struct celulaLista *prox;

} celula;

void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio);
void mostrar(celula **inicio);
int mostrar2(celula **inicio);

void iniciar(celula **inicio)
{

    (*inicio) = NULL;

}

void inserir(celula **inicio)
{
    celula *p;
    char name[100];

    setbuf(stdin, NULL);
    printf("Digite o nome: ");
    fgets(name,100,stdin);
    setbuf(stdin, NULL);

    p = (celula *)malloc(sizeof(celula));

    strcpy(p->nome, name);

    if(*inicio == NULL)
    {

        p->prox = NULL;

    }
    else
    {
        p->prox = *inicio;

    }

    *inicio = p;

}
void retirar(celula **inicio)
{

    celula *p;

    if(*inicio == NULL)
    {
        printf("\nLista Vazia\n");
    }
    else
    {
        p = (*inicio);
        printf("Nome removido = %s\n",p->nome);

        (*inicio) = p->prox;
        free(p);

    }

}
void mostrar(celula **inicio)
{

    celula *p;

    if(*inicio == NULL)
    {

        printf("\nLista Vazia\n");

    }
    else
    {
        p = *inicio;

        while(p != NULL)
        {

            puts(p->nome);
            p = p->prox;
        }

    }

}

int mostrar2(celula **inicio)
{

    celula *p;
    int quant = 0;

    if(*inicio == NULL){}

    else
    {
        p = *inicio;

        while(p != NULL)
        {
            quant += 1;
            p = p->prox;
        }

    }

    return quant;

}

int main()
{
    celula *inicio;

    int op = 0;
    int quant;

    inicio = (celula *)malloc(sizeof(struct celulaLista));
    iniciar(&inicio);

    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir nome\n");
        printf("2-Remover nome\n");
        printf("3-Mostrar quantos nomes a lista possui\n");
        printf("4-Mostrar todos os nomes\n");
        printf("0-Sair\n");

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

            quant = mostrar2(&inicio);
            printf("Total = %d",quant);
            printf("\n");
            system("pause");

            break;

        case 4:

            mostrar(&inicio);
            printf("\n");
            system("pause");

            break;

        case 0:

            return 0;

        }

    }

    return 0;
}
