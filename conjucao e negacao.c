# include <stdio.h>

int main(){
	
	int nota = 0;
	
	printf("Nota: ");
	scanf("%d.\n", &nota);
	
	if (nota >= 4 && nota <= 7){
		printf("Tem direito ao exame final! ");
	}
}
