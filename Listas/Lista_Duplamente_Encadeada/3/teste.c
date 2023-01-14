#include "lista.h"


int main(){

		Lista *li;

		li=cria();
		int num,op,x;
		do{
			op=menu();

			switch(op){

			break;

			case 1:

				printf("Insira um numero:\n");
				scanf("%d",&num);
				inserein(li,num);

			break;

			case 2:
			if(vazio(li)){

				printf("Lista vazia!\n");

			}else{

				removein(li);

			}
			break;

			case 3:

				printf("Insira um numero:\n");
				scanf("%d",&num);
				inserefim(li,num);

			break;


			case 4:

			if(vazio(li)){

				printf("Lista vazia!\n");

			}else{

				removefim(li);

			}

			break;


			case 5:

				printf("Insira um numero:\n");
				scanf("%d",&num);
				insereord(li,num);

			break;
			case 6:
			if(vazio(li)){
				printf("Lista vazia!\n");


			}else{

				printf("Insira um numero a excluir:\n");
				scanf("%d",&num);

				x=removep(li,num);

				printf("Numero removido: %d\n",x);

			}
			 break;

			case 7:
			if(vazio(li)){

				printf("Lista vazia!\n");

			}else{

				exibir(li);

			}
			break;




			}


		}while(op!=9);



	return 0;
}
