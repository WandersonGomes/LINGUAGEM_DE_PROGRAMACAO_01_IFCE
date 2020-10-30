/*
Construa um algoritmo que receba dois numeros e informe-os em 
ordem crescente e em decrescente.
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe um outro numero inteiro: ");
    scanf("%d", &numero2);

    printf("\n");
    if (numero1 < numero2) {
        printf("ORDEM CRESCENTE: %d %d\n", numero1, numero2);
        printf("ORDEM DECRESCENTE: %d %d\n", numero2, numero1);
    } else if (numero1 > numero2) {
        printf("ORDEM CRESCENTE: %d %d\n", numero2, numero1);
        printf("ORDEM DECRESCENTE: %d %d\n", numero1, numero2);
    } else {
        printf("ORDEM CRESCENTE: %d %d\n", numero1, numero2);
        printf("ORDEM DECRESCENTE: %d %d\n", numero1, numero2);
    }

    return 0;
}