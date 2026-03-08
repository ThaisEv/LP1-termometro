#include <stdio.h>

int contador(char string[]) {
    int conta = 0;
    while (string[conta] != '\0') {
        conta++;
    }
    return conta -1;
}

int main() {
    char string[240];
    printf("--- Contagem de Caracteres em uma String: ---\n \n");

    printf("Digite um texto: ");
    fgets(string, 240, stdin);

    printf("Quantidade de caracteres: %d", contador(string));

    printf("\n \n ---- Fim ----");

    return 0;
}