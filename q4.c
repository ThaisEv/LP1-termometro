#include <stdio.h>
#include <ctype.h>

int CelsiusToFahrenheit(int C) {
    int F;
    F = (C * 9/5) + 32;
    return F;
}

int FahrenheitToCelsius(int F) {
    int C;
    C = (F - 32) * 5 / 9;
    return C;
}

int main() {
    char entrada;
    int temperatura;
    printf("--- Conversao de Temperatura: ---\n \n");

    printf("Informe 'F' para converter Celsius para Fahrenheit e 'C' Fahrenheit para Celsius: ");
    scanf(" %c", &entrada);
    
    printf("Informe a temperatura: ");
    scanf("%d", &temperatura);

    if(toupper(entrada) == 'F') {
        printf("Resultado: %d F", CelsiusToFahrenheit(temperatura));
    } else if(toupper(entrada) == 'C') {
        printf("Resultado: %d C", FahrenheitToCelsius(temperatura));
    }

    printf("\n \n ---- Fim ----");

    return 0;
};