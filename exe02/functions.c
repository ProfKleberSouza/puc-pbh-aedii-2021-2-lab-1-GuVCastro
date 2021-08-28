
#include <stdio.h>
#include "functions.h"

void vetor_preenche(int n, int vetor[n])
{
	for (int i = 0; i < n; i++)
		scanf("%d", &vetor[i]); 
}

int vetor_exibe_menor(int n, int vetor[n]){
    int menor = vetor[0];
    
	for(int i = 0; i < n; i++)
        if(vetor[i] < menor)
            menor = vetor[i];

    return menor;
}
