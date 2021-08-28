#include <stdio.h>
#include <string.h>
#include "functions.h"

void vogais_enumera(char *texto)
{  
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	for (int i = 0; i < strlen(texto); i++)
		switch (texto[i]) {
			case 'a':
				countA++;
				break;
			case 'e':  
				countE++;
				break;
			case 'i': 
				countI++;
				break;
			case 'o': 
				countO++;
				break;
			case 'u': 
				countU++;
				break;
		}
	printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d\n", countA, countE, countI, countO, countU); 
}
