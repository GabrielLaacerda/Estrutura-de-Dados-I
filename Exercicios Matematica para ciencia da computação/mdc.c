#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a,b,c;
	
	scanf("%d %d",&a,&b);
	
	if(a%b==0){
		c = b;
	}
	else{
		c = 1;
	
	while(c!=0){
		c = a%b;
		
		if(c!=0){
			a = b;
			b = c;
		}
	}	
}	
	printf("%d\n",b);
	
	return 0;
}

