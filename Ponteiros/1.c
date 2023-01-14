#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pont;
    int vet[10];

    pont = vet;

    printf("Digite 10 valores:\n");

    for(int i=0;i<10;i++){
        scanf("%d",&vet[i]);
    }

    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\t",*pont);
        (pont)++;
    }


    return 0;
}
