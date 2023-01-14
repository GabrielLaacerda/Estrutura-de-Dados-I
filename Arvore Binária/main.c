#include <stdio.h>
#include <stdlib.h>

typedef struct arvore
{
    int info;
    struct arvore *esq,*dir;

} arvore;

arvore *raiz;

arvore* insere(arvore *root,arvore *r,int dado)
{
    if(r==NULL)
    {
        r = (arvore *) malloc(sizeof(arvore));
        if(r==NULL)
            printf("Memoria Insufuciente !!!");
        else
        {
            r->esq=NULL;
            r->dir=NULL;
            r->info=dado;
            if(root==NULL)
                return r;
            if(r->info < root->info)
                root->esq = r;
            else
                root->dir = r;
            return r;
        }
    }
    if(dado < r->info)
        insere(r,r->esq,dado);
    else
        insere(r,r->dir,dado);
    return r;
}

arvore* remover(arvore *root, int key)
{
    arvore *p;
    if(root==NULL)
        return root;
    if(root->info==key)
    {
        if(root->esq==root->dir)
        {
            free(root);
            return NULL;
        }
        else if(root->esq==NULL)
        {
            p = root->dir;
            free(root);
            return p;
        }
        else if(root->dir==NULL)
        {
            p = root->esq;
            free(root);
            return p;
        }
        else if(root->info < key)
            root->dir = remover(root->dir,key);
        else
            root->esq = remover(root->esq,key);
        return root;
    }
}
arvore *busca(arvore *root, int key)
    {

        if(root==NULL)
            return root;
        while(root->info != key &&
                root!=NULL)
        {
            if(key < root->info)
                root = root->esq;
            else
                root = root->dir;
        }
        return root;
    }

    void EmOrdem(arvore *root)
    {
        if(root==NULL)
            return;
        EmOrdem(root->esq);
        printf("%d ",root->info);
        EmOrdem(root->dir);

    }

    void PosOrdem(arvore *root)
    {
        if(root==NULL)
            return;
        PosOrdem(root->esq);
        PosOrdem(root->dir);
        printf("%d ",root->info);
    }
    void PreOrdem(arvore *root)
    {
        if(root==NULL)
            return;
        printf("%d ",root->info);
        PreOrdem(root->esq);
        PreOrdem(root->dir);
}
void main()
    {
        int valor=1;
        raiz=NULL;

        int vet[7] = {2,0,7,1,0,9,500,71};

        for(int i=0;i<7;i++){

        if(raiz==NULL)
            raiz=insere(raiz,raiz,vet[i]);
        else
            insere(raiz,raiz,vet[i]);
        }

      printf("%d\n",busca(raiz,500));



        printf("Pre-Ordem:\n");
        PreOrdem(raiz);
        printf("\n\n");
        printf("Em-Ordem:\n");
        EmOrdem(raiz);
        printf("\n\n");
        printf("Pos-Ordem:\n");
        PosOrdem(raiz);
        printf("\n\n");
    }

