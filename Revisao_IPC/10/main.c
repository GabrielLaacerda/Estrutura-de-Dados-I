#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct pesquisa{

      int cod;
      int veiculos;
      int acidentes;
      float indice;
    };

       struct pesquisa c[5];
       int aux,cd,i,j;
       float acmv=0,media,mediaacidentes,acidentes;


      for(int i=0;i<5;i++){
        printf("Digite o codigo da cidade:");
        scanf("%d",&c[i].cod);

        printf("Digite a quantidade de veiculos de passeio:");
        scanf("%d",&c[i].veiculos);

        printf("Digiteo numero de acidentes com vitimas:");
        scanf("%d",&c[i].acidentes);

        c[i].indice=c[i].veiculos/c[i].acidentes;
        acmv=acmv+c[i].veiculos;

      }


        for(int i=0;i<5;i++){
             for(int j=i+1;j<5;j++){
            if(c[j].indice<c[i].indice){

            aux=c[j].indice;
            cd=j;
        }else{
           aux=c[i].indice;
           cd=i;

        }
        }

        }
        media=acmv/5;

        printf("O menor indice e da cidade %d\n",cd);
        printf("A media de veiculos e:%1.f\n",media);

    return 0;
}
