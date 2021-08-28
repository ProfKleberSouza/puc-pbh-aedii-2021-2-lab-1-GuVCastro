#include <stdio.h>
#include "functions.h"

int main() {

	int vetor[50], n, menor_elemento;

	scanf("%d", &n);	
	if (n > 0) { 
		vetor_preenche(n, vetor);
		menor_elemento = vetor_exibe_menor(n, vetor); 
		printf("MENOR = %d", menor_elemento);
	} else
		printf("ENTRADA INVALIDA"); 

	return(0);
}
