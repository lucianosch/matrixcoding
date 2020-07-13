#include <stdio.h>
#include "matrixlib.h"

int main()
{
	int bintmp[R][C];
	int binv[R][C];
	int ascii[R];
	char parola[R];
	
	int arrbp[R];
	int arrcheck[C];
	
	printf("inserisci parola: ");
	//scanf("%s",parola);
	fgets(parola,99,stdin);							
	printf("ascii: ");
	fascii(ascii,parola);
	intbin(bintmp,binv,ascii,parola); 

	printf("\n");
	verifica(arrbp,arrcheck,binv,parola);
	printf("\t    bp");
	stampa(arrbp,arrcheck,binv,parola);
	printf("\n");
	
	
return 0;
}
