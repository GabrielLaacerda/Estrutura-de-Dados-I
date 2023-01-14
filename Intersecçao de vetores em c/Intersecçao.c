#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[4];
    int vetor2[4];
    int vetor3[4];
    int flag,k=0;

    for(int i=0; i<4; i++)
    {

        printf("Vetor posicao %d:\n",i+1);
        scanf("%d",&vetor[i]);

    }

    for(int i=0; i<4; i++)
    {

        printf("Vetor 2 posicao %d:\n",i+1);
        scanf("%d",&vetor2[i]);

    }

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(vetor[i] == vetor2[j])
            {
                if(k==0)
                {
                    vetor3[k] = vetor[i];
                    k++;
                }
                else
                {
                    flag = 0;


                    for(int l =0; l<k; l++)
                    {

                        if(vetor3[l] == vetor[i])
                        {
                            flag = 1;

                        }
                    }
                    if(flag == 0)
                    {
                        vetor3[k] = vetor[i];
                        k++;
                    }
                }
            }
        }
    }

    printf("\nVetor resultado:\n");

    for(int i=0; i<k; i++)
    {
        printf("%d ",vetor3[i]);

    }


    return 0;
}
