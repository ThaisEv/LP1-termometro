#include <stdio.h>

int ehPrimo(int n){
    if (n <= 1) return 0;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;
    printf("--- Verificacao de Numero Primo: ---\n \n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(ehPrimo(numero)) {
        printf("Eh primo.");
    } else {
        printf("Nao eh primo.");
    }

    printf("\n \n ---- Fim ----");

    return 0;
}