#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct celula{

    float nota;
    char nome[50];
    struct celula *prox;
    struct celula *ant;

}celula;

void criar_lista(celula **inicio);
void inserir_lista(celula **inicio, float valor,char name[]);
void listar(celula *inicio);
void aprovados(celula *inicio,int total);
int quant(celula *inicio);

#endif // LISTA_H_INCLUDED
