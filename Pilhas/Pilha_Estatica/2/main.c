#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct pilha
{
    int topo;
    int dados[MAX];

} pilha;

void push(pilha *p, int x);
int pop(pilha *p);
void inicia_pilha(pilha *p);
void mostrar_pilha(pilha p);

void inicia_pilha(pilha *p)
{

    (*p).topo = -1;

}

void push(pilha *p, int x)
{

    if((*p).topo == MAX-1)
    {
        printf("Pilha esta cheia\n");
    }
    else
    {

        (*p).topo++;
        (*p).dados[(*p).topo] = x;

    }
}

int pop(pilha *p)
{

    int valor_retirado;

    if((*p).topo == -1)
    {
        printf("Pilha esta vazia\n");
        return -1;
    }
    else
    {

        valor_retirado = (*p).dados[(*p).topo];
        (*p).topo--;

        return valor_retirado;
    }

}

void mostrar_pilha(pilha p)
{

    int aux;

    if(p.topo != -1)
    {

        while(p.topo!=-1)
        {
            aux = pop(&p);
            printf("[%d]\n",aux);

        }
        printf("\n");
    }
    else
    {
        return -1;
    }

}

int menu()
{

    int op;

    printf("Escolha a opcao desejada:\n\n");
    printf("1-Adicionar elemento\n");
    printf("2-Retirar elemento\n");
    printf("3-Quantidade total de elementos\n");
    printf("0-Sair\n");

    scanf("%d",&op);

    return op;
}

int main()
{
    int num,aux;
    int op;

    pilha p;
    inicia_pilha(&p);

    do
    {

        op = menu();

        switch(op)
        {

        case 0:
            break;

        case 1:
            printf("\nDigite o elemento:");
            scanf("%d",&num);

            push(&p,num);

            break;

        case 2:

            if(p.topo == -1)
            {
                printf("\nA pilha esta vazia\n");

            }
            else{

                aux = pop(&p);
            printf("[%d] foi retirado\n",aux);

        }

        break;

    case 3:

        printf("Total: %d\n", p.topo + 1);

        break;


    }

}
while(op != 0);


return 0;
}
