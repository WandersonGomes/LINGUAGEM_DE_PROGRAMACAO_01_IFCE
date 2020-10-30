/*
Elabore um algoritmo que verifique se um numero
digitado e positivo, negativo ou nulo.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n");
    if (numero == 0)
        printf("O numero e NULO!\n");
    if (numero > 0)
        printf("O numero e POSITIVO!\n");
    if (numero < 0)
        printf("O numero e NEGATIVO!\n");

    return 0;
}