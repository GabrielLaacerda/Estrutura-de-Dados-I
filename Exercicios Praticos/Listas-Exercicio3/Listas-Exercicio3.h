#ifndef LISTAS-EXERCICIO3_H_INCLUDED
#define LISTAS-EXERCICIO3_H_INCLUDED

//TAD Lista
typedef struct celulaLista
{
    int conteudo;
    struct celulaLista *prox;

} celula;

//Protótipos das Funções
void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio);
void mostrar(celula **inicio,int pos);
int existe(celula **inicio,int pos);

#endif // LISTAS-EXERCICIO3_H_INCLUDED
