#include <stdio.h>

int numero;
int contador=0;

int main(int argc, char *agv[])
{
	printf("Tabuada\n\n");
	printf("Digite o numero da tabuada: ");
	scanf("%d", &numero);
	
	for(contador=0;contador<=10;contador++)
	{
		printf("%d x %d = %d\n",numero,contador,numero*contador);
	}

	return 0;
}
