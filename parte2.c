#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int arg, char *argv[])
{
		//a linha abaixo configura o idioma ara português
		setlocale(LC_ALL,"Portuguese");
		//a linha abaixo muda a cor do texto
		system("color A");
		printf("Olá Mundo\n");
		system("pause");
		
return 0;
}
