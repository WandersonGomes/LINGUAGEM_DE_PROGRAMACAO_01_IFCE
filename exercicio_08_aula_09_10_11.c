/*
Elabore um algoritmo que verifique se um numero e par ou impar.
*/
#include <stdio.h>

int main() {
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    (numero%2 == 0) ? printf("\nO NUMERO E PAR!\n") : printf("O NUMERO E IMPAR!\n");

    return 0;
}