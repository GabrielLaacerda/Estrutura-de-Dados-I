#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copiar(char p1[], int tam){

    char p2[20];

    for(int i=0;i<tam;i++){
        p2[i] = p1[i];
    }

    for(int i=0;i<tam;i++){
        printf("%c",p2[i]);
    }

}

int main()
{
    char palavra[20];

    printf("Digite uma palavra:");
    fgets(palavra,20,stdin);

    int tam = strlen(palavra);

    copiar(palavra,tam);

    return 0;
}
