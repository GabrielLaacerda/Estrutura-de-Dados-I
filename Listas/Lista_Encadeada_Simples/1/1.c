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
void retirar(celula **inicio){

    celula *p;

    if(*inicio == NULL)
    {
        printf("\nLista Vazia\n");
    }
    else
    {
        p = (*inicio);
        printf("Elemento removido = %d\n",p->conteudo);

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
        printf("Inicio = [%d]",p->conteudo);

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
        printf("3-Mostrar elemento do inicio\n");
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
