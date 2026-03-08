#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;
    printf("--- Calculo de fatorial: ---\n \n");

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        if(numero < 0) {
            printf("Entrada invalida! \n");
        }

        if(numero >= 0) break;
    } while(numero < 0);

    for(int i = 1; i <= numero; i++) {
        fatorial = fatorial*i;
    }

    printf("%d! = %d", numero, fatorial);
    printf("\n \n ---- Fim ----");

    return 0;
};