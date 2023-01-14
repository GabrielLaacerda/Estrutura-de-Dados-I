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

    char texto[30] = "Meu programa em C (teste222)";

    for(int i=0;i<strlen(texto);i++){

        fputc(texto[i],f);

    }

    fclose(f);




    return 0;
}
