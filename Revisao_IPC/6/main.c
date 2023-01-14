#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3,media,total;

        printf("Digite as 3 notas do aluno:\n");
        scanf("%f",&nota1);
        scanf("%f",&nota2);
        scanf("%f",&nota3);

        total=(nota1*2)+(nota2*3)+(nota3*5);
        media=total/10;

        if(media>8.01&&media<=10){
            printf("Conceito A\n");
        }
         if(media>7.01&&media<=8){
            printf("Conceito B\n");
        }

         if(media>6.01&&media<=7){
            printf("Conceito C\n");
        }

         if(media>5.01&&media<=6){
            printf("Conceito D\n");
        }

         if(media>0.00&&media<=5){
            printf("Conceito E\n");
        }

    return 0;
}
