#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("teste.txt","r");

    if(f == NULL){
        printf("Erro\n");
        system("pause");
        return 0;
    }

    char texto[20], nome[20];
    int id;
    float h;

    fscanf(f,"%s %s",texto,nome);
    printf("%s %s\n",texto,nome);
    fscanf(f,"%s %f",texto,&h);
    printf("%s %f\n",texto,h);
    fscanf(f,"%s %d",texto,&id);
    printf("%s %d\n",texto,id);

    fclose(f);
    system("pause");


    return 0;
}
