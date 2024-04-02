#include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo (Scanf convencional): ");
    scanf("%s",s);
    fflush(stdin); // Sere para nao pular para o proximo scanf, sempre botar fflush

    printf("resultado:  %s.\n",s);

    printf("Digite algo (Scanf aprimorado): ");
    scanf("%10[^\n]s",s);    // Nao pode usar todos os caracters definito do char
    fflush(stdin);

    printf("resultado: %s",s);
}