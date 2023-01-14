#include <stdio.h>
#include <stdlib.h>

typedef struct celulaLista
{
    int conteudo;
    struct celulaLista *prox;

} celula;

void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio);
void mostrar(celula **inicio);
void mostrar2(celula **inicio);

void iniciar(celula **inicio)
{

    (*inicio) = NULL;

}

void inserir(celula **inicio)
{

    celula *p;
    int valor;

    printf("Digite o valor: ");
    scanf("%d",&valor);

    p = (celula *)malloc(sizeof(celula));

    p->conteudo = valor;

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
        printf("\nElemento removido = %d\n",p->conteudo);

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

            printf("[%d] ",p->conteudo);
            p = p->prox;
        }

    }

}
void mostrar2(celula **inicio)
{

    celula *p;
    int aux = 0;

    if(*inicio == NULL)
    {
        printf("\nTotal = 0\n");

    }
    else
    {
        p = *inicio;

        while(p != NULL)
        {
            aux+=p->conteudo;
            p = p->prox;
        }

        printf("\nTotal = %d\n",aux);

    }

}

int main()
{
    celula *inicio;

    int op = 0;

    inicio = (celula *)malloc(sizeof(struct celulaLista));
    iniciar(&inicio);

    for(;;)
    {
        system("cls");
        printf("Digite uma opcao:\n\n");
        printf("1-Inserir elemento\n");
        printf("2-Remover elemento\n");
        printf("3-Mostrar a soma dos elementos\n");
        printf("4-Mostrar todos os elementos\n");
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

            mostrar2(&inicio);
            printf("\n");
            system("pause");

            break;

        case 4:

            mostrar(&inicio);
            printf("\n");
            system("pause");

            break;

        case 5:

            return 0;

        }

    }

    return 0;
}
