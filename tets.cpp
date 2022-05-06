#include <stdio.h>
#include <locale.h>

int idade1;


main (void){

	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a primeira idade: ");
	scanf("%i",&idade1);
	

	
	if (idade1 >=18 ) {
		
		printf("\nmaior de idade");
		
	}else {
		printf("\nmenor de idade");
	}
		
return 0;
}
