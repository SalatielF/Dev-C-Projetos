#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	
	printf("Digite um valor em inteiro: ");
	scanf("%d", &n);
	
	if (n%2==1){
		printf("O numero e impar! ");
	}else{
		printf("O numero e par! ");
	}
	
return 0;
}
