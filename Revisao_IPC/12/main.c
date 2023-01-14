#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,menor,maior;

    scanf("%d %d %d",&x,&y,&z);

    menor = x;

    if(y<menor&&y<z)
    {
        menor = y;
    }
    else if(z<menor&&z<y)
    {
        menor = y;
    }

    maior =x;

    if(y>menor&&y>z)
    {
        menor = y;
    }
    else if(z>menor&&z>y)
    {
        menor = y;
    }


    if(y<menor&&y<z)
    {
        maior = y;
    }
    else if(z<menor&&z<y)
    {
        maior = y;
    }

    printf("%d %d", menor,maior);









    return 0;
}
