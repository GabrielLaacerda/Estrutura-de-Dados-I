#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;

    f = fopen("teste.txt","r");

    if(f==NULL)
    {
        printf("Erro");
        system("pause");
        return 0;
    }

    char c;
    int i;

    for(i=1; i<=28; i++)
    {
        c = fgetc(f);
        printf("%c",c);
    }

    printf("\nFim");
    fclose(f);

    return 0;
}
