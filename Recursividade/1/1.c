#include <stdio.h>
#include <stdlib.h>

int pot(int x,int y){

    if(y == 0){
        return 1;
    }
    else{

        return x * pot(x,y-1);

    }
}

int main()
{
    int x,y;

    printf("Digite 2 numeros:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    int total =pot(x,y);

    printf("%d\n",total);








    return 0;
}
