#include <stdio.h>

int main(){

int nota = 0;

printf("Nota: ");
scanf("%d.\n", &nota);

if (nota >= 7 ){
	printf("Aprovado(a)");
}else{
	printf("Reprovado(a)");
}

}
