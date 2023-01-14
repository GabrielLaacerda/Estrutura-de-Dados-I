#ifndef FILAS-EXERCICIO2_H_INCLUDED
#define FILAS-EXERCICIO2_H_INCLUDED

//TAD Fila
typedef struct celulaFila
{
    int conteudo;
    struct celulaFila *prox;

} celula;

//Protótipos das funções
void iniciar(celula **inicio);
void inserir(celula **inicio,int valor);
void retirar(celula **inicio);
void mostrar(celula **inicio);

#endif // FILAS-EXERCICIO2_H_INCLUDED
