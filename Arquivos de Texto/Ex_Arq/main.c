#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *f1,*f2;

    f1 = fopen("teste.txt","r");
    f2 = fopen("teste2.txt","w");

    if(f1 == NULL || f2 == NULL)
    {
        printf("Erro");
        system("pause");
        return 0;
    }

    char c = fgetc(f1);

    while(c!=EOF)
    {
        c = fputc(toupper(c),f2);
        c = fgetc(f1);
    }
    fclose(f1);
    fclose(f2);


    return 0;
}
