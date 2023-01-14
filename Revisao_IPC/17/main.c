#include <stdio.h>
#include <stdlib.h>

int main()
{
       int vetor[8],vetneg[8],vetpos[8],x=0,y=0;

       printf("Digite 8 numeros inteiros:\n");

       for(int i=0;i<8;i++){
        scanf("%d",&vetor[i]);

        if(vetor[i]>0){
            vetpos[x]=vetor[i];
            x++;
        }
        else if(vetor[i]<0){
            vetneg[y]=vetor[i];
            y++;
        }
       }
       printf("Vetor de numeros positivos:\n");

       for(int i=0;i<x;i++){
        printf("%d\n",vetpos[i]);}

        printf("Vetor de numeros negativos:\n");

        for(int i=0;i<y;i++){
        printf("%d\n",vetneg[i]);}

    return 0;
}
