#include <stdio.h>
#include <stdlib.h>

int iguais(char p1[], char p2[])
{

    if(p1[0] == p2[0])
    {
        return 1;
    }

    return -1;

}

int main()
{
    char p1[20],p2[20];

    printf("Digite uma palavra:");
    fgets(p1,20,stdin);

    printf("Digite outra palavra:");
    fgets(p2,20,stdin);

    int x = iguais(p1,p2);

    if(x == 1)
    {
        printf("Comecam com a mesma letra\n");
    }
    else
    {
        printf("Comecam com letras diferentes\n");
    }

    return 0;
}
