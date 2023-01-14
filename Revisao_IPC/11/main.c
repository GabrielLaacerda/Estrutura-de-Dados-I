#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, acm1=0, acm2=0, acm3=0;
    char cod;
    int contL=0, contA=0, contH=0;

    do{
    printf("Digite o preco da mercadoria:");
    scanf("%f", &preco);
    fflush(stdin);

    if(preco!=0){
        printf("Digite o codigo da mercadoria (L = limpeza. A = alimentacao. H = higiene.) :");
        cod = getchar();
        fflush(stdin);

        if(cod == 'L'){
            contL ++;
            acm1=acm1 + preco;
        }
        else if(cod=='A'){
            contA ++;
            acm2 = acm2 + preco;
        }
        else if(cod=='H'){
            contH ++;
            acm3 = acm3 + preco;
        }
    }
    }while(preco!=0);

    printf("\nO total vendido foram %d produtos de limpeza. totalizando %.2f\n", contL, acm1);
    printf("\nO total vendido foram %d produtos de alimentacao. totalizando %.2f\n", contA, acm2);
    printf("\nO total vendido foram %d produtos de Higiene. totalizando %.2f\n", contH, acm3);


    return 0;
}
