#include <stdio.h>

int idade1, idade2;

main(void){

	
	
	printf("Informe a idade da primeira pessoa: ");
	scanf("%i",&idade1);
	
	printf("Informe a idade da segunda pessoa: ");
	scanf("%i", &idade2);
	
	if (idade1>idade2){
		
		printf("A primeira pessoa e mais velha!");
	
	}else{
		
		printf("A segunda pessoa e mais velha!");
	}
	
	return 0;
}
