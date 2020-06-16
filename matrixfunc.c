#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrixlib.h"

void output(int *pj,int *pcont,int v[],char p[])
{
	for(int i=*pcont;i<=*pj;i++){
			printf(" %d",v[*pj++]);	
			//return v[i];
	}
	/*int i=*pcont;
	while(i<*pj){
			printf(" %d",v[*pj++]);	
			//return v[i];
	}*/
	
}
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
void intbin(int b[][C],int n[],char parola[]) //n=numero ascii
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
}
void bin(int bintmp[][C],int pbin[][C],char parola[])
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

void stampa(int a[],int pbi[][C],char parola[])
{
	int j=0;
	int cont=0;
	
	int *pc,*pj;
	pc=&cont;
	pj=&j;
	
	for(int z=0;z<strlen(parola);z++){
		printf("\n%c: ",parola[z]);
		for(int i=0;i<=C-1;i++){
			printf("%d",pbi[z][i]);//output(cb.array,parola));
		}
		output(pj,pc,a,parola);
		cont++;
	}
	//output(a,parola);
}
void verifica(int array[],int m[][C],char parola[])
{
	int i=0,j=0,r=strlen(parola);
	int cont=0;
	for(i=0;i<r;i++){
		for(j=0;j<C;j++){
			if(m[i][j]==1){
				cont++;
				if(cont%2==0){
					array[i]=0;	
				}else if(cont%2==1){
					array[i]=1;
				}
			}
		}
		cont=0; 
	}	
}

