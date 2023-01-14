#include <stdio.h>
#include <stdlib.h>

int tam(char frase[])
{
    int j=0;

    for(int i=0; frase[i]!='\0'; i++)
    {
        j++;
    }
    return j;
}

int main()
{
    int min = 8;
    char frase[50], frase2[50];

    while(min==8)
    {

        printf("Digite uma frase:");
        fgets(frase,50,stdin);

        int tamanho = tam(frase) - 1;
        int flag = 0;

        if(tamanho < 8)
        {
            printf("Digite uma frase com no minimo 8 caracteres\n");
        }
        else
        {

            for(int i=0; i<tamanho; i++)
            {
                if(frase[i] == '/')
                {
                    int cont = i;
                    flag = 1;

                    for(int j=0;j<tamanho-i;j++){

                        frase2[j] = frase[cont+1];
                        cont++;

                    }

                    i = tamanho +1;
                }

            }
            min = 0;

            printf("\nfrase 1: %s\n",frase);

            if(flag == 0)
            {
                printf("frase 2: (vazio)\n");
            }
            else
            {
                printf("frase 2: %s\n",frase2);


            }
        }


    }

    return 0;
}
