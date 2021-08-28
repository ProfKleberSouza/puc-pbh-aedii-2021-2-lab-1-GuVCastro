#include <stdio.h>
#include "functions.h"

int main() {

	char texto[100]; 

	scanf(" %[^\n]%*c", texto);
	vogais_enumera(texto);  

	return(0);
}
