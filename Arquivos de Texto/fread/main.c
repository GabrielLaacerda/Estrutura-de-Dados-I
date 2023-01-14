#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq = fopen("Valore_Vetor","rb");

    if(arq == NULL)
    {
        printf("Erro\n");
        system("pause");
        return 0;

    }

    int vet[5],total;

    total = fread(vet,sizeof(int),10,arq);

    if(total != 5){

        printf("Erro na leitura\n");
        system("pause");
        return 0;
    }

    fclose(arq);

    for(int i=0;i<5;i++){
        printf("%d\t",vet[i]);
    }

    return 0;
}
