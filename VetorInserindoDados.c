#include <stdio.h>

int main(){
    
    int vetor[5];
    int i;

//peça ao usuario colocar os numeros nos vetores
    for(i=0; i<5 ;i++){
        printf("Insira os valores: ");
        scanf("%d", &vetor[i]);
    }

//printa na tela os numeros colocados
    printf("Valores digitado:\n");
    for(i=0;i<5;i++){
        printf("%d",vetor[i]);
    }
}