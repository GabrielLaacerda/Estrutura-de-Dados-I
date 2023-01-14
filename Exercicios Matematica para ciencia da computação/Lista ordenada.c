#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct no
{
    int dados;
    char nome[30];
    struct no *anterior;
    struct no *proximo;
};
typedef struct no noptr;
void insere_lista(noptr **inifunc,int valor,char nom[]);
void remove_lista(noptr **inifunc);
void lista_todos(noptr *inifunc);
int menu(int op);

int main()
{
    int num,op;
    char frase[30];
    noptr *inicio;
    inicio=NULL;

    do
    {
        op = menu(op);
        switch (op)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d",&num);
            printf("Digite seu nome: ");
            fgets(frase,30,stdin);
            insere_lista(&inicio,num,frase);
            break;
        case 2:
            lista_todos(inicio);
            break;
        case 3:
            break;

        default:
            break;
        }

    }
    while (op!=0);
    return 0;
}
int menu(int op)
{
    printf("1 - Inserir\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
    printf("Digite sua op: ");
    scanf("%d",&op);
    return op;
}


void insere_lista(noptr **inicio, int valor , char nom[])
{
    noptr *p,*novo;
    novo=(struct no *) malloc(sizeof(noptr));
    novo->dados=valor;
    strcpy(novo->nome,nom);
    novo->proximo = NULL;
    novo->anterior=NULL;



    if (*inicio == NULL)
    {

        *inicio = novo;
        puts("inicio do NULL");
    }
    else
    {
        // Insere no inicio

        if (strcmp(novo->nome,(*inicio)->nome) != 1)
        {
            novo->proximo = (*inicio);
            (*inicio)->anterior = novo;
            (*inicio) = novo ;
            puts("Inicio");
        }
        else
        {
            p = *inicio;
            while (p->proximo &&strcmp(novo->nome,p->nome) == 1)
            {

                p = p->proximo;
            }
            // Insere no fim
            if (p->proximo == NULL && strcmp(novo->nome,p->nome) == 1)
            {
                novo->anterior = p;
                p->proximo = novo;
                printf("Fim");
            }
            else
            {
                //Insere no meio
                novo->proximo = p;
                novo->anterior = p->anterior;
                p->anterior->proximo = novo;
                p->anterior = novo;
                puts("Meio");
            }
        }

    }


}

void lista_todos(noptr *inifunc)
{
    if(inifunc==NULL)
    {
        printf("\nLista Vazia!!!");
        return;
    }
    noptr *p;
    p = inifunc;
    while(p)
    {
        printf("\nSaida: %s", p->nome);
        p = p->proximo;
    }
    printf("\n");
}

