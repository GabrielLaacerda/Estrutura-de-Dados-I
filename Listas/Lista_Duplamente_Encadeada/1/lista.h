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
void inserir2(celula **inicio,celula ***inicio2,celula ***inicio3);
void listar(celula *inicio);

#endif // LISTA_H_INCLUDED
