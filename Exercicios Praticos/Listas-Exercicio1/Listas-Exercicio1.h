#ifndef LISTAS-EXERCICIO1_H_INCLUDED
#define LISTAS-EXERCICIO1_H_INCLUDED

//TAD lista
typedef struct celulaLista
{
    int conteudo;
    struct celulaLista *prox;

} celula;

//Declara��o dos Prot�tipos das fun��es
void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio);
void mostrar(celula **inicio);

#endif // LISTAS-EXERCICIO1_H_INCLUDED
