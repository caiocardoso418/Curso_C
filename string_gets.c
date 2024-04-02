#include <stdio.h>

int main() {

    char string[10];

    printf("Digite algo (Leitura pelo gets): ");
    gets(string);
    fflush(stdin);

    puts("Resultado: ");
    puts(string);
    puts("");

    printf("Digite algo (Leitura pelo fgets): ");
    fgets(string, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(string);
}