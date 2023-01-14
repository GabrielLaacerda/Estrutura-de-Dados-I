#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
    char nome[50];
    int idade;
    char sexo;
    float salario;

} Pessoa;

int quant(Pessoa p[], int cont)
{
    int j =0;

    for(int i=0; i<cont; i++)
    {
        if(p[i].sexo == 'f'||p[i].sexo == 'F')
        {
            j++;
        }
    }
    return j;

}

int main()
{
    char op;
    int num,cont = 0;

    printf("Quantas pessoas deseja cadastrar ?");
    scanf("%d",&num);
    fflush(stdin);

    Pessoa p[num];

    for(cont=0; cont<num; cont++)
    {

        printf("\nPessoa %d:\n\n",cont+1);
        printf("Digite o seu nome:");
        fgets(p[cont].nome,50,stdin);
        printf("Digite sua idade:");
        scanf("%d",&p[cont].idade);
        fflush(stdin);
        printf("Digite M para masculino ou F para feminino:");
        scanf("%c",&p[cont].sexo);
        fflush(stdin);
        printf("\n");

    }

    int quantidade = quant(p,num);

    printf("\nSao %d mulheres\n",quantidade);

    return 0;

}
