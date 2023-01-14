#ifndef LISTAS-EXERCICIO4_H_INCLUDED
#define LISTAS-EXERCICIO4_H_INCLUDED

//TAD Lista
typedef struct celulaLista
{
    int conteudo;
    struct celulaLista *prox;

} celula;

//Declaração dos Protótipos
void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio, int pos);
void mostrar(celula **inicio);

#endif // LISTAS-EXERCICIO4_H_INCLUDED
