#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(char senha[])
{
    int conf;

    if(strcmp(senha, "d4t5r") == 0)
    {
        conf = 0;
    }
    else
    {
        conf = -1;

    }

}

int tamanho(char senha[])
{
    int cont = 0;

    for(cont=0; senha[cont]!='\0'; cont++) {}

    return cont;
}

int main()
{
    int flag = -1;

    while(flag == -1)
    {

        char senha[5];

        printf("Digite a senha:");
        scanf("%s",&senha);

        int tam = tamanho(senha);

        if(tam > 5)
        {
            printf("Acesso Negado: Digite uma nova senha\n");
        }
        else
        {
            int conf = verificar(senha);

            if(conf == 0)
            {
                printf("Acesso Permitido\n");
                flag = 0;
            }
            else
            {
                printf("Acesso Negado\n");
                flag = 0;
            }

        }

    }

    return 0;
}
