#ifndef FILAS-EXERCICIO1_H_INCLUDED
#define FILAS-EXERCICIO1_H_INCLUDED

//TAD Fila
typedef struct celulaFila
{
    int conteudo;
    struct celulaFila *prox;

} celula;

//Protótipos das Funções
void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio, int pos);
void mostrar(celula **inicio);
int existe(celula **inicio,int pos);

#endif // FILAS-EXERCICIO1_H_INCLUDED
