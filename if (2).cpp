#include <stdio.h>
#include <locale.h>

int idade1,idade2;

main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe a idade da primeira pessoa: ");
	scanf("%i",&idade1);
	
	printf("informe a idade da segunda pessoa: ");
	scanf("%i",&idade2);
	
	if (idade1>idade2){
		
		printf("\nA primeira pessoa é mais velha");
	}else{
		
		printf("\nA segunda pessoa é mais velha");
	}
	
	
	
	
	
	return 0;
}
