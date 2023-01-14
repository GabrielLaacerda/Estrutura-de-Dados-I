#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    arq = fopen("Valore_Vetor","wb");

    if(arq == NULL)
    {
        printf("Erro");
        system("pause");
        return 0;
    }

    int total, v[5] = {1,2,3,4,5};

    total = fwrite(v,sizeof(int),5,arq);

    if(total == NULL)
    {
        printf("Erro de gravacao");
        system("pause");
        return 0;
    }

    fclose(arq);


    return 0;
}
