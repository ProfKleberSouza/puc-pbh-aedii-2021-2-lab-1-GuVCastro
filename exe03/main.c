#include <stdio.h>
#include "functions.h"

int main() {

	int vetor[50], n, menor_elemento, maior_elemento;

	scanf("%d", &n);	
	if (n > 0) { 
		vetor_preenche(n, vetor);
		vetor_exibe_valores(n, vetor, &menor_elemento, &maior_elemento);  
		printf("MENOR = %d\nMAIOR = %d\n", menor_elemento, maior_elemento);
	} else
		printf("ENTRADA INVALIDA\n"); 

	return(0);
}
