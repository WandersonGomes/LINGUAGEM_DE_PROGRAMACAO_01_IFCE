/*
Faca um algoritmo que leia tres numeros e mostre-os em ordem
decrescente.
*/
#include <stdio.h>

int main() {
    int numero1 = 0, numero2 = 0, numero3 = 0;

    printf("Informe o primeiro numero inteiro: ");
    scanf("%d", &numero1);
    printf("Informe o segundo numero inteiro: ");
    scanf("%d", &numero2);
    printf("Informe o terceiro numero inteiro: ");
    scanf("%d", &numero3);

    //CAB

    printf("\nOs numeros em ordem decrescente: ");
    if ((numero1 == numero2) && (numero2 == numero3)) {
        printf("%d %d %d\n", numero1, numero2, numero3);
    } else if ((numero1 >= numero2) && (numero2 >= numero3)) {
        printf("%d %d %d\n", numero1, numero2, numero3);
    } else if ((numero1 >= numero3) && (numero3 >= numero2)) {
        printf("%d %d %d\n", numero1, numero3, numero2);
    } else if ((numero2 >= numero3) && (numero3 >= numero1)) {
        printf("%d %d %d\n", numero2, numero3, numero1);
    } else if ((numero2 >= numero1) && (numero1 >= numero3)) {
        printf("%d %d %d\n", numero2, numero1, numero3);
    } else if ((numero3 >= numero2) && (numero2 >= numero1)) {
        printf("%d %d %d\n", numero3, numero2, numero1);
    } else {
        printf("%d %d %d\n", numero3, numero1, numero2);
    }

    return 0;
}