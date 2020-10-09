/*
Autor: Wanderson Gomes da Costa
Semestre: 2020.2
Construa um algoritmo que receba 3 valores ponto 
flutuantes simples (float) e em seguida informe a 
soma e o produto entre os mesmos.
*/
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, numero3 = 0.0;
    float soma = 0.0, produto = 0.0;

    printf("Informe o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Informe o segundo numero: ");
    scanf("%f", &numero2);
    printf("Informe o terceiro numero: ");
    scanf("%f", &numero3);

    soma = numero1 + numero2 + numero3;
    produto = numero1 * numero2 * numero3;

    printf("\n");
    printf("A soma dos numeros informados eh: %g\n", soma);
    printf("O produto entre os numeros informados eh: %g\n", produto);

    return 0;
}