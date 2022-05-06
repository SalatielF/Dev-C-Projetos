#include <stdio.h>
#include <locale.h>

int idade1, idade2;


main (void){

	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a primeira idade: ");
	scanf("%i",&idade1);
	
	printf("Informe a segunda idade: ");
	scanf("%i",&idade2);
	
	if (idade1 >18 != idade2 ) {
		
		printf("\nmenor de idade");
		
	}else {
		printf("\nmaior de idade");
	}
		
return 0;
}
