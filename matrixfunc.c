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
	int z,j=0,i=0;
	for(i=0;i<strlen(parola);i++){
		z=0;
		for(j=C-1;j>=0;j--){
			pbin[i][z++]=bintmp[i][j];
		}
	}
	
	
}

void stampa(int arrbp[],int arrcheck[],int pbi[][C],char parola[])
{
	for(int i=0;i<strlen(parola);i++){
		/*stampa parola*/
		printf("\n%c: ",parola[i]);
		for(int j=0;j<C;j++){
			/*stampa binario*/
			printf("%d",pbi[i][j]);			
		}
		/*stampa bp*/
		printf("| %d",arrbp[i]);
	}
	printf("\n");
	for(int i=0;i<11;i++)
		printf("-");
	
	printf("\ncs ");
	for(int j=0;j<C;j++){
		printf("%d",arrcheck[j]);
	}
}
void verifica(int arraybp[],int arraycheck[],int m[][C],char parola[])
{
	int i=0,j=0,r=strlen(parola),contbp=0,contcheck=0;
	
	/*Bit di parità*/
	for(i=0;i<r;i++){
		for(j=0;j<C;j++){
			if(m[i][j]==1){
				contbp++;
			}
		}
		if(contbp%2==0){
			arraybp[i]=0;
		}else if(contbp%2==1){
			arraybp[i]=1;	
		}
		contbp=0;
	}
	
	
	/*Checksum*/
	for(j=0;j<C;j++){
		for(i=0;i<r;i++){
			if(m[i][j]==1){
				contcheck++;
			}
		}
		if(contcheck%2==0){
			arraycheck[j]=0;
		}else if(contcheck%2==1){
			arraycheck[j]=1;	
		}
		contcheck=0;
	}
}

