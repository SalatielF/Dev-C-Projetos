#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Digite um numero\n");
	scanf("%d", &n);
	
	if(n>0){
		printf("%d e positivo", n);
	}
	
	if(n<0){
		printf("%d e negativo", n);
	}
	
	if(n==0){
		printf("%d e neutro", n);
	}
	
	
return 0;
}
