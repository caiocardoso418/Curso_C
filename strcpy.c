#include <stdio.h>
#include <string.h>

#define N 20

int main(){
	
	char origem[N] = {"Ola, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino,origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);  //ficam iguais 
	puts(destino);
}
