#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y)
{
    int num;

    if(x > y)
    {
        num = x;

    }
    else if(x < y)
    {
        num = y;

    }
    else
    {
        num = 0;
    }

    return num;
}

int main()
{
    int x,y;

    printf("Digite 2 numeros:\n");

    scanf("%d",&x);
    scanf("%d",&y);

    int num = maior(x,y);

    if(num == 0)
    {
        printf("Os numeros sao iguais\n");
    }
    else
    {
        printf("O maior eh %d\n",num);
    }


    return 0;
}
