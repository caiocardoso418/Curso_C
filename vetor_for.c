#include <stdio.h>

int main(){

    int vetor[5] = {10,20,30,40,50};
    float soma = 0;
    int i;

    for(i = 0 ; i<5 ; i++){
        soma += vetor[i];
    }

    printf("Resultado: %f", soma/5);
}