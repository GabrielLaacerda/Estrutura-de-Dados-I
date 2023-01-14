#include <stdio.h>
#include <stdlib.h>

typedef struct funcionarios
{
    char nome[50];
    int idade;
    char sexo;
    float salario;

} funcionario;

int main()
{
    funcionario f[3];

    for(int i=0; i<3; i++)
    {

        if(i!=0)
        {
            printf("\n");
        }
        printf("Funcionario %d:\n\n",i+1);
        printf("Digite o seu nome:");
        fgets(f[i].nome,50,stdin);
        printf("Digite sua idade:");
        scanf("%d",&f[i].idade);
        fflush(stdin);
        printf("Digite M para masculino ou F para feminino:");
        scanf("%c",&f[i].sexo);
        fflush(stdin);
        printf("Digite o seu salario:");
        scanf("%f",&f[i].salario);
        fflush(stdin);

        if(f[i].salario < 2000)
        {
            f[i].salario = f[i].salario + (f[i].salario * 0.5);
        }

    }
    for(int i=0; i<3; i++)
    {

        printf("\n");
        printf("Funcionario %d:\n\n",i+1);
        printf("Nome: %s",f[i].nome);
        printf("Idade: %d\n",f[i].idade);

        if(f[i].sexo == 'm'||f[i].sexo == 'M')
        {
            printf("Sexo: Masculino\n");
        }
        else if(f[i].sexo == 'f'||f[i].sexo == 'F')
        {
            printf("Sexo: Feminino\n");
        }
        else
        {
            printf("Sexo: Invalido\n");
        }
        printf("Salario: %.2f\n",f[i].salario);


    }
    return 0;
}
