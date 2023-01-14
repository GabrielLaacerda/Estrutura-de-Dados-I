#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int iguais(char p1[], char p2[])
{
    int tam, j = 0;
    char frase[50];

    if(strlen(p1) >= strlen(p2))
    {
        tam = strlen(p1);
    }
    else
    {
        tam = strlen(p2);
    }

    for(int i=0; i<tam; i++)
    {
        if(p1[i] == p2[i])
        {
            j++;
        }
    }

    if(j == tam)
    {
        printf("Sao iguais\n");
    }
    else
    {
        for(int i=0; i<=strlen(p1); i++)
        {
            frase[i] = p1[i];
        }

        strcat(frase,p2);

        puts(frase);

    }

}

int main()
{
    char p1[20],p2[20];

    printf("Digite duas palavras:\n");

    fgets(p1,20,stdin);
    fgets(p2,20,stdin);

    iguais(p1,p2);


    return 0;
}
