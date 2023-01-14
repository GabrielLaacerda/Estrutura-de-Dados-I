#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct node Node;
typedef struct lista Lista;
Lista *cria();
void insereord(Lista *li,int x);
int inserein(Lista *li,int x);
void removein(Lista *li);
void inserefim(Lista *li,int x);
void removefim(Lista *li);
int removep(Lista *li,int x);
void exibir(Lista *li);
int vazio(Lista *li);
int menu();

