#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct celula{

    int dados;
    struct celula *prox;
    struct celula *ant;

}celula;

void criar_lista(celula **inicio);
void remove_lista(celula **inicio);
void inserir_lista(celula **inicio, int valor);
void listar(celula *inicio);
int menu();

#endif // LISTA_H_INCLUDED
