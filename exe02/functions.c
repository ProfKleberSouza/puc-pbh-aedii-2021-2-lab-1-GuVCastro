#include "functions.h"

int vetor_preenche(int n, int vetor[n])
{
	for (int i = 0; i < n; i++)
		scanf("%d", &vetor[i]); 

	return vetor; 
}

int vetor_exibe_menor(int n, int vetor[n])
{
	int menor_elemento = vetor[0];

	for (int i = 0; i < n; i++)
		if (menor_elemento < vetor[i]) { menor_elemento = vetor[i] }; 
	
	return menor_elemento;
} 
