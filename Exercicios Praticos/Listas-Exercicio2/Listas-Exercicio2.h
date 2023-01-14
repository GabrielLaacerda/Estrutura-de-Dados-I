#ifndef LISTAS-EXERCICIO2_H_INCLUDED
#define LISTAS-EXERCICIO2_H_INCLUDED

//TAD Lista
typedef struct celulaLista
{
    char nome[200];
    struct celulaLista *prox;

} celula;

//Protótipos das funções
void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio);
void mostrar(celula **inicio);

#endif // LISTAS-EXERCICIO2_H_INCLUDED
