#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *valores;
    int flag = 1, i = 0;

    valores = (char *)malloc(sizeof(char) * 1);

    do{
        if(i>0){

            valores = (char *)realloc(valores,sizeof(valores) * i);

            if(valores == NULL){
                printf("Memoria insuficiente\n");
                return 0;
            }
        }

        printf("Digite um caractere:");
        scanf("%c",&valores[i]);
        fflush(stdin);

        if(valores[i] == '.'){
            flag = 0;
            i--;
        }

        i++;

    }while(flag!=0);

    for(int cont =0;cont<i;cont++){
        printf("%c",valores[cont]);
    }

    printf("!\n");


    return 0;
}
