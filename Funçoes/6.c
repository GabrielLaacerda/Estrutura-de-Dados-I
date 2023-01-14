#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int op;

    printf("Digite a opcao desejada:\n\n");
    printf("1-Ordem Crescente\n");
    printf("2-Ordem decrescente\n");

    scanf("%d",&op);

    return op;
}
int ordem(int vet[], int seq)
{
    int a;

    if(seq == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (vet[i] > vet[j])
                {
                    a =  vet[i];
                    vet[i] = vet[j];
                    vet[j] = a;
                }
            }
        }

        printf("\nOrdem Crescente:\n");

        for(int i=0;i<3;i++){
            printf("%d\n",vet[i]);
        }

    }else if(seq == 2){

        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (vet[i] < vet[j])
                {
                    a =  vet[i];
                    vet[i] = vet[j];
                    vet[j] = a;
                }
            }
        }

        printf("\nOrdem Decrescente:\n");

        for(int i=0;i<3;i++){
            printf("%d\n",vet[i]);
        }

    }

}

int main()
{
    int vet[3];

    printf("Digite 3 numeros:\n");

    for(int i=0; i<3; i++)
    {
        scanf("%d",&vet[i]);
    }

    system("cls");

    int opcao = menu();

    switch(opcao)
    {

    case 1:
        ordem(vet,1);
        break;

    case 2:
        ordem(vet,2);
        break;
    }


    return 0;
}
