#include "lista.h"

struct node{
	int num;
	struct node *prox;

};
typedef struct node Node;


struct lista{
	  int size;
	  Node *cabeca;

};
typedef struct lista Lista;



Lista *cria(){

		Lista *li;
		li=(Lista *)malloc(sizeof(Lista));

		li->size=0;
		li->cabeca=NULL;

		return li;



}


void insereord(Lista *li,int x){
		Node *novo=(Node*)malloc(sizeof(Node));

		novo->num=x;

		if(vazio(li)){
			novo->prox=li->cabeca;
			li->cabeca=novo;


		}else{

			Node *ant,*at=li;

			while(at!=NULL && at->num < x){
				ant=at;
				at=at->prox;
			}

			if(at==li->cabeca){
				novo->prox=li->cabeca;
				li->cabeca=novo;

			}else{
				novo->prox=ant->prox;
				ant->prox=novo;


			}



		}

		li->size++;


}






int inserein(Lista *li,int x){

		 Node *novo=(Node *)malloc(sizeof(Node));
		 novo->num=x;
		 novo->prox=li->cabeca;
		 li->cabeca=novo;
		 li->size++;
		 return 1;

}

void removein(Lista *li){

		  Node *aux=li->cabeca;

		  li->cabeca=aux->prox;
		  free(aux);
		  li->size--;


}


void inserefim(Lista *li,int x){

		 Node *novo=(Node*)malloc(sizeof(Node));

		 novo->num=x;
		 novo->prox=NULL;

		 if(li->cabeca==NULL){
			 li->cabeca=novo;

		 }else{
			 Node *aux=li;

			 while(aux->prox!=NULL){
				 aux=aux->prox;


			 }

			 aux->prox=novo;

		 }

		 li->size++;


}

void removefim(Lista *li){
		Node *ant,*no;
		no=li;

		while(no->prox!=NULL){
			ant=no;
			no=no->prox;

		}

		if(no==li){

			li=no->prox;

		}else{

			ant->prox=no->prox;

		}

		free(no);



}

int removep(Lista *li,int x){

		Node *ant,*no;
		no=li;
		int aux;

		while(no!=NULL && no->num != x){
			ant=no;
			no=no->prox;
		}

		aux=no->num;
		if(no==NULL) return 0;

		if(no==li->cabeca){
			li->cabeca=no->prox;

		}else{

		ant->prox=no->prox;


		}

		free(no);
		return aux;
}









void exibir(Lista *li){

	 Node *aux;
	 aux=li->cabeca;



	 while(aux!=NULL){
		 printf("%d ",aux->num);
		 aux=aux->prox;

	 }

	 printf("\n");



}
int vazio(Lista *li){
		if(li->size==0)
			return 1;
		else
			return 0;

}






int menu(){


		int x;
		printf("_____Menu_____\n");
		printf("1-Inserir inicio\n");
		printf("2-Remover inicio\n");
		printf("3-Inserir fim\n");
		printf("4-Remover fim\n");
		printf("5-Inserir ordenado\n");
		printf("6-Remover elemento qualquer\n");
		printf("7-Exibir\n");
		printf("Opcao:");
		scanf("%d",&x);

		return x;


}
