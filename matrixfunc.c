#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "matrixlib.h"

void fascii(int ascii[],char parola[])
{
	int l = strlen(parola)-1;
	for(int i=0;i<l;i++){
		ascii[i]=(int)parola[i];	
		printf("%d ",ascii[i]);
	}
		
}
void intbin(int b[][C],int binv[][C],int n[],char parola[]) //n=numero ascii
{
	printf("\n");
	int l = strlen(parola)-1;
	for(int i=0;i<l;i++){
		for(int j=0;j<C;j++){
			if(n[i]%2==0){
				b[i][j]=0;
			}else{
				b[i][j]=1;	
			}
			n[i]=n[i]/2;
		}	
	}
	
	binReverse(b,binv,parola);
	
}
void binReverse(int bintmp[][C],int pbin[][C],char parola[])
{
	int z,j=0,i=0;
	int l = strlen(parola)-1;
	for(i=0;i<l;i++){
		z=0;
		for(j=C-1;j>=0;j--){
			pbin[i][z++]=bintmp[i][j];
		}
	}
	
	
}

void stampa(int arrbp[],int arrcs[],int pbi[][C],char parola[])
{
	int l = strlen(parola)-1;
	for(int i=0;i<l;i++){
		//stampa parola
		printf("\n%c: ",parola[i]);
		for(int j=0;j<C;j++){
			//stampa stringa binaria
			printf("%d",pbi[i][j]);			
		}
		/*stampa bp*/
		printf("| %d",arrbp[i]);
	}
	
	//stampa separatore
	printf("\n");
	for(int i=0;i<11;i++)
		printf("-");
	
	/*stampa cs*/
	printf("\ncs ");
	for(int j=0;j<C;j++){
		printf("%d",arrcs[j]);
	}
}
void verifica(int arraybp[],int arraycs[],int m[][C],char parola[])
{
	int i=0,j=0,r=strlen(parola)-1,contbp=0,contcs=0;
	
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
				contcs++;
			}
		}
		if(contcs%2==0){
			arraycs[j]=0;//pari
		}else if(contcs%2==1){
			arraycs[j]=1;//dispari
		}
		contcs=0;
	}
}

