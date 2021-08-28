
#include <stdio.h>
#include "functions.h"

void vetor_preenche(int n, int vetor[n])
{
	for (int i = 0; i < n; i++)
		scanf("%d", &vetor[i]); 
}

void vetor_exibe_valores(int n, int vetor[n], int *menor, int *maior){
	*menor = vetor[0];
	*maior = vetor[0]; 

	for(int i = 0; i < n; i++) { 
        if (vetor[i] < *menor)  
            *menor = vetor[i];
		if (vetor[i] > *maior)
			*maior = vetor[i]; 
	}
}
