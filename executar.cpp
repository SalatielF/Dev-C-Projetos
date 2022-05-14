#include <stdio.h>
#include <locale.h>

int opcao;

main(void)
{
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe a opção desejada: \n");
	printf("\n1 - Mostre a data atual \n");
	printf("2 - Mostrar em que ano estamos \n");
	printf("3 - Encerrar o programa \n");
	printf("\nopão:");
	scanf("%i",&opcao);
	
	switch(opcao) {
		case 1:
			printf("\n23/05/2022");
			
			break;
		
		case 2:
			printf("\n2022");
			
			break;
			
		case 3:
			printf("\nprograma encerrado");
			
			break;
	}
	
	
	return 0;
	
}
