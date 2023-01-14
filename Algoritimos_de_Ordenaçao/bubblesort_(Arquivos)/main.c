#include <stdio.h>
#include <stdlib.h>

typedef struct numeros{

    int valor;

}numeros;

void ordenar(numeros *num,int n)
{
    numeros aux;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(num[j].valor < num[i].valor)
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

}

int main()
{
    int n = 0;
    int x;

    FILE *f;

    f = fopen("teste.txt","r");

    if(f == NULL)
    {
        printf("ERRO AO ABRIR ARQUIVO\n");
        return 0;

    }

    for(char ch = fgetc(f); ch!=EOF; ch = fgetc(f))
    {
        if(ch == '\n')
            n++;
    }

    //n = n+1;

    rewind (f);

    numeros num[n];

    for(int i=0; i<n; i++)
    {
        fscanf(f,"%d",&num[i].valor);

    }

    fclose(f);

    ordenar(&num,n);

    printf("VETOR ORDENADO:\n\n");

    for(int cont=0; cont<n; cont++)
    {
        printf("[%d] ",num[cont].valor);

    }

    printf("\n");

    return 0;
}
