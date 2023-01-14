#include <stdio.h>
#include <stdlib.h>

int contar(char frase[])
{
    int j = 0;

    for(int i=0; frase[i]!='\0'; i++)
    {

        if(frase[i] == ' ')
        {
            j++;
        }

    }

    return j;

}

int main()
{
    char frase [100];

    printf("Digite uma frase:");
    fgets(frase,100,stdin);

    int num = contar(frase);

    printf("A frase possui %d palavras\n",num+1);

    return 0;
}
