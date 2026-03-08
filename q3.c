#include <stdio.h>

int somaArray(int array[], int tamanho) {
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += array[i];
    }

    return soma;
}

int main() {
    int numeros[5];
    printf("--- Soma de Numeros em um Array: ---\n \n");

    printf("Digite 5 numeros inteiros: ");
    for(int i = 0; i <= 4; i++) {  
        scanf("%d", &numeros[i]);
    } 

    printf("A soma eh %d.", somaArray(numeros, 5));

    printf("\n \n ---- Fim ----");

    return 0;
};