#include <stdio.h>

int main() {
    int numero;
    printf("--- Impressao de Números de 1 a N: ---\n \n");

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);
        if(numero <= 0) {
            printf("Entrada invalida! \n");
        }

        if(numero > 0) break;
    } while(numero <= 0);

    for(int i = 1; i <= numero; i++) {
        printf("%d ", i);
    }
    printf("\n \n ---- Fim ----");

    return 0;
};