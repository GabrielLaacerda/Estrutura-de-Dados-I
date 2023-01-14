#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int vet[3], vet2[3],vet3[3],k = 0,flag;
	
	printf("Digite 3 valores para o vetor 1:\n\n");
	
	for(int i=0;i<3;i++){
	printf("Valor [%d]:",i+1);
	scanf("%d",&vet[i]);
	
	}
	system("cls");
	
	printf("Digite 3 valores para o vetor 2:\n\n");
	
    for(int i=0;i<3;i++){
	printf("Valor [%d]:",i+1);
	scanf("%d",&vet2[i]);
	
	}
	
	system("cls");
	system("pause");
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(vet[i]==vet2[j]){
				if(k==0){
					vet3[k] = vet[i];
					k++;
				}
				else{
					flag = 0;
					
				  for(int m=0;m<3;m++){
					  if(vet3[m] == vet[i]){
						  flag = 1;
					}
				}
				if(flag == 0){
					vet3[k] = vet[i];
					k++;
				 
              } 
	       }
	    }
	  }
   }
   printf("Vetor inteseccao:\n\n");	
	
	for(int m=0;m<k;m++){
		 printf("%d\n",vet3[m]);	
					
	}				
					

	return 0;
}

