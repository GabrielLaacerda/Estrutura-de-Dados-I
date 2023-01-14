#include <stdio.h>
#include <stdlib.h>

int validar(int senha){

    if(senha == 4389){
        return 1;
    }

    return -1;
}

int main()
{
    int senha;

    printf("Digite a senha:");
    scanf("%d",&senha);

    int acesso = validar(senha);

    if(acesso == 1){
        printf("Acesso Permitido\n");
    }

    else{
        printf("Acesso Negado\n");
    }


    return 0;
}
