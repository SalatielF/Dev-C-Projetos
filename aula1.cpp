#include <stdio.h>
#include <string.h>
#include <locale.h>

int idade;

float salario;

char nome[50];

main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a sua idade: ");
	scanf("%i",&idade);
	
	printf("Informe seu salarrio: ");
	scanf("%f",&salario);
	
	printf("Qual seu nome?");
	scanf("%s",&nome);
	
	printf("Os dados informados são: %i %2.f %s",idade,salario,nome);
	
	
	
	return 0;
}
