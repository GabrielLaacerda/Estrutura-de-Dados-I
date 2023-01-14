#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;

    char str[27];

    f = fopen("teste.txt","r");

    if(f == NULL)
    {
        printf("Erro");
        system("pause");
        return 0;

    }

    char *result = fgets(str,27,f);

    if(result == NULL)
    {
        printf("Erro de leitura");

    }
    else
    {
        printf("%s\n",str);
    }

    fclose(f);
    system("pause");


    return 0;
}
