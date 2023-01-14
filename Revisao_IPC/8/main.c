#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codPr, codP;

        float pesokg, pesog, precototal, impostos, precocompra;

        printf("Digite o codigo do produto (1 a 10). O peso em kg. O codigo do pais de origem (1, 2 ou 3:)\n");
        scanf("%d%f%d", &codPr, &pesokg, &codP);

        pesog = pesokg *1000;
        printf("O peso do produto em gramas eh : %.2f\n", pesog);

        if(codPr<=4){
            precototal = pesog * 10;
            impostos = 0;
            precocompra = precototal;
            printf("O preco total do produto eh : %.2f.\n Os impostos sao %.2f.\n O valor total eh : %.2f\n", precototal, impostos, precocompra);
        }
        else if(codPr>=5 && codPr<=7){
            precototal = pesog * 25;
            impostos = precototal * 0.15;
            precocompra = precototal + impostos;
            printf("O preco total do produto eh : %.2f. Os impostos sao %.2f. O valor total eh : %.2f\n", precototal, impostos, precocompra);
        }
        else if(codPr>=8 && codPr<=10){
            precototal = pesog * 25;
            impostos = precototal * 0.25;
            precocompra = precototal + impostos;
            printf("O preco total do produto eh : %.2f. Os impostos sao %.2f. O valor total eh : %.2f\n", precototal, impostos, precocompra);
        }
        else{
            printf("Invalido\n");
    }

    return 0;
}
