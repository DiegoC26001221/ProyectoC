#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    // Tasas de cambio aproximadas (Base: 1 USD)
    float USD_A_GTQ = 7.72;
    float USD_A_EUR = 0.95;
    float GTQ_A_EUR = 0.12;

    printf("--- CONVERSOR DE MONEDAS ---\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Dolares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dolares a Euros\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1: resultado = cantidad / USD_A_GTQ; printf("%.2f GTQ = %.2f USD\n", cantidad, resultado); break;
        case 2: resultado = cantidad * USD_A_GTQ; printf("%.2f USD = %.2f GTQ\n", cantidad, resultado); break;
        case 3: resultado = cantidad * GTQ_A_EUR; printf("%.2f GTQ = %.2f EUR\n", cantidad, resultado); break;
        case 4: resultado = cantidad / GTQ_A_EUR; printf("%.2f EUR = %.2f GTQ\n", cantidad, resultado); break;
        case 5: resultado = cantidad * USD_A_EUR; printf("%.2f USD = %.2f EUR\n", cantidad, resultado); break;
        case 6: resultado = cantidad / USD_A_EUR; printf("%.2f EUR = %.2f USD\n", cantidad, resultado); break;
        default: printf("Opcion no valida.\n");
    }

    return 0;
}
