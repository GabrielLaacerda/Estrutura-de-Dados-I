#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;

    int i =0;

    f = fopen("teste.txt","r");

    if(f==NULL)
    {
        printf("Erro");
        system("pause");
        return 0;
    }

    char c = fgetc(f);

    while(!feof(f)){

        //printf("%c",c);
       // c = fgetc(f);
        i++;

    }

    printf("\nFim");
    printf("\ni = %d\n",i);
    fclose(f);

    return 0;
}
