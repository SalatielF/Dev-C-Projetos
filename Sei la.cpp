#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	//a Linha abaixo configura o idioma para Portugu�s
	setlocale(LC_ALL,"Portuguese");
	//a Linha abaixo configura a cor da letra
	system("color A");
	printf("Ol� Mundo \n");
	system("pause");
	// a Linha abaixo limpa a tela
	system("cls");
	system("color F0");
	printf("Professor Jos� de Assis\n");
	system("pause");
	
return 0;
}
