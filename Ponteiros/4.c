#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;

    v = (int *)malloc(sizeof(int)* 5);

    printf("Digite 5 numeros:\n");

    for(int i=0; i<5; i++)
        scanf("%d",&v[i]);

    printf("\nPares: ");

    for(int i=0; i<5; i++)
    {
        if(v[i]%2==0)
        {
            printf("%d\t",v[i]);
        }

    }

    free(v);


    return 0;
}
