#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n;
	float fat = 1;
	
	scanf("%d",&n);
	
	for(int i=n;i>=1;i--){
		fat = (float) fat * i;
	}
	
	printf("%.0f\n",fat);
	
	return 0;
}

