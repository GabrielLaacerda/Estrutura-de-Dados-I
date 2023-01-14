#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos,meses,dias,idade;

      printf("Digite sua idade em dias:");
      scanf("%d",&idade);

      anos=idade/365;
      meses=idade%365/30;
      dias=idade%365%30;

      printf("Anos:%d\nMeses:%d\nDias:%d\n",anos,meses,dias);

    return 0;
}
