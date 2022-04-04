#include <stdio.h>
#include <stdlib.h>

// Exemplo de variavel

int main(int argc, char *argv[])
{
		int idade;
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		printf("Idade: %d" ,idade);
		//a Linha abaixo executa uma estrutura de decisão
		if (idade<18)
		{
			printf("\nmenor de idade\n");
		}
		if (idade>=18)
		{
			printf("\nmaior de idade\n");
			
		}
		system("pause");
		
return 0;
}
