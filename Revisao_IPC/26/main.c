#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct agenda{
           int horas;
           int minutos;
           int segundos;
           int ano;
           int mes;
           int dia;
           int data;
           int horario;
           char texto[100];

       };

int main()
{

       struct agenda ag;

       printf("Digite o horario, horas, minutos e segundos:\n");
       scanf("%d %d %d",&ag.horas,&ag.minutos,&ag.segundos);
       printf("Digite a data, ano, mes e dia:");
       scanf("%d %d %d",&ag.ano,&ag.mes,&ag.dia);
       fflush(stdin);
       printf("Digite um texto para especificar o compromisso:\n");
       gets(ag.texto);

       printf("Horario=%d:%d:%d\n",ag.horas,ag.minutos,ag.segundos);
       printf("Data=%d/%d/%d\n",ag.ano,ag.mes,ag.dia);
       printf("Texto complementar=%s\n",ag.texto);


    return 0;
}
