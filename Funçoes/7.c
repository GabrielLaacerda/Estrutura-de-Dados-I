#include <stdio.h>
#include <stdlib.h>

int contar(char palavra[]){

    int i=0;

    for(i=0;palavra[i]!='\0';i++){}

    return i-1;

}

int main()
{
    char palavra[20];

    printf("Digite uma palavra:");
    fgets(palavra,20,stdin);

    int num = contar(palavra);

    printf("A palavra tem %d letras\n",num);
    return 0;
}
