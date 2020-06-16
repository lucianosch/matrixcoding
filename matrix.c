#include <stdio.h>
#include "matrixlib.h"

int main()
{
	int bintmp[R][C];
	int binv[R][C];
	int ascii[R];
	char parola[R];
	
	int array[R];
	
	printf("inserisci parola: ");
	scanf("%s",parola);
	
	convert(parola,ascii);								
	printf("ascii: ");
	outascii(ascii,parola);
	intbin(bintmp,ascii,parola); //bintmp,num 
	bin(bintmp,binv,parola);
	printf("\n");
	verifica(array,binv,parola);
	stampa(array,binv,parola);
	
	
return 0;
}
