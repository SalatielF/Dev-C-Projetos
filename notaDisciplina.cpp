#include <stdio.h>
#include <stdlib.h>

int main()
{
	float notaLista, notaProva, notaDisciplina;
	
	printf("Qua foi sua nota lista e prova: ");
	scanf("%f %f", &notaLista, &notaProva);
	
	if(notaLista >=0 & notaLista <=10){
		if(notaProva >=0 & notaProva<=10){
			notaLista = notaLista*0.2;
			notaProva = notaProva*0.8;
		}
	}else{
		printf("Nota Invalida!");
	}
	
	notaDisciplina = notaLista+notaProva;
	if(notaDisciplina >= 7){
		printf("Aluno Aprovado!");
	}else{
		printf("Aluno Reprovado!");
	}
	
	
	
return 0;
}
