#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "matrixlib.h"

void outascii(int ascii[],char parola[])
{
	for(int i=0;i<strlen(parola);i++){
		printf("%d ",ascii[i]);
	}
		
}
void convert(char parola[],int ascii[])
{
	for(int i=0;i<strlen(parola);i++){
		ascii[i]=(int)parola[i];	
	}
}
void intbin(int b[][C],int binv[][C],int n[],char parola[]) //n=numero ascii
{
	printf("\n");
	
	for(int i=0;i<strlen(parola);i++){
		for(int j=0;j<C;j++){
			if(n[i]%2==0){
				b[i][j]=0;
			}else{
				b[i][j]=1;	
			}
			//printf("%d",b[i][j]);
			n[i]=n[i]/2;
		}	
		//printf("\n");
	}
	
	binReverse(b,binv,parola);
	
}
void binReverse(int bintmp[][C],int pbin[][C],char parola[])
{
	int z,j=0,i;
	for(z=0;z<strlen(parola);z++){
		j=0;
		for(i=C-1;i>=0;i--){
			pbin[z][j++]=bintmp[z][i];
		}
		//printf("\n\n");
	}
	
	
}

void stampa(int arr[],int pbi[][C],char parola[])
{
	//int cont=0;
	
	for(int i=0;i<strlen(parola);i++){
		/*stampa parola*/
		printf("\n%c: ",parola[i]);
		for(int j=0;j<C;j++){
			/*stampa binario*/
			printf("%d",pbi[i][j]);			
		}
		/*stampa bp*/
		printf(" %d",arr[i]); 
		//cont=0;
	}
	//output(a,parola);
}
void verifica(int array[],int m[][C],char parola[])
{
	int i=0,j=0,r=strlen(parola),cont=0;
	for(i=0;i<r;i++){
		for(j=0;j<C;j++){
			if(m[i][j]==1){
				cont++;
			}
		}
		if(cont%2==0){
			array[i]=0;
		}else if(cont%2==1){
			array[i]=1;	
		}
		cont=0;
	}	
}

