#include <stdio.h>

int main()
{
	int n;
	printf("Digite um numero: 
	");
	scanf("%d", &n);
	
	if(n>0){
		printf("%d e positvo", n);
		
		if(n<0){
			printf("%d e negativo", n);
		}else{
			printf("%d e neutro", n);
		}
	}
	
	
return 0;
}
