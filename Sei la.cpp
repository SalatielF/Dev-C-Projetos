#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	//a Linha abaixo configura o idioma para Português
	setlocale(LC_ALL,"Portuguese");
	//a Linha abaixo configura a cor da letra
	system("color A");
	printf("Olá Mundo z\n");
	system("pause");
	
return 0;
}
