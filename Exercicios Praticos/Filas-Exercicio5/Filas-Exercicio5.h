#ifndef FILAS-EXERCICIO5_H_INCLUDED
#define FILAS-EXERCICIO5_H_INCLUDED

//TAD Fila
typedef struct celulaFila{
    int conteudo;
    struct celulaFila *prox;

} celula;

//Protótipos das funções
void iniciar(celula **inicio);
void inserir(celula **inicio);
void retirar(celula **inicio);
void mostrar(celula **inicio);
void mediana(celula **inicio);

#endif // FILAS-EXERCICIO5_H_INCLUDED
