#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	int primo;
	float raiz;
	int j = 0,num;
	
	scanf("%d",&num);
	
	while(j<num){
	
	int flag = 0;
	
	scanf("%d",&primo);
	raiz = sqrt(primo);
	
	for(int i=2;i<raiz;i++){
		if(primo%i==0){
			flag = 1;
	}
}
   if(flag==0){
	   printf("Prime\n");
	  }
	  else{
		  printf("Not prime\n");	
	}
	j++;
}
	return 0;
}

