#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char nome[10];
	int anoNasc, anoAtual, idade;
	
	printf("Qual e o seu nome ");
	scanf("%s", &nome);
	
	printf("Em que ano voce nasceu: ");
	scanf("%d", &anoNasc);
	printf("Em que ano estamos: ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual-anoNasc;
	
	if (idade>=65){
		printf("%s", nome);
		scanf("%d", &anoNasc-&anoAtual);
		printf("\n Requerer a Aposentadoria");
	}else{
		printf("Nao requerer aposentadoria");
	}
	
	
	
	
	
return 0;
}
