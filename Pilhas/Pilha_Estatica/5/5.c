#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct pilha
{
    int topo;
    char dados[MAX];

} pilha;

void push(pilha *p, char x);
char pop(pilha *p);
void inicia_pilha(pilha *p);
void mostrar_pilha(pilha p);

void inicia_pilha(pilha *p)
{

    (*p).topo = -1;

}

void push(pilha *p, char x)
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

char pop(pilha *p)
{

    char valor_retirado;

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

    char aux;

    if(p.topo != -1)
    {

        while(p.topo!=-1)
        {
            aux = pop(&p);
            printf("[%c]",aux);

        }
        printf("\n");
    }


}


int string(pilha *p,int pos,int auxi){

         int i;
         i=++auxi;

         if(auxi < 0 || auxi > 100) i=0;



         char aux;
         int auxp=pos-1;


         while(auxp>=i){

                aux = (*p).dados[i];
                char a=(*p).dados[i] = (*p).dados[auxp];
                char b=(*p).dados[auxp] = aux;
                auxp--;
                i++;

         }


         return pos;
}



void inverter(pilha *p,int tam)
{
        int pos;
        char charc;
        int auxi,count=0;

        for(int i=0; i<tam-1; i++){

            if((*p).dados[i] == ' ' || (*p).dados[i] == '.'){

                 auxi=string(p,i,auxi);

            }

        }

        for(int i=0; i<tam-1; i++){

                printf("%c",(*p).dados[i]);

        }



}

int main()
{
    int aux;
    char phase[100];

    pilha p;
    pilha p2;

    inicia_pilha(&p);


    printf("Digite uma frase: ");
    fgets(phase,100,stdin);
    setbuf(stdin, NULL);

    for(int i=0;i<strlen(phase)-1 ; i++)
    {
        push(&p,phase[i]);
    }

    inverter(&p,strlen(phase));




    return 0;
}
