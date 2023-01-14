#include <stdio.h>
#include <stdlib.h>

struct cadastro{
   int idade;
   char ec;
};

int main()
{
    struct cadastro c[3];

    int m=0,j=0,k=0,l=0,p=0,i=0,leitura;
    int acm=0;
    float mediaviuvas,porcentagem;

    do{

    printf("Deseja comecar ou continuar as(a) leitura(0 para nao ou 1 para sim)?");
    scanf("%d",&leitura);

    switch(leitura){
        case 1:

    printf("Digite sua idade:");
    scanf("%d",&c[i].idade);

    printf("Digite seu estado civil (C,S,V,D):");
    scanf(" %c",&c[i].ec);

    if(c[i].ec=='C'){
        m++;

    }
    else if(c[i].ec=='S'){
        j++;

    }
    else if(c[i].ec=='V'){
       k++;
       acm=acm+c[i].idade;

    }
    else if(c[i].ec=='D'){
       p++;
    }
    i++;

        case 0:
            break;

    }
    }while(leitura!=0);

    mediaviuvas=acm/k;
    porcentagem=(p*100)/i;

    printf("\nQuantidade de pessoas casadas:%d\n",m);
    printf("Quantidade de pessoas solteiras:%d\n",j);
    printf("Media das idades das pessoas viuvas:%.1f\n",mediaviuvas);
    printf("Porcentagem das pessoas dequisitadas:%f\n",porcentagem);

    return 0;
}
