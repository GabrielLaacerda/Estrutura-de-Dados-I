#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20] = "Gabriel";
    int i = 18;
    float a = 1.7;

    FILE *arq = fopen("teste.txt","w");

    if(arq == NULL){
        printf("Erro\n");
        system("pause");
        return 0;
    }
    printf("Nome: %s\n",nome);
    printf("Altura: %.1f\n",a);
    printf("Idade: %d\n",i);

    fprintf(arq,"Nome: %s\nAltura: %.1f\nIdade: %d\n",nome,a,i);

    fclose(arq);

    system("pause");


    return 0;
}
