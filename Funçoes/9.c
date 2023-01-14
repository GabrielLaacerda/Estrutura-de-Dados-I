#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(char p1[], char p2[])
{
    int tam1 = strlen(p1);
    int tam2 = strlen(p2);
    int maior = tam1;
    int j = 0;

    tam1 > tam2 ? maior = tam1 : maior = tam2;

    for(int i=0; i<maior; i++)
    {
        if(p1[i] == p2[i])
        {
            j++;
        }
    }

    if(j == maior)
    {
        return 0;
    }
    else
    {

        if(tam1 > tam2)
        {
            return 1;
        }
        else if(tam1 < tam2)
        {
            return -1;
        }
    }

    return -2;

}
int main()
{
    char p1[20],p2[20];

    printf("Digite uma palavra:");
    fgets(p1,20,stdin);
    printf("Digite outra palavra:");
    fgets(p2,20,stdin);

    int x = verificar(p1,p2);

    if(x == 0){
        printf("Sao iguais\n");
    }

    else if(x == 1){
        printf("\nSao diferentes e a maior eh a primeira\n");
    }
    else if(x == -1){
        printf("\nSao diferentes e a maior eh a segunda\n");
    }
    else{
        printf("\nSao diferentes e possuem tamanhos iguais\n");
    }

    return 0;
}
