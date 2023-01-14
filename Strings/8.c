#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    char matricula[10];
    char curso[20];
    float vet[3];

}aluno;

int media(aluno al[])
{
    float medias[4];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            medias[i] += (al[i].vet[j]) / 3;
        }
    }

    int maior = medias[0];
    int result = 0;

    for(int i=1;i<4;i++){
        if(medias[i] > maior){
            maior = medias[i];
            result = i;
        }
    }

    return result;
}

void mostrar(aluno al[])
{
    for(int i=0; i<4; i++)
    {

        if(i==0)
        {
            printf("Cadastros:\n\n");
        }

        printf("Aluno %d:\n\n",i+1);
        printf("Matricula: %s",al[i].matricula);
        printf("Curso: %s",al[i].curso);
        printf("Notas: %.1f/%.1f/%.1f\n",al[i].vet[0],al[i].vet[1],al[i].vet[2]);
        printf("\n");

    }
}

int main()
{
    aluno al[4];

    for(int i=0; i<4; i++)
    {

        printf("Aluno %d:\n\n",i+1);
        printf("Digite a matricula:");
        fgets(al[i].matricula,10,stdin);
        printf("Digite o curso:");
        fgets(al[i].curso,20,stdin);
        fflush(stdin);
        system("cls");

        printf("Digite as 3 notas do aluno:\n");
        for(int j=0; j<3; j++)
        {
            scanf("%f",&al[i].vet[j]);
        }
        fflush(stdin);
        system("cls");

    }

    int med = media(al);
    mostrar(al);

    printf("Parabens\n\nMatricula do aluno de melhor media: %s\n",al[med].matricula);



    return 0;
}
