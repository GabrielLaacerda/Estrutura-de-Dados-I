#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;

    f = fopen("teste.txt","w");

    if(f == NULL)
    {
        printf("Erro");
        system("pause");
        return 0;

    }

    char texto[30] = "Teste usando fputs";

    int retorno = fputs(texto,f);

    if(retorno == EOF)
    {
        printf("Erro na grava�ao\n");

    }

    fclose(f);


    return 0;
}
